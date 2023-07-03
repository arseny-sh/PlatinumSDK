#ifndef __LOADINGCIRCLE_HOOKS_H__
#define __LOADINGCIRCLE_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 3/7/2023

namespace LoadingCircle_Origins {
	void(*fadeAndRemove)(LoadingCircle*);
	void(*show)(LoadingCircle*);
	void(*create)(LoadingCircle*);
}
namespace LoadingCircle_Hooks {
	void fadeAndRemove(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN13LoadingCircle13fadeAndRemoveEv"), (void*)rep, (void**)&LoadingCircle_Origins::fadeAndRemove); }
	void show(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN13LoadingCircle4showEv"), (void*)rep, (void**)&LoadingCircle_Origins::show); }
	void create(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN13LoadingCircle6createEv"), (void*)rep, (void**)&LoadingCircle_Origins::create); }
}
#endif