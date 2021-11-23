#include "UnifiedHeat.h"
#include "../includes.h"

void menuUnifiedHeatCallBack(void)
{
  KEY_VALUES key_num = menuKeyGetValue();
    switch(key_num)
    {
      case KEY_ICON_0:
        infoMenu.menu[++infoMenu.cur] = menuPreheat;
        break;

      case KEY_ICON_1:
        infoMenu.menu[++infoMenu.cur] = menuHeat;
        break;

      case KEY_ICON_2:
        infoMenu.menu[++infoMenu.cur] = menuFan;
        break;

      case KEY_ICON_3:
        for(uint8_t i = 0; i < MAX_HEATER_COUNT; i++)
        {
          heatSetTargetTemp(i, 0);
        }
        break;

      case KEY_ICON_7:
        infoMenu.cur--;
        break;

      default:
        break;
    }
    loopFrontEnd();
}

void menuUnifiedHeat(void)
{
    // 1 title, ITEM_PER_PAGE items (icon + label)
  const MENUITEMS UnifiedHeatItems = {
    // title
    LABEL_UNIFIEDHEAT,
    // icon                         label
    {{ICON_HEAT,                    LABEL_PREHEAT},
     {ICON_HEAT,                    LABEL_HEAT},
     {ICON_FAN,                     LABEL_FAN},
     {ICON_COOLDOWN,                LABEL_COOLDOWN},
     {ICON_BACKGROUND,              LABEL_BACKGROUND},
     {ICON_BACKGROUND,              LABEL_BACKGROUND},
     {ICON_BACKGROUND,              LABEL_BACKGROUND},
     {ICON_BACK,                    LABEL_BACK},}
  };
  menuDrawPage(&UnifiedHeatItems);

  menuSetFrontCallBack(menuUnifiedHeatCallBack);
}