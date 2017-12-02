#include<iostream.h>
#include<conio.h>
struct node
{
int data;
node *left;
node *right;
};
node *root=NULL;
node *create(node *);
node *display(node *);
void preorder(node *temp);
void postorder(node *temp);
void inorder(node *temp);

void main()
{
int choice;
clrscr();
do
{
cout<<"\nMain menu\n";
cout<<"1. Create a binary tree\n2. Display the tree\n3. Exit\n";
cout<<"Enter your choice";
cin>>choice;
cout<<"\n\n";
switch(choice)
{
case 1:
root=create(root);
break;
case 2:
root=display(root);
break;
case 3:
break;
}
}while(choice!=3);
}

node *create(node *root)
{
node *new_node=NULL,*temp=NULL,*parent=NULL;
int val;
cout<<"Enter the data or enter -1 to exit:\n";
cin>>val;
while(val!=-1)
{
new_node=new node();
new_node->data=val;
if(root==NULL)
{
root=new_node;
new_node->left=NULL;
new_node->right=NULL;
}
else
{
temp=root;
while(temp!=NULL)
{
parent=temp;
if(val<temp->data)
temp=temp->left;
else
temp=temp->right;
}
if(val<parent->data)
{
parent->left=new_node;
new_node->left=NULL;
new_node->right=NULL;
}
else
{
parent->right=new_node;
new_node->left=NULL;
new_node->right=NULL;
}
}
cout<<"Enter the data or enter -1 to exit:\n";
cin>>val;
}
cout<<"Created Successfully\n";
return root;
}


node *display(node *root)
{
int choice1;
cout<<"\nDisplay Menu\n";
cout<<"1. Pre-order\n2. In-order\n3. Post-Order\n4. Exit\n";
cout<<"Enter your choice: ";
cin>>choice1;
switch(choice1)
{
case 1:
cout<<"The Pre-order traversal is: ";
preorder(root);
break;
case 2:
cout<<"The In-order traversal is: ";
inorder(root);
break;
case 3:
cout<<"The Post-order traversal is: ";
postorder(root);
break;
case 4:
break;
}
cout<<"\n";
return root;
}

void preorder(node *temp)
{
if(temp!=NULL)
{
cout<<temp->data<<"\t";
preorder(temp->left);
preorder(temp->right);
}
}

void inorder(node *temp)
{
if(temp!=NULL)
{
inorder(temp->left);
cout<<temp->data<<"\t";
inorder(temp->right);
}
}

void postorder(node *temp)
{
if(temp!=NULL)
{
postorder(temp->left);
postorder(temp->right);
cout<<temp->data<<"\t";
}
}