#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

int	length;
int	i;
char 	seq[5000];
float 	GC = 0;

while( scanf("%s", seq) == 1 );

length = strlen( seq );
		
for ( i=0 ; i < length ;  i++)

	{ 
	
		if (seq[i] ==  'g' || seq[i] == 'G' || seq[i]  == 'c' || seq[i] == 'C')

			{
		
				GC++;

			}
	}


printf("GC content is %f\n", 100*GC/length );
 	
}



