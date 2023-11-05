#include<stdio.h>
int main()
{ int i,j,k=1;int n;
 printf("enter the number of rows:\n");
 scanf("%d",&n);int a[n][n];
 for(i=0;i<(n+1)/2;i++)
 {for(j=i;j<=n-1-i;j++)
 {a[i][j]=k++;
 }
 for(j=i+1;j<=n-i-1;j++)
 {a[j][n-i-1]=k++;
 }
 for(j=n-i-2;j>=i;j--)
 {a[n-i-1][j]=k++;
 }
 for(j=n-i-2;j>=i+1;j--)
 {a[j][i]=k++;
 }
 }
 for(i=0;i<n;i++)
 {for(j=0;j<n;j++)
 {printf("%2d ",a[i][j]);
 }
 printf("\n");
 }
}
