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
        createNode();
    printNode();
}
