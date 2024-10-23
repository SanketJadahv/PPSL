/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>

using namespace std;

struct Data {
    int id;
    char name[50];
};

int main() {
    Data d2;

    ifstream InFile("data.bin", ios::binary); // Open binary file for reading

    if (InFile.is_open()) {
        InFile.read(reinterpret_cast<char*>(&d2), sizeof(d2)); // Read binary data
        InFile.close();

        cout << "Data read from binary file: ID = " << d2.id << ", Name = " << d2.name << endl;
    } else {
        cout << "Error: Could not open file." << endl;
    }

    return 0;
}