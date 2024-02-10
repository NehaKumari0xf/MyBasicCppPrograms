//C++ program to print a table of any given number
#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"Enter a number to create a table:";//<< it is insertion operator in c++ if used with cout(polymorphism)
    cin>>num;//>> it is extraction operator in c++ if used with cin

    cout<<"\nTable of "<<num;

    for (int i = 1; i <= 10; i++)
    {
        cout<<"\n"<<num<<"*"<<i<<"="<<num*i;
    }
    return 0;
}