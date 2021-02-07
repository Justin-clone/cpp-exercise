#include <iostream>

using namespace std;

int main ()
{
int num;
float num1;

cout<<"Enter tempature in fahrenheit: ";
cin>>num;

    num1 = (num - 32) * 5 / 9;
    
    cout<<"Tempature in celsius: "<<num1<<" C";

  return 0;
}
