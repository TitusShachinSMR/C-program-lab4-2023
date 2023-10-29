#include<stdio.h>
int main()
{ int m,j,n,k;
printf("please enter the rows");
scanf("%d",&n);
for(m=1;m<=5;m++)
{ for(j=n-m;j>=1;j--)
{printf(" ");
}
for(k=m*2-1;k>=1;k--)
{printf("*");
}
printf("\n");
}

}
