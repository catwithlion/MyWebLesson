#include<iostream>
using namespace std;
struct node
{
int number;
node*next;// hey this is how to interpret the 
public:
node(int val){
    number=val;
    next=NULL;
}
};
class  queue{
node *front;
node *rear;
public:
queue(){
    front=NULL;
    rear=NULL;

}
void enque(int num){
    node *newNode=new node(num);
//what we have to consider when ever we enque data ? it is rare 
if(rear==NULL){
   front= rear =newNode;
   return ;
}

else{
//what happen if rear is not equal with null

rear->next=newNode;
rear=newNode;

}
}
};
int main(){
queue que;

}