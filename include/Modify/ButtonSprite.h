#ifndef __BUTTONSPRITE_HOOKS_H__
#define __BUTTONSPRITE_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 29/6/2023

namespace ButtonSprite_Origins {
	void(*create)(ButtonSprite*);
}
namespace ButtonSprite_Hooks {
	void create(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12ButtonSprite6createEPKc"), (void*)rep, (void**)&ButtonSprite_Origins::create); }
}
#endif