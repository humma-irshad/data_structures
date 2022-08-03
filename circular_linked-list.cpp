class Node {
     public:
        int value;
        Node* next;
 };
 
 Node* head;
 Node* tail;

// create node
void createNode(int nodeVal) {
    Node* temp = new Node();
    temp->value = nodeVal;
    
    if(head == NULL) {
        head = temp;
        tail = head;
        tail->next = temp;
    }
    else {
        tail->next = temp;
        tail = tail->next;
        tail->next = head;
    }
}

// delete nodes
void deleteNode() {
    int nodeVal;
    cout << "Enter the value of the node you want to delete: ";
    cin >> nodeVal;
    if(head->value == nodeVal) {
        Node* temp = head;
        head = temp->next;
        tail->next = head;
        free(temp);
    } else {
        Node* trav = head;
        while(trav->next->value != nodeVal) {
            trav = trav->next;
        }
        Node* temp = trav->next;
        trav->next = temp->next;
        if(trav->next == NULL)
            trav->next = head;
        free(temp);
    }
}


// print nodes
void printNode() {
    Node* temp = head;
    do {
        cout << temp->value << endl;
        temp = temp->next;
    } while(temp != head);
}

int main() {
    int nodes;
  
    cout << "How many nodes do you want to insert? ";
    cin >> nodes;
    for(int i = 0; i < nodes; i++)
        createNode(i);
     
     deleteNode();
    printNode();
}
