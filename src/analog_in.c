#include "analog_in.h"

void AnalogIn_init(AnalogIn *this, int u_h, int u_l, int v_h, int v_l)
{
  this->u_h = u_h;
  this->u_l = u_l;
  this->v_h = v_h;
  this->v_l = v_l;
}
void AnalogIn_run(AnalogIn *this, int u)
{
  this->u = u;
  this->v = u / 3;
}
