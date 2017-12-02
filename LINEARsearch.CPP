#include<iostream.h>
#include<conio.h>

class lsearch

{

  public:

  int data[10],n,key;

  void getdata();

  void display();

};

void lsearch :: getdata()

{

  cout<<"\nEnter the length of the array:";

  cin>>n;

  for(int i=0;i<n;i++)

  {

   cout<<"\nEnter the element in the "<<(i+1)<<" position of the array:";

   cin>>data[i];

  }

  cout<<"\nEnter the key to find the element in the array:";

  cin>>key;

}

void lsearch :: display()

{

  int flag=0;

  for(int i=0;i<n;i++)

   {

     if(key == data[i])

     {

       cout<<"\n\nThe element "<<key<<" is present in the position "<<(i+1)<<" of the array";

       flag++;

     }

   }

   if(flag==0)

    cout<<"\nGiven key "<<key<<" is not present in the array";

}

int main()

{

  clrscr();

  lsearch ob;

  ob.getdata();

  ob.display();

  getch();

}

