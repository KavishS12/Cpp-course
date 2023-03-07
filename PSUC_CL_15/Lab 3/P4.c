#include <stdio.h>

int main()
{
    int num,y=1,ph=0,ch=0,x=0,c;
    do{
        printf ("Enter a number:");
        scanf ("%d",&num);
        if (num==1) x--;
        do{
        if (num%y==0)
            x++;
            y++;
        }
        while(y<=num);
        if (x==2) ph++;
        else if (num!=1) ch++;
        y=1;
        x=0;
    }
    while (num!=-1);
    printf("Number of prime numbers entered=%d\n",ph);
    printf ("Number of composite numbers entered=%d",(ch-1));
    return 0;
}


