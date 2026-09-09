#include <Arduino.h>

int led1 = 2; //pin where buildin LED is connected to

void LedTask( *parameter){
  ledstate = LOW;
  while(true){
    ledstate = !ledstate;                        //task for led
    digitalWrite(led1, ledstate);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}

