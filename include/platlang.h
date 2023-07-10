// WTH IS THAT?? 🗣🗣🗣

#ifndef __PLATLANG_H__
#define __PLATLANG_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// widgets
#define Alert(title, text, button1, button2) FLAlertLayer::create(nullptr, title, text, button1, button2)
#define Button(sprite, node, callback) CCMenuItemSpriteExtra::create(sprite, sprite, node, menu_selector(callback))
#define Label(text, font) CCLabelBMFont::create(text, font)
#define Sprite(filename) CCSprite::create(filename)
#define Frame(framename) CCSprite::createWithSpriteFrameName(framename)
#define Menu() CCMenu::create()

// functions
#define getScreenSize() CCDirector::sharedDirector()->getVisibleSize()
#define hook(rep) (void*) rep
#define CustomHook(address, rep, origin) DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), address), (void*)rep, (void**)&origin)

// variables
#define empty NULL
#define chatFont "chatFont.fnt"
#define goldFont "goldFont.fnt"
#define bigFont "bigFont.fnt"
#define tleft CCTextAlignment::kCCTextAlignmentLeft
#define tcenter CCTextAlignment::kCCTextAlignmentCenter
#define tright CCTextAlignment::kCCTextAlignmentRight

// misc
#define Loader __attribute__((constructor)) void load()

#endif