#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int sumarr[100] ;
    int len = sizeof(arr)/4;
    int locmax= 0 , glmax = 0;
    int sum = 0, temp = 0;
    for ( int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            for(int k = i ; k<=j ; k++)
            {
                printf("%d,\t", arr[k]);
                sum += arr[k];
                
            }
            printf("\n");   
            printf("sum :: %d\n", sum); 
            
            sum = 0 , temp = 0;        
            
        }    
    }
    
    getch();
    return 0;
}