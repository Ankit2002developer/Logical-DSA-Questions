#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// creating a double linked list

class node {
    public:
    int data;
    node* next;
    node* prev;

    public:
    node(int data1, node* next1, node* prev1) {
        this -> data = data1;
        this -> next = next1;
        this -> prev = prev1;
    }

    node(int data1) {
        this -> data = data1;
        this -> next = nullptr;
        this -> prev = nullptr;
    }
};

// convert array to doubly linked list

node* convertArrayToLL(vector<int> &arr) {
    node* head = new node(arr[0]);
    node* prev = head;
    for(int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i], nullptr, prev);
        prev -> next = temp;
        prev = temp;
    }
    return head;
}

// length of a doubly linked list

int lengthOfDll(node* head) {
    node* temp;
    int count = 0;
    while(temp) {
        count++;
        temp = temp -> next;
    }
    return count;
}

// delete the head of a double linked list

node* deleteHead(node* head) {
    if(head == nullptr || head -> next == nullptr) return nullptr;
    node* prev = head;
    head = head -> next;
    head -> prev = nullptr;
    prev -> next = nullptr;
    delete prev;
    return head;
}

// delete the tail of a double linked list

node* deleteTail(node* head) {
    if(head == nullptr || head -> next == nullptr) return nullptr;
    node* temp = head;
    while(temp -> next) {
        temp = temp -> next;
    }
    node* newTail = temp -> prev;
    temp -> prev = NULL;
    newTail -> next = nullptr;
    delete temp;
    return head;
}

// delete kth node in a doubly linked list

node* deleteKthNode(node* head, int k) {
    node* temp = head;
    int count = 0;
    while(temp) {
        count++;
        if(count == k) break;
        temp = temp -> next;
    }
    node* back = temp -> prev;
    node* front = temp -> next;
    if(front == nullptr && back == nullptr) {
        delete temp;
        return nullptr;
    }
    else if(front == nullptr) {
        return deleteHead(head);
    }
    else if(back == nullptr) return deleteTail(head);
    else {
        back -> next = front;
        front -> prev = back;
        temp -> prev = nullptr;
        temp -> next = nullptr;
        delete temp;
        return head;
    }
}

// delete a given node from doubly linked list

void deleteNode(node* givenNode) {
    if(givenNode -> next == nullptr) {
        givenNode -> prev -> next = nullptr;
        givenNode -> prev = nullptr;
        delete givenNode;
    }
    givenNode -> prev -> next = givenNode -> next;
    givenNode -> next -> prev = givenNode -> prev;
    givenNode -> next = nullptr;
    givenNode -> prev = nullptr;
    delete givenNode;
}

// insertion before head in doubly linked list

node* insertBeforeHead(node* head, int val) {
    node* newHead = new node(val, head, nullptr);
    head -> prev = newHead;
    return newHead;
}

// insertion after head in doubly linked list

node* insertAfterHead(node* head, int val) {
    node* temp = new node(val, head -> next, head);
    head -> next -> prev = temp;
    head -> next = temp;
    return head;
}

// insertion before tail in a doubly linked list

node* insertBeforeTail(node* head, int val) {
    if(head == nullptr) return new node(val);
    if(head -> next == nullptr) return insertBeforeHead(head, val);
    node* tail = head;
    while(tail -> next) tail = tail -> next;
    node* back = tail -> prev;
    node* newNode = new node(val, tail, back);
    tail -> prev = newNode;
    back -> next = newNode;
    return head;
}

// insert before kth node in doubly linked list

node* insertBeforeKthll(node* head, int k, int val) {
    if(head == nullptr) return new node(val);
    if(k == 1) return insertBeforeHead(head, val);
    node* temp = head;
    int count = 0;
    while(temp) {
        if(count == k) break;
        count++;
        
        temp = temp -> next;
    }
    node* back = temp -> prev;
    node* newNode = new node(val, temp, back);
    back -> next = newNode;
    temp -> prev = newNode;
    return head;
}

// reverse a doubly linked list

node* reverseDll(node* head) {
    if(head == nullptr || head -> next == nullptr) return head;
    node* back = nullptr;
    node* current = head;
    while(current) {
        back = current -> prev;
        current -> prev = current -> next;
        current -> next = back;
        current = current -> prev;
    }
    return back -> prev;
}

// print the linked list

void printLinkedList(node* head) {
    node* temp = head;
    while(temp) {
        cout << temp -> data << " <-> ";
        temp = temp -> next;
    }
}
