#include <stdio.h>
#include "tests.h"
#include "stair_f.h"

int tests_run = 0;

int foo = 7;
int bar = 4;

static char * test_stairF() {
  //StairF stair01;
  //mu_assert("error, foo != 7", foo == 7);
  return 0;
}

static char * all_tests() {
  mu_run_test(test_stairF);
  return 0;
}

int main(int argc, char **argv) {
  char *result = all_tests();
  if (result != 0) {
    printf("%s\n", result);
  }
  else {
    printf("ALL TESTS PASSED\n");
  }
    printf("Tests run: %d\n", tests_run);

  return result != 0;
}
