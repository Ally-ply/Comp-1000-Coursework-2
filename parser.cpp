#include "parser.h"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void SaveParser::readFromSave() {
    ifstream save(saveFilePath);
    if (!save.is_open()) {
        cerr << "Failed to open save file" << endl;
        exit(1);
    }
    
}

void SaveParser::createSaveFile() {
    ofstream save(saveFilePath);
    if (save.is_open()) {
        cout << "File created successfuly" << endl;
        save.close();
    } else {
        cerr << "Failed to open file" << endl;
        exit(1);
    }
}