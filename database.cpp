#include "database.h"

void Database::addBook() {
    int id;
    std::string name, author;
    std::cout << "Enter Book ID: ";
    std::cin >> id;
    std::cin.ignore();
    std::cout << "Enter Book Name: ";
    std::getline(std::cin, name);
    std::cout << "Enter Author Name: ";
    std::getline(std::cin, author);

    Book book(id, name, author);
    books.push_back(book);
    std::cout << "Book added successfully!\n";
}

void Database::viewAllBooks() const {
    for (const auto &book : books) {
        book.display();
    }
}

// Define other functions: searchBook, issueBook, returnBook
