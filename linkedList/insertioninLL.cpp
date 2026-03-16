#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* converttoLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLL(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}

Node* insertHead(Node* head, int val){
    Node* temp = new Node(val, head);
    return temp;
}

Node* insertTail(Node* head, int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node* insertKth(Node* head, int val, int k){
    if(head == NULL){
        if(k ==1){
            return new Node(val);
        }
        else{
            return NULL;
        }
    }
    if(k == 1){
        Node* temp = new Node(val, head);
        return temp;
    }
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(cnt == k-1){
            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node* insertNel(Node* head, int val, int nEl){
    if(head == NULL){
        return NULL;
    }
    if(head->data == nEl){
        Node* temp = new Node(val, head);
        return temp;
    }
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->next->data == nEl){
            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {4,6,8,10};
    Node* head = converttoLL(arr);
    head = insertHead(head, 2);
    head = insertTail(head, 12);
    head = insertNel(head,3,4);
    printLL(head);
}
