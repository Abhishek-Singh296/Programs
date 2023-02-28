#include <stdio.h>
int main()
{
	int i;
	scanf("%d", &i);
	if(i<4)
	{
	int x[5]={2,10,15,17,21};
	printf("%d", x[i]);
	}
	else
	{
		printf("Enter Value between 0 & 4:");
	}
	return 0;
}
