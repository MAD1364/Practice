//#include <avr/io.h>
//#include <avr/pgmspace.h>
//#include <util/crc16.h>
#include <stdio.h>

#define foowithdebug(x) (x) < 10 ? (x+x) : (x-2*x)
#define foo(a,b) (a*b)

int main(void)
{
	//#ifdef DEBUG
	    printf("7 + 7 = %d", foowithdebug(7));
	//#else
	    printf("7 * 14 = %d", foo(7,14));
	//#endif
    /* Replace with your application code */
    while (1)
    {
    }
}