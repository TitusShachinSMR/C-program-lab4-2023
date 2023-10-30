#include<stdio.h>
int main()
{ int i,j,n,s;
printf("enter the starting integer:");
scanf("%d",&s);
printf("enter ending row");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=i;j++)
{printf("%d",s);
} ++s;
printf("\n");
} --s;
for(i=1;i<=n;i++)
{ for(j=n+1-i;j>=1;j--)
{printf("%d",s);
} --s;printf("\n");
}
}
