#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int,int,int);
void swap(int&,int&);

int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  sortDescending(numA, numB, numC);
  
  return 0;
}
/*

*/
void sortDescending(int first, int second, int third)
{
  if( first < third )
  {
    swap(first,third);
  }
  if( first < second )
  {
    swap(first,second);
  }
  if( second < third )
  {
    swap(second,third);
  }
  cout<<"From greatest to least, they are: ";
  cout<<first<<second<<third<<endl;
}
/*
Swap function takes in two parameters and changes their values so parameter
first is equal to parameter second and vice versa. 
*/
void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
