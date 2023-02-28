
#include <stdio.h>
int main()
{
	printf("Enter the array size:");
	int l;
	printf("Enter the array values: \n");
	int x[l];
	printf("Enter the array index:\n");
	int i;
	scanf("%d%d", &i, &x, &l);
	if(i>0 && i<l)
	{
	printf("%d", x[i]);
	}
	else
	{
		printf("Enter Value between 0 & l");
	}
	return 0;
}
