#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};

Node* buatNode(int data) {
    Node* nodeBaru = new Node();
    nodeBaru->data = data;
    nodeBaru->kiri = NULL;
    nodeBaru->kanan = NULL;
    return nodeBaru;
}

void tambah(Node* &root, int data) {
    if (root == NULL) {
        root = buatNode(data);
        return;
    }

    if (data < root->data) {
        tambah(root->kiri, data);
    } else if (data > root->data) {
        tambah(root->kanan, data);
    }
}


void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->kiri);
        cout << root->data << " ";
        inOrder(root->kanan);
    }
}

int main() {
    Node* root = NULL;
    int angka;

    while (true) {
        cout << "Masukkan angka: ";
        cin >> angka;

        if (angka == 0) {
            break;
        }

        tambah(root, angka);
    }
    if (root == NULL) {
        cout << "Tree kosong." << endl;
        return 0;
    }

    cout << "In-order : ";
    inOrder(root);
    cout << endl;

}