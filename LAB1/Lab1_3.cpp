#include <iostream>
#include <string>

using namespace std;

int main() {

    string name;
    int lab_grade, midterm_grade, final_grade;
    double last_score;

    cout << "What is your name: ";
    cin >> name;

    cout << "Enter your lab grade: ";
    cin >> lab_grade;

    cout << "Enter your midterm grade: ";
    cin >> midterm_grade;

    cout << "Enter your final grade: ";
    cin >> final_grade;

    last_score = (lab_grade * 0.25) + (midterm_grade * 0.35) + (final_grade * 0.4);

    cout << "Name: " << name << endl;
    cout << "Lab: " << lab_grade << endl;
    cout << "Midterm: " << midterm_grade << endl;
    cout << "Final: " << final_grade << endl;
    cout << "Last Score: " << last_score << endl;

    return 0;
}

