#ifndef __LEVELSEARCHLAYER_HOOKS_H__
#define __LEVELSEARCHLAYER_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 10/7/2023

namespace LevelSearchLayer_Origins {
	void(*onFollowed)(LevelSearchLayer*);
	void(*onTrending)(LevelSearchLayer*);
	void(*onMostLikes)(LevelSearchLayer*);
	void(*onStarAward)(LevelSearchLayer*);
	void(*onMostRecent)(LevelSearchLayer*);
	void(*onSearchUser)(LevelSearchLayer*);
	void(*onLatestStars)(LevelSearchLayer*);
	void(*onMoreOptions)(LevelSearchLayer*);
	void(*keyBackClicked)(LevelSearchLayer*);
	void(*onSpecialDemon)(LevelSearchLayer*);
	void(*onMostDownloaded)(LevelSearchLayer*);
	bool(*init)(LevelSearchLayer*);
	void(*onBack)(LevelSearchLayer*);
	void(*onClose)(LevelSearchLayer*);
	void(*onMagic)(LevelSearchLayer*);
	void(*onSearch)(LevelSearchLayer*);
	void(*onFriends)(LevelSearchLayer*);
}
namespace LevelSearchLayer_Hooks {
	void onFollowed(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16LevelSearchLayer10onFollowedEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&LevelSearchLayer_Origins::onFollowed); }
	void onTrending(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16LevelSearchLayer10onTrendingEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&LevelSearchLayer_Origins::onTrending); }
	void onMostLikes(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16LevelSearchLayer11onMostLikesEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&LevelSearchLayer_Origins::onMostLikes); }
	void onStarAward(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16LevelSearchLayer11onStarAwardEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&LevelSearchLayer_Origins::onStarAward); }
	void onMostRecent(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16LevelSearchLayer12onMostRecentEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&LevelSearchLayer_Origins::onMostRecent); }
	void onSearchUser(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16LevelSearchLayer12onSearchUserEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&LevelSearchLayer_Origins::onSearchUser); }
	void onLatestStars(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16LevelSearchLayer13onLatestStarsEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&LevelSearchLayer_Origins::onLatestStars); }
	void onMoreOptions(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16LevelSearchLayer13onMoreOptionsEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&LevelSearchLayer_Origins::onMoreOptions); }
	void keyBackClicked(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16LevelSearchLayer14keyBackClickedEv"), (void*)rep, (void**)&LevelSearchLayer_Origins::keyBackClicked); }
	void onSpecialDemon(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16LevelSearchLayer14onSpecialDemonEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&LevelSearchLayer_Origins::onSpecialDemon); }
	void onMostDownloaded(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16LevelSearchLayer16onMostDownloadedEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&LevelSearchLayer_Origins::onMostDownloaded); }
	void init(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16LevelSearchLayer4initEv"), (void*)rep, (void**)&LevelSearchLayer_Origins::init); }
	void onBack(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16LevelSearchLayer6onBackEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&LevelSearchLayer_Origins::onBack); }
	void onClose(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16LevelSearchLayer7onCloseEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&LevelSearchLayer_Origins::onClose); }
	void onMagic(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16LevelSearchLayer7onMagicEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&LevelSearchLayer_Origins::onMagic); }
	void onSearch(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16LevelSearchLayer8onSearchEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&LevelSearchLayer_Origins::onSearch); }
	void onFriends(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN16LevelSearchLayer9onFriendsEPN7cocos2d8CCObjectE"), (void*)rep, (void**)&LevelSearchLayer_Origins::onFriends); }
}
#endif