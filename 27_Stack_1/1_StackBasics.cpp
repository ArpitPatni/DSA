#include<iostream>
#include<stack>
using namespace std;
int main(){
    //creation
    stack<int> st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);


    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    cout<<"Element on top is "<<st.top()<<endl;
    cout<<"Size of stack is "<<st.size()<<endl;
    if(st.empty()){
        cout<<"Stack is empty "<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0;
}