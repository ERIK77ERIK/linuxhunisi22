#include <stdio.h>

int main() {
	char ch = -224;    // 1 byte
	short sh = 1440;  // 2 byte
	int i = 55555;    // 4 byte
	long l = 123; // 8byte (kara 4byte lini)
	long long ll = 1233; // 8 byte
	printf("%c %d %d \n", ch, sh, i); // initialize(skzbnavorel)
	printf("%p \n", &sh); // hascen 

	printf("%d", ch);

	return 0;
}






