#ifndef __GAMEMANAGER_HOOKS_H__
#define __GAMEMANAGER_HOOKS_H__

#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>

// Generated by macro 3/7/2023

namespace GameManager_Origins {
	void(*unlockIcon)(GameManager*);
	void(*doQuickSave)(GameManager*);
	void(*fadeInMusic)(GameManager*);
	void(*sharedState)(GameManager*);
	void(*unlockColor)(GameManager*);
	void(*setPlayerBall)(GameManager*);
	void(*setPlayerBird)(GameManager*);
	void(*setPlayerDart)(GameManager*);
	void(*setPlayerShip)(GameManager*);
	void(*isIconUnlocked)(GameManager*);
	void(*setPlayerColor)(GameManager*);
	void(*setPlayerFrame)(GameManager*);
	void(*setPlayerRobot)(GameManager*);
	void(*getGameVariable)(GameManager*);
	void(*isColorUnlocked)(GameManager*);
	void(*setGameVariable)(GameManager*);
	void(*setPlayerSpider)(GameManager*);
	void(*setPlayerStreak)(GameManager*);
	void(*setHasRatingPower)(GameManager*);
	void(*setIntGameVariable)(GameManager*);
	void(*toggleGameVariable)(GameManager*);
	void(*completedAchievement)(GameManager*);
	void(*setPlayerDeathEffect)(GameManager*);
	void(*reportPercentageForLevel)(GameManager*);
	bool(*init)(GameManager*);
	void(*setUGV)(GameManager*);
	void(*iconKey)(GameManager*);
	void(*colorKey)(GameManager*);
	void(*lockIcon)(GameManager*);
	void(*lockColor)(GameManager*);
	void(*reloadAll)(GameManager*);
}
namespace GameManager_Hooks {
	void unlockIcon(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager10unlockIconEi8IconType"), (void*)rep, (void**)&GameManager_Origins::unlockIcon); }
	void doQuickSave(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager11doQuickSaveEv"), (void*)rep, (void**)&GameManager_Origins::doQuickSave); }
	void fadeInMusic(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager11fadeInMusicEPKc"), (void*)rep, (void**)&GameManager_Origins::fadeInMusic); }
	void sharedState(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager11sharedStateEv"), (void*)rep, (void**)&GameManager_Origins::sharedState); }
	void unlockColor(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager11unlockColorEib"), (void*)rep, (void**)&GameManager_Origins::unlockColor); }
	void setPlayerBall(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager13setPlayerBallEi"), (void*)rep, (void**)&GameManager_Origins::setPlayerBall); }
	void setPlayerBird(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager13setPlayerBirdEi"), (void*)rep, (void**)&GameManager_Origins::setPlayerBird); }
	void setPlayerDart(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager13setPlayerDartEi"), (void*)rep, (void**)&GameManager_Origins::setPlayerDart); }
	void setPlayerShip(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager13setPlayerShipEi"), (void*)rep, (void**)&GameManager_Origins::setPlayerShip); }
	void isIconUnlocked(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager14isIconUnlockedEi8IconType"), (void*)rep, (void**)&GameManager_Origins::isIconUnlocked); }
	void setPlayerColor(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager14setPlayerColorEi"), (void*)rep, (void**)&GameManager_Origins::setPlayerColor); }
	void setPlayerFrame(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager14setPlayerFrameEi"), (void*)rep, (void**)&GameManager_Origins::setPlayerFrame); }
	void setPlayerRobot(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager14setPlayerRobotEi"), (void*)rep, (void**)&GameManager_Origins::setPlayerRobot); }
	void getGameVariable(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager15getGameVariableEPKc"), (void*)rep, (void**)&GameManager_Origins::getGameVariable); }
	void isColorUnlocked(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager15isColorUnlockedEib"), (void*)rep, (void**)&GameManager_Origins::isColorUnlocked); }
	void setGameVariable(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager15setGameVariableEPKcb"), (void*)rep, (void**)&GameManager_Origins::setGameVariable); }
	void setPlayerSpider(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager15setPlayerSpiderEi"), (void*)rep, (void**)&GameManager_Origins::setPlayerSpider); }
	void setPlayerStreak(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager15setPlayerStreakEi"), (void*)rep, (void**)&GameManager_Origins::setPlayerStreak); }
	void setHasRatingPower(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager17setHasRatingPowerEi"), (void*)rep, (void**)&GameManager_Origins::setHasRatingPower); }
	void setIntGameVariable(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager18setIntGameVariableEPKci"), (void*)rep, (void**)&GameManager_Origins::setIntGameVariable); }
	void toggleGameVariable(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager18toggleGameVariableEPKc"), (void*)rep, (void**)&GameManager_Origins::toggleGameVariable); }
	void completedAchievement(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager20completedAchievementEPKc"), (void*)rep, (void**)&GameManager_Origins::completedAchievement); }
	void setPlayerDeathEffect(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager20setPlayerDeathEffectEi"), (void*)rep, (void**)&GameManager_Origins::setPlayerDeathEffect); }
	void reportPercentageForLevel(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager24reportPercentageForLevelEiib"), (void*)rep, (void**)&GameManager_Origins::reportPercentageForLevel); }
	void init(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager4initEv"), (void*)rep, (void**)&GameManager_Origins::init); }
	void setUGV(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager6setUGVEPKcb"), (void*)rep, (void**)&GameManager_Origins::setUGV); }
	void iconKey(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager7iconKeyEi8IconType"), (void*)rep, (void**)&GameManager_Origins::iconKey); }
	void colorKey(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager8colorKeyEib"), (void*)rep, (void**)&GameManager_Origins::colorKey); }
	void lockIcon(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager8lockIconEi8IconType"), (void*)rep, (void**)&GameManager_Origins::lockIcon); }
	void lockColor(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager9lockColorEib"), (void*)rep, (void**)&GameManager_Origins::lockColor); }
	void reloadAll(void* rep) { DobbyHook(dlsym(dlopen("libcocos2dcpp.so", RTLD_LAZY), "_ZN11GameManager9reloadAllEbbb"), (void*)rep, (void**)&GameManager_Origins::reloadAll); }
}
#endif