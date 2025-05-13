// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Nice to meet you " << name << "!" << endl;
    
    cout << endl << endl;
    return 0;
}