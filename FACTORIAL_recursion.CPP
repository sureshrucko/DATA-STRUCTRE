#include<iostream.h>
#include<conio.h>

int factorial(int n)
{
   if(n>1)
       return n*factorial(n-1);
   else
      return 1;
}
int main()
{   clrscr();
    int n;
    cout<<endl<<"enter a positive integer:"<<endl;
    cin>>n;
    cout<<"factorial of "<<n<<"="<<factorial(n);
    getch();
}