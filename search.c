#include <stdio.h>

int main()

{

  int array[100], search, i, n;

  printf("Enter number of elements in array");

  scanf("%d", &n);

  printf("Enter %d integers", n);

  for (i = 0; i< n;i++)

    scanf("%d", &array[i]);

    printf("Enter a number to search");

    scanf("%d", &search);

  for (i=0;i<n;i++)

  {

    if (array[i] == search) 

     {

      printf("%d is present at location %d", search, i+1);

      break;

     }
  }

  if (i == n)

    printf("%d is not present in the array", search);

  return 0;

}
