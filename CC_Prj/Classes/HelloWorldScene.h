#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

// HelloWorld 层
class HelloWorld : public cocos2d::Layer
{
public:
	
    static cocos2d::Scene* createScene();	//创建场景	
    virtual bool init();					//初始化创建的层	
	CREATE_FUNC(HelloWorld);				// 创建层
	//static HelloWorld* create()			// 创建层
    void menuCloseCallback(cocos2d::Ref* pSender);   
};

#endif // __HELLOWORLD_SCENE_H__