#ifndef __GAMETOOLBOX_HOOKS_H__
#define __GAMETOOLBOX_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 29/6/2023

namespace GameToolbox_Origins {
	void(*getResponse)(GameToolbox*);
}
namespace GameToolbox_Hooks {
	void getResponse(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameToolbox11getResponseEPN7cocos2d9extension14CCHttpResponseE"), (void*)rep, (void**)&GameToolbox_Origins::getResponse); }
}
#endif