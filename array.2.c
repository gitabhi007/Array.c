/*How to print element of array using pointer*/
#include <stdio.h>
int main()
{
 int a[9],*p,i;
 printf("\nEnter 9 Elements");
 for(i=0;i<9;i++)
 scanf("%d",&a[i]);
 
 p=a;   //Name of array provides base address of array
 printf("\nArrey contain...\n");
 for(i=0;i<9;i++)
 {
   printf("\n%d",*p);
   p++;
 }
 return 0;
 }