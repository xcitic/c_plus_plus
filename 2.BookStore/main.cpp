#include <iostream>
#include <vector>

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
        std::vector< Book > books;

        void add_book_to_shelf(Book newBook) {
            books.push_back(newBook);
        }
};


int main()
{
    Book book1;
    book1.set_title("I Robot");
    book1.set_author("Isac Asimov");
    book1.set_pages(250);

    Book book2;
    book2.set_title("Prelude To Foundation");
    book2.set_author("Isac Asimov");
    book2.set_pages(350);

    BookShelf shelf;
    shelf.add_book_to_shelf(book1);
    shelf.add_book_to_shelf(book2);

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
