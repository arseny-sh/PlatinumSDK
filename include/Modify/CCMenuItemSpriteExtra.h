#ifndef __CCMENUITEMSPRITEEXTRA_HOOKS_H__
#define __CCMENUITEMSPRITEEXTRA_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 3/7/2023

namespace CCMenuItemSpriteExtra_Origins {
	void(*setSizeMult)(CCMenuItemSpriteExtra*);
	void(*create)(CCMenuItemSpriteExtra*);
}
namespace CCMenuItemSpriteExtra_Hooks {
	void setSizeMult(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN21CCMenuItemSpriteExtra11setSizeMultEf"), (void*)rep, (void**)&CCMenuItemSpriteExtra_Origins::setSizeMult); }
	void create(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN21CCMenuItemSpriteExtra6createEPN7cocos2d6CCNodeES2_PNS0_8CCObjectEMS3_FvS4_E"), (void*)rep, (void**)&CCMenuItemSpriteExtra_Origins::create); }
}
#endif