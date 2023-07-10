#ifndef __FLALERTLAYER_HOOKS_H__
#define __FLALERTLAYER_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 10/7/2023

namespace FLAlertLayer_Origins {
	void(*ccTouchBegan)(FLAlertLayer*);
	void(*ccTouchEnded)(FLAlertLayer*);
	void(*ccTouchMoved)(FLAlertLayer*);
	void(*keyBackClicked)(FLAlertLayer*);
	void(*ccTouchCancelled)(FLAlertLayer*);
	void(*registerWithTouchDispatcher)(FLAlertLayer*);
	bool(*init)(FLAlertLayer*);
	void(*show)(FLAlertLayer*);
	void(*create)(FLAlertLayer*);
	void(*keyDown)(FLAlertLayer*);
	void(*onEnter)(FLAlertLayer*);
}
namespace FLAlertLayer_Hooks {
	void ccTouchBegan(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12FLAlertLayer12ccTouchBeganEPN7cocos2d7CCTouchEPNS0_7CCEventE"), (void*)rep, (void**)&FLAlertLayer_Origins::ccTouchBegan); }
	void ccTouchEnded(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12FLAlertLayer12ccTouchEndedEPN7cocos2d7CCTouchEPNS0_7CCEventE"), (void*)rep, (void**)&FLAlertLayer_Origins::ccTouchEnded); }
	void ccTouchMoved(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12FLAlertLayer12ccTouchMovedEPN7cocos2d7CCTouchEPNS0_7CCEventE"), (void*)rep, (void**)&FLAlertLayer_Origins::ccTouchMoved); }
	void keyBackClicked(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12FLAlertLayer14keyBackClickedEv"), (void*)rep, (void**)&FLAlertLayer_Origins::keyBackClicked); }
	void ccTouchCancelled(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12FLAlertLayer16ccTouchCancelledEPN7cocos2d7CCTouchEPNS0_7CCEventE"), (void*)rep, (void**)&FLAlertLayer_Origins::ccTouchCancelled); }
	void registerWithTouchDispatcher(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12FLAlertLayer27registerWithTouchDispatcherEv"), (void*)rep, (void**)&FLAlertLayer_Origins::registerWithTouchDispatcher); }
	void init(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12FLAlertLayer4initEP20FLAlertLayerProtocolPKcSsS3_S3_fbf"), (void*)rep, (void**)&FLAlertLayer_Origins::init); }
	void show(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12FLAlertLayer4showEv"), (void*)rep, (void**)&FLAlertLayer_Origins::show); }
	void create(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12FLAlertLayer6createEP20FLAlertLayerProtocolPKcSsS3_S3_"), (void*)rep, (void**)&FLAlertLayer_Origins::create); }
	void keyDown(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12FLAlertLayer7keyDownEN7cocos2d12enumKeyCodesE"), (void*)rep, (void**)&FLAlertLayer_Origins::keyDown); }
	void onEnter(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN12FLAlertLayer7onEnterEv"), (void*)rep, (void**)&FLAlertLayer_Origins::onEnter); }
}
#endif