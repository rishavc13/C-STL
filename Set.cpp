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
    s.emplace(3);
    s.insert(0);
    s.insert(5);

    for(int i:s) {
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    
    s.erase(it);  // T.C = O(log n). Can erase both, an element directly or an iterator
    for(auto i: s) {
        count<<i<<" ";
    }
    cout<<endl;

    cout<<"check if 5 is present or not :"<<s.count()<<endl; // check if an element is present. T.C. = O(log n)

    set<int>::iterator itr = s.find(5); /* Returns reference(iterator) to the element in the Set. T.C = O(log n)
    If an element is not present then find() returns an itrator which points to the next to the last element of the set */
    cout<<"Value present at itr ="<<*itr<<endl;

    for(auto it=itr; it!=s.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    // Upper and lower bound
    auto it = s.lower_bound(2);
    auto it2 = s.upper_bound(3);

    return 0;

}