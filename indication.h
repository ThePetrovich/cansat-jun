#ifndef INDICATION_H
#define INDICATION_H

#define S_DATA 9
#define S_CLK 10
#define S_SCLK 11
#define S_MR 5
#define BAT A0
#define LED1 13

#include <Arduino.h>

void blink();
void shiftOut(byte data);
void handleIndicators();

#endif