/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void inorder(struct node *root)
{
    if(root)
    {
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
    }
}

void main()
{
    int n,i;
    struct node *p,*q,*root;
    printf("Enter the nodes to be insert:");
    scanf("%d",&n);
    printf("please enter the numbers:");
    for(i=0;i<n;i++)
    {
        p=(struct node*)malloc(sizeof(struct node*));
        p->left=NULL;
        p->right=NULL;
        if(i==0)
        {
            root=p;
        }
        else
        {
            q=root;
            while(1)
            {
                if(p->data >q->data)
                {
                    if(q->right=NULL)
                    {
                    q->right=p;
                    break;
                    }
                    else
                    q=q->right;
                }
                else
                {
                    if(q->left=NULL)
                    {
                    q->left=p;
                    break;
                    }
                    else
                    p=p->left;
                }
            }
        }
        printf("Binary search tree nodes in inorder traversal:");
        inorder(root);
        printf("\n");
    }
}
