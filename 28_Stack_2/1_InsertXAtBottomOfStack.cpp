#include<iostream>
#include<stack>
using namespace std;


void insertAtBottom(stack<int>&s,int &target){
     if(s.empty()){
        s.push(target);
        return ;
    }
    int topElement=s.top();
    s.pop();
    insertAtBottom(s,target);
    s.push(topElement);

}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    if(s.empty()){
        cout<<"Stack is empty"<<endl;
        return 0; 
    }
    int target=s.top();
    s.pop();
 
    insertAtBottom(s,target);

    cout<<"Printing"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}