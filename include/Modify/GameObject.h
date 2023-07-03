#ifndef __GAMEOBJECT_HOOKS_H__
#define __GAMEOBJECT_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 3/7/2023

namespace GameObject_Origins {
	void(*addToGroup)(GameObject*);
	void(*setOpacity)(GameObject*);
	void(*setScaleX)(GameObject*);
	void(*setScaleY)(GameObject*);
	void(*setVisible)(GameObject*);
	void(*setPosition)(GameObject*);
	void(*setRotation)(GameObject*);
	void(*selectObject)(GameObject*);
	void(*getSaveString)(GameObject*);
	void(*setChildColor)(GameObject*);
	void(*deselectObject)(GameObject*);
	void(*createWithFrame)(GameObject*);
	void(*initWithTexture)(GameObject*);
	void(*objectFromString)(GameObject*);
	void(*updateCustomScale)(GameObject*);
	void(*setScale)(GameObject*);
}
namespace GameObject_Hooks {
	void addToGroup(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN10GameObject10addToGroupEi"), (void*)rep, (void**)&GameObject_Origins::addToGroup); }
	void setOpacity(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN10GameObject10setOpacityEh"), (void*)rep, (void**)&GameObject_Origins::setOpacity); }
	void setScaleX(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN10GameObject10setRScaleXEf"), (void*)rep, (void**)&GameObject_Origins::setScaleX); }
	void setScaleY(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN10GameObject10setRScaleYEf"), (void*)rep, (void**)&GameObject_Origins::setScaleY); }
	void setVisible(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN10GameObject10setVisibleEb"), (void*)rep, (void**)&GameObject_Origins::setVisible); }
	void setPosition(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN10GameObject11setPositionERKN7cocos2d7CCPointE"), (void*)rep, (void**)&GameObject_Origins::setPosition); }
	void setRotation(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN10GameObject11setRotationEf"), (void*)rep, (void**)&GameObject_Origins::setRotation); }
	void selectObject(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN10GameObject12selectObjectEN7cocos2d10_ccColor3BE"), (void*)rep, (void**)&GameObject_Origins::selectObject); }
	void getSaveString(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN10GameObject13getSaveStringEv"), (void*)rep, (void**)&GameObject_Origins::getSaveString); }
	void setChildColor(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN10GameObject13setChildColorERKN7cocos2d10_ccColor3BE"), (void*)rep, (void**)&GameObject_Origins::setChildColor); }
	void deselectObject(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN10GameObject14deselectObjectEv"), (void*)rep, (void**)&GameObject_Origins::deselectObject); }
	void createWithFrame(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN10GameObject15createWithFrameEPKc"), (void*)rep, (void**)&GameObject_Origins::createWithFrame); }
	void initWithTexture(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN10GameObject15initWithTextureEPN7cocos2d11CCTexture2DE"), (void*)rep, (void**)&GameObject_Origins::initWithTexture); }
	void objectFromString(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN10GameObject16objectFromStringESsb"), (void*)rep, (void**)&GameObject_Origins::objectFromString); }
	void updateCustomScale(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN10GameObject17updateCustomScaleEf"), (void*)rep, (void**)&GameObject_Origins::updateCustomScale); }
	void setScale(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN10GameObject8setScaleEf"), (void*)rep, (void**)&GameObject_Origins::setScale); }
}
#endif