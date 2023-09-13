#include <fstream>
#include <conio.h>
#include <string.h>
#include <iomanip>
#include <iostream>
using namespace std;
class book_data
{
    char books_number[30];
    char Book_Name[50];
    char Author_Name[20];
    int No_Copies;
    public:
    void Get_BookDetails()
    {
        cout<<"\n Enter details of your desiered book which you want to purchase\n";
        cout<<"\nEnter the book's Number:";
        cin >>"\n Enter the book's Name:";
        cin.ignore();
        cin.getline(Book_Name,50);
        cout<<"\n Enter the author's name:";
        cin.ignore();
        cin.getline(Author_Name,50);
        fflush(stdin);
        cout <<"\n Enter no. of copied of desier book:";
        cin>>No_Copies;
    }
    void Show_Book_Data(){
        cout<<"\nBook Number:" << books_number;
        cout<<"\nBook Name:" << Book_Name;
        cout<<"\nAuthor's Name:" << Author_Name;
        cout << "\nCopies : " << No_Copies;
    }
    
    void Modify_Book_Data()
    {
        cout << "\nBook number :" << books_number;
        cout <<"\n Modify book name :";
        cin.ignore();
        cingetline(Book_Name,50);
        cout<<"\nModify authors name: ";
        cin.ognore();
        cin.getline(Author_Name,50);
        fflush(stdin);
        cout <<"\n Enter no of copies :";
        cin >> No_Copies;
    }
    char* get_bool_number()
    {
        return books_number;
    }
    void Report()
    {cout<< books_number<< setw(30) << Book_Name<<setw(30) << Author_Name<<setw(30) << No_Copies<< endl;}

};
