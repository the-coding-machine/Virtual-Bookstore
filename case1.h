
#ifndef BOOK_STORE_CASE1_H
#define BOOK_STORE_CASE1_H
#include <iostream>
#include "Book_Class.h"
using namespace std;
string title ;
string author;
string publisher;
string title_copy;
int number,number_input;
double price;
int case1()
{
    cout << "enter title of the book : " << endl ;
    cin >> title;
    title_copy = (title);
    cout << "enter author of the book : " << endl;
    cin  >> author;
    cout << "enter publisher of the book : " << endl;
    cin  >> publisher;
    cout << "How many of this book do you want to donate?" << endl;
    cin  >> number;
    cout << "What is the price ?" << endl;
    cin  >> price;
    book title_copy (title,author,publisher,price,number);
    cout << title_copy.getStock() << " of" << " the book : " << title_copy.getTitle()
    << ", written by : " << title_copy.getAuthor() << " added to library" <<  endl;
    cout << "--------------------------------------------------" << endl;
    cout << "\toptions :\n "
            "\t1) Back to main menu\n"
            "\t2) Add another book\n";
    cin >> number_input;
    return number_input;

}

#endif //BOOK_STORE_CASE1_H
