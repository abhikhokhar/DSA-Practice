#include<iostream>
using namespace std;

int sum(int a, int b){
    int result = a+b;
    return result;

}
// int main(){
//     int a;
//     int b;
//     cin >> a >> b;
//     int final = sum(a,b);
//     cout << "Sum of numbers is: " << final;
// }

//pass by value
// void doSomething(int a){
//     cout << a << endl;
//     a += 5;
//     cout << a << endl;
//     a +=5;
//     cout << a << endl;
// }

// int main(){
//     int a = 20;
//     doSomething(a);
//     cout << a;
// }

//pass by reference
void doSomething(int &a){
    cout << a << endl;
    a += 5;
    cout << a << endl;
    a +=5;
    cout << a << endl;
}

int main(){
    int a = 20;
    doSomething(a);
    cout << a;
}