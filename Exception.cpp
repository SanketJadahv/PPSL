#include<iostream>
using namespace std;

int main()
{
    double numerator, denominator, divide;

    try {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;

        // throw an exception if denominator is 0
        if (denominator == 0)
            throw 0;

        // not executed if denominator is 0
        divide = numerator / denominator;
        cout << numerator << "/" << denominator << " = " << divide << endl;
    }
    // Catch block to handle exception
    catch (int num_exception) {
        cout << "Error: Cannot divide by " << num_exception << endl;
    }

    return 0;
}