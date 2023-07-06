#include <stdio.h>
 
int main()
{
    int a[50],i,n,max=0;  
 
     printf("Enter size of array");
    scanf("%d",&n);

     printf("Enter %d elements in the array", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max)
        max=a[i];
    }

    
        printf("Largest elements present in given array:%d\n  ", max);
    

    return 0;
}