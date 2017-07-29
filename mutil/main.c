#include "hello_fn.h"

int main( void )
{
	hello("wordk");
	return 0;
}



/*
 * > gcc -Wall hello_fn.c  main.c -o new1
 *
 *
 *
 * > gcc -Wall -c hello_fn.c -o hello_fn.o
 * > gcc -Wall -c main.c -o main.o
 * > gcc -Wall main.o hello_fn.o newHello
 *
 * changed main.c 
 *
 * > gcc -Wall -c mian.c -o main_2.o
 * > gcc -Wall main_2.c hello_fn.o new2Hello
 * */


/*
	.so
	> gcc -fPIC -c hello_fn.c
	> gcc -shared -fPIC hello.o -o libhello.so
	> gcc -Wall -L. main.c -o h3 -lhello

	export LD_LIBRARY_PATH=.
	> ldd h3
*/

