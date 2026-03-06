#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int rollno;
    float gpa;
    Student(string n, int r, float g){
        name = n;
        rollno = r;
        gpa = g;
    }
};
void print(Student s){
    cout << s.name << endl;
}
int main(){
    Student s1("Abhi khokhar", 23, 7.5);
    Student s2("saurav", 45, 6.7);
    print(s1);
}
