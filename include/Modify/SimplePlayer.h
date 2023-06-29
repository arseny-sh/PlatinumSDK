#ifndef __SIMPLEPLAYER_HOOKS_H__
#define __SIMPLEPLAYER_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 29/6/2023

namespace SimplePlayer_Origins {
	void(*setOpacity)(SimplePlayer*);
	void(*updateColors)(SimplePlayer*);
	void(*setSecondColor)(SimplePlayer*);
	void(*updatePlayerFrame)(SimplePlayer*);
	bool(*init)(SimplePlayer*);
	void(*create)(SimplePlayer*);
	void(*setColor)(SimplePlayer*);
	void(*setFrames)(SimplePlayer*);
}
namespace SimplePlayer_Hooks {
	void setOpacity(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12SimplePlayer10setOpacityEh"), (void*)rep, (void**)&SimplePlayer_Origins::setOpacity); }
	void updateColors(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12SimplePlayer12updateColorsEv"), (void*)rep, (void**)&SimplePlayer_Origins::updateColors); }
	void setSecondColor(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12SimplePlayer14setSecondColorERKN7cocos2d10_ccColor3BE"), (void*)rep, (void**)&SimplePlayer_Origins::setSecondColor); }
	void updatePlayerFrame(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12SimplePlayer17updatePlayerFrameEi8IconType"), (void*)rep, (void**)&SimplePlayer_Origins::updatePlayerFrame); }
	void init(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12SimplePlayer4initEi"), (void*)rep, (void**)&SimplePlayer_Origins::init); }
	void create(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12SimplePlayer6createEi"), (void*)rep, (void**)&SimplePlayer_Origins::create); }
	void setColor(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12SimplePlayer8setColorERKN7cocos2d10_ccColor3BE"), (void*)rep, (void**)&SimplePlayer_Origins::setColor); }
	void setFrames(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12SimplePlayer9setFramesEPKcS1_S1_S1_S1_"), (void*)rep, (void**)&SimplePlayer_Origins::setFrames); }
}
#endif