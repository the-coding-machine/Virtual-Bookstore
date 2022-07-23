
#ifndef BOOK_STORE_CASE3_H
#define BOOK_STORE_CASE3_H
#include <iostream>
#include "Book_Class.h"
using namespace std;
int user_input,input2;
void print()
{
    cout << "\toptions :\n "
            "\t1) Back to main menu\n"
            "\t2) Edit another book\n";
}
int case4()
{
     cout << "What is name of the book ?" << endl;
     cin >> title;
     cout << "What do you want to change ?" << endl;
     cout << "1) Title\n2) Author\n3) Publisher\n4) stock\n5) price" << endl;
     cin >> user_input ;
     switch (user_input)
     {
         case 1 :
             cout << "------------------------\n";
             cout << "Enter new title : " << endl;
             cin >> title;
             cout << "title changed" << endl;
             cout << "------------------------\n";

             break;
         case 2 :
             cout << "------------------------\n";
             cout << "Enter new Author : " << endl;
             cin >> author;
             cout << "Author changed" << endl;
             cout << "------------------------\n";

             break;
         case 3 :
             cout << "------------------------\n";
             cout << "Enter new Publisher : " << endl;
             cin >> publisher;
             cout << "Publisher changed" << endl;
             cout << "------------------------\n";

             break;
         case 4 :
             cout << "------------------------\n";
             cout << "Enter new Publisher : " << endl;
             cin >> publisher;
             cout << "Publisher changed" << endl;
             cout << "------------------------\n";

             break;
         case 5 :
             cout << "------------------------\n";
             cout << "Enter new Price : " << endl;
             cin >> price;
             cout << "Price changed" << endl;
             cout << "------------------------\n";

             break;

     }
     print();
    cin >> input2;
    return input2;
}
#endif //BOOK_STORE_CASE3_H
