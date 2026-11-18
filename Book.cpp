#include "book.h"

Book::Book() {
    bookID = 0;
    title = "";
    author = "";
    isIssued = false;
}

Book::Book(int id, string t, string a) {
    bookID = id;
    title = t;
    author = a;
    isIssued = false;
}

void Book::displayBook() {
    cout << "\nBook ID: " << bookID;
    cout << "\nTitle: " << title;
    cout << "\nAuthor: " << author;

    if (isIssued)
        cout << "\nStatus: Issued\n";
    else
        cout << "\nStatus: Available\n";
}

int Book::getBookID() {
    return bookID;
}

string Book::getTitle() {
    return title;
}

string Book::getAuthor() {
    return author;
}

bool Book::getIssuedStatus() {
    return isIssued;
}

void Book::issueBook() {
    isIssued = true;
}

void Book::returnBook() {
    isIssued = false;
}