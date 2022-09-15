#ifndef __SERVICE_H__
#define __SERVICE_H__

#pragma once

#include <string>
#include "View.h"
#include "LightState.h"
#include "DHT_data.h"




class Service
{
private:
    int lightState;
    View *view;

public:
    Service(View *viewer);
    virtual ~Service();
    void updateState(std::string strState);
    void updateTempHumid(DHT_Data dhtData);
};

#endif