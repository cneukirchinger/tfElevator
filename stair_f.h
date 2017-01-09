typedef struct
{
  // IN
  int u;
  int u0;
  int u1;
  int u2;
  int u3;
  int u4;
  int u5;
  int u6;
  int u7;
  int u8;
  int u9;
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  // OUT
  int v;
  int qbad;
} StairF;

void StairF_init(StairF *this, int u0, int u1, int u2, int u3, int u4, int u5, int u6, int u7, int u8, int u9, int v0, int v1, int v2, int v3, int v4, int v5, int v6, int v7, int v8, int v9);
void StairF_run(StairF *this, int v);
