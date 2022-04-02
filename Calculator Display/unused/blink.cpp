#include <Arduino.h>
#include "stdlib.h"
#include "binary_info.h"

const uint LED_PIN = 25;

// void setup() {
//   // put your setup code here, to run once:

//   _gpio_init(LED_PIN);
//   gpio_set_dir(LED_PIN, GPIO_OUT);

// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   digitalWrite(LED_PIN, 0);
//   delay(3000);
//   digitalWrite(LED_PIN, 1);
//   delay(1000);

//   // gpio_put(LED_PIN, 0);
//   // sleep_ms(250);
//   // gpio_put(LED_PIN, 1);
//   // sleep_ms(1000);

// }

// int main(){

//   _gpio_init(LED_PIN);
//   gpio_set_dir(LED_PIN, GPIO_OUT);

//   while(true){
//     digitalWrite(LED_PIN, 0);
//     delay(500);
//     digitalWrite(LED_PIN, 1);
//     delay(200);
//   }

//   return 0;
// }