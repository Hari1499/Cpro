#include<stdio.h>

int main()
{
	float num,g=1;
	scanf("%f",&num);
	while(!((g*g-num<0.0001&&g*g-num>0)||(num-g*g<0.0001&&num-g*g>0)||(g*g==num)))
	{
		g=(g+num/g)/2;
		printf("%f\n",g);
	}
	printf("%f\n",g);
	return 0;
}
