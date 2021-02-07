
#include <iostream>
#include <math.h>
using namespace std;

int main (){
float side, area;

cout<<"Enter side of the equilateral triangle: ";
cin>>side;


area = sqrt(3)/4*(side*side);


cout<<"Area of equilateral triangle: "<<area<<" sq. units";
  return 0;
}
