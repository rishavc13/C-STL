#include<iostream>
#include<vector>

using namespacestd;

/* Vectors are dynamic in nature. If an element is appended when the vector is full, then the vector doubles its size everytime.
Random access is possible */

int main() {
    vector<int> v;

    vector<int> a(5,1); // all elements initialized to 1
    cout<<"Printing a :"<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> last(a); // copy elements of vector a into last vector
    cout<<"Printing last :"<<endl;
    for(int i:last)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Capacity ="<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"Capacity ="<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity ="<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity ="<<v.capacity()<<endl;
    cout<<"Size ="<<v.size()<<endl;

    cout<<"Element at second index ="<<v.at(2)<<endl;
    cout<<"Front element ="<<v.front()<<endl;
    cout<<"Last element ="<<v.back()<<endl;

    cout<<"Before pop_back :"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl<<"After Pop :"<<endl;
    v.pop_back();

    for(int 1:v)
    {
        cout<<i<<" ";
    }
    
    cout<<"Before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;
}