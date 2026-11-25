#ifndef MainMenu_H
#define MainMenu_H

#include <string>

class MainMenu {
    private:
        int getInput();
    public:
        int userInput;
        void display();
        void newGame();
        void loadGame();
        void loadGame(const std::string& user);
};
#endif