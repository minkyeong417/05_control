#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=59;
	int input;
	int num=0;
	
	do
	{
		printf("input a number:");
		scanf("%d",&input);
		if (input>answer)
		{
			printf("bigger than the answer\n");
		}
		else if (input<answer)
		{
			printf("smaller than the answer\n");
		}
		num++;
	}
	while (input!=answer);
	
	printf("congratulation. trial:%d",num);
	
	return 0;
}











