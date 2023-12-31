#ifndef __GAMELEVELMANAGER_HOOKS_H__
#define __GAMELEVELMANAGER_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 10/7/2023

namespace GameLevelManager_Origins {
	void(*sharedState)(GameLevelManager*);
	void(*createNewLevel)(GameLevelManager*);
}
namespace GameLevelManager_Hooks {
	void sharedState(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16GameLevelManager11sharedStateEv"), (void*)rep, (void**)&GameLevelManager_Origins::sharedState); }
	void createNewLevel(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16GameLevelManager14createNewLevelEv"), (void*)rep, (void**)&GameLevelManager_Origins::createNewLevel); }
}
#endif