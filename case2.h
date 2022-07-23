
#ifndef BOOK_STORE_CASE2_H
#define BOOK_STORE_CASE2_H
#include <iostream>
#include "Book_Class.h"
using namespace std;

int number_input2;
int case2()
  {
 cout << "Enter name of the book : " << endl;
 cin >> title ;
 cout << "Enter author name : " << endl;
 cin >> author ;
 cout << "How many books do you want to buy ? " << endl;
 cin >> number ;
 cout << "Books Bought Successfully" << endl;
      cout << "--------------------------------------------------" << endl;
      cout << "\toptions :\n "
              "\t1) Back to main menu\n"
              "\t2) Add another book\n";
      cin >> number_input2;
      return number_input2;
 }
#endif //BOOK_STORE_CASE2_H
