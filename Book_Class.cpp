#include "Book_Class.h"
//-------------constructor------------
book::book(string title,string author,string publisher,double price,int stock)
 : m_title(title) , m_author(author) , m_publisher(publisher)
 ,  m_price(price) , m_stock(stock)
 { }


 //----functions----
   // getters

string book::getTitle() {
    return m_title;
}

string book::getAuthor() {
    return m_author;
}

string book::getPublisher() {
    return m_publisher;
}

double book::getPrice() {
    return m_price;
}

int book::getStock() {
    return m_stock;
}

// setters
void book::setTitle(string title) {
    m_title = title;
}

void book::setAuthor(string author) {
    m_author = author;
}

void book::setPublisher(string publisher) {
    m_publisher = publisher;
}

void book::setPrice(double price) {
    m_price = price;
}

void book::setStock(int stock) {
    m_stock = stock;
}




