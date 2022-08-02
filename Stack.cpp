#include<iostream>
#include<stack>

using namespace std;

/* Operations like push, pop, top all have T>C of O(1) */

int main() {
    stack<string> s;
    s.push("Rishav");
    s.push("Chetan");
    s.push("Gupta");
    s.emplace("Kumar");

    for (int i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Top element :"<<s.top()<<endl;

    s.pop();  // Remove element
    cout<<"Empty or not ?"<<s.empty()<<endl;
    cout<<"Size ="<<s.size()<<endl;

    // swap function
    stack<int> st1, st2;
    st1.swap(st2);

    return 0;

}
