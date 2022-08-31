#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    char k;
    for ( i = 1; i <= 5; i++)
    {
        printf("\n");
        k='A';

        for ( j = 1; j <= 9; j++)
        {
            if(j>=6-i && j<=i+4)
            {
              if(j<=5)
              {
                 printf("%c",k);
                 k++;
              }
              else
              {
                 printf("%c",k-2); 
                 k--;
              }
            }  
            else
              printf(" ");

        }
        
    }
    
    return 0;
}
