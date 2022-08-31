#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    char k;
    for ( i = 1; i <= 7; i++)
    {
        printf("\n");
        k='A';

        for ( j = 1; j <= 13; j++)
        {
            if(j>=9-i && j<= 5+i)
              printf(" ");
            else  
            {
              if(j<=7)
              {
                 printf("%c",k);
                 k++;
              }
              else
              {  
                if(j==8)
                k='G'; 
                 printf("%c",k-1); 
                 k--;
              }

            }
        }    
        
    }
    
    return 0;
}

