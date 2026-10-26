#include<iostream>
using namespace std;

struct node{
    int number;
    node* leftChild;
    node* rightChild;

public:

    node(int num){
        number = num;
        leftChild = NULL;
        rightChild = NULL;
    }
};

//her we have succesfully created our   node blue print

class Tree{

    node *root;//for the root node ;

    //recursive helper function for preorder traversal
    void preorder(node *ptr){

        if(ptr != NULL){

            cout << ptr->number << " ";

            preorder(ptr->leftChild);

            preorder(ptr->rightChild);
        }
    }

    //recursive helper function for inorder traversal
    void inorder(node *ptr){

        if(ptr != NULL){

            inorder(ptr->leftChild);

            cout << ptr->number << " ";

            inorder(ptr->rightChild);
        }
    }

    //recursive helper function for postorder traversal
    void postorder(node *ptr){

        if(ptr != NULL){

            postorder(ptr->leftChild);

            postorder(ptr->rightChild);

            cout << ptr->number << " ";
        }
    }

public:

    Tree(){

        root = NULL;// we are assuming whenever we create new instance of the tree the root will be null

    }

    void insertNode(int number){

        node *newNode = new node(number);

        node *parent = NULL;//this is to keep track where the last node is and then to addd leafs

        node *current = root;

        if(root == NULL){

            root = newNode;
        }

        else{

            while(current != NULL){

                parent = current;

                //when current become null  is most confusing confusion

                if(number < current->number){

                    current = current->leftChild;

                }

                else if(number > current->number){

                    current = current->rightChild;
                }

                else{

                    cout << "repeated number ";

                    delete newNode;

                    return;
                }
            }

            //current is now NULL
            //parent is the last valid node visited

            if(parent->number > number){

                parent->leftChild = newNode;

            }

            else{

                parent->rightChild = newNode;
            }
        }
    }

    void Priorder(){

        preorder(root);
    }

    void Inorder(){

        inorder(root);
    }

    void Postorder(){

        postorder(root);
    }
};

int main(){

    Tree Bst;

    int num[] {5,7,3,9,2};

    for(int i : num){

        Bst.insertNode(i);
    }

    cout << "successfully filled in the bst \n\n";

    cout << "Preorder Traversal : ";
    Bst.Priorder();

    cout << "\n\nInorder Traversal : ";
    Bst.Inorder();

    cout << "\n\nPostorder Traversal : ";
    Bst.Postorder();

    cout << endl;

    return 0;
}