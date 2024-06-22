#include <stdio.h>
#include <math.h>

int main()
{
/*
// Arturi gracsy
// tivy XOR aneluc lriv 1eri het shrjuma, aysinqn 1ery dardsnuma 0, 0nery 1
// tivy XOR aneluc 0-i het ban chi poxvum 

	int number = 0;
	scanf("%d", &number); // number = -7; , -7=11111001

	int mask = number >> 31; // 1111111
	// printf("%d \n", mask); // mask = -1

	number = (number ^ mask) - mask; //ete bacasakana mask = -1 inqy tivy shrjuma - a anum -1 aysinqn gwumaruma 1 isk ete drakana mask =a 0 num^mask numy chi poxvum u -a anum 0 tivy mnuma nuyny

	printf("%d \n", number);
	
*/

// im gracsy
 
	// tvi module
        short num;
        printf("barev dsez _ mutqagreq tiv _ \n");
        scanf("%hd", &num);

        short db = ((num >> 15) & 1); // ete drakana db=0, ete bacasakana db=1
        // printf("%d \n", db);

        int hnum = ~num+1;
        //printf("%d ", z); // tvi hakadards tarberaky

        int r = (num * !db) + (hnum * db); // ete drakana mer tivy ktpi ete bacasakana shrjacs gumaracs mek
        

}


