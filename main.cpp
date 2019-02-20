#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int&,int&,int&);
void swap(int&,int&);

// <-- ADD YOUR FUNCTION PROTOTYPE HERE

int main()
{
  //Takes user input and stores in int variables
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;


  //Number sorting Function
  sortDescending(numA, numB, numC);
  //Outputs sorted numbers to the user
  cout<<"From greatest to least, they are: ";
  cout<<numA<<","<<numB<<","<<numC<<endl;



  return 0;

}
//Compares numbers in the list and swaps them if they pervious number is 
//greater than the following
void sortDescending(int& first, int& second, int& third)
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
}


//Helper Function to sortDescending that swaps numbers
void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
  //...END OF "DO NOT CHANGE" AREA
