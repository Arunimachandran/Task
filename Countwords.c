#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char str[] = "Hiii Good Morning";  
    int wordCount = 0;  
      
    for(int i = 0; i < strlen(str)-1; i++) 
    {  
          
        if(str[i] == ' ' && isalpha(str[i+1]) && (i > 0)) 
        {  
            wordCount++;  
        }  
    }    

    wordCount++;  
      
    printf("Total number of words in the given string: %d", wordCount);  
   
    return 0;
}