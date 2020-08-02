/*c program for Addition of matrix digonal element*/
#include <stdio.h>
int main()
{
  int num[3][3],i,j,sum;
  sum=0;
  printf("Enter any 9 number\n");
  for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
  {
    scanf("%d",&num[i][j]);
  }
}
printf("Matrix Form\n");
for(i=0;i<=2;i++)
{
  for (j=0;j<=2;j++)
   {
     printf("%d\t",num[i][j]);
     if(i==j)
     {
       sum=sum+num[i][j];
     }
   }
    printf("\n");
  }
  printf("Addition of digonal element %d",sum);
  getch();
}