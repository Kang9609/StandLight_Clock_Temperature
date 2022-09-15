#include "TempHumidView.h"

TempHumidView::TempHumidView(LCD *Lcd)
{
    this->lcd = Lcd;
}

TempHumidView::~TempHumidView()
{

}

void TempHumidView::setTempHumidData(float temp, float humid)
{
    char buff[30];
    sprintf(buff, "  %.1fC", temp);
    lcd->WriteStringXY(0, 8, buff);
    sprintf(buff, "%.1f%%", humid);
    lcd->WriteStringXY(1, 10, buff);
    printf("%s\n",buff);
}