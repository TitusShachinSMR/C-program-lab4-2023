#include<stdio.h>
int main()
{ int i,j,s=65;
for(i=1;i<=5;i++)

{ for(j=i;j>=1;j--)
{printf("%c",s);
}
++s;
printf("\n");
}
}
