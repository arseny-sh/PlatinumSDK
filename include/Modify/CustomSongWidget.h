#ifndef __CUSTOMSONGWIDGET_HOOKS_H__
#define __CUSTOMSONGWIDGET_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 10/7/2023

namespace CustomSongWidget_Origins {
	void(*updateSongObject)(CustomSongWidget*);
	void(*loadSongInfoFinished)(CustomSongWidget*);
}
namespace CustomSongWidget_Hooks {
	void updateSongObject(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16CustomSongWidget16updateSongObjectEP14SongInfoObject"), (void*)rep, (void**)&CustomSongWidget_Origins::updateSongObject); }
	void loadSongInfoFinished(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16CustomSongWidget20loadSongInfoFinishedEP14SongInfoObject"), (void*)rep, (void**)&CustomSongWidget_Origins::loadSongInfoFinished); }
}
#endif