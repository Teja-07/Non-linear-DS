/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int i,j,temp,size,list[10];
    printf("Enter the size of the list:");
    scanf("%d",&size);
    printf("Enter the %d integer values:",size);
    for(i=0;i<size;i++)
    scanf("%d",&list[i]);
    for(i=1;i<size;i++)
    temp=list[i];
    j=i-1;
        while((temp<=list[j])&&(j>0))
        {
        list[j+1]=list[j];
        j=j-1;
        }
        list[j+1]=temp;
    printf("After sorting elements:");
    for(i=0;i<size;i++)
    printf("%d",list[i]);
}