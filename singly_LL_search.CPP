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
	void search();
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
void single_llist::search()
{   struct node *pointer;
    int data,pos=0;
    if(begin==NULL)
    {
       cout<<"linked list is empty"<<endl;
    }
	cout<<"Enter the value to be searched: ";
    cin>>data;
    pointer=begin;
    while(pointer!=NULL)
    {
	 pos++;
     if(pointer->info==data)
     {
      cout<<"Element"<<data <<" is found at node:"<<pos<<endl;
      exit(0)  ;
     }
     else
     {
     pointer =pointer->next;
     }
    }
    cout<<"Element not found in the linked list"<<endl;

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
main()
{
	clrscr();
    int choice, nodes, element, position, i;
    single_llist sl;
    begin = NULL;
    while (1)
    {
        cout<<endl<<"---------------------------------"<<endl;
        cout<<endl<<"Operations on singly linked list"<<endl;
        cout<<endl<<"---------------------------------"<<endl;
        cout<<"1.Insert Node IN LINKED LIST"<<endl;
        cout<<"2.Search Element"<<endl;
        cout<<"3.Display Linked List"<<endl;
        cout<<"4.Exit "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Inserting Node at Beginning: "<<endl;
            sl.insert_begin();
            cout<<endl;
            break;
        case 2:
            cout<<"Search element in Link List: "<<endl;
            sl.search();
            cout<<endl;
            break;
        case 3:
            cout<<"Display elements of link list"<<endl;
            sl.display();
            cout<<endl;
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