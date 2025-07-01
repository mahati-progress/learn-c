#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char ch;
    char s[100];
    char sen[100];
     
     scanf(" %c",&ch);
     printf("%c\n",ch);
     
     
     scanf("%s",s);
      printf("%s\n",s);
      
      scanf("\n");
      //the below statement would take input until it gets a \n character
     scanf("%[^\n]%*s", sen);
    

     printf("%s",sen);
   
     
     
    
    
    return 0;
}
 