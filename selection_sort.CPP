
#include<iostream.h>
#include<conio.h>

int main()
{
    int i,size,a[30];
    clrscr();
    cout<<"Enter the size of array:";
    cin>>size;


    for(i=0;i<size;i++)
    {
     cout<<"Enter the index "<<i+1<<" element:";
	cin>>a[i];
    }

    for(i=0;i<size-1;i++)
    {
       int min=a[i];
       int loc=i;
	for(int j=i+1;j<size;j++)
	{
	    if(min>a[j])
	    {
		min=a[j];
		loc=j;
	    }
	}

    int temp=a[i];
	a[i]=a[loc];
	a[loc]=temp;
    }

    cout<<"array after selection sort: "<<endl;
    for(i=0;i<size;i++)
    {
	cout<<a[i]<<" ";
    }

    getch();
}
