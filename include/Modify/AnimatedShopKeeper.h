#ifndef __ANIMATEDSHOPKEEPER_HOOKS_H__
#define __ANIMATEDSHOPKEEPER_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 29/6/2023

namespace AnimatedShopKeeper_Origins {
	void(*startAnimating)(AnimatedShopKeeper*);
	void(*animationFinished)(AnimatedShopKeeper*);
	void(*create)(AnimatedShopKeeper*);
}
namespace AnimatedShopKeeper_Hooks {
	void startAnimating(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN18AnimatedShopKeeper14startAnimatingEv"), (void*)rep, (void**)&AnimatedShopKeeper_Origins::startAnimating); }
	void animationFinished(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN18AnimatedShopKeeper17animationFinishedEPKc"), (void*)rep, (void**)&AnimatedShopKeeper_Origins::animationFinished); }
	void create(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN18AnimatedShopKeeper6createE8ShopType"), (void*)rep, (void**)&AnimatedShopKeeper_Origins::create); }
}
#endif