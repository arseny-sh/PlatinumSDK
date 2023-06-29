// PLATINUM
// PLATINUM

#ifndef __PLATINUM_H__
#define __PLATINUM_H__

#include <gd.h>
#include <cocos2d.h>
#include <dlfcn.h>
#include <dobby.h>
//#include <Modify/include_all.h>

using namespace cocos2d;

#define Hook(address, rep, origin) DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), address), (void*)rep, (void**)&origin)

#endif