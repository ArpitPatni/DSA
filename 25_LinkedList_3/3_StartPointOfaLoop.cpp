#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
        cout<<"Hello"<<endl;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(Node * &head){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
}
int getLength(Node * head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
Node*  checkForStartingPoint(Node* &head){
    Node*slow=head;
    Node*fast=head;
    if(head==NULL){
      return NULL;
    }
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        //Floyd cycle finding algorithm
        if(slow==fast){
            slow=head;
            break;
        }
    }
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}
int main(){
    Node*head=new Node(10);
    Node*second=new Node(20);
    Node*third=new Node(30);
    Node*fourth=new Node(40);
    Node*fifth=new Node(50);
    Node*sixth=new Node(60);
    Node*seventh=new Node(70);
    Node*eighth=new Node(80);
    Node*ninth=new Node(90);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eighth;
    eighth->next=ninth;
    ninth->next=fifth;

    head=checkForStartingPoint(head);
    cout<<"Starting point of loop "<<head->data<<endl;
    return 0;




}