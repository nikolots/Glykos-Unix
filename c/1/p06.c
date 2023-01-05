#include <stdio.h>
#include <math.h>

int main()
{

float	x;
float	y;

x = 0;
while ( x <= 100.0 )
	{ 
		y = sqrt(x);
		printf("The square root of %f in %f\n", x, y);
		x += 3;
	}

} 



