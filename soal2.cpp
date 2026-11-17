#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main(){
    int nilai1,nilai2;
    cout<<"Masukkan data 1 :"; cin>>nilai1;
    cout<<"Masukkan data 2 :"; cin>>nilai2;

    node* node1 = new node();
    node1->data = nilai1;
    node1->next = nullptr;

    node* node2 = new node();
    node2->data = nilai2;
    node2->next = nullptr;

    node1->next = node2;

    node* head = node1;
    node* tail = node2;

    if(node1 > node2){
        node2 -> next = node1;
        node1 = tail;
    }

    node* temp = head;
    while (temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}