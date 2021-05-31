/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>

void main(){

  int size,i,j,temp,list[100];
  

  printf("Enter the size of the List: ");
  scanf("%d",&size);

  printf("Enter %d integer values: ",size);
  for(i=0; i<size; i++)
      scanf("%d",&list[i]);
  
  
  for(i=0; i<size; i++){
      for(j=i+1; j<size; j++){
           if(list[i] > list[j])
	   {
               temp=list[i];
               list[i]=list[j];
               list[j]=temp;
           }
      }
  }

  printf("List after sorting is: ");
  for(i=0; i<size; i++)
      printf(" %d",list[i]);

  
}