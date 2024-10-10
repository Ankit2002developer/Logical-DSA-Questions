#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* next;

    public:
    node(int data1, node* next1) {
        data = data1;
        next = next1;
    }
    
    node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// converting an array to linkedlist and returning the head of linked list

node* convertArrayToLL(vector<int> &arr) {
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

// return the length of the linked list

int lengthOfLL(node* head) {
    int count = 0;
    node* temp = head;
    while(temp) {
        count++;
        temp = temp -> next;
    }
    return count;
}

// check whether a node is present in the linked list or not

bool isNodePresent(node* head, int val) {
    node* temp = head;
    while(temp) {
        if(temp -> data == val) return true;
        temp = temp -> next;
    }
    return false;
}

node* deleteHead(node* head) {
    if(head == nullptr || head -> next == nullptr) return nullptr; // for null or single node linked lists
    node* temp = head;
    head = temp -> next;
    delete temp;
    return head;
}

node* deleteTail(node* head) {
    if(head == nullptr || head -> next == nullptr) return nullptr; // for null or single node linked lists
    node* temp = head;
    while(temp -> next -> next) {
        temp = temp -> next;
    }
    delete temp -> next;
    temp -> next = nullptr;
    return head;
}

// delete kth node in a linked list

node* deleteKthNode(node* head, int k) {
    if(head == nullptr) return head;
    if(k == 1) {
        node* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
    int count = 0;
    node* temp = head;
    node* prev = nullptr;
    while(temp) {
        count++;
        if(count == k) {
            prev -> next = prev -> next -> next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head;
}

// delete the node which has value equal to val

node* deleteEl(node* head, int el) {
    if(head == nullptr) return head;
    if(head -> data == el) {
        node* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
    node* temp = head;
    node* prev = nullptr;
    while(temp) {
        if(temp -> data == el) {
            prev -> next = prev -> next -> next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head;
}

// inerting the head in a linked list

node* insertHead(node* head, int val) {
    node* temp = new node(val, head);
    return temp;
}

// insertion at the tail of linked list

node* insertTail(node* head, int val) {
    if(head == nullptr) return new node(val);
    node* tail = new node(val);
    node* temp = head;
    while(temp -> next) {
        temp = temp -> next;
    }
    temp -> next = tail;
    return head;
}

// insertion at position k in a linked list

node* insertK(node* head, int k, int val) {
    if(head == nullptr) {
        if(k == 1) return new node(val);
        else return nullptr;
    }
    if(k == 1) {
        return new node(val, head);
    }
    int count = 0;
    node* temp = head;
    while(temp) {
        count++;
        if(count == k-1) {
            node* x = new node(val);
            x -> next = temp -> next;
            temp -> next = x;
            break;
        }
        temp = temp -> next;
    }
    return head;
}

//insert el before the value x in linked list

node* insertValBeforeK(node* head, int k, int val) {
    if(head == nullptr) {
        return nullptr;
    }
    if(head -> data == k) {
        return new node(val, head);
    }
    node* temp = head;
    while(temp) {
        if(temp -> next -> data == k) {
            node* x = new node(val);
            x -> next = temp -> next;
            temp -> next = x;
            break;
        }
        temp = temp -> next;
    }
    return head;
}

// printing all the nodes of a linked list

void print(node* head) {
    node* temp = head;
    while(temp) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "null";
}
