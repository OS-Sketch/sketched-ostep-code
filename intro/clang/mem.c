#include "common.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "usage: mem <value>\n");
    exit(1);
  }
  int *p;
  p = malloc(sizeof(int));
  assert(p != NULL);
  printf("(%d) addr pointed to by p: %p\n", (int)getpid(), p);
  // assign value to addr stored in p
  *p = atoi(argv[1]);
  while (1) {
    Spin(1);
    *p = *p + 1;
    printf("(%d) value of p: %d\n", getpid(), *p);
  }
  return 0;
}
