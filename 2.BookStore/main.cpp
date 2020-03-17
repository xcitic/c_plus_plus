#include <iostream>

using namespace std;


class Book {
    public:
        string title;
        string author;
        int pages;

        void set_title (string aTitle) {
            title = aTitle;
        }

        void set_author (string aAuthor) {
            author = aAuthor;
        }

        void set_pages (int aPages) {
            pages = aPages;
        }

};


int main()
{
    Book book1;
    book1.set_title("I Robot");
    book1.set_author("Isac Asimov");
    book1.set_pages(250);

    cout << "Book 1:" << endl;
    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Pages: " << book1.pages << endl;

    return 0;
}
