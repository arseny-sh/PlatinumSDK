#ifndef __OBJECTTOOLBOX_HOOKS_H__
#define __OBJECTTOOLBOX_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 10/7/2023

namespace ObjectToolbox_Origins {
	void(*frameToKey)(ObjectToolbox*);
	void(*keyToFrame)(ObjectToolbox*);
	void(*sharedState)(ObjectToolbox*);
	void(*intKeyToFrame)(ObjectToolbox*);
	void(*gridNodeSizeForKey)(ObjectToolbox*);
	void(*perspectiveBlockFrame)(ObjectToolbox*);
	void(*allKeys)(ObjectToolbox*);
}
namespace ObjectToolbox_Hooks {
	void frameToKey(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN13ObjectToolbox10frameToKeyEPKc"), (void*)rep, (void**)&ObjectToolbox_Origins::frameToKey); }
	void keyToFrame(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN13ObjectToolbox10keyToFrameEPKc"), (void*)rep, (void**)&ObjectToolbox_Origins::keyToFrame); }
	void sharedState(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN13ObjectToolbox11sharedStateEv"), (void*)rep, (void**)&ObjectToolbox_Origins::sharedState); }
	void intKeyToFrame(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN13ObjectToolbox13intKeyToFrameEi"), (void*)rep, (void**)&ObjectToolbox_Origins::intKeyToFrame); }
	void gridNodeSizeForKey(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN13ObjectToolbox18gridNodeSizeForKeyEi"), (void*)rep, (void**)&ObjectToolbox_Origins::gridNodeSizeForKey); }
	void perspectiveBlockFrame(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN13ObjectToolbox21perspectiveBlockFrameEi"), (void*)rep, (void**)&ObjectToolbox_Origins::perspectiveBlockFrame); }
	void allKeys(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN13ObjectToolbox7allKeysEv"), (void*)rep, (void**)&ObjectToolbox_Origins::allKeys); }
}
#endif