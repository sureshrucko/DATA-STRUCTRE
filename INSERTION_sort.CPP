#include<iostream.h>
#include<conio.h>
int main()
{
    int i,size,a[30];
    clrscr();
    cout<<"Enter the size of array:";
    cin>>size;
   ;

    for(i=0;i<size;i++)
    {
     cout<<"Enter the index "<<i+1<<" element:";
	cin>>a[i];
    }

    for(i=1;i<=size-1;i++)
    {
	int temp=a[i];
	int j=i-1;

	while((temp<a[j])&&(j>=0))
	{
	    a[j+1]=a[j];    //moves element forward
	    j=j-1;
	}

	a[j+1]=temp;    //insert element in proper place
    }

    cout<<"after insertion Sort,array values are :"<<endl;
    for(i=0;i<size;i++)
    {
	cout<<a[i]<<" ";
    }
    getch();
}