#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

// HelloWorld ��
class HelloWorld : public cocos2d::Layer
{
public:
	
    static cocos2d::Scene* createScene();	//��������	
    virtual bool init();					//��ʼ�������Ĳ�	
	CREATE_FUNC(HelloWorld);				// ������
	//static HelloWorld* create()			// ������
    void menuCloseCallback(cocos2d::Ref* pSender);   
};

#endif // __HELLOWORLD_SCENE_H__