#include <string>

class FileMgr
{
private:
    std::string filename;
public:
    std::string getFileName()
    {
        return filename;
    }

    void loadFile(std::string file)
    {
        filename = file;
    }
};
