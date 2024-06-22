/*
#include <stdio.h>

int main(void) {
  int dogs;
  
  printf("How many dogs do you have?\n");
  scanf("%d", &dogs);
  printf("So you have %d dog(s)!\n", dogs);

  return 0;
}

*/

// #include <stdio.h> // not library, but a header file
#define NUM 10
#include <stdio.h>

int main()
{
//	char ch;
//	scanf("%d", &ch);
//	printf("character is %c \n", ch);

 	int x;
	// printf("%d", NUM);	
 	int y = NUM;
	// printf("%d", y);
	printf("enter the name");
	scanf("%d", &x);
	printf("x = %d, y = %d", x, y);

	return 0;
}


// gcc file.c -o  - chka voncor
// gcc file.c -S  - file.s , vory asemblerna
// gcc file.c -E  - preprocessing-i puly michev, 0 puly
// gcc file.c -c  - binaryan csragir,0 1, file.o 
// man gcc
