#include <stdio.h>
#include <sys/ptrace.h>
#include <unistd.h>

volatile int gdb_attached = 0;

int main() {
  while (gdb_attached == 0)
    sleep(1);
  int a = 2;
  int b = 8;
  int c = a + b;
  printf("a = %d, b = %d, c = %d\n", a, b, c);
  return 0;
}
