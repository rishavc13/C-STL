#include<iostream>
#include<queue>

using namespace std;

/* Operations like push, pop, front, back have T.C of O(1) */

int main() {
    queue<string> q;

    q.push("Rishav");
    q.push("Chetan");
    q.push("Gupta");
    q.push("Kumar");

    cout<<"First element ="<<q.front()<<endl;
    q.pop();
    cout<<"First element after pop ="<<q.front()<<endl;
    cout<<"Last element ="<<q.back()<<endl;

    cout<<"Size after pop ="<<q.size()<<endl;
    
    return 0;

}