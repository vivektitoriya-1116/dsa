#include <iostream> 
using namespace std;
class Player{
    public:
    std::string name;
    void roar()
    {
        std::cout<<name<<"shouts!"<<std::endl;
    }
};
int main()
{
    Player p1;
    p1.name="thor";
    p1.roar();
    Player p2;
    p2.name="odin";
    p2.roar();
    return 0;
}