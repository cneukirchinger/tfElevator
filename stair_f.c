#include "stair_f.h"

void StairF_init(StairF *this, int u0, int u1, int u2, int u3, int u4, int u5, int u6, int u7, int u8, int u9, int v0, int v1, int v2, int v3, int v4, int v5, int v6, int v7, int v8, int v9)
{
  this->u0 = u0;
  this->u1 = u1;
  this->u2 = u2;
  this->u3 = u3;
  this->u4 = u4;
  this->u5 = u5;
  this->u6 = u6;
  this->u7 = u7;
  this->u8 = u8;
  this->u9 = u9;
  this->v0 = v0;
  this->v1 = v1;
  this->v2 = v2;
  this->v3 = v3;
  this->v4 = v4;
  this->v5 = v5;
  this->v6 = v6;
  this->v7 = v7;
  this->v8 = v8;
  this->v9 = v9;
}
void StairF_run(StairF *this, int u)
{
  this->u = u;
  this->v = u / 2;
}
