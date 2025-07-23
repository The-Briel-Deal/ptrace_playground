#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include <sys/ptrace.h>
#include <sys/user.h>

volatile int gdb_attached = 0;

int main(int argc, char** argv) {
	// int num = atoi(argv[1]);
  int aNumber = 2;
  int bNumber = 8;
  //while (gdb_attached == 0)
  //  sleep(1);
  int cNumber = aNumber + bNumber;
  // printf("arg = %d\n", num);
  printf("a = %d, b = %d, c = %d\n", aNumber, bNumber, cNumber);
  return 0;
}
