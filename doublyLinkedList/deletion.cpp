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
        temp->back = prev;
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

Node* deleteKthNode(Node* head, int k){
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    if(k == 1){
        head = head->next;
        head->back = nullptr;
        free(temp);
        return head;
    }
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            break;
        }
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;
    prev->next = temp->next;
    if(front == NULL){
        temp->next = nullptr;
    temp->back = nullptr;
        free(temp);
        return head;
    } 
    front->back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    free(temp);
    return head;
}

Node* deleteVal(Node* head, int val){
    if(head == NULL || head->next == NULL) return NULL;
    if(head->data == val){
        head = head->next;
        head->back = nullptr;
        return head;
    }
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == val){
            break;
        }
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;
    prev->next= temp->next;
    if(front == NULL){
        temp->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return head;
    }
    front->back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    free(temp);
    return head;
}
Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* newTail = tail->back;
    newTail->next = nullptr;
    tail->back = nullptr;
    free(tail);
    return head;
}

int main(){
    vector<int> arr = {2,4,6,8,10};
    Node* head = convertToLL(arr);
    head = deleteVal(head, 10);
    print(head);
}