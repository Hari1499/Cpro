#include<stdio.h>

int main()
{
	float u,l=0,num,g;
	scanf("%f",&num);
	u=num;
	while(!((g*g-num<0.0001&&g*g-num>0)||(num-g*g<0.0001&&num-g*g>0)||(g*g==num)))
	{
		g=(u+l)/2;
		if(g*g<num)l=g;
		if(g*g>num)u=g;
		printf("%f\n",g);
	}
	printf("%f\n",g);
	return 0;
}
