#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include "book.h"

class Database {
private:
    std::vector<Book> books; // Linked List-like operations for simplicity
public:
    void addBook();
    void viewAllBooks() const;
    void searchBook();
    void issueBook();
    void returnBook();
};

#endif
