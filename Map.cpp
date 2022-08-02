#include<iostream>
#include<map>

using namespace std;

/* Map outputs elements is sorted order. Map is implemented using Red-Black Tree or Balanced Tree.
Unordered map in random order. Implemented using Hash Table. */

int main() {
    map<int,string> m;

    m[1] = "Rishav";
    m[2] = "chetan";
    m[13] = "June";
    m.insert({5,"December"});  ?? T.C = O(log n)

    for (auto i: m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 13 -->"<<m.count(13)<<endl;
    m.erase(13); // T.C = O(log n)
    cout<<"After erase :"<<endl;
    for (auto i: m) {
        cout<<i.first()<<" "<<i.second()<<endl;
    }

    auto it = m.find(5);
    for(auto i=it; i!=m.end(); i++) {
        cout<<(*i).first<<endl;
    }

}