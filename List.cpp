#include<iostream>
#include<list>

using namespace std;

/* Lists are implemented using doubly linked list. Have both left and right pointers.
Dynamic access is not possible */

int main() {
    list<int> l;

    list<int> n(l): // Copy list l into list n
    list<int> w(5,100); // Create a list w with 5 elements, each inititalized to 100

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }
    l.erase(l.begin());
    cout<<"After erasing :"<<endl;
    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;


}