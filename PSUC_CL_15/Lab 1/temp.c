#include<stdio.h>
void main()
{
    float ctemp,ftemp;
    printf("Enter the temperature in fahrenheit\n");
    scanf("%f",&ftemp);
    ctemp= (float) 5/9*(ftemp-32);
    printf("Temperature in celcius is %f \n",ctemp);
}

