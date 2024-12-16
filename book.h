#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class Book {
public:
    int id;
    std::string name;
    std::string author;
    bool isIssued;

    Book(int id, const std::string &name, const std::string &author);
    void display() const;
};

#endif
