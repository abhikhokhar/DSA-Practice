#include<bits/stdc++.h> 
using namespace std;
class Student{
public:
    string name;
    int rollno;
    float gpa;
};

void print(Student s){
    cout << s.name << endl;
    cout << s.rollno << endl;
    cout << s.gpa << endl;
}

int main(){
    Student s1;
    s1.name = "Raghav";
    s1.rollno = 23;
    s1.gpa = 6.5;

    Student s2;
    s2.name = "Sumit";
    s2.rollno = 24;
    s2.gpa = 7.4;

    print(s1);
}