#include <stdio.h>

int main() {
	int a = 1;
	for(int i = 0; i != 3; i++) {
		printf("%.*s\0", (5-a)+i, "                                  ");
		printf("%.*s\n", a, "************************************");
		a = a+2;
	}
	printf("%.*s/|\\\n", 3, "                                  ");
  return 0;
}
