#include<stdio.h>
int main()
{
 long pa,p_a;
 int discount ;
 printf("enter purchasing amount\n");
 scanf("%ld",&pa);
 discount=(15*pa)/100;
 printf("\n after discount = %f",discount);
 p_a=pa-discount;
 printf("\n payment amount = %ld",p_a);
return 0; 	
}
