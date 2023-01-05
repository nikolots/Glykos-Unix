#include <stdio.h>
#include <math.h>

int main()
{

	char	 k;
	float 	 x;
	float	 y;
	float	 a;

	y =  0;
	x =  0;
	while( scanf("%c", &k ) == 1 )
	{
		if ( k == 'c' || k == 'C' || k == 'g' || k == 'G' || k == 'a' || k == 'A' || k == 't' || k == 'T' )
			
			{
				
				y++;
			
			} 		
		
		if ( k == 'c' || k == 'C' || k == 'g' || k == 'G' )
			
			{
			
				x++;
			
			}

	}
	
	a = ( x / y ) * 100;

	printf("GC percentage : %f\n", a);

}

