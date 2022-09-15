#include "Service.h"

Service::Service(View *viewer)
{
    view = viewer;
    lightState = LIGHT_OFF;
}

Service::~Service()
{

}

void Service::updateState(std::string strState)
{
    switch (lightState)
    {
        case LIGHT_OFF:
            if (strState == "modeButton") 
            {
                lightState = LIGHT_1;           // button이 눌리면 OFF에서 LIGHT_1으로 상태를 바꾸고 LIGHT_1이라고 View에 알려줌
                view->setState(lightState);     // LIGHT_1이라고 View에 알려줌
            }
        break;

        case LIGHT_1:
            if (strState == "modeButton")
            {
                lightState = LIGHT_2;
            }
            if (strState == "powerButton")
            {
                lightState = LIGHT_OFF;         // powerButton이 눌리면 off 
            }
            view->setState(lightState);
        break;

        case LIGHT_2:
            if (strState == "modeButton") 
            {
                lightState = LIGHT_3; 
            }
            if (strState == "powerButton")
            {
                lightState = LIGHT_OFF;         // powerButton이 눌리면 off 
            }
            view->setState(lightState);
        break;

        case LIGHT_3:
            if (strState == "modeButton") 
            {
                lightState = LIGHT_4;
            }
            if (strState == "powerButton")
            {
                lightState = LIGHT_OFF;         // powerButton이 눌리면 off 
            }
            view->setState(lightState);
        break;

        case LIGHT_4:
            if (strState == "modeButton") 
            {
                lightState = LIGHT_5;
            }
            if (strState == "powerButton")
            {
                lightState = LIGHT_OFF;         // powerButton이 눌리면 off 
            }
            view->setState(lightState);
        break;

        case LIGHT_5:
            if (strState == "modeButton") 
            {
                lightState = LIGHT_OFF;
                
            }
            if (strState == "powerButton")
            {
                lightState = LIGHT_OFF;         // powerButton이 눌리면 off
                 
            }
            view->setState(lightState);
        break;
    }
}