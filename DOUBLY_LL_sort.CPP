#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
    struct node *prev;
}*begin;

class double_llist
{
    public:
	void create_list(int value);
	void add_begin(int value);
	void add_after(int value, int position);
	void display_dlist();
	void sort();
	double_llist()
	{
	    begin = NULL;
	}
};


void double_llist::add_begin(int value)
{
    struct node *temp;
    temp = new(struct node);
    temp->prev = NULL;
    temp->info = value;
    temp->next = begin;
    begin->prev = temp;
    begin = temp;
    cout<<"Element Inserted"<<endl;
}

void double_llist::display_dlist()
{
    struct node *q;
    if (begin == NULL)
    {
	cout<<"List empty,nothing to display"<<endl;
	return;
    }
    q = begin;
    cout<<"The Doubly Link List is :"<<endl;
    while (q != NULL)
    {
	cout<<q->info<<" <-> ";
	q = q->next;
    }
    cout<<"NULL"<<endl;
}
void double_llist::sort()
{
     struct node *ptr, *s;
    int value;
    if (begin == NULL)
    {
        cout<<"The List is empty"<<endl;
        return;
    }
    ptr = begin;
    while (ptr != NULL)
    {
	for (s = ptr->next;s !=NULL;s = s->next)
	{
	    if (ptr->info > s->info)
	    {
		value = ptr->info;
		ptr->info = s->info;
		s->info = value;
	    }
	}
	ptr = ptr->next;
    }
}
int main()
{
    clrscr();
    int choice,element,position;
    double_llist dl;
    while (1)
    {
	cout<<endl<<"----------------------------"<<endl;
	cout<<endl<<"Operations on Doubly linked list"<<endl;
	cout<<endl<<"----------------------------"<<endl;
	//cout<<"1.Create Node"<<endl;
	cout<<"1.Add node"<<endl;
	cout<<"2.sort element"<<endl;
	cout<<"3.Display"<<endl;
	cout<<"4.Quit"<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	switch ( choice )
	{
	/*case 1:
	    cout<<"Enter the element: ";
	    cin>>element;
	    dl.create_list(element);
	    cout<<endl;
	    break;*/
	case 1:
	    cout<<"Enter the element: ";
	    cin>>element;
	    dl.add_begin(element);
	    cout<<endl;
	    break;
	case 2:
		dl.sort();
            break;
        case 3:
            dl.display_dlist();
            cout<<endl;
            break;
        
        case 4:
            exit(1);
        default:
            cout<<"Wrong choice"<<endl;
        }
    }
    getch();
}