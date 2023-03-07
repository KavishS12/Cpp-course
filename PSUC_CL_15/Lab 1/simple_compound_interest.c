#include<stdio.h>
#include<math.h>
void main()
{
    float P,N,R;
    printf("enter the principle amount");
    scanf("%f",&P);
    printf("enter the time amount");
    scanf("%f",&N);
    printf("enter the rate amount");
    scanf("%f",&R);
    float SI=P*N*R/100;
    float CI=(P*pow((1+ (R/100)),N))-P;
    printf("Simple interest is %f \n",SI);
    printf("Compound interest is %f \n",CI);


}


