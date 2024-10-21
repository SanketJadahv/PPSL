#include<fstream>
#include<iostream>
using namespace std;
int main (){
    ofstream outFile("example.txt");
    
    if (outFile.is_open()){
        outFile<<"Hello, World!\n";
        outFile<<"This is a text filein C++\n";
        outFile.close();
        cout<<"Data written to file successfully."<<endl;
    }else{
        cout<<"Error:Could not open the file."<<endl;
        }
    return 0;
}