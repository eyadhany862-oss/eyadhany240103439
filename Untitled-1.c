#include <iostream>
#include <stdexcept> 

using namespace std;


class node
{
public:
    int data;
    node* left;
    node* right;

   
    node(int value)
    {
        data = value;
        left = right = NULL;
    }
};


class BST
{
private:
    node* root;

    
    node* Insert(node* r, int item)
    {
        if (r == NULL)
        {
         
            return new node(item);
        }
        else if (item < r->data)
        {
            
            r->left = Insert(r->left, item);
        }
        else if (item > r->data) 
        {
          
        }
         
            r->right = Insert(r->right, item);
        }
       

        return r; 
    }

  
    void preorder(node* r)
    {
        if (r == NULL)
            return;

        cout << r->data << "\t";
        preorder(r->left);
        preorder(r->right);
    }

   
    void inorder(node* r)
    {
        if (r == NULL)
            return;

        inorder(r->left);
        cout << r->data << "\t";
        inorder(r->right);
    }

   
    void postorder(node* r)
    {
        if (r == NULL)
            return;

        postorder(r->left);
        postorder(r->right);
        cout << r->data << "\t";
    }

   
    node* search(node* r, int key)
    {
        if (r == NULL || r->data == key)
            return r;

        else if (key < r->data)
            return search(r->left, key); 
        
        else 
            return search(r->right, key);
    }

   
    node* findmin(node* r)
    {
        if (r == NULL)
            return NULL;
       
        else if (r->left == NULL)
            return r;
        else
            return findmin(r->left);
    }

  
    node* deleteNode(node* r, int key)
    {
     
        if (r == NULL)
            return NULL;


        if (key < r->data)
            r->left = deleteNode(r->left, key);
        else if (key > r->data)
            r->right = deleteNode(r->right, key);

       
        else 
        {
           
            if (r->left == NULL)
            {
                node* temp = r->right;
                delete r;
                return temp;
            }
            else if (r->right == NULL)
            {
                node* temp = r->left;
                delete r;
                return temp;
            }

           
            node* temp = findmin(r->right);

           
            r->data = temp->data;

          
            r->right = deleteNode(r->right, temp->data);
        }
        return r;
    }


public:
   
    BST()
    {
        root = NULL;
    }

   

    void insert(int item)
    {
        root = Insert(root, item);
    }
    
    void displayPreorder()
    {
        cout << "\nPreorder Traversal: ";
        preorder(root);
        cout << endl;
    }

    void displayInorder()
    {
        cout << "\nInorder Traversal (Sorted): ";
        inorder(root);
        cout << endl;
    }

    void displayPostorder()
    {
        cout << "\nPostorder Traversal: ";
        postorder(root);
        cout << endl;
    }

    bool search(int key)
    {
        node* result = search(root, key);
        return (result != NULL);
    }

    int findMin()
    {
        node* minNode = findmin(root);
        if (minNode != NULL) {
            return minNode->data;
        } else {
            
            throw runtime_error("Tree is empty, cannot find minimum.");
        }
    }
    
    void deleteKey(int key)
    {
        root = deleteNode(root, key);
    }


    ~BST() {
      
        deleteTree(root);
        root = NULL;
    }

private:
    void deleteTree(node* r) {
        if (r == NULL) return;
        deleteTree(r->left);
        deleteTree(r->right);
        delete r;
    }
};



int main()
{
   

    BST tree;

   
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    cout << "--- BST Operations ---" << endl;

 
    tree.displayInorder();    
    tree.displayPreorder();   
    tree.displayPostorder();  

    
    int key1 = 40;
    int key2 = 99;
    cout << "\nSearching for " << key1 << ": " << (tree.search(key1) ? "Found" : "Not Found") << endl;
    cout << "Searching for " << key2 << ": " << (tree.search(key2) ? "Found" : "Not Found") << endl;

   
    try {
        cout << "Minimum value in tree: " << tree.findMin() << endl; 
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    
    cout << "\nDeleting node 20 (Leaf)..." << endl;
    tree.deleteKey(20);
    tree.displayInorder(); 

    cout << "\nDeleting node 70 (One child, 80)..." << endl;
    tree.deleteKey(70);
    tree.displayInorder(); 

    cout << "\nDeleting node 50 (Two children)..." << endl;
    tree.deleteKey(50);
    tree.displayInorder(); 

    return 0;
}