#include<stdio.h>
int main()
{ int i,j,k;
  for(i=1;i<=5;i++)
  { for(k=i-1;k>=1;k--)
  {printf(" ");
  }
  for(j=6-i;j>=1;j--)
  {printf("*");
  }
  printf("\n");
  
  }
}
