#include<iostream>
#include<iomanip>
#include<malloc.h>
using namespace std; 

struct Teacher
{
    char tname[50];
    char tfname[50];
    char tGender[15];
    char tsub[50];
    int salary;

    struct Teacher *pre;
    struct Teacher *next;
};

struct Student
{
    char name[50];
    char fname[50];
    char sGender[15];
    char sclas[50];
    int roll;

    struct Student *pre;
    struct Student *next;
};


int main()
{
    struct Teacher *start=NULL;
    struct Teacher *tnnode, *ttnode, *tlnode;

    struct Student *head=NULL;
    struct Student *snnode, *stnode, *slnode;
    int choice;

    do
    {
        system("cls");
        cout<<"Students And Teaches Record Management System In C Pragoram Useing Linked List.\nAll Insertion Will Be At THe End Of List.";
        cout<<"\n==============================================================================";
        cout<<"\n||\t\t\t\t  Menu Chart  \t\t\t\t||";
        cout<<"\n-------------------------------------------------------------------------------";
        cout<<"\n1. Add New Teacher Record.\n2.  Display List OF All Tecahers Records\n3. AddNew Student Record.\n4. Display List OF All Students Records\n5. Exit";
        cout<<"\n==============================================================================";
        cout<<"\nEnter your desired choice:";
        cin>>choice;

        switch (choice)
        {
        case 1:
            //code for Teacher 
            /* code for insertion at last*/
            //step1:- create new node i.e. DataOfTeachersAndStudents
            tnnode=(struct Teacher*)malloc(sizeof(struct Teacher));

            //step2:- check for node
            if (tnnode==NULL)
            {
                cout<<"UH-OH!! unable to create new node.";
                break;
            }

            // accept new data and put it in data part of new node
            cout<<"\nEnter Teacher Details below :-";
            cout<<"\n==============================================================================";
            cout<<"\nEnter Name: ";
            fflush(stdin);
            gets(tnnode->tname);
            cout<<"\nEnter Father's Name: ";
            gets(tnnode->tfname);
            cout<<"\nEnter Gender: ";
            gets(tnnode->tGender);
            cout<<"\nEnter Subject: ";
            gets(tnnode->tsub);
            cout<<"\nEnter Salary: ";
            cin>>tnnode->salary;

            //step3:- Put data in data part and NULL in both address part of new node
            tnnode->pre=tnnode->next=NULL;

            //step4:- If list is empty then male nnode 1st node
            if (start==NULL)
            {
                start=tnnode;
                tnnode=NULL;
                printf("\nRecord inserted successfully.");
                break;
            }
        
            //step5:- list is empty. find tye address of last node of list
            tlnode=start;
            while (tlnode->next!=NULL)
            {
                //move on next node
                tlnode=tlnode->next;
            }
        
        //step6:- Put the address of last node in previous part of new node
            tnnode->pre=tlnode;

        //step8:- Put the address of new node in next part of last node
            tnnode->next=tnnode;

        //step9:- Put null in nnode
            tnnode=NULL;
            break;
        
        case 2://code for display Teacher list
            if(start==NULL)
            {
                cout<<"\n List is empty!";
            }
            else
            {
                cout<<"Contents of list:";
                ttnode=start;
                cout<<"\n\t\t\t\t\tAll Teachers Records ";
                cout<<"\n==============================================================================";
                cout<<"\n"<<"Name\t\t"<<"Father's Name\t\t"<<"Gender\t\t"<<"Class\t\t"<<"Salary.";
                cout<<"\n==============================================================================\n";
                while(ttnode!=NULL)
                {
                    cout<<ttnode->tname<<"\t\t"<<ttnode->tfname<<"\t\t"<<ttnode->tGender<<"\t\t"<<ttnode->tsub<<"\t\t"<<ttnode->salary;
                    ttnode=ttnode->next;
                }
            }
            cout<<"\n---------------------------------------x-------------------------------------------";
            break;

        case 3:
            //code for Student 
            /* code for insertion at last*/
            //step1:- create new node i.e. DataOfTeachersAndStudents
            snnode=(struct Student*)malloc(sizeof(struct Student));

            //step2:- check for node
            if (snnode==NULL)
            {
                cout<<"UH-OH!! unable to create new node.";
                break;
            }

            // accept new data and put it in data part of new node
            cout<<"\nEnter Student Details below :-";
            cout<<"\n==============================================================================";
            cout<<"\nEnter Name: ";
            fflush(stdin);
            gets(snnode->name);
            cout<<"\nEnter Father's Name: ";
            gets(snnode->fname);
            cout<<"\nEnter Gender: ";
            gets(snnode->sGender);
            cout<<"\nEnter Class: ";
            gets(snnode->sclas);
            cout<<"\nEnter Roll: ";
            cin>>snnode->roll;

            //step3:- Put data in data part and NULL in both address part of new node
            snnode->pre=snnode->next=NULL;

            //step4:- If list is empty then male nnode 1st node
            if (head==NULL)
            {
                head=snnode;
                snnode=NULL;
                printf("\nRecord inserted successfully.");
                break;
            }
        
            //step5:- list is empty. find tye address of last node of list
            slnode=head;
            while (slnode->next!=NULL)
            {
                //move on next node
                slnode=slnode->next;
            }
        
        //step6:- Put the address of last node in previous part of new node
            snnode->pre=slnode;

        //step8:- Put the address of new node in next part of last node
            snnode->next=snnode;

        //step9:- Put null in nnode
            snnode=NULL;
            break;

        case 4://code for display Student list
            if(head==NULL)
            {
                cout<<"\n List is empty!";
            }
            else
            {
                cout<<"Contents of list:";
                stnode=head;
                cout<<"\n\t\t\tAll Student Records ";
                cout<<"\n==============================================================================";
                cout<<"\n"<<setw(30)<<"Name"<<setw(30)<<"Father's Name"<<setw(15)<<"Gender"<<setw(15)<<"Class"<<setw(5)<<"Roll_No.";
                cout<<"\n==============================================================================\n";
                while(stnode!=NULL)
                {
                    cout<<setw(30)<<setfill('*')<<stnode->name<<setw(30)<<stnode->fname<<setw(15)<<stnode->sGender<<setw(15)<<stnode->sclas<<setw(5)<<stnode->roll;
                    stnode=stnode->next;
                }
            }
            cout<<"\n-----------------------------------------x------------------------------------------";
            break;
            case 5://code for exit
                return 0;
            default:
            printf("\n UH-OH! You have entered an invalid option!!");
        }
        printf("\n");
        system("pause");
    } while (1);
}