#include<stdio.h>

float sqrtfn(int num);

int main()
{
	int num,i,test=1;
	scanf("%d",&num);
	if(num==2)
	{
		printf("PRIME\n");
		return 0;
	}
	for(i=2;i<=sqrtfn(num);i++)
	{
		if(num%i==0)
		{
			test=0;
			break;
		}
	}
	if(test==1)printf("PRIME\n");
	else printf("NOT A PRIME\n");
	return 0;
}

float sqrtfn(int num)
{
	float g=1;
	while(!((g*g-num<0.0001&&g*g-num>0)||(num-g*g<0.0001&&num-g*g>0)||(g*g==num)))g=(g+num/g)/2;
	return g;
}
