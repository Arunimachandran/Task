#include <stdio.h>  
 
void main()  
{  
    int i, j, rows, k;  
    printf (" Enter the number of rows: \n ");  
    scanf("%d", &rows);   
     
    for (i = 1; i <= rows; i++)   
    {  
        for (j = 1; j <= i; j++)   
        {  
            printf(" ");   
        }  
        for (k = i; k <= rows; k++)  
        {  
            printf("*");  
        }  
        printf ("\n");   
    }  
   
}