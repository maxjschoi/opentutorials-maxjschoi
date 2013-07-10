#include<stdio.h>
int main()
{
	int USD;
	int KOR;

	printf("input USD : ");
	scanf("%d",&USD);

	KOR = USD*1000;

	printf("output KOR : %d \n", KOR);
	
	return 0;
}

