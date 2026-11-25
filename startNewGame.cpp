#include "startNewGame.h"

#include <string>
#include <iostream>
#include <limits>
using namespace std;

string NewGame::getUsername() {
    cout << "Enter a username: ";
    
    //Clear any previous leftover input
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, username);

    while (!usernameIsValid(username)) {
        cin.clear();
        cout << "Please try again: ";
        getline(cin, username);
    }
    return username;
}

bool NewGame::usernameIsValid(const string& user) { //Check for invalid characters
    if (user.empty()) {
        cout << "Username cannot be empty." << endl;
        return false;
    }
    for (char ch : user) {
        if (ch == '{') {
            cout << "Username cannot contain \"{\"" << endl;
            return false;
        } else if (ch == '}') {
            cout << "Username cannot contain \"}\"" << endl;
            return false;
        } else if (ch == '\"') {
            cout << "Username cannot contain quotes" << endl;
            return false;
        } else if (ch == '\'') {
            cout << "Username cannot contain apostrophes" << endl;
            return false;
        } else if (ch == ':') {
            cout << "Username cannot contain \":\"" << endl;
            return false;
        } else if (ch == ',') {
            cout << "Username cannot contain \",\"" << endl;
            return false;
        } else if (ch == '*') {
            cout << "Username cannot contain \"*\"" << endl;
            return false;
        }
    }
    return true;
}