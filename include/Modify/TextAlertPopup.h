#ifndef __TEXTALERTPOPUP_HOOKS_H__
#define __TEXTALERTPOPUP_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 29/6/2023

namespace TextAlertPopup_Origins {
	void(*create)(TextAlertPopup*);
}
namespace TextAlertPopup_Hooks {
	void create(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN14TextAlertPopup6createESsff"), (void*)rep, (void**)&TextAlertPopup_Origins::create); }
}
#endif