#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// ½Ç½À 3
int main(int argc, char *argv[]) 
{
	int i=0, meter;
	
	while (i < 3)
	{
		meter=i*1609;
		printf("%d mile is %d meter.\n", i, meter);
		i++;
	}
}


 
