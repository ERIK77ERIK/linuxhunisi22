#include <stdio.h>

int main() {
	printf("enter your number \n");
	int num = 0;
	scanf("%d", &num);

	int num2 = num;
	int i = 0;

	while(num != 0) {
		i = (num&1) + i;
		num = num >> 1; 
		// printf("%d", i);
	};

	if(i==1) {
		printf("this number is power 2 %d \n", num2);
	} else {
		printf("this number is not power 2 %d \n", num2);
	};

}
