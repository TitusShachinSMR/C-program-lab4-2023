#include<stdio.h>
int main()
{int i,j,k;
for(i=1;i<=4;i++)
{ for(j=1;j<=2*i-1;j++)
{ if(j%2==0)
{printf("*");
}
else{printf("%d",i);
}
}
printf("\n");

}
for(i=1;i<=4;i++)
{ for(j=1;j<=9-2*i;j++)
{ if(j%2==0)
{printf("*");
}
else{printf("%d",5-i);
}
}
printf("\n");

}
}
