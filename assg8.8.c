#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k;
    for ( i = 1; i <= 4; i++)
    {
        printf("\n");
        k=1;

        for ( j = 1; j <= 7; j++)
        {
            if(j>=5-i && j<= 3+i)
            {
              if(j<=4)
              {
                 printf("%d",k);
                 k++;
              }
              else
              {
                 printf("%d",k-2); 
                 k--;
              }
            }  
            else
              printf(" ");

        }
        
    }
    
    return 0;
}
