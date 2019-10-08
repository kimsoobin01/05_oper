#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// ½Ç½À 3
int main(int argc, char *argv[]) 
{
	int answer = 77;
	int input;
	int cnt=0;
	
	printf("Guess a number : ");
	
	do
	{
		scanf("%d", &input);
		if (input<answer)
		{
			printf("low\n");
		}
		else if (input>answer)
		{
		printf("high");
		}
		cnt++;
	}
		while (input != answer);

	printf("Congratulation. trial : %i\n", cnt);
	return 0;
}


 
