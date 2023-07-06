#include <stdio.h>
 
int main()
{
  int a, b,temp;
  printf("Enter Value of a ");
  scanf("%d", &a);
  printf("\nEnter Value of b ");
  scanf("%d", &b);
 
  temp = a;
  a = b;
  b = temp;
 
  printf("\nAfter Swapping: a = %d, b = %d",a, b);
  
  return 0;
}