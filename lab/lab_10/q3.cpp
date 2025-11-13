// Q3. Multiple Inheritance
// Create a class Sports with member scores.
// Create another class Exam with member marks.
// Derive a class Result from both Sports and Exam that calculates the total performance score.
// ● Display the final result of a student.


#include <iostream>
using namespace std;

class Sports {
public:
    int score;

    void getSportsScore() {
        cout << "Enter sports score: ";
        cin >> score;
    }
};

class Exam {
public:
    int marks;

    void getExamMarks() {
        cout << "Enter exam marks: ";
        cin >> marks;
    }
};

class Result : public Sports, public Exam {
public:
    int totalPerformance;

    void calculateTotal() {
        totalPerformance = marks + score;
    }

    void displayResult() {
        cout << "\n--- Final Result ---" << endl;
        cout << "Exam Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
        cout << "Total Performance: " << totalPerformance << endl;
    }
};

int main() {
    Result r;

    r.getExamMarks();
    r.getSportsScore();
    r.calculateTotal();
    r.displayResult();

    return 0;
}
