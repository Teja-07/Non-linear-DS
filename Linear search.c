/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>


int main()
{
    int list[20],i,size,sElement;
    printf("Enter the size of the list:");
    scanf("%d",&size);
    printf("Enter the %d integer values:");
    for(i=0;i<size;i++)
    scanf("%d",&list[i]);
    printf("Enter the element to be search:");
    scanf("%d",&sElement);
    for(i=0;i<size;i++)
    {
        if(sElement=list[i])
        printf("element is found at %d index",i);
        break;
    }
    if(i==size)
    {
        printf("Given element is not found!!!");
    }

    return 0;
}
