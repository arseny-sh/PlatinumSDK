#ifndef __PLAYLAYER_HOOKS_H__
#define __PLAYLAYER_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 3/7/2023

namespace PlayLayer_Origins {
	void(*cameraMoveX)(PlayLayer*);
	void(*cameraMoveY)(PlayLayer*);
	void(*shakeCamera)(PlayLayer*);
	void(*showNewBest)(PlayLayer*);
	void(*showEndLayer)(PlayLayer*);
	void(*updateCamera)(PlayLayer*);
	void(*destroyPlayer)(PlayLayer*);
	void(*levelComplete)(PlayLayer*);
	void(*spawnFirework)(PlayLayer*);
	void(*showRetryLayer)(PlayLayer*);
	void(*moveCameraToPos)(PlayLayer*);
	void(*stopCameraShake)(PlayLayer*);
	void(*removeAllObjects)(PlayLayer*);
	void(*resumeAndRestart)(PlayLayer*);
	void(*toggleProgressbar)(PlayLayer*);
	void(*showCompleteEffect)(PlayLayer*);
	bool(*init)(PlayLayer*);
	void(*D)(PlayLayer*);
}
namespace PlayLayer_Hooks {
	void cameraMoveX(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer11cameraMoveXEfff"), (void*)rep, (void**)&PlayLayer_Origins::cameraMoveX); }
	void cameraMoveY(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer11cameraMoveYEfff"), (void*)rep, (void**)&PlayLayer_Origins::cameraMoveY); }
	void shakeCamera(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer11shakeCameraEfff"), (void*)rep, (void**)&PlayLayer_Origins::shakeCamera); }
	void showNewBest(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer11showNewBestEbiibbb"), (void*)rep, (void**)&PlayLayer_Origins::showNewBest); }
	void showEndLayer(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer12showEndLayerEv"), (void*)rep, (void**)&PlayLayer_Origins::showEndLayer); }
	void updateCamera(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer12updateCameraEf"), (void*)rep, (void**)&PlayLayer_Origins::updateCamera); }
	void destroyPlayer(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer13destroyPlayerEP12PlayerObjectP10GameObject"), (void*)rep, (void**)&PlayLayer_Origins::destroyPlayer); }
	void levelComplete(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer13levelCompleteEv"), (void*)rep, (void**)&PlayLayer_Origins::levelComplete); }
	void spawnFirework(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer13spawnFireworkEv"), (void*)rep, (void**)&PlayLayer_Origins::spawnFirework); }
	void showRetryLayer(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer14showRetryLayerEv"), (void*)rep, (void**)&PlayLayer_Origins::showRetryLayer); }
	void moveCameraToPos(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer15moveCameraToPosEN7cocos2d7CCPointE"), (void*)rep, (void**)&PlayLayer_Origins::moveCameraToPos); }
	void stopCameraShake(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer15stopCameraShakeEv"), (void*)rep, (void**)&PlayLayer_Origins::stopCameraShake); }
	void removeAllObjects(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer16removeAllObjectsEv"), (void*)rep, (void**)&PlayLayer_Origins::removeAllObjects); }
	void resumeAndRestart(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer16resumeAndRestartEv"), (void*)rep, (void**)&PlayLayer_Origins::resumeAndRestart); }
	void toggleProgressbar(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer17toggleProgressbarEv"), (void*)rep, (void**)&PlayLayer_Origins::toggleProgressbar); }
	void showCompleteEffect(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer18showCompleteEffectEv"), (void*)rep, (void**)&PlayLayer_Origins::showCompleteEffect); }
	void init(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer4initEP11GJGameLevel"), (void*)rep, (void**)&PlayLayer_Origins::init); }
	void D(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN9PlayLayer6vfDChkEv"), (void*)rep, (void**)&PlayLayer_Origins::D); }
}
#endif