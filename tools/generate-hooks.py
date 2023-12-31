# it's so buggy 😭😭😭

import csv
import re
import glob
from datetime import datetime
import os

# i tried so hard and got so far
trash = ['Ef', 'Ev', 'Eff', 'Kc', 'Ss', 'Eb', 'Efb', 'Kcff', 'Eh', 'Ei', 'Eii', 'Efi', 'Ebi', 'Ebb', 'Ed', 'Kb', 'Kci', 'Eib', 'Ssfb', 'St', 'Ssb', 'Eibi', 'Idx', 'Ki', 'Ssf', 'Kciifb', 'Kcf', 'Effiffii', 'Eiiibbi', 'Eiffi', 'Ebii', 'Efffiibi', 'Eifiiifbi', 'Eiibibi', 'Eibi', 'Eibfff', 'Eiib', 'Eifi', 'Eiii', 'Ssii', 'Efff', 'Ssi', 'Eiiii', 'Eibbb', 'Ssbb', 'Ssfff', 'Ssffbbb', 'Ebbb', 'Kcb', 'Kcib', 'Ssib', 'Eiiiib', 'Ebbbbbbbb', 'Eiiib', 'Ebbbbb', 'Ssif', 'Eibiib', 'Ssff', 'Ssbi', 'Efif', 'vf', 'Chk', 'Ebiibbb', 'Eif', 'Eifffff', 'Eiiibi', 'Ebf', 'Ej', 'Ssbfff', 'Efffbb', 'Efffb', 'P', 'S', 'E', 'M', 'I', 'N', 'K', 'T', 'O']

def getVarFromAddress(addr: str) -> str or bool:
    res = re.findall(r'_ZN\d+', addr)
    if len(res) > 0:
        addr = addr.replace(res[0], '')
        res = re.findall(r'[a-zA-Z]+\d+[a-zA-Z]+', addr)
        if len(res) > 0:
            res2 = re.findall(r'[a-zA-Z]+\d+', res[0])
            if len(res2) > 0:
                words = re.sub(r'([A-Z])', r' \1', res[0].replace(res2[0], '')).split()
                res = ''
                for word in words:
                    if not word in trash:
                        if not word.endswith('R'): # skill issue
                            res += word
                if not res: return False
                return res
    return False

filename = "functions.csv"
addresses = []

with open(filename, 'r') as csvfile:
    csvreader = csv.reader(csvfile)
    for row in csvreader:
        if not row == ['Name', 'Location', 'Function Signature', 'Function Size']:
            if row[0].startswith('_ZN'):
                addresses.append(row[0])

headers = glob.glob("..\include\gd\*\*.h")
tot = 0
classes = []

print('Generating classes...')
for header in headers:
    if not header == "..\include\gd\delegates\delegates.h":
        classname = header.split('\\')[4].replace('.h', '')
        #if classname == 'GJUserScore': break # for easier debugging
        print('Processing ' + classname + '...')
        objs = []
        pattern = r'_ZN\d+' + classname + r'\d+'
        possibles = [address for address in addresses if classname in address and len(re.findall(pattern, address)) > 0]
        for possible in possibles:
            res = getVarFromAddress(possible)
            if res:
                if res == 'Alert': # skill issue
                    res = 'FLAlertLayer' # maybe it was already fixed
                with open(header, 'r') as file:
                    if res + '(' in file.read():
                        print(f'+ {classname}::{res} ({possible})')
                        aint = False # bru
                        for obj in objs:
                            if obj[0] == res:
                                aint = True
                        if not aint:
                            objs.append([res, possible])
                            tot += 1
                        aint = False
        classes.append([classname, objs])
print(f'Total: {tot}')
print("\nGenerating headers...")

if not os.path.isdir('headers'): os.mkdir('headers')
for hclass in classes:
    # parsing
    classname = hclass[0]
    print('Generating header ' + classname + '.h...')
    objs = hclass[1]
    if objs:
        header = f"#ifndef __{classname.upper()}_HOOKS_H__\n#define __{classname.upper()}_HOOKS_H__\n\n#include <gd.h>\n#include <dobby.h>\n#include <dlfcn.h>\n\n// Generated by macro {datetime.today().day}/{datetime.today().month}/{datetime.today().year}\n\nnamespace {classname}_Origins " + "{\n"
        # origins
        for obj in objs:
            # parsing
            name = obj[0]
            hook = obj[1]

            origintype = "void"
            if name == "init":
                origintype = "bool"
            header += f'\t{origintype}(*{name})({classname}*);\n'
            origintype = "void"

        #hooks
        header += '}' + f'\nnamespace {classname}_Hooks ' + '{\n'
        for obj in objs:
            # parsing
            name = obj[0]
            hook = obj[1]

            header += f'\tvoid {name}(void* rep)' + ' { ' + f'DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "{hook}"), (void*)rep, (void**)&{classname}_Origins::{name}); ' + '}\n'

        header += '}\n#endif'
        print('Writing header ' + classname + '.h...')
        with open('./headers/' + classname + '.h', 'w') as file:
            file.write(header)

print('HUGE SUCCESS.')