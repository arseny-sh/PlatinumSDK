#ifndef __EDITORUI_HOOKS_H__
#define __EDITORUI_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 29/6/2023

namespace EditorUI_Origins {
	void(*moveObject)(EditorUI*);
	void(*updateZoom)(EditorUI*);
	void(*deselectAll)(EditorUI*);
	void(*pasteObjects)(EditorUI*);
	void(*scaleObjects)(EditorUI*);
	void(*selectObjects)(EditorUI*);
	void(*updateButtons)(EditorUI*);
	void(*getGroupCenter)(EditorUI*);
	void(*getSelectedObjects)(EditorUI*);
	void(*selectAll)(EditorUI*);
}
namespace EditorUI_Hooks {
	void moveObject(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN8EditorUI10moveObjectEP10GameObjectN7cocos2d7CCPointE"), (void*)rep, (void**)&EditorUI_Origins::moveObject); }
	void updateZoom(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN8EditorUI10updateZoomEf"), (void*)rep, (void**)&EditorUI_Origins::updateZoom); }
	void deselectAll(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN8EditorUI11deselectAllEv"), (void*)rep, (void**)&EditorUI_Origins::deselectAll); }
	void pasteObjects(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN8EditorUI12pasteObjectsESs"), (void*)rep, (void**)&EditorUI_Origins::pasteObjects); }
	void scaleObjects(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN8EditorUI12scaleObjectsEPN7cocos2d7CCArrayEfNS0_7CCPointE"), (void*)rep, (void**)&EditorUI_Origins::scaleObjects); }
	void selectObjects(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN8EditorUI13selectObjectsEPN7cocos2d7CCArrayEb"), (void*)rep, (void**)&EditorUI_Origins::selectObjects); }
	void updateButtons(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN8EditorUI13updateButtonsEv"), (void*)rep, (void**)&EditorUI_Origins::updateButtons); }
	void getGroupCenter(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN8EditorUI14getGroupCenterEPN7cocos2d7CCArrayEb"), (void*)rep, (void**)&EditorUI_Origins::getGroupCenter); }
	void getSelectedObjects(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN8EditorUI18getSelectedObjectsEv"), (void*)rep, (void**)&EditorUI_Origins::getSelectedObjects); }
	void selectAll(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN8EditorUI9selectAllEv"), (void*)rep, (void**)&EditorUI_Origins::selectAll); }
}
#endif