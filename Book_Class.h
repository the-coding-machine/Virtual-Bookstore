
#ifndef BOOK_STORE_BOOK_CLASS_H
#define BOOK_STORE_BOOK_CLASS_H
#include <string>
#include <iostream>
using namespace std;
class book{
private :
    string m_title;
    string m_author;
    string m_publisher;
    double m_price;
    int m_stock;
public :
    // constructors
    book() = default;
    book(string title,string author,string publisher,double price,int stock);

    //----functions----
    //getters
    string getTitle();
    string getAuthor();
    string getPublisher();
    double getPrice();
    int getStock();
    //setters
    void setTitle(string title);
    void setAuthor(string author);
    void setPublisher(string publisher);
    void setPrice(double price);
    void setStock(int stock);


};
#endif //BOOK_STORE_BOOK_CLASS_H
