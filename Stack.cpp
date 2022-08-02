#include<iostream>
#inlcude<stack>

using namespace std;

int main() {
    stack<string> s;
    s.push("Rishav");
    s.push("Chetan");
    s.push("Gupta");

    for (int i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Top element :"<<s.top()<<endl;

    s.pop();  // Remove element
    cout<<"Empty or not ?"<<s.empty()<<endl;
    cout<<"Size ="<<s.size()<<endl;

}
