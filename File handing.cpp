/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void addStudent() {
    ofstream outfile("Students.txt", ios::app); // Open file in append mode
    string name;
    int roll_number;
    float grade;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter roll number: ";
    cin >> roll_number;

    cout << "Enter grade: ";
    cin >> grade;

    // Write to file
    outfile << name << " " << roll_number << " " << grade << endl;
    outfile.close();

    cout << "Student record added." << endl;
}

void displayStudent() {
    ifstream infile("Students.txt");
    string name;
    int roll_number;
    float grade;

    cout << "Student records:" << endl;
    while (infile >> name >> roll_number >> grade) {
        cout << "Name: " << name << ", Roll number: " << roll_number << ", Grade: " << grade << endl;
    }
    infile.close();
}

void searchStudent() {
    ifstream infile("Students.txt");
    string name, search_name;
    int roll_number;
    float grade;
    bool found = false;

    cout << "Enter the student name to search: ";
    cin >> search_name;

    while (infile >> name >> roll_number >> grade) {
        if (name == search_name) {
            cout << "Student found! Name: " << name << ", Roll number: " << roll_number << ", Grade: " << grade << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found!" << endl;
    }
    infile.close();
}

int main() {
    int choice;
    do {
        cout << "1. Add student" << endl;
        cout << "2. Display all students" << endl;
        cout << "3. Search for students" << endl;
        cout << "4. Exit" << endl;

        cin >> choice;

        if (choice == 1) {
            addStudent();
        } else if (choice == 2) {
            displayStudent();
        } else if (choice == 3) {
            searchStudent();
        }

    } while (choice != 4);

    cout << "Program exited." << endl;
    return 0;
}