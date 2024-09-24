#include <iostream>
#include <string>
using namespace std;
int main() {
string str = "Marval";

// Concatenation
string greeting = str + ",studio!";
cout <<"Concatenation:"<<greeting << endl;

// Substring
string part = greeting.substr(7, 7);

// Extracts "studio"
cout << "Substring: " << part << endl;

// Find
size_t pos = greeting.find("studio");
cout<<"Find:'Marval'found at position"<<pos<<endl;

// Replace
string replaced = greeting;
replaced.replace(pos,9,"war");
cout << "Replace: " << replaced << endl;

// Insert
string inserted = greeting;
inserted.insert(6, " powerful ");
cout << "Insert: " << inserted << endl;

// Erase
string erased = greeting;
erased.erase(6, 7);
// Removes " beautiful"
cout << "Erase: " << erased << endl;

// To uppercase
string uppercase = greeting;
for (char &c : uppercase) c = toupper(c);
cout <<"To Uppercase:"<<uppercase << endl;

// To lowercase
string lowercase = greeting;
for (char &c : lowercase) c = tolower(c);
cout<<"ToLowercase:"<<lowercase << endl;
return 0;
}
