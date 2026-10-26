#include<iostream>
#include<string>

using namespace std;

class stack{
    //what does tis class supoosed to have ? this is great question
    /*
    stack has reference to the top
    also has its container to push .
    */

    //to get absolute reference  we need to use  int  also from -1 to get initial 0
    int top=-1;
    char stackcontainer[100];

public:

    void push(char theNumber);
    char pop();
    bool empty();
};

void stack::push(char theNumber){
    if(top<99){
        top++;
        stackcontainer[top]=theNumber;
    }else{
        cout<<"stack overflow\n";
    }
}

char stack::pop(){
    char topChar;

    if(!empty()){
        topChar=stackcontainer[top];
        top--;
        return topChar;
    }

    return '\0';
}

bool stack::empty(){
    return top==-1;
}

struct node{
    char letter;
    node*next;
};

class linkProcessor{

    node* head=NULL;

    stack thestack;

public:

    void createLink(char letter){

        node *Node=new node;

        Node->letter=letter;
        Node->next=NULL;

        if(head==NULL){
            //then the list was empty and we are just to add numbers ;
            head=Node;
        }
        else{
            //we have conseded that the list has priori  data so ...
            //here we are adding from the beginning since the stream of character is coming just from the beginning

            //okay here let's make the trace

            node *current=head;

            //here I have created the  curret pointer to trace to the current node

            //current pointer start from the head and trace to the current node

            while(current->next !=NULL){
                current=current->next;
            }

            //here I implement the codintion where the current next==NULL

            current->next=Node;
        }

        //here is the question to be raised

        //I think I am facing two overwheming idea for what to do
        //the first one is to push the nodes to the stack directly

        //the second is after completly filling the list
        //then iterating over and then pushing one by one to the stack
    }

    node* getHead(){
        return head;
    }
};

int main(){

    stack newStack;
    linkProcessor linkedList;

    cout<<"enter any text\n";

    string inputText;

    getline(cin,inputText);

    for(char c:inputText){
        linkedList.createLink(c);
    }

    //now we have created the linked list
    //and we have the input text in the linked list
    //now we need to push it to the stack

    //now I have my string inform of char lists

    node *traversePointer=linkedList.getHead();

    while(traversePointer!=NULL){

        newStack.push(traversePointer->letter);

        traversePointer=traversePointer->next;
    }

    cout<<"\ncharacters popped from stack:\n";

    while(!newStack.empty()){
        cout<<newStack.pop();
    }

    cout<<endl;

    //now I need to plase this stream in to the linked list
    //but can I and shall I take each character as independent input?

    //it is clear that this step is innefficient
    //it is such a fun to say use first string then change the string to the linkedlist

    ///deiscription of the program

    //this program take the input and save it to the linked list
    //then push to stack.

    ///TODO fill that in to the que

    /*
    in this program I am expected to learn

    >linked list implementation

    >stack implementation

    >traversal from one data structure to another

    */

    return 0;
}