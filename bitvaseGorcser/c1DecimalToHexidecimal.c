#include <stdio.h>


// 10 akanic 16 akan
int main()
{
	printf("enter your number _ \n");
	unsigned char num = 0;
	scanf("%hhd", &num);

	int b = num >> 4;
	int d = num - (b << 4);

	if(b > 9  && d < 10) {
		printf("%c, %d", b+55, d);
	} 
	
	else if(b < 10 && d > 9) {
		printf("%d, %c", b, d+55);
	} 

	else if(b > 9 && d > 9 ) {
		printf("%c, %c", b+55, d+55);
	} 

	else {
		printf("%d, %d", b, d);
	} 

	/*
	int num = 0;
	scanf("%d", &num);

	int tmp = num >> 4; // dsax 4 bity
	if(tmp > 9) {
		printf("%c", 'A' + tmp % 10);
	} else {
		printf("%d", tmp);
	}
	
	tmp = num && 15; // ach 4 bity
	if(tmp > 9) {
		printf("%c", tmp % 10 + 'A');
	} else {
		printf("%d", tmp);
	}

	*/

}
