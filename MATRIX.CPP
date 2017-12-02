//Write a program to perform the Matrix addition, Multiplication and Transpose Operation. [Menu Driven]
#include"iostream.h"
#include"conio.h"
void add(int a[2][2],int b[2][2])
{
 int c[2][2],i,j;
 cout<<"Addition of matrix a and b=\n";
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   c[i][j]=a[i][j]+b[i][j];
  }
 }
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   cout<<c[i][j];
   cout<<"\t";
  }cout<<"\n";
 }
}
void multiply(int a[2][2],int b[2][2])
{  cout<<"Multiplication of a and b matrix are=\n";
int c[2][2],i,j,s,k;
for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
 {
 s=0;
 for(k=0;k<2;k++)
 {
s=s+a[i][k]*b[k][j];
 c[i][j]=s;
 }
 }
 }
 for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
 {
  cout<<c[i][j];
  cout<<"\t";
 }cout<<"\n";
}
}
void transpose(int a[2][2], int b[2][2])
{     int i,j;

 cout<<"Transpose of matrix a\n";
 for( i=0;i<2;i++)
 {
  for( j=0;j<2;j++)
  {
   cout<<a[j][i];
   cout<<"\t";
  }cout<<"\n";
 }
  cout<<"Transpose of matrix b\n";
 for( i=0;i<2;i++)
 {
  for( j=0;j<2;j++)
  {
   cout<<b[j][i];
   cout<<"\t";
  }cout<<"\n";
 }
}
void main()
{
clrscr();
 int a[2][2],b[2][2],i,j,n,ch;

 cout<<"Please enter four elements for matrix a\n";
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   cin>>a[i][j];
  }
 }
cout<<"Please enter four elements for matrix b\n";
for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   cin>>b[i][j];
  }
 }
 cout<<"Elements for matrix a=\n";
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   cout<<a[i][j];
       cout<<"\t";
 }cout<<"\n";
 }
  cout<<"Elements for matrix b=\n";
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   cout<<b[i][j];
       cout<<"\t";
 }cout<<"\n";
 }
 cout<<"Please enter your required operation as : \n 1.Add \n 2.Multiplication\n 3.Transpose\n";
 cout<<"To exit press 4\n";
 cin>>ch;
 while(ch!=4)
 {
   switch(ch)
   {
    case 1:
	    add(a,b);
	 break;
    case 2:
	 multiply(a,b);
	 break;
    case 3:
	 transpose(a,b);
	 break;
    case 4:
    cout<<"Exiting proces...";
    break;
    default:
    cout<<"Invalid input";
    break;
   }
   cout<<"To exit press 4\n";
  cin>>ch;
  }

getch();
}