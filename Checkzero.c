#include <stdio.h>

int main() 
{
    int numberList[] = {2, 0, 4, 3,0, 5};

    int n = sizeof(numberList) / sizeof(numberList[0]);

    int count = 0;

    for (int i = 0; i < n; i++) 
    {
        if (numberList[i] == 0)
        {
            count++;

            if (count > 1)
            {
                printf("The array does not have one and only one zero");
                return 0;
            }
        }
    }

    if (count == 1) 
    {
        printf("The array has one and only one zero");

    } else 
         {
        printf("The array does not have one and only one zero");
       }

    return 0;
}
