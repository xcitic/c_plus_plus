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


int main()
{
    Book book1;
    book1.set_title("I Robot");
    book1.set_author("Isac Asimov");
    book1.set_pages(250);

    cout << "Book 1:" << endl;
    cout << "Title: " << book1.get_title() << endl;
    cout << "Author: " << book1.get_author() << endl;
    cout << "Pages: " << book1.get_pages() << endl;

    return 0;
}
