#ifndef __MENULAYER_H__
#define __MENULAYER_H__

#include "../gd.h"

	class FLAlertLayerProtocol;

	class MenuLayer : public cocos2d::CCLayer, public FLAlertLayerProtocol, public GooglePlayDelegate {
	public:
		static MenuLayer* node();
		static cocos2d::CCScene* scene(bool options) ;
		virtual bool init();
		virtual void keyBackClicked();
		virtual void keyDown(cocos2d::enumKeyCodes key) ;
		virtual void googlePlaySignedIn();
		virtual void FLAlert_Clicked(FLAlertLayer* alert, bool btn2);
		void onFacebook(CCObject* pSender);
		void onEveryplay(CCObject* pSender);
		void onMoreGames(CCObject* pSender);
		void onMyProfile(CCObject* pSender);
		void onFreeLevels(CCObject* pSender);
		void onGameCenter(CCObject* pSender);
		void onNewgrounds(CCObject* pSender);
		void onFullVersion(CCObject* pSender);
		void onAchievements(CCObject* pSender);
		void onOptionsInstant(CCObject* pSender);
		void onGooglePlayGames(CCObject* pSender);
		void onPlay(CCObject* pSender);
		void onQuit(CCObject* pSender);
		void onDaily(CCObject* pSender);
		void onStats(CCObject* pSender);
		void onGarage(CCObject* pSender);
		void onRobTop(CCObject* pSender);
		void onCreator(CCObject* pSender);
		void onOptions(CCObject* pSender);
		void onTrailer(CCObject* pSender);
		void onTwitter(CCObject* pSender);
		void onYouTube(CCObject* pSender);
	};


#endif