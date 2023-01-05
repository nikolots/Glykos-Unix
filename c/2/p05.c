#include <stdio.h>
#include <math.h>

int main()
{

	char k;
	int  x;

	x = 0;
	while( scanf("%c", &k ) == 1 )
	{

		if ( k == 'c' || k ==  'C' )
			
			{
				x++;
			}

	}
	
	printf("Total Cs: %d\n", x );

}

