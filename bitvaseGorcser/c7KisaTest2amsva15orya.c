#include <stdio.h>

int main()
{

	unsigned int x = 0;
	if(x == 0) {
		--x;
	} else {
		++x;
	};
	
	printf("%u \n", x); // 4294967295 
 

	if(x < 0) {
		printf("barev false");
	} else {
		printf("hajox true");  // ktpi hajox true
	};
	
	int y = (-1 <= 0);  // y = 1; true
	int z = (x < 0);   // z = 0; false
	printf("My result  -1 <= 0 %d, , my z  x<=0 %d", y, z);
}
