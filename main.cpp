#include "Book.h"
#include <vector>

int main() {

    vector<Book> books;

    int choice;

    do {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            int id;
            string title, author;

            cout << "Enter Book ID: ";
            cin >> id;

            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, title);

            cout << "Enter Author Name: ";
            getline(cin, author);

            books.push_back(Book(id, title, author));

            cout << "Book Added Successfully!\n";
            break;
        }

        case 2:
            for (Book b : books) {
                b.displayBook();
            }
            break;

        case 3: {
            int id;
            cout << "Enter Book ID to Search: ";
            cin >> id;

            bool found = false;

            for (Book b : books) {
                if (b.getBookID() == id) {
                    b.displayBook();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;
        }

        case 4: {
            int id;
            cout << "Enter Book ID to Issue: ";
            cin >> id;

            bool found = false;

            for (Book &b : books) {
                if (b.getBookID() == id) {
                    found = true;

                    if (!b.getIssuedStatus()) {
                        b.issueBook();
                        cout << "Book Issued Successfully!\n";
                    } else {
                        cout << "Book Already Issued!\n";
                    }
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;
        }

        case 5: {
            int id;
            cout << "Enter Book ID to Return: ";
            cin >> id;

            bool found = false;

            for (Book &b : books) {
                if (b.getBookID() == id) {
                    found = true;

                    if (b.getIssuedStatus()) {
                        b.returnBook();
                        cout << "Book Returned Successfully!\n";
                    } else {
                        cout << "Book Was Not Issued!\n";
                    }
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;
        }

        case 6:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}