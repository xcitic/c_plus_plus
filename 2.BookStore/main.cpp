#include <iostream>

using namespace std;


class Book {
    string title;
    string author;
    int pages;

    public:
        void set_title(string aTitle) {
            title = aTitle;
        }

        void set_author(string aAuthor) {
            author = aAuthor;
        }

        void set_pages(int aPages) {
            pages = aPages;
        }

        string get_title() {
            return title;
        }

        string get_author() {
            return author;
        }

        int get_pages() {
            return pages;
        }
};


class BookShelf: public Book {
    public:
        Book books[10];

        void add_book_to_shelf(Book newBook) {
            books[0] = newBook;
        }
};


int main()
{
    Book book1;
    book1.set_title("I Robot");
    book1.set_author("Isac Asimov");
    book1.set_pages(250);

    BookShelf shelf;
    shelf.add_book_to_shelf(book1);

    string book1_title = shelf.books[0].get_title();
    string book1_author = shelf.books[0].get_author();
    int book1_pages = shelf.books[0].get_pages();

    cout << "Book 1:" << endl;
    cout << "Title: " << book1_title << endl;
    cout << "Author: " << book1_author << endl;
    cout << "Pages: " << book1_pages << endl;

    return 0;
}
