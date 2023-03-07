// replace perfect squares in upper triangular matrix with their square roots
//replace prime numbers in lower triangular matrix with 0

#include <stdio.h>
#include<math.h>

int main() {
   int a[10][10],i,j,m,k;
   printf("Enter value of m\n");
   scanf("%d",&m);
   printf("Enter the elements\n");
   for (i=0;i<m;i++){
       for (j=0;j<m;j++){
           scanf("%d",&a[i][j]);
       }
   }
   printf("the matrix is :\n");
   for (i=0;i<m;i++){
       for (j=0;j<m;j++){
           printf("%d\t",a[i][j]);
       }
       printf("\n");
   }
   float c;
    for (i=0;i<m;i++){
       for (j=0;j<m;j++){
           if(j>i){
               c=sqrt((float)a[i][j]);
               if((c-(int)c)==0){
                   a[i][j]=sqrt(a[i][j]);
               }
           }
           if(j<i){
               int f=0;
               for(k=1;k<=a[i][j];k++){
                   if(a[i][j]%k==0){
                       f++;
                   }
               }
               if(f==2){
                   a[i][j]=0;
               }
           }
       }
    }
    printf("the new matrix is :\n");
   for (i=0;i<m;i++){
       for (j=0;j<m;j++){
           printf("%d\t",a[i][j]);
       }
       printf("\n");
   }
   return 0;

}
