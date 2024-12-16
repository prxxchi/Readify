#include "book.h"

Book::Book(int id, const std::string &name, const std::string &author) 
    : id(id), name(name), author(author), isIssued(false) {}

void Book::display() const {
    std::cout << "ID: " << id << ", Name: " << name << ", Author: " << author 
              << ", Issued: " << (isIssued ? "Yes" : "No") << '\n';
}
