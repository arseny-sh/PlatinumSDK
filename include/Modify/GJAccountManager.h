#ifndef __GJACCOUNTMANAGER_HOOKS_H__
#define __GJACCOUNTMANAGER_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 29/6/2023

namespace GJAccountManager_Origins {
	void(*sharedState)(GJAccountManager*);
}
namespace GJAccountManager_Hooks {
	void sharedState(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16GJAccountManager11sharedStateEv"), (void*)rep, (void**)&GJAccountManager_Origins::sharedState); }
}
#endif