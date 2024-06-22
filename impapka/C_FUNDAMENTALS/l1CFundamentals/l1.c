/*
	 my first program
*/

#include <stdio.h> // preprocessor directive

int main() // entry point (mutqi ket)
{
	int x = 12;
        printf("%d \n", 12);

//        printf("\tsample\tanother \n", x); // .1. .2.
//        printf("\t\asample\tanother \n"); // .3.

	return 0;
}

/*
	orinakner pordseq
	printf("%d   \n", x);
        printf("%d \n", 12);
	printf("%d \n, 12.4);
 	chxangarec guynery
*/

/*
	errorner
	ubuntu@ubuntu:~/impapka/C_FUNDAMENTALS/l1CFundamentals$ gcc l1.c
        l1.c: In function ‘main’:
        l1.c:10:16: warning: multi-character character constant [-Wmultichar]
          10 |         printf('%d \n', x);
             |                ^~~~~~~
        l1.c:10:16: warning: passing argument 1 of ‘printf’ makes pointer from integer without a cast [-Wint-conversion]
          10 |         printf('%d \n', x);
             |                ^~~~~~~
             |                |
             |                int
        In file included from l1.c:5:
        /usr/include/stdio.h:356:43: note: expected ‘const char * restrict’ but argument is of type ‘int’
          356 | extern int printf (const char *__restrict __format, ...);
              |                    ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~
        ubuntu@ubuntu:~/impapka/C_FUNDAMENTALS/l1CFundamentals$ ./a.out
        Segmentation fault (core dumped)

*/
