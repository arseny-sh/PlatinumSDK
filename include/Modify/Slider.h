#ifndef __SLIDER_HOOKS_H__
#define __SLIDER_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 10/7/2023

namespace Slider_Origins {
	void(*setBarVisibility)(Slider*);
	void(*create)(Slider*);
	void(*getThumb)(Slider*);
	void(*getValue)(Slider*);
	void(*setValue)(Slider*);
}
namespace Slider_Hooks {
	void setBarVisibility(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN6Slider16setBarVisibilityEb"), (void*)rep, (void**)&Slider_Origins::setBarVisibility); }
	void create(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN6Slider6createEPN7cocos2d6CCNodeEMNS0_8CCObjectEFvPS3_E"), (void*)rep, (void**)&Slider_Origins::create); }
	void getThumb(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN6Slider8getThumbEv"), (void*)rep, (void**)&Slider_Origins::getThumb); }
	void getValue(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN6Slider8getValueEv"), (void*)rep, (void**)&Slider_Origins::getValue); }
	void setValue(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN6Slider8setValueEf"), (void*)rep, (void**)&Slider_Origins::setValue); }
}
#endif