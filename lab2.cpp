#include <iostream>
#include <string>

using namespace std;

class Hero{
private:
    string name;
    int level;
public:
    Hero(string name, int level){
        this->name = name;
        this->level = level;}
    string getName() {
        return this->name;}
    int getLevel(){
        return this->level;}
}; 

int main(){
    string Name;
    int level;

    cin >> Name >> level;

    Hero h(Name, level);

    cout << h.getName() << ' ' << h.getLevel() <<endl;

}