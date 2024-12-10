#include <stdio.h>
int a=100000;
char b='H';
long c= 900000000;
float d= 3.14;
short e= 100;
int main() {
	printf("int: %d \n",a);
	printf("char: %c \n",b);
	printf("long: %ld \n",c);
	printf("float: %.2f \n",d);
	printf("short: %d",e);
	return 0;
}
