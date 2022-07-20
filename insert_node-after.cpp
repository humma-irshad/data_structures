void insertNode(int val) {
    int nodeVal;
		Node* temp = head;
    Node* newNode = new Node();
    newNode->value = val;
    cout << "The value of node after you want to insert: ";
    cin >> nodeVal;
    while(temp != NULL) {
        if(temp->value == nodeVal) {
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        else
            temp = temp->next;
    }
}

int main() {
	...
	insertNode(6);
}
