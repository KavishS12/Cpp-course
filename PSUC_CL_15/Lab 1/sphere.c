#include<stdio.h>
void main()

{
    float rad;
    printf("Input the radius of sphere");
    scanf("%f",&rad);
    float vol=4*3.14*rad*rad*rad/3;
    float area=4*3.14*rad*rad;
    printf("Volume of sphere is %f \n",vol);
    printf("Surface area of sphere is %f \n",area);

}




