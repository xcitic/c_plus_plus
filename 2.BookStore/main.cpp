#include <iostream>
#include <vector>

using namespace std;


class Book {
    string title;
    string author;
    int pages;

    public:
        Book(string aTitle, string aAuthor, int aPages) {
            set_title(aTitle);
            set_author(aAuthor);
            set_pages(aPages);
        }

        Book(){}; // need default constructor to extend

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
        std::vector< Book > books;

        void add_book_to_end(Book newBook) {
            books.push_back(newBook);
        }

        void add_book_to_start(Book newBook) {
            books.insert(books.begin(), newBook);
        }

        void remove_last_book() {
            books.pop_back();
        }
};


int main()
{
    Book book1("I Robot", "Isac Asimov", 250); // using constructor

    Book book2("Prelude To Foundation", "Isac Asimov", 350);

    Book book3;
    book3.set_title("Neuromancer");
    book3.set_author("William Gibson");
    book3.set_pages(275);

    Book book4 = BookShelf::Book("Hackers Manual", "Anonymous", 1337);

    BookShelf shelf;
    shelf.add_book_to_end(book1);
    shelf.add_book_to_end(book2);
    shelf.add_book_to_start(book3);
    shelf.add_book_to_end(book4);

    for (uint i = 0; i < shelf.books.size(); i++) {
        string book1_title = shelf.books[i].get_title();
        string book1_author = shelf.books[i].get_author();
        int book1_pages = shelf.books[i].get_pages();

        cout << "Book " << (i + 1) << ": " << endl;
        cout << "Title: " << book1_title << endl;
        cout << "Author: " << book1_author << endl;
        cout << "Pages: " << book1_pages << endl;
        cout << "" << endl;
    }

    return 0;
}
