#include<iostream>
#include<set>

using namespace std;

/* Set only stores unique elements. Returns elements in sorted order.
Unordered set returns element in random order. It is faster than set. */

int main() {
    set<int> s;
    s.insert(5);  // T.C = O(log n)
    s.insert(5);
    s.insert(0);
    s.insert(1);
    s.insert(4);
    s.insert(0);
    s.insert(5);

    for(int i:s) {
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    
    s.erase(it);  // T.C = O(log n)
    for(auto i: s) {
        count<<i<<" ";
    }
    cout<<endl;

    cout<<"check if 5 is present or not :"<<s.count()<<endl; // check if an element is present. T.C. = O(log n)

    set<int>::iterator itr = s.find(5); // returns reference to the element in the Set. T.C = O(log n)
    cout<<"Value present at itr ="<<*itr<<endl;

    for(auto it=itr; it!=s.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

}