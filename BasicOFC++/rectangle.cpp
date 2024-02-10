//C++ program to square two integer numbers.
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,area;

    cout<<"Enter Lenght:";
    cin>>num1;
    cout<<"Enter Breadth:";
    cin>>num2;

    area=num1*num2;

    cout<<"Area of rectangle: = "<<area;
    return 0;
}