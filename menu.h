
#ifndef BOOK_STORE_MENU_H
#define BOOK_STORE_MENU_H
#include <iostream>
using namespace std;
int input_number=0;
int menu()
{
    cout << "\tVirtual Bookstore!\n\tWhat is your order ?" << endl;
    cout << "\t1) Add a book\n"
            "\t2) Buy a book\n"
            "\t3) Edit a book\n"
            "\t4) Exit\n" ;
    cin >> input_number;
    return input_number;
}
#endif //BOOK_STORE_MENU_H
