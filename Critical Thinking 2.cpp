#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare variables
    string firstString, secondString, concatenatedString;

    // Repeat for three times
    for (int i = 0; i < 3; ++i) {
        // Prompt user to input first string
        cout << "Enter the first string: ";
        getline(cin, firstString);

        // Prompt user to input second string
        cout << "Enter the second string: ";
        getline(cin, secondString);

        // Concatenate strings
        concatenatedString = firstString + secondString;

        // Print concatenated string
        cout << "Concatenated string: " << concatenatedString << endl << endl;
    }

    return 0;
}