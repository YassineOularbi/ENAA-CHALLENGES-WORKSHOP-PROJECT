// C program to demonstrate isdigit() 
#include <ctype.h> 
#include <stdio.h> 
  
// Driver Code 
int main() 
{ 
    // Taking input 
    char ch = '6'; 
  
    // Check if the given input 
    // is numeric or not 
    if (isdigit(ch)) 
        printf("Entered character is"
            " numeric character"); 
    else
        printf("Entered character is not"
            " a numeric character"); 
    return 0; 
} 