// search an item in tree
void search() {
    int item, flag = 0;
    
    cout << "Enter the item you want: ";
    cin >> item;
    
    Node* trav = root;
    while(trav != NULL) {
        if(item == root->data) {
            cout << "Item found.";
            flag = 1;
        }
        else if(item > trav->data) {
            trav = trav->left;
        }
        else
            trav = trav->right;
                
        if(flag == 0)
            cout << "Item not found." << endl;
    }   
}

// Maximum item in a BST
void max() {
    Node* trav = root;
    
    while(trav->right != NULL) 
        trav = trav->right;
        
    cout << "Max item: " << trav->data;
}

// Minimum item in a BST
void min() {
  Node* trav = root;
  
  while(trav->left != NULL)
     trav = trav->left;
  
  cout << "Minimum item:" << trav->data;
}

// Even nodes in a BST
void even_node(Node* root) {
  if(root != NULL) {
    even_node(root->left);
    
    if(root->data % 2 == 0)
      cout << root->data << " ";
    
    even_node(root->right);
}
  
// Height of BST
int maxHeight(Node* root){
  if (root == NULL)
    return 0;
  else {
    /* compute the depth of each subtree */
    int lHeight = maxHeight(root->left);
    int rHeight = maxHeight(root->right);
 
    /* use the larger one */
    if (lHeight > rHeight)
      return (lHeight + 1);
    else
      return (rHeight + 1);
    }
}
