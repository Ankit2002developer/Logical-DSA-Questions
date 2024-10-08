#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// convert an array to a linked list

class node {
    public:
    int data;
    node* next;

    node(int data1, node* next1) {
        this -> data = data1;
        this -> next = next1;
    }
    node(int data1) {
        this -> data = data1;
        this -> next = nullptr;
    }
};

node* convertArrToLL(vector<int> arr) {
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

