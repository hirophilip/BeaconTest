#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
USING_NS_CC;

class HelloWorld : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
        
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
private:
    void setup();
    void startTapped(MenuItemSprite* sender);
    void stopTapped(MenuItemSprite* sender);
};

#endif // __HELLOWORLD_SCENE_H__
