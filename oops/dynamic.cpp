#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int rno;
    float gpa;
    Student(string name, int rno, float gpa){
        this->name = name;
        this->rno = rno;
        this->gpa = gpa;
    }
};
int main(){
    // int *ptr = new int(10);
    // cout << ptr <<" "<< *ptr << endl;
    Student s1("sumit", 23, 5.7);
    Student *ptr = new Student("Jatin", 45, 9.8);
    cout << s1.name << " "<< s1.rno<< endl;
    cout << (*ptr).name << " " << (*ptr).rno << endl;
    cout << ptr->gpa;

}