#include <iostream>

using namespace std;

int main ()
{

 int a,b,c;
 
 cout<<"Enter first angle: ";
 cin>>a;
 cout<<"Enter second angle: ";
 cin>>b;
 
 c = 180 - (a + b);
 
 cout<<"Third angle: "<<c;

  return 0;
}
