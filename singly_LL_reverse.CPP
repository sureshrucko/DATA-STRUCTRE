#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
}*begin;

class single_llist
{
    public:
	node* create_node(int);
	void insert_begin();
	void reverse();
	void display();
	single_llist()
	{
	    begin = NULL;
	}
};
node *single_llist::create_node(int value)
{
    struct node *temp, *s;
    temp = new(struct node);
    if (temp == NULL)
    {
	cout<<"Memory not allocated "<<endl;
	return 0;
    }
    else
    {
	temp->info = value;
	temp->next = NULL;
	return temp;
    }
}
void single_llist::insert_begin()
{
    int value;
    cout<<"Enter the value to be inserted: ";
    cin>>value;
    struct node *temp, *p;
    temp = create_node(value);
    if (begin == NULL)
    {
	begin = temp;
	begin->next = NULL;
    }
    else
    {
	p = begin;
	begin = temp;
	begin->next = p;
    }
    cout<<"Element Inserted at beginning"<<endl;
}

void single_llist::reverse()
{
    struct node  *pointer1,*pointer2,*pointer3;
  if(begin==NULL)
  {
    cout<<"\n NO free memory";
    exit(0);
  }
  if(begin->next==NULL)
  {
    cout<<"\n Link list is having only one node:";
    exit(0);
  }
  if(begin->next!=NULL)
  {
   pointer1=begin;
   pointer2=begin->next;
   pointer3=pointer2->next;
  }
  if(pointer3==NULL)
  {
   pointer2->next=pointer1;
   pointer1->next=NULL;
   begin=pointer2;
   exit(0);
   }
  else
  {
   pointer1->next=NULL;
  }
  while (pointer3->next!=NULL)
  {
   pointer2->next=pointer1;
   pointer1=pointer2;
   pointer2=pointer3;
   pointer3=pointer3->next;
  }
  {
  pointer2->next=pointer1;
  pointer3->next=pointer2;
  begin=pointer3;
 }

}
void single_llist::display()
{
    struct node *temp;
    if (begin == NULL)
    {
	cout<<"The List is Empty"<<endl;
	return;
    }
    temp = begin;
    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
	cout<<temp->info<<"->";
	temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    clrscr();
    int choice, nodes, element, position, i;
    single_llist sl;
    begin = NULL;
    while (1)
    {
	cout<<"           menu                "<<endl;
	cout<<endl<<"-------------------------"<<endl;
	cout<<"1.Insert Node "<<endl;
	cout<<"2.Display Linked List"<<endl;
	cout<<"3.Reverse Linked List "<<endl;
	cout<<"4.Exit "<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	switch(choice)
	{
	case 1:
	    cout<<"Inserting Node "<<endl;
	    sl.insert_begin();
	    cout<<endl;
	    break;
	case 2:
	 cout<<"displaying linked list"<<endl;
	  sl.display();
	    break;
	case 3:
	    cout<<"Reverse elements of Link List"<<endl;
	    sl.reverse();
	    break;
	case 4:
	    cout<<"Exiting..."<<endl;
	    exit(1);
	    break;
	default:
	    cout<<"Wrong choice"<<endl;
	}
    }
	getch();
}