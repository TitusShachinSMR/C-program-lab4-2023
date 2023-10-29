#include<stdio.h>
int main()
{ int i,j,k;
for(i=1;i<=5;i++)
{ for(k=5-i;k>=1;k--)
  {printf(" ");
  }
  for(j=5;j>=1;j--)
  {printf("*");
  }
  printf("\n");
}
	
}
