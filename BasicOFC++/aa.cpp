//C++ program 

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int num1,num2,i,j,len;
    char str[100];

    cout<<"Enter number:";
    gets(str);
    
    cout<<"Enter digit:";
    cin>>num2;

    len=strlen(str);

    for ( i = 0; i < len; i++)
    {
        if (str[i]==num2)
        {
            for ( j = i; j < len; j++)
            {
                str[j]=str[j+1];
            }len--;
            i--;
        }
        
    }
    
      cout<<"Final ocuurance of number of: = "<<num2<<"= "<<str;  
    return 0;
}