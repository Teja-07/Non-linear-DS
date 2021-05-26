/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int i,j,first,middle,last,sElement,list[10],size;
    printf("Enter the size of the list:");
    scanf("%d",&size);
    printf("Enter the %d integer values:");
    for(i=0;i<size;i++)
    scanf("%d",&list[i]);
    printf("Enter the element to be search:");
    scanf("%d",&sElement);
    first=0;
    last=size-1;
    middle=(first+last)/2;
    while(first<last)
    {
        if(list[middle]<sElement)
        first=middle+1;
        else if(list[middle]==sElement)
        {
        printf("Element is found at %d index",middle);
        break;
        }
    else
        last=middle-1;
        middle=(first+last)/2;
    }
    if(first>last)
    printf("Element is not found!!");
}