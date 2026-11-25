#ifndef Parser_H
#define Parser_H

#include <string>

class SaveParser {
    public: 
        std::string saveFilePath = "save.csv";
        void readFromSave();
        void writeToSave();
        void createSaveFile();
};

#endif