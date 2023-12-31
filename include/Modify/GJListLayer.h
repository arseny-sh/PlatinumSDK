#ifndef __GJLISTLAYER_HOOKS_H__
#define __GJLISTLAYER_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 10/7/2023

namespace GJListLayer_Origins {
	void(*create)(GJListLayer*);
}
namespace GJListLayer_Hooks {
	void create(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GJListLayer6createEP12BoomListViewPKcN7cocos2d10_ccColor4BEff"), (void*)rep, (void**)&GJListLayer_Origins::create); }
}
#endif