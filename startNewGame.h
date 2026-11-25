#ifndef StartNewGame_H
#define StartNewGame_H

#include <string>
using namespace std;

class NewGame {
    public:
        string getUsername();
    private:
        string username;
        bool usernameIsValid(const string& user);
};
#endif