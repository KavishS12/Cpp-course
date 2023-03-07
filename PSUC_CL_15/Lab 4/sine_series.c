 #include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,store,term,sum;
    int n,i=1;
    printf("Enter number of terms and angle x of sine series respectively\n");
    scanf("%d%f",&n,&x);
    store=x;
    x=x*3.14159/180.0;
    term=x;
    sum=x;
    for(i=1;i<n;i++)
    {
        term=term*((-1)*x*x)/(2*i*(2*i+1));
        sum=sum+term;
    }
    printf("Library value of %2f=%2f",store,sin(x));
    printf("\n sin(%2f)=%2f",store,sum);
    return 0;
}
