#ifndef __SCROLLINGLAYER_HOOKS_H__
#define __SCROLLINGLAYER_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 3/7/2023

namespace ScrollingLayer_Origins {
	void(*create)(ScrollingLayer*);
}
namespace ScrollingLayer_Hooks {
	void create(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN14ScrollingLayer6createEN7cocos2d6CCSizeENS0_7CCPointEf"), (void*)rep, (void**)&ScrollingLayer_Origins::create); }
}
#endif