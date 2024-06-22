#include <stdio.h>

// 1 eri qanaky hashvel

int main() 
{
	int num;
	scanf("%d", &num);

	/*
	tarberak 1 
	int result = (num>>0 & 1) + (num>>1 & 1) +  (num>>2 & 1) + (num>>3 & 1)  + (num>>4 & 1) + (num>>5 & 1) + (num>>6 & 1) + (num>>7 & 1);
	printf ( "%hhu\n", result );

 	*/

  	
 	// int num = 15;
	/* tarberak 2 */
  	num = num - ((num >> 1) & 0x55555555);
  	num = (num & 0x33333333) + ((num >> 2) & 0x33333333);
  	num = (num + (num >> 4)) & 0x0F0F0F0F;
  	num = num + (num >> 8);
  	num = num + (num >> 16);
  	num &= 0x0000003F;


	printf("%d", num);        
}
