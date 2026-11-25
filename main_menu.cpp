#include "main_menu.h"
#include "startNewGame.h"
#include "parser.h"

#include <iostream>
#include <limits>
using namespace std;

int MainMenu::getInput() {
    int choice;
    while (!(cin >> choice) || choice < 1 || choice > 3) {
        cout << "Invalid input. Please enter either 1, 2, or 3: ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return choice;
}
int userInput;

void MainMenu::display() {
        cout << "Welcome to [Game Name Here]!" << endl;
        cout << "Please select a choice (1-3):" << endl;
        cout << "1. Start New Game" << endl;
        cout << "2. Load Game" << endl;
        cout << "3. Exit" << endl;
        cout << "Make a selection: ";
        userInput = getInput();
}

void MainMenu::newGame() {
    cout << "Starting new game..." << endl;
    NewGame game;
    string username = game.getUsername();
    cout << "Welcome " << username << "!" << endl;
    loadGame(username);
}

void MainMenu::loadGame() {
    cout << "Which game would you like to load?" << endl;
}

void MainMenu::loadGame(const std::string& user) {
    cout << "Loading game for: " << user << "..." << endl;
}