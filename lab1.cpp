#include <iostream>
#include <string>
using namespace std;

class Hero{
private:
    string name;
    int level;
public:
    Hero(string str, int vel){
        this->name = str;
        level = vel; }
    string getName(){
        return this->name; }
    int getLevel(){
        return this->level;}
};

int main(){
    string name_;
    int vel;

    cin >> name_;
    cin >> vel;

    Hero h(name_, vel);

    cout << h.getName() << h.getLevel() <<endl;
}