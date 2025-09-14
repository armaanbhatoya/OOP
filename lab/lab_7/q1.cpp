//1. A library system wants to track books borrowed by a user during one function call. Each user session is
// temporary, and the borrowed book details should not be accessible outside that function. Design a
// program using a local class a inside a function BorrowBooks() that:
// (i) Stores the title and ID of each borrowed book.
// (ii) Displays the list of borrowed books before the session ends.
// (iii) Ensures the book details are not accessible outside BorrowBooks().
// (iv) Demonstrate the use of:
// ● Global Variable: Count total borrowing sessions.
// ● Non-static local variable: Store the librarian’s name for the current session.
// ● Static local Variable: Count how many times BorrowBooks() has been called.
// Access all these variables inside the local class and show their values during book display.
// (v) Attempt to declare a static data member inside the local class Book. Show that this is illegal in C++
// and produces a compile-time error. Document the error message in your report. Then, modify your
// program to show the correct alternative: use a static local variable inside the function, not inside the local
// class.


//correct code----->
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Global variable: count total borrowing sessions
int totalSessions = 0;

void BorrowBooks() {
    // Non-static local variable: librarian's name
    string librarianName;
    cout << "Enter librarian name for this session: ";
    cin >> librarianName;

    // Static local variable: count how many times BorrowBooks() has been called
    static int functionCallCount = 0;
    functionCallCount++;

    //  Illegal attempt (for report documentation):
    /*
    class Book {
        static int bookCounter;   // ERROR: local class cannot have static data member
    };
    */

    // Correct alternative: static variable inside function
    static int bookCounter = 0;

    // Local class definition
    class Book {
        string title;
        int id;
        string librarian;   // store librarian name for this book/session
    public:
        Book(string t, int i, string lib) : title(t), id(i), librarian(lib) {}

        void display(int totalSessions, int functionCallCount) {
            cout << "Book Title: " << title << ", ID: " << id << endl;
            cout << "Librarian: " << librarian << endl;
            cout << "Total Sessions (Global): " << totalSessions << endl;
            cout << "BorrowBooks() called: " << functionCallCount << " times\n";
        }
    };

    // Input books for this session
    int n;
    cout << "Enter number of books to borrow: ";
    cin >> n;

    vector<Book> borrowed;
    for (int i = 0; i < n; i++) {
        string title;
        int id;
        cout << "Enter book title: ";
        cin >> title;
        cout << "Enter book ID: ";
        cin >> id;
        borrowed.push_back(Book(title, id, librarianName));
        bookCounter++;
    }

    // Update global sessions
    totalSessions++;

    // Display session summary
    cout << "\n--- Borrowed Books (Session Summary) ---\n";
    for (auto &b : borrowed) {
        b.display(totalSessions, functionCallCount);
    }
    cout << "Books borrowed in all sessions so far: " << bookCounter << endl;
    cout << "----------------------------------------\n";
}

int main() {
    // Multiple calls to test global and static behavior
    BorrowBooks();
    BorrowBooks();
    return 0;
}




// //error code--->

// #include <iostream>
// using namespace std;

// void BorrowBooks() {
//     class Book {
//         // Illegal: local class cannot have static data members
//         static int bookCounter;
//     public:
//         Book() {}
//     };
// }

// int main() {
//     BorrowBooks();
//     return 0;
// }
