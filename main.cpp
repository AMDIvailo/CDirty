#include <iostream>
#include <string>
#include "filemgr.cpp"
#include "editor.cpp"
#include <string>
#include <iostream>

void Edit();
FileMgr file;

int main(int argc, char* argv[])
{
    if(argc == 1)
    {
        std::cout << "Enter file name: ";
        std::string editfile;
        std::cin >> editfile;
        file.loadFile(editfile);
        Edit();
    }
}

void Edit()
{
    Editor editor;
    editor.startEditor(file.getFileName());
}
