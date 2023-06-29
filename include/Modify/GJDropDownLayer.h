#ifndef __GJDROPDOWNLAYER_HOOKS_H__
#define __GJDROPDOWNLAYER_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 29/6/2023

namespace GJDropDownLayer_Origins {
	void(*enterLayer)(GJDropDownLayer*);
	void(*customSetup)(GJDropDownLayer*);
	void(*layerHidden)(GJDropDownLayer*);
	void(*ccTouchBegan)(GJDropDownLayer*);
	void(*ccTouchEnded)(GJDropDownLayer*);
	void(*ccTouchMoved)(GJDropDownLayer*);
	void(*layerVisible)(GJDropDownLayer*);
	void(*keyBackClicked)(GJDropDownLayer*);
	void(*ccTouchCancelled)(GJDropDownLayer*);
	void(*enterAnimFinished)(GJDropDownLayer*);
	void(*registerWithTouchDispatcher)(GJDropDownLayer*);
	void(*draw)(GJDropDownLayer*);
	bool(*init)(GJDropDownLayer*);
	void(*create)(GJDropDownLayer*);
	void(*exitLayer)(GJDropDownLayer*);
	void(*hideLayer)(GJDropDownLayer*);
	void(*showLayer)(GJDropDownLayer*);
}
namespace GJDropDownLayer_Hooks {
	void enterLayer(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15GJDropDownLayer10enterLayerEv"), (void*)rep, (void**)&GJDropDownLayer_Origins::enterLayer); }
	void customSetup(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15GJDropDownLayer11customSetupEv"), (void*)rep, (void**)&GJDropDownLayer_Origins::customSetup); }
	void layerHidden(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15GJDropDownLayer11layerHiddenEv"), (void*)rep, (void**)&GJDropDownLayer_Origins::layerHidden); }
	void ccTouchBegan(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15GJDropDownLayer12ccTouchBeganEPN7cocos2d7CCTouchEPNS0_7CCEventE"), (void*)rep, (void**)&GJDropDownLayer_Origins::ccTouchBegan); }
	void ccTouchEnded(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15GJDropDownLayer12ccTouchEndedEPN7cocos2d7CCTouchEPNS0_7CCEventE"), (void*)rep, (void**)&GJDropDownLayer_Origins::ccTouchEnded); }
	void ccTouchMoved(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15GJDropDownLayer12ccTouchMovedEPN7cocos2d7CCTouchEPNS0_7CCEventE"), (void*)rep, (void**)&GJDropDownLayer_Origins::ccTouchMoved); }
	void layerVisible(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15GJDropDownLayer12layerVisibleEv"), (void*)rep, (void**)&GJDropDownLayer_Origins::layerVisible); }
	void keyBackClicked(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15GJDropDownLayer14keyBackClickedEv"), (void*)rep, (void**)&GJDropDownLayer_Origins::keyBackClicked); }
	void ccTouchCancelled(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15GJDropDownLayer16ccTouchCancelledEPN7cocos2d7CCTouchEPNS0_7CCEventE"), (void*)rep, (void**)&GJDropDownLayer_Origins::ccTouchCancelled); }
	void enterAnimFinished(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15GJDropDownLayer17enterAnimFinishedEv"), (void*)rep, (void**)&GJDropDownLayer_Origins::enterAnimFinished); }
	void registerWithTouchDispatcher(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15GJDropDownLayer27registerWithTouchDispatcherEv"), (void*)rep, (void**)&GJDropDownLayer_Origins::registerWithTouchDispatcher); }
	void draw(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15GJDropDownLayer4drawEv"), (void*)rep, (void**)&GJDropDownLayer_Origins::draw); }
	void init(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15GJDropDownLayer4initEPKc"), (void*)rep, (void**)&GJDropDownLayer_Origins::init); }
	void create(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15GJDropDownLayer6createEPKc"), (void*)rep, (void**)&GJDropDownLayer_Origins::create); }
	void exitLayer(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15GJDropDownLayer9exitLayerEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&GJDropDownLayer_Origins::exitLayer); }
	void hideLayer(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15GJDropDownLayer9hideLayerEb"), (void*)rep, (void**)&GJDropDownLayer_Origins::hideLayer); }
	void showLayer(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN15GJDropDownLayer9showLayerEb"), (void*)rep, (void**)&GJDropDownLayer_Origins::showLayer); }
}
#endif