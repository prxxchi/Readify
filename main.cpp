#include <iostream>
#include "book.h"
#include "user.h"
#include "database.h"
#include "utils.h"

int main() {
    Database db;

    int choice;
    do {
        std::cout << "\n=== Library Management System ===\n";
        std::cout << "1. Add Book\n2. Search Book\n3. Issue Book\n4. Return Book\n5. View All Books\n6. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                db.addBook();
                break;
            case 2:
                db.searchBook();
                break;
            case 3:
                db.issueBook();
                break;
            case 4:
                db.returnBook();
                break;
            case 5:
                db.viewAllBooks();
                break;
            case 6:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);

    return 0;
}
