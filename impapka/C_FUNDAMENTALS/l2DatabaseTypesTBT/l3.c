#include <stdio.h>

int main()
{
	int i = 97; // 4 byte
	char ch = 'a'; // 1 byte

        short sh = 1440; // 2 byte   // 2**15=32768  2**16-1=2**15+32767=65535   +1
        
	long l = 207; // 4byte, 8byte       // 8 byte  / 2**31-1 = 2147483647
        long long ll = 807; // 8 byte  / 2**63-1 = 9223372036854775807

	float f = 3.14f; // 4 bytes, IEEE 754 32-bit
	double d = 3.14; // f grelu kariq chka vorovhetev default ditarkelu  e vorpes double  // 8 byte, IEEE
 	long double ld = 3.14;  // 16 byte

	
	_Bool b = 14;
	printf("%d \n", b);
	

	printf("%c %d \n", ch, sh);
	printf("%p \n", &sh);

	printf("%ld, %lld \n", l, ll);
	
	return 0;
}


