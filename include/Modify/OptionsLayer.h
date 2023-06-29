#ifndef __OPTIONSLAYER_HOOKS_H__
#define __OPTIONSLAYER_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 29/6/2023

namespace OptionsLayer_Origins {
	void(*customSetup)(OptionsLayer*);
	void(*layerHidden)(OptionsLayer*);
	void(*onSoundtracks)(OptionsLayer*);
	void(*create)(OptionsLayer*);
	void(*onHelp)(OptionsLayer*);
	void(*onRate)(OptionsLayer*);
	void(*exitLayer)(OptionsLayer*);
	void(*onSupport)(OptionsLayer*);
}
namespace OptionsLayer_Hooks {
	void customSetup(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12OptionsLayer11customSetupEv"), (void*)rep, (void**)&OptionsLayer_Origins::customSetup); }
	void layerHidden(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12OptionsLayer11layerHiddenEv"), (void*)rep, (void**)&OptionsLayer_Origins::layerHidden); }
	void onSoundtracks(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12OptionsLayer13onSoundtracksEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&OptionsLayer_Origins::onSoundtracks); }
	void create(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12OptionsLayer6createEv"), (void*)rep, (void**)&OptionsLayer_Origins::create); }
	void onHelp(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12OptionsLayer6onHelpEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&OptionsLayer_Origins::onHelp); }
	void onRate(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12OptionsLayer6onRateEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&OptionsLayer_Origins::onRate); }
	void exitLayer(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12OptionsLayer9exitLayerEv"), (void*)rep, (void**)&OptionsLayer_Origins::exitLayer); }
	void onSupport(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12OptionsLayer9onSupportEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&OptionsLayer_Origins::onSupport); }
}
#endif