#ifndef __MYLEVELSLAYER_H__
#define __MYLEVELSLAYER_H__ 

#include "../gd.h"

class MyLevelsLayer : public cocos2d::CCLayer, public TextInputDelegate {
public:
    virtual bool init();
    virtual void keyBackClicked();
    //void setupLevelBrowser();
    void onNew(cocos2d::CCObject* pSender);
    void onBack(cocos2d::CCObject* pSender);
};

#endif