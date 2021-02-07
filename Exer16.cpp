#include <iostream>
using namespace std;
int main()
{
int eng, phy, chem, math, comp ;
float total, average , percentage;
cout<<"Enter students 5 subject grades: 95 76 85 90 89"<<endl;


eng = 95; 
phy = 76;
chem = 85;
math = 90;
comp = 89;

total= eng + phy + chem + math + comp;
average = total / 5.0;
percentage = (total / 500.0) * 100;
cout<<"Total: "<<total;
cout<<"\nAverage Marks of student: "<<average;
cout<<"\nPercentage: "<<percentage<<" %";
return 0;
}
