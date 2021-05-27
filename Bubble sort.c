/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,temp,a[5]={1,2,7,4,3};
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]>a[i])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
            
        }
        printf("printing sorted elements:");
        for(i=0;i<5;i++)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}
