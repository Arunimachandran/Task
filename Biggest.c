#include <stdio.h>

int main()

 {
    int a[] = {1, 2, 4, 32, 12, 6, 8};

    int size = sizeof(a) / sizeof(a[0]);

    int max = a[0];
  
    int min = a[0];  

   
    for (int i = 1; i < size; i++) 
    {

        if (a[i] > max) 

        {
            max = a[i];

        }

        if (a[i] < min)
 
        {

            min = a[i];

        }
    }

    printf("The biggest number is %d", max);

    printf("The smallest number is %d", min);

    return 0;
}
