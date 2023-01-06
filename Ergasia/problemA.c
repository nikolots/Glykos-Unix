#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

int	b;
int	n;
int	z;
int	w;
int	i;
int	k;
int	v;
int	length;
char	seq[5000];

printf("Enter 5' - 3' DNA sequence:\n");

scanf("%s", seq);

length = strlen(seq);

w = 0;
z = 0;
b = 0;

for ( n = 0 ; n < length ; n++ )
{
	if (seq[n] == 'A' || seq[n] == 'G' || seq[n] == 'C' || seq[n] == 'T')
	{
		b++;
	}
}

if ( b == length )
{
	for ( i = 0 ; i < length ; i ++ )
	{
		if (seq[i] == 'A' && seq[i+1] == 'T' && seq[i+2] == 'G')
		{
			printf("\n");
			
			printf("Start codon:		 %c%c%c %d - %d\n", seq[i], seq[i+1], seq[i+2], i+1, i+3);	
			
			w++;	

			for ( k = i ; k <= length - 2 ; k += 3 )
			{
				if((seq[k] == 'T' && seq[k+1] == 'A' && seq[k+2] == 'G') || (seq[k] == 'T' && seq[k+1] == 'A' && seq[k+2] == 'A') || (seq[k] == 'T' && seq[k+1] == 'G' && seq[k+2] == 'A'))
				{
					printf("Termination codon:	 %c%c%c %d - %d\n", seq[k], seq[k+1], seq[k+2],  k+1, k+3);
				
					z++;

					printf("Sequence:	  	 ");

					for ( v = i ; v <= k+2 ; v++ )
					{
						printf("%c", seq[v]);
					}
			
					printf("\n");
				
					break;
				}
			}
			i = k + 2 ; 
		}
	
	}	

	if ( w == 0 )
	{
		printf("\n");
		printf("No starting codons were found.\n");
	}

	if ( w == z && w != 0 && w != 1 )
	{
		printf("\n");
		printf("%d coding sequences were found.\n", w);
	}

	if ( w == 1 && z == 1 )
	{
		printf("\n");
		printf("%d coding sequence was found.\n", w);
	}

	if ( w != z && w != 0 )
	{
		printf("Termination codon:	 Not found.\n");

		printf("\n");

		if ( z == 1 )
		{
	
			printf("%d coding sequence was found.\n", z);
	
			printf("Total number of starting codons: %d\n", w);

			printf("Total number of terminating codons: %d\n", z);
		}
		if ( z != 1 )
		{
			printf("%d coding sequences were found.\n", z);

			printf("Total number of starting codons: %d\n", w);

			printf("Total number of terminating codons: %d\n", z);
		}
	}

}
else
{
	printf("\n");
	
	printf("Invalid sequence.\n");
}

printf("\n");

}

