typedef struct
{
  // IN
  int u;
  int u_h;
  int u_l;
  int v_h;
  int v_l;

  // OUT
  int v;
  int qbad;
} AnalogIn;

void AnalogIn_init(AnalogIn *this, int u_h, int u_l, int v_h, int v_l);
void AnalogIn_run(AnalogIn *this, int u);
