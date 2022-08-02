#include <iostream>
#include<deque>

using namespace std;



int main() {
    deque<int> d;

    d.push_back(1);
    d.emplace_back(4); // insert elements at back
    d.push_front(2);
    d.emplace_front(9); // insert elements at front

    for (int i:d){
        cout<<i<<" ";
    }

    d.pop_back(); // deleting element from back
    cout<<endl<<"Popped from back :";
    for (int i:d){
        cout<<i<<" ";
    }

    d.pop_front(); // delete element from front
    cout<<endl<<"Popped from front :";
    for (int i:d){
        cout<<i<<" ";
    }

    cout<<"Print first element :"<<d.at(1)<<endl;
    cout<<"Front element :"<<d.front()<<endl;
    cout<<"Last element :"<<d.back()<<endl;
    cout<<"Is empty ?"<<d.empty()<<endl;

    cout<<"Before Erasing Size :"<<d.size()<endl;
    d.erase(d.begin(), d.begin()+1);  // d.begin() gives index of first element in the deque
    cout<<"After Erasing Size :"<<d.size()<<endl;

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;

}