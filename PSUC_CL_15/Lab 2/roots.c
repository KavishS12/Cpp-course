#include<stdio.h>
#include<math.h>
int main()
{
int d;
float a,b,c,root1,root2,re,im, disc;
printf("Enter the values of a,b,c");
scanf("%f %f %f",&a,&b,&c);
disc=b*b-4*a*c;
printf("\nDiscriminant= %f",disc);
if(disc<0) d=1;
if(disc==0) d=2;
if(disc>0) d=3;
switch(d) {
case 1:
printf("imaginary roots\n");
re= - b / (2*a);
im = pow(fabs(disc),0.5)/(2*a);
printf("root1=%.2f+%.2fi and root2 =%.2f-%.2fi\n", re,im,re,im);
break;
case 2:
printf("Real & equal roots\n");
re=-b / (2*a);
printf("Root1 and root2 are %.2f\n",re);
break;
case 3:
printf("Real & distinct roots\n");
printf("Roots are");
root1=(-b + sqrt(disc))/(2*a);
root2=(-b - sqrt(disc))/(2*a);
printf("Root1 = %.2f and root2 =%.2f\n",root1,root2);
break;
} // end of switch
return 0;
} //End of Program
