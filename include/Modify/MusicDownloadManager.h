#ifndef __MUSICDOWNLOADMANAGER_HOOKS_H__
#define __MUSICDOWNLOADMANAGER_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 10/7/2023

namespace MusicDownloadManager_Origins {
	void(*pathForSong)(MusicDownloadManager*);
	void(*sharedState)(MusicDownloadManager*);
	void(*songStateChanged)(MusicDownloadManager*);
	void(*getDownloadedSongs)(MusicDownloadManager*);
}
namespace MusicDownloadManager_Hooks {
	void pathForSong(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN20MusicDownloadManager11pathForSongEi"), (void*)rep, (void**)&MusicDownloadManager_Origins::pathForSong); }
	void sharedState(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN20MusicDownloadManager11sharedStateEv"), (void*)rep, (void**)&MusicDownloadManager_Origins::sharedState); }
	void songStateChanged(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN20MusicDownloadManager16songStateChangedEv"), (void*)rep, (void**)&MusicDownloadManager_Origins::songStateChanged); }
	void getDownloadedSongs(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN20MusicDownloadManager18getDownloadedSongsEv"), (void*)rep, (void**)&MusicDownloadManager_Origins::getDownloadedSongs); }
}
#endif