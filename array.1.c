#include <stdio.h>
int main()
{
  int num[3][3],i,j;
  printf("Enter any 9 number\n");
  for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
  {
    scanf("%d",&num[i][j]);
  }
}
printf("Elements are\n");
for(i=0;i<=2;i++)
{
  for (j=0;j<=2;j++)
   {
     printf("%d\t",num[i][j]);
   }
    printf("\n");
  }
  getch();
}

    