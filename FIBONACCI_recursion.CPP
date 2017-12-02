#include<iostream.h>
#include<conio.h>

int fibo(int n)
{
   if((n==1)||(n==0))
   {
     return n;
   }
   else
   {
    return(fibo(n-1)+fibo(n-2));
   }
}
int main()
{
   clrscr();
   int n,i;
   cout<<"Enter positive number for fibonacci series: "<<endl;
   cin>>n;
   cout<<endl<<"fibonacci series is:"<<endl;
   for(i=0;i<n;i++)
   {
     cout<<"  "<<fibo(i);
   }
   getch();
}