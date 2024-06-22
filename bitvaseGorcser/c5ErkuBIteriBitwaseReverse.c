#include <stdio.h>

int main() {
	printf("enter number \n");
	int num = 0; 
	scanf("%d", &num);
	printf("enter your index1 \n");
	int i1 = 0;
	int i2 = 0;
	scanf("%d", &i1);
	printf("enter your index2 \n");
	scanf("%d", &i2);
	
	int i_bit = (num >> i1) & 1;
        int j_bit = (num >> i2) & 1;
        int mask = i_bit ^ j_bit;

        // nuyn banna taki erkusy
        num = num ^ (mask << i1) ^ (mask << i2);
        // num = num * !mask + mask*(num^(1<<i1)^(1<<i2));

	if(mask == 0) {
		printf("%d \n", num);
	} else if (mask == 1) {
		num = num ^ (mask << i1) ^ (mask << i2);
	}

	printf("%d", num);
}
