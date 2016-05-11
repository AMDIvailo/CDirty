#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
class Editor
{
private:
    std::string text;
    std::string currentFile;
    std::fstream Cfile;
public:
    void startEditor(std::string filename)
    {
        const char *currentFile = filename.c_str();
        Cfile.open(currentFile, std::fstream::out);
        std::cout << "\033[2J\033[1;1H";
        std::cout << "Current file: " << filename << std::endl;
        std::cin.ignore();
        uint linenumber = 1;
        while(1 == 1)
        {
        std::cout << linenumber << " ";
        std::getline(std::cin, text);
        if(text == "c:exit")
        {
            Cfile.close();
            exit(0);
        }
        else
            Cfile << text << std::endl;

        linenumber++;
        }


    }

    void putLineInFile(std::string text)
    {

    }
};
