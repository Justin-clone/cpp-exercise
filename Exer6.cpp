#include <iostream>

using namespace std;

int main ()
{
int num;
int num1, num2, num3;

cout<<"Enter radius: ";
cin>>num;

    num1 = 2 * num;
    num2 = 2 * 3.14 * num;
    num3 = 3.14 * (num * num);
    
    cout<<"Diameter: "<<num1<<"\n";
    cout<<"Circumfrence: "<<num2<<"\n";
    cout<<"Area: "<<num3<<" sq. units";

  return 0;
}
