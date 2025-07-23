#include <stdlib.h>

int foo(int variableNum) {
  int aNumber = 2 + variableNum;
	int aNumber2 = aNumber / 2;
  int bNumber = 8 + aNumber2;
  int cNumber = aNumber + bNumber;
  return cNumber;
}

int main(int argc, char** argv) {
	int variableNum = atoi(argv[1]);
  int aNumber = 2 + variableNum;
	int aNumber2 = aNumber / 2;
  int bNumber = 8 + aNumber2;
  int cNumber = aNumber + bNumber;
	int fooNumber = foo(cNumber);
  return fooNumber;
}

