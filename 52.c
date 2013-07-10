#include<stdio.h>
int main()
{
	int i;
	int us;
	us = 10;

	printf("입력하고 싶은 숫자를 입력하세요! : ");
	scanf("%d",&i);
	sleep(us);
	
	if(i == 7)
	{
	printf("당신은 행운의 숫자 7을 입력했습니다.\n");
	}
	return 0;
}

