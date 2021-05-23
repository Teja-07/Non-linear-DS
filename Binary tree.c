#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* root=NULL;
int count=0;


struct node *insert(struct node *root,int);
void display(struct node*);

int main()
{
    int value,choice;
    printf("1.insert \n 2.display \n 3.exit:\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("Enter the value ro be insert:\n");
               scanf("%d",&value);
               root=insert(root,value);
               break;
        case 2:display(root);
               break;
        case 3:exit(0);
        printf("Invalid choice!!!wrong selection!!!");
    }

    return 0;
}
struct node*insert(struct node*root,int value)
{
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    if(root==NULL)
    {
        newNode->right=newNode->left=NULL;
        root=newNode;
        count++;
    }
    else
    {
        if(count%2!=0)
        root->left=insert(root->left,value);
        else
        root->right=insert(root->right,value);
    }
    return root;
}
void display(struct node*root)
{
    if(root!=NULL)
    {
        display(root->left);
        printf("%d",root->data);
        display(root->right);
    }
}
