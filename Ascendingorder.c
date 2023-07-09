#include <stdio.h>
void main ()
{
   int a[20];
   int i, j, temp, n;
   printf("enter number of elements in an array");
   scanf("%d", &n);
   printf("Enter the elements");
   for (i = 0; i < n; i++)
      scanf("%d", &a[i]);
   for (i = 0; i < n; i++)
   {
      for (j = i + 1; j < n; j++)
      {
         if (a[i] > a[j])
         {
            temp= a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
   }
   printf("The numbers in ascending order is:");
   for (i = 0; i < n; ++i)
   {
      printf("%d",a[i]);
}
}