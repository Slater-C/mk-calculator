#include <Arduino.h>
#include "stdlib.h"
#include "binary_info.h"
#include <Wire.h>

void command(byte c);
void data(byte d);
void send_packet(byte x);
void output(void);
void blocks(void);
void display_initialize();
void write_character(int row, int column, char c);