#include<stdio.h>
int main()
{ int i,j,k,l,m,n;
for(i=1;i<=4;i++)
{ for(j=i;j>=1;j--)
{printf("*\t");
}
for(k=10-2*i;k>=1;k--)
{printf("\t");
}
for(l=i;l>=1;l--)
{printf("*\t");
}
printf("\n");
}
for(m=2;m>=1;m--)
{for(n=10;n>=1;n--)
{printf("*\t");
}
printf("\n");
}
for(i=4;i>=1;i--)
{for(j=i;j>=1;j--)
{printf("*\t");
}
for(k=2*(5-i);k>=1;k--)
{printf("\t");
}
for(l=i;l>=1;l--)
{printf("*\t");
}
printf("\n");
}

 
}
