#include<iostream.h>
#include<conio.h>

int main()
{
    int a[50],size,i;
	clrscr();
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
   cout<<"Enter the array elements: "<<endl;
    for(i=0;i<size;++i)
	cin>>a[i];

    for(i=1;i<size;++i)
    {
	for(int j=0;j<(size-i);++j)
	    if(a[j]>a[j+1])
	    {
	    int temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	    }
    }

    cout<<"Array after bubble sort:"<<endl;
    for(i=0;i<size;++i)
	cout<<" "<<a[i];

    getch();
}