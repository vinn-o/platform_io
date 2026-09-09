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

void printTask( *parameter){
  while(true){
    Serial.println("Hello");
    vTaskDelay(1000,, portTICK_PERIOD_MS);
  }



void setup(){
  Serial.begin(115200);
  pinMode(led1, OUTPUT);

  xTaskCreate(LedTask, "LED", 1000, NULL , 1, NULL);
  xTaskCreate(printTASK, "SERIAL", 1000, NULL , 1, NULL);
}

