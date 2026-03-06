#include<bits/stdc++.h>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    Cricketer(string name, int runs){
        this->name = name;
        this->runs = runs;
    }
};
int main(){
    Cricketer C1("Virat Kohli", 12000);
    Cricketer C2("Rohit Sharma", 9000);
    cout << C1.name << " " << C1.runs << endl;
    cout << C2.name << " "<< C2.runs << endl;
}