#include "main_menu.h"
#include <iostream>

int main() {
    MainMenu menu;
    menu.display();
    switch (menu.userInput) {
        case 1:
            menu.newGame();
            break;
        case 2:
            menu.loadGame();
            break;
        case 3:
            std::cout << "Exiting the game...";
            return 0;
        defalut: 
            std::cout << "Error: input validation error";
            return 1;
    }
}