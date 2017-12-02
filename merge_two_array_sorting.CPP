#include<iostream.h>
#include<conio.h>
int merge[50];
void main()
{
 int array1[25],array2[25],i,j,s,size1,size2;
 clrscr();
 cout<<"Please enter the size of array one : "<<endl;
 cin>>size1;
 cout<<"Enter elements for array one: "<<endl;
 for(i=0;i<size1;i++)
 {
  cin>>array1[i];

 }
 cout<<"Elements of array one are :"<<endl;
   for(j=0;j<size1;j++)
 {
  cout<<array1[j];
 cout<<"\t";
 }
 cout<<"\nEnter size for array two:"<<endl;
 cin>>size2;
 cout<<"Enter elements for array two :"<<endl;
   for(i=0;i<size2;i++)
 {
  cin>>array2[i];
 }
 cout<<"Elements of array two are :"<<endl;
 for(j=0;j<size2;j++)
 {
  cout<<array2[j];
  cout<<"\t";
 }
 s=0;
 for(i=0;i<size1;i++)
 {
  merge[i]=array1
  [i];
 }
 s=size1+size2;
 j=0;
 while(i<s&&j<size2)
  {
  merge[i]=array2
  [j];
  i++;
  j++;
 }
 for(i=0;i<s-1;i++)
 {
  for(j=0;j<s-1;j++)
  {
   if(merge[j]>merge[j+1])
   {
      int temp=merge[j];
      merge[j]=merge[j+1];
      merge[j+1]=temp;

   }
  }
 }
 cout<<endl<<"Sorted and merged array elements are :"<<endl;
 for(i=0;i<s;i++)
 {
 cout<<merge[i];
 cout<<"\t";
 }
 getch();
}