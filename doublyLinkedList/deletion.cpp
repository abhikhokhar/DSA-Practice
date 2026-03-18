#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertToLL(vector<int> & arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}

Node* deleteHead(Node* head){
    Node* temp = head;
    head = head->next;
    head->back = nullptr;
    free(temp);
    return head;
}
Node* deleteTail(Node* head){
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    temp->next = nullptr;
    free(temp->next);
    return head;
}

int main(){
    vector<int> arr = {2,4,6,8,10};
    Node* head = convertToLL(arr);
    head = deleteTail(head);
    print(head);
}