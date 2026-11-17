#include <iostream>
using namespace std;

struct Node {
    char data;
    Node *next;
};

Node *top = NULL;

int isEmpty() {
    if (top == NULL)
        return 1;
    return 0;
}

void push(char c) {
    Node *baru = new Node;
    baru->data = c;
    baru->next = top;
    top = baru;
}

char pop() {
    if (isEmpty() == 1) {
        cout << "Stack kosong!" << endl;
        return '\0';
    }
    Node *hapus = top;
    char c = hapus->data;
    top = top->next;
    delete hapus;
    return c;
}

void tampilStack() {
    Node *bantu = top;
    cout << "Isi stack : ";
    while (bantu != NULL) {
        cout << bantu->data << " ";
        bantu = bantu->next;
    }
    cout << endl;
}

int main() {
    char kata[100];
    char hasil[100];
    int i = 0;

    cout << "Masukkan sebuah kata : ";
    cin >> kata;

    while (kata[i] != '\0') {
        push(kata[i]);
        i++;
    }

    tampilStack();

    i = 0;
    while (isEmpty() == 0) {
        hasil[i] = pop();
        i++;
    }
    hasil[i] = '\0';

    cout << "Kata asli : " << kata << endl;
    cout << "Kata terbalik : " << hasil << endl;
    if (kata[0] == hasil[0] && kata[1] == hasil[1]){
        cout<<"Palindrom";
    }if (kata[0] != hasil[0] || kata[1]!= hasil[1]){
        cout<<"Bukan Palindrom";
    }

}