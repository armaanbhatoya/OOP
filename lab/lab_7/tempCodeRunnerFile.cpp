#include <iostream>
using namespace std;

void BorrowBooks() {
    class Book {
        // ❌ Illegal: local class cannot have static data members
        static int bookCounter;
    public:
        Book() {}
    };
}

int main() {
    BorrowBooks();
    return 0;
}