#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    char k;
    for ( i = 1; i <= 4; i++)
    {
        printf("\n");
        k='A';

        for ( j = 1; j <= 7; j++)
        {
            if(j>=i && j<=8-i)
            {
              if(j<=4)
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
