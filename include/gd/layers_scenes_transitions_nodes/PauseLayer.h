#ifndef __PAUSELAYER_H__
#define __PAUSELAYER_H__

#include "../gd.h"


	class CCBlockLayer;

	class PauseLayer : public CCBlockLayer {
	protected:
		bool m_bUnknown;
		bool m_bUnknown2;

	public:
		// Platinum SDK 1.1.0 Update
		virtual bool init(bool options)
		virtual void keyBackClicked()
		virtual void keyDown(cocos2d::enumKeyCodes key)
		void createToggleButton(cocos2d::SEL_MenuHandler callback, bool on, cocos2d::CCMenu* menu, std::string caption, cocos2d::CCPoint pos);
   		void onAutoRetry(cocos2d::CCObject* pSender pSender)
		void onNormalMode(cocos2d::CCObject* pSender)
		void onProgressBar(cocos2d::CCObject* pSender)
		void onPracticeMode(cocos2d::CCObject* pSender)
		void onAutoCheckpoints(cocos2d::CCObject* pSender)
		void musicSliderChanged(cocos2d::CCObject* pSender)
		void onEdit(cocos2d::CCObject* pSender)
		void onHelp(cocos2d::CCObject* pSender)
		void onQuit(cocos2d::CCObject* pSender)
		void onTime(cocos2d::CCObject* pSender)
		void onResume(cocos2d::CCObject* pSender)
		void onRestart(cocos2d::CCObject* pSender)
	};


#endif