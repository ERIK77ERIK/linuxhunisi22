#include <stdio.h>

int main()
{
/*
	// tarberak 1
	int number, a = 0, res = 0;
	printf("Enter number : \n");
	scanf("%d", &number);

	// ete a poxenq 32, 32 bitum reverse kani
	while(a < 8) {

	res = res << 1;
	res = res ^ (number & 1);
	number = number >> 1;
	a = a + 1;

	}

	printf("%d \n", res);
*/

	// tarberak 2
	int num;
        printf("Enter number : \n");
        scanf("%d", &num);
	
	// tivy shift aneluc i-ov u ev anelov 1i het imanum enq 0a te 1
	// int i_bit = (num >> i) & 1;
	// int j_bit = (num >> j) & 1;
	// int mask = i_bit ^ j_bit; // ete 2nel 0en kam erkusnel 1 mask=0, ete tarber en mask=1 
	// num = num * !mask + mask*(num^(1<<i)^(1<<j));
	// printf("%d \n", num);
	

	// 2**30=1073741824
	// 2**30 reverse = 2
	 for(int i=0,j=31; i<=15,j>=16;++i,--j) {
		int i_bit = (num >> i) & 1;
        	int j_bit = (num >> j) & 1;
        	int mask = i_bit ^ j_bit;

		// nuyn banna taki erkusy
		num = num ^ (mask << i) ^ (mask << j);
	        // num = num * !mask + mask*(num^(1<<i)^(1<<j));
	 };
	
	printf("%d \n", num);
	
}
