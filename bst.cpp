#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
};

Node* root = NULL;

void create() {
    Node* temp = new Node();
    cout << "Enter the node data:\n";
    cin >> temp->data;
    temp->left = NULL;
    temp->right= NULL;
    
    if(root == NULL)
        root = temp;
    else {
        Node* trav = root;
        while(1) {
            if(temp->data < trav->data) {
                if(trav->left == NULL) {
                    trav->left = temp;
                    break;
                }
                else
                    trav = trav->left;
            }
            else if(temp->data > trav->data) {
                if(trav->right == NULL) {
                    trav->right = temp;
                    break;
                }
                else
                    trav = trav->right;
            }
            else {
                cout << "Duplicate keys not allowed.";
            }
        }
    }
}

void pre_order(Node* root) {
    if(root != NULL) {
        cout << root->data << " ";
        pre_order(root->left);
        pre_order(root->right);
    }
}

void in_order(Node* root) {
    if(root != NULL) {
        in_order(root->left);
        cout << root->data << " ";
        in_order(root->right);
    }
}

void post_order(Node* root) {
    if(root != NULL) {
        post_order(root->left);
        post_order(root->right);
        cout << root->data;
    }
}

int main() {
    int num;
    
    cout << "Enter the number of nodes: ";
    cin >> num;
    
    while(num > 0) {
        create();
        num--;
    }
    
    pre_order(root);
}
