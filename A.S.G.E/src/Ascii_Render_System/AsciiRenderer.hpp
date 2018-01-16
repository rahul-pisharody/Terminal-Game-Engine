#include <vector>
#include <string>
#include <ncurses.h>
class AsciiRenderer
{
private:
public:
    static AsciiRenderer& getInstance();
    char frame[25][100];
    AsciiRenderer();
    ~AsciiRenderer();

    static void _startUp();
    void _shutDown();
    void clear();
    void render(std::vector<int> pos, std::string fr);
    void drawAll();
};
