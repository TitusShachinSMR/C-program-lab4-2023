#include<stdio.h>
int main()
{ int m,j,n,k;
printf("please enter the rows");
scanf("%d",&n);
for(m=n;m>0;m--)
{ for(j=n-m;j>=1;j--)
{printf(" ");
}
for(k=2*m-1;k>=1;k--)
{printf("*");
}
printf("\n");
}
}
