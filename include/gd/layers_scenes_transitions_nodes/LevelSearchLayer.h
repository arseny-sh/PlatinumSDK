#ifndef __LEVELSEARCHLAYER_H__
#define __LEVELSEARCHLAYER_H__

#include "../gd.h"

    class LevelSearchLayer : public cocos2d::CCLayer, public TextInputDelegate {
    public:
        virtual bool init();
        virtual void keyBackClicked();
        virtual void keyDown(cocos2d::enumKeyCodes key);
        virtual void FLAlert_Clicked(FLAlertLayer* alert, bool btn2);
        void onFollowed(cocos2d::CCObject* pSender);
        void onTrending(cocos2d::CCObject* pSender);
        void onMostLikes(cocos2d::CCObject* pSender);
        void onStarAward(cocos2d::CCObject* pSender);
        void onMostRecent(cocos2d::CCObject* pSender);
        void onSearchUser(cocos2d::CCObject* pSender);
        void onLatestStars(cocos2d::CCObject* pSender);
        void onMoreOptions(cocos2d::CCObject* pSender);
        void onSpecialDemon(cocos2d::CCObject* pSender);
        void onMostDownloaded(cocos2d::CCObject* pSender);
        void onMagic(cocos2d::CCObject* pSender);
        void onSearch(cocos2d::CCObject* pSender);
        void onFriends(cocos2d::CCObject* pSender);
        void onBack(cocos2d::CCObject* pSender);
        void onClose(cocos2d::CCObject* pSender);
};


#endif