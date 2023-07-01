#ifndef __CREATORLAYER_H__
#define __CREATORLAYER_H__

#include "../gd.h"

    class CreatorLayer : public cocos2d::CCLayer {
    public:
		virtual bool init();
		virtual void keyBackClicked();
		virtual void keyDown(cocos2d::enumKeyCodes key);
        void onMapPacks(CCObject* pSender);
        void onMyLevels(CCObject* pSender);
        void onChallenge(CCObject* pSender);
        void onGauntlets(CCObject* pSender);
        void onDailyLevel(CCObject* pSender);
        void onFameLevels(CCObject* pSender);
        void onSavedLevels(CCObject* pSender);
        void onSecretVault(CCObject* pSender);
        void onWeeklyLevel(CCObject* pSender);
        void onLeaderboards(CCObject* pSender);
        void onOnlineLevels(CCObject* pSender);
        void onTreasureRoom(CCObject* pSender);
        void onFeaturedLevels(CCObject* pSender);
        void onOnlyFullVersion(CCObject* pSender);
        void onBack(CCObject* pSender);
};


#endif