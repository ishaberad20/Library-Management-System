#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    bool isIssued;

public:
    Book();

    Book(int id, string t, string a);

    void displayBook();

    int getBookID();
    string getTitle();
    string getAuthor();

    bool getIssuedStatus();

    void issueBook();
    void returnBook();
};

#endif
#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    bool isIssued;

public:
    Book();

    Book(int id, string t, string a);

    void displayBook();

    int getBookID();
    string getTitle();
    string getAuthor();

    bool getIssuedStatus();

    void issueBook();
    void returnBook();
};

#endif