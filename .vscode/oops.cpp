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
    Player player1;
    player1.name="John";
    player1.roar();
    return 0;
}