#ifndef __GJGARAGELAYER_HOOKS_H__
#define __GJGARAGELAYER_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 29/6/2023

namespace GJGarageLayer_Origins {
	void(*updateColorSelect)(GJGarageLayer*);
	void(*updatePlayerColors)(GJGarageLayer*);
	void(*updatePlayerSelect)(GJGarageLayer*);
	void(*node)(GJGarageLayer*);
	void(*scene)(GJGarageLayer*);
}
namespace GJGarageLayer_Hooks {
	void updateColorSelect(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN13GJGarageLayer17updateColorSelectEPN7cocos2d6CCNodeEb"), (void*)rep, (void**)&GJGarageLayer_Origins::updateColorSelect); }
	void updatePlayerColors(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN13GJGarageLayer18updatePlayerColorsEv"), (void*)rep, (void**)&GJGarageLayer_Origins::updatePlayerColors); }
	void updatePlayerSelect(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN13GJGarageLayer18updatePlayerSelectEPN7cocos2d6CCNodeE"), (void*)rep, (void**)&GJGarageLayer_Origins::updatePlayerSelect); }
	void node(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN13GJGarageLayer4nodeEv"), (void*)rep, (void**)&GJGarageLayer_Origins::node); }
	void scene(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN13GJGarageLayer5sceneEv"), (void*)rep, (void**)&GJGarageLayer_Origins::scene); }
}
#endif