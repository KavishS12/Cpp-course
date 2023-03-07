#include<stdio.h>
void main()
{
   int a,b,c,d,e,f;
   a=sizeof(int);
   b=sizeof(char);
   c=sizeof(float);
   d=sizeof(double);
   e=sizeof(long int);
   f=sizeof(long double);

   printf("size of int %d \n",a);
   printf("size of char %d \n",b);
   printf("size of float %d \n",c);
   printf("size of double %d \n",d);
   printf("size of long int %d \n",e);
   printf("size of long double %d \n",f);
}

