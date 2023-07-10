#ifndef __FMODAUDIOENGINE_HOOKS_H__
#define __FMODAUDIOENGINE_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 10/7/2023

namespace FMODAudioEngine_Origins {
	void(*playEffect)(FMODAudioEngine*);
	void(*sharedEngine)(FMODAudioEngine*);
	void(*resumeAllEffects)(FMODAudioEngine*);
	void(*playBackgroundMusic)(FMODAudioEngine*);
	void(*stop)(FMODAudioEngine*);
	void(*start)(FMODAudioEngine*);
}
namespace FMODAudioEngine_Hooks {
	void playEffect(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15FMODAudioEngine10playEffectESsbfff"), (void*)rep, (void**)&FMODAudioEngine_Origins::playEffect); }
	void sharedEngine(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15FMODAudioEngine12sharedEngineEv"), (void*)rep, (void**)&FMODAudioEngine_Origins::sharedEngine); }
	void resumeAllEffects(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15FMODAudioEngine16resumeAllEffectsEv"), (void*)rep, (void**)&FMODAudioEngine_Origins::resumeAllEffects); }
	void playBackgroundMusic(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15FMODAudioEngine19playBackgroundMusicESsbb"), (void*)rep, (void**)&FMODAudioEngine_Origins::playBackgroundMusic); }
	void stop(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15FMODAudioEngine4stopEv"), (void*)rep, (void**)&FMODAudioEngine_Origins::stop); }
	void start(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15FMODAudioEngine5startEv"), (void*)rep, (void**)&FMODAudioEngine_Origins::start); }
}
#endif