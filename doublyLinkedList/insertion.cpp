#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        prev->next = temp; 
        temp->back = prev;    
        prev = temp;   
    }
    return head;
}

void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

Node* insertHead(Node* head, int val){
    Node* temp = new Node(val);
    temp->next = head;
    temp->back = nullptr;
    return temp;
}

Node* insertTail(Node* head, int val){
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    newNode->back = temp;
    newNode->next = nullptr;
    return head;
}

//insertion before the tail
Node* insertBeforetail(Node* head, int val){
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->back = newNode;
    newNode->back = temp;
    return head;
}

//insert before the kth node of doubly LL
Node* insertkth(Node* head, int k, int val){
    if(k ==1){
        return insertHead(head, val);
    }
    Node* temp = head;
    int cnt =0;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            break;
        }
        temp = temp->next;
    }
    Node* newNode = new Node(val);
        Node* prev = temp->back;
        prev->next = newNode;
        newNode->next = temp;
        newNode->back = prev;
        temp->back = newNode;
        return head;
}

//insert value before element
Node* insertVal(Node* head, int el, int val){
    if(head->data == el){
        Node* newNode = new Node(val);
        newNode->next = head;
        newNode->back = nullptr;
        head->back = newNode;
        return newNode;
    }
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == el){
            break;
        }
        temp = temp->next;
    }
        Node* newNode = new Node(val);
        Node* prev = temp->back;
        prev->next = newNode;
        newNode->next = temp;
        newNode->back = prev;
        temp->back = newNode;
        return head;

}

int main(){
    vector<int> arr = {2,4,6,8};
    Node* head = convertToLL(arr);
    head = insertVal(head, 6,5);
    print(head);
}