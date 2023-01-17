#include "AppDelegate.h"
#include "HelloWorldScene.h"

USING_NS_CC;

//�ֱ���
static Size resSize = Size(1080, 600);
// static cocos2d::Size designResolutionSize = cocos2d::Size(480, 320);
// static cocos2d::Size smallResolutionSize = cocos2d::Size(480, 320);
// static cocos2d::Size mediumResolutionSize = cocos2d::Size(1024, 768);
// static cocos2d::Size largeResolutionSize = cocos2d::Size(2048, 1536);

AppDelegate::AppDelegate() {

}

AppDelegate::~AppDelegate() 
{
}

//GL����������
void AppDelegate::initGLContextAttrs()
{
    //red,green,blue,alpha͸����,depth���,stencilģ��
    GLContextAttrs glContextAttrs = {8, 8, 8, 8, 24, 8};

    GLView::setGLContextAttrs(glContextAttrs);
}

//����
static int register_all_packages()
{
    return 0;
}

//Ӧ�ó����Ѿ���ɼ���
bool AppDelegate::applicationDidFinishLaunching() 
{
    // initialize director
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
    if(!glview) 
	{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
		glview = GLViewImpl::createWithRect("CC_Prj", Rect(0, 0, resSize.width, resSize.height));
#else
        glview = GLViewImpl::create("CC_Prj");
#endif
        director->setOpenGLView(glview);
    }

    //����֡����ʾ
    director->setDisplayStats(true);
    //����֡��
    director->setAnimationInterval(1.f / 60.f);

    //������Ʒֱ���
    glview->setDesignResolutionSize(
		resSize.width,
		resSize.height,
		ResolutionPolicy::NO_BORDER);

	/*
    Size frameSize = glview->getFrameSize();
    // if the frame's height is larger than the height of medium size.
    if (frameSize.height > mediumResolutionSize.height)
    {        
        director->setContentScaleFactor(MIN(largeResolutionSize.height/designResolutionSize.height, largeResolutionSize.width/designResolutionSize.width));
    }
    // if the frame's height is larger than the height of small size.
    else if (frameSize.height > smallResolutionSize.height)
    {        
        director->setContentScaleFactor(MIN(mediumResolutionSize.height/designResolutionSize.height, mediumResolutionSize.width/designResolutionSize.width));
    }
    // if the frame's height is smaller than the height of medium size.
    else
    {        
        director->setContentScaleFactor(MIN(smallResolutionSize.height/designResolutionSize.height, smallResolutionSize.width/designResolutionSize.width));
    }
	*/

    register_all_packages();

    Scene* scene = HelloWorld::createScene();
    director->runWithScene(scene);
	// runWithScene ��������һ������

    return true;
}

//Ӧ�ó����Ѿ������̨
void AppDelegate::applicationDidEnterBackground() {
    Director::getInstance()->stopAnimation();

    // if you use SimpleAudioEngine, it must be pause
    // SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
}

//Ӧ�ó��򼴽�����ǰ̨
void AppDelegate::applicationWillEnterForeground() {
    Director::getInstance()->startAnimation();

    // if you use SimpleAudioEngine, it must resume here
    // SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
}
