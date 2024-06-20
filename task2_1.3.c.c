#include<stdio.h>

main()

{
	float base, hight,area;
	
	printf("enter thr hight=");
	scanf("%f",&hight);
	printf("enter the base =");
	scanf("%f",&base);
	
	area= base * hight/2;
	
	printf("area of tringle is=%.f",area);
	
}