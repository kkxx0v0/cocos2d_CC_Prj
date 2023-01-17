#include "main.h"
#include "AppDelegate.h"
#include "cocos2d.h"

USING_NS_CC;	//using namespace cocos2d;

int APIENTRY _tWinMain(HINSTANCE hInstance,
                       HINSTANCE hPrevInstance,
                       LPTSTR    lpCmdLine,
                       int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

	AllocConsole();
	freopen("CONIN¡ç", "r", stdin);
	freopen("CONOUT¡ç", "w", stdout);
	freopen("CONOUT¡ç", "w", stderr);

    // create the application instance
    AppDelegate app;
    return Application::getInstance()->run();
}
