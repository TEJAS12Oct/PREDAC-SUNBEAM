#include<stdio.h> 
#define ROW 3
#define COL 3 
int main()
{
    
    int arr[ROW][COL] = {1,2,3};
    int sum = 0; 
    int i,j; 

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            sum = sum + arr[i][j]; 
        }
    } 

    printf("%s (%d) : sum = %d\n",__FILE__,__LINE__,sum);
    printf("Compiled on : %s %s\n",__DATE__,__TIME__);  


    return 0;
}

//gcc Day12_16.c -E -o Day12_16.i     