//MENU DRIVEN PROGRAM FOR BASIC CALCULATION

#include<iostream>
using namespace std;

unsigned long factorial()
{
    int i,num;
    unsigned long f=1;
    cout<<"Enter terms of number for factorial:";
        cin>>num;

        for (int i = 0; i < num; i++)
        {
            cout<<" ",i;
        }
        for(i=1;i<=num;i+=1)
        f*=i;
        cout<<"Factorial of"<<num<<"="<<f;      
    return f;
}

int main()
{
    int choice,ch;
    int arr[10];
    int num1,num2,sum=0,per,num,i;

do
{
    system("cls");
    cout<<"\t   Basic Calculator";
    cout<<"\n======================================";
    cout<<"\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Average";
    cout<<"\n6. Factorial\n7. Check if number is Prime/Even/Odd or not";
    cout<<"\n8. Convert Degree Celcius to Farenheit\n9. Convert Farenheit to Celcius";
    cout<<"\n10. Exit";
    cout<<"\nEnter your choice:";
    cin>>choice;

    switch (choice)
    {
    case 1:
        /* code for addition */
        cout<<"\nEnter First Number: ";
        cin>>num1;
        cout<<"Enter Second Number: ";
        cin>>num2;

        cout<<"\nAddition of "<<num1<<"+"<<num2<<"="<<num1+num2;   
        break;

        case 2:
        /* code for subtraction */
        cout<<"\nEnter First Number: ";
        cin>>num1;
        cout<<"Enter Second Number: ";
        cin>>num2;

        cout<<"\nSubtraction of "<<num1<<"-"<<num2<<"="<<num1-num2;   
        break;

        case 3:
        /* code for multiplication */
        cout<<"\nEnter First Number: ";
        cin>>num1;
        cout<<"Enter Second Number: ";
        cin>>num2;

        cout<<"\nProduct of "<<num1<<"*"<<num2<<"="<<num1*num2;   
        break;

        case 4:
        //code for division
        cout<<"\nEnter First Number: ";
        cin>>num1;
        cout<<"Enter Second Number: ";
        cin>>num2;

        cout<<"\nDivision of "<<num1<<"/"<<num2<<"="<<num1/num2;   
        break;

        case 5:
        /* code for average */

        cout<<"\nEnter terms of number for average:";
        cin>>num;

        for (int i = 0; i < num; i++)
        {
            cout<<"\nEnter Number: "<<i+1;
            cin>>arr[i];
        }
        for (int i = 0; i < num; i++)
        {
            sum=sum+arr[i];
        }
        
        cout<<"\nAverage  = "<<sum/num;   
        break;

        case 6:
        /* code for function call of factorial */
        factorial();
        break;

        case 7:
        /* code for prime or not */

        cout<<"\n1. To chech Number is Prime or not\n2. To chech Number is Even/Odd or not\nEnter your choice:";
        cin>>ch;
        switch (ch)
        {
        case 1:
            /* code */
            cout<<"\nEnter number to chech Prime or not:";
            cin>>num;

            for ( i = 2; i <= num/2; i++)
            {
                if (num%1==0)
                {
                    i++;
                    break;
                }
                
            }if (num==0 && num!=1)
            {
                cout<<"\nThis" <<num<< "is a prime number";
            }else{
                cout<<"\n"<<num<<" is not a prime number";
            }
        
        default:
        cout<<"\nUH-OH! you have entered invalid choice.";
            break;
        }
        break;

        case 9:
        /* code for average */

        cout<<"\nEnter terms of number for average:";
        cin>>num;

        for (int i = 0; i < num; i++)
        {
            cout<<" ",i;
            sum=sum+i;
        }
        
        cout<<"\nAverage  = "<<sum/num;   
        break;

        case 10:
        /* code for exit */
        return 0;    
        default:
        cout<<"\nUH-OH! you have entered invalid choice.";
    }
    cout<<"\n";
    system("pause");
    } while (1);
}