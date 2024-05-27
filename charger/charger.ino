/**
 * @file      charger.ino
 * @author    Duven
 * @license   MIT
 * @date      2024-31-05
 *
 */
#include <LilyGo_AMOLED.h>
#include <LV_Helper.h>
#include "ui.h"

LilyGo_Class amoled;


void setup()
{
    Serial.begin(115200);

    bool rslt = false;

    // Begin LilyGo  1.47 Inch AMOLED board class
    //rslt = amoled.beginAMOLED_147();


    // Begin LilyGo  1.91 Inch AMOLED board class
    //rslt =  amoled.beginAMOLED_191();

    // Begin LilyGo  2.41 Inch AMOLED board class
    //rslt =  amoled.beginAMOLED_241();

    // Automatically determine the access device
    rslt = amoled.begin();

    if (!rslt) {
        while (1) {
            Serial.println("The board model cannot be detected, please raise the Core Debug Level to an error");
            delay(1000);
        }
    }

    beginLvglHelper(amoled);

    ui_init();

}


void loop()
{
    lv_task_handler();
    delay(5);
}
