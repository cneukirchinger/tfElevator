#include <stdio.h>
#include "analog_in.h"
#include "stair_f.h"

int main()
{
  AnalogIn lis01;
  StairF stair01;

  AnalogIn_init(&lis01, 1800, 0, 90, 0);
  StairF_init(&stair01, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);

  AnalogIn_run(&lis01, 800);
  StairF_run(&stair01, lis01.v);

  printf("lis01 u: %i\n", lis01.u);
  printf("lis01 v: %i\n", lis01.v);
  printf("stair01 u: %i\n", stair01.u);
  printf("stair01 v: %i\n", stair01.v);

}
