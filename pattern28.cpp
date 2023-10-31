#include<stdio.h>
int main()
{
int i,j,k,l=0;
for(i=1;i<=5;i++)
{l=l+1;
for(j=i-1;j>=1;j--)
{printf(" ");
}
printf("*");
for(k=9-2*i;k>=1;k--)
{printf("-");
}
if(l!=5)
{printf("*");
}
printf("\n");
}

}
