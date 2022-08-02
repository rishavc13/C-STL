#include<iostream>
#include<queue>

using namespace std;

int main() {
    queue<string> q;

    q.push("Rishav");
    q.push("Chetan");
    q.push("Gupta");

    cout<<"First element ="<<q.front()<<endl;
    q.pop();
    cout<<"first element ="<<q.front()<<endl;

    cout<<"Size after pop ="<<q.size()<<endl;
    

}