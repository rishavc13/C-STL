#include<iostream>
#include<vector>

using namespacestd;

/* Vectors are dynamic in nature. If an element is appended when the vector is full, then the vector doubles its size everytime.
Random access is possible */

int main() {

    // Defining vectors
    vector<int> v;
    vector<int> a(5,1); // Defining vector of size 5 with all elements initialized to 1
    vector<int> last(a); // copy elements of vector a into last vector
    vector<pair<int, int>> vec;  // Vector can also be defined for pairs

    cout<<"Printing a :"<<endl;
    for(int i:a) {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"Printing last :"<<endl;
    for(int i:last) {
        cout<<i<<" ";
    }
    cout<<endl;

    // Checking how capacity of vector changes after insertions
    cout<<"Initial Capacity ="<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity ="<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity ="<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity ="<<v.capacity()<<endl;

    // Using emplace_back() instead of push_back()
    v.emplace_back(6);
    vec.push_back({1,2});
    vec.emplace_back(5,6);  // emplace_back() assumes (3,4) to be a pair


    cout<<"Size ="<<v.size()<<endl;  // Checking size of vector

    // Accessing elements
    cout<<"Element at index 1 ="<<v[1]<<endl;
    cout<<"Element at index 2 ="<<v.at(2)<<endl;  // Prefer v[2] over v.at(2)
    cout<<"Front element ="<<v.front()<<endl;  // Returns front element
    cout<<"Last element ="<<v.back()<<endl;  // Returns last element

    // Demo pop_back()
    cout<<"Before pop_back :";
    for(int i:v) {
        cout<<i<<" ";
    }
    cout<<endl<<"After pop_back :";
    v.pop_back();
    for(int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

    // Defining an iterator
    vector<int>::iterator it = v.begin(); // Returns pointer to first element of the vector
    vector<int>::iterator it2 = v.end(); // Returns pointer to next to the last element of vector
    vector<int>::iterator it3 = v.rend();
    vector<int>::iterator it4 = v.rbegin();

    // Demo ways to print elements of vector
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    for(auto it = v.begin(); it != v.end(); it++) {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    for(auto it:v) {
        cout<<it<<" ";
    }
    cout<<endl;

    // Deletion of elements
    // if v = {10,20,30,40,50}
    v.erase(v.begin()+1);  // v = {10,30,40,50}
    // if v = {10,20,30,40,50}
    v.erase(v.begin()+1, v.begin()+3);  // v = {10,40,50}  [start, end)

    // insert() : It is a costly operation in Vector
    vector<int> v(2,100);  // {100, 100}
    v.insert(v.begin(), 300);  // {300, 100, 100}
    v.insert(v.begin + 1, 2, 100);  // {300, 10, 10, 100, 100}
    vector<int> copy(2,50);
    v.insert(v.begin(), copy.begin(), copy.end());  // {50, 50, 300, 10, 10, 100, 100}

    // Demo swap()
    vector<int> v1 = {1,2};
    vector<int> v2 = {3,4};
    v1.swap(v2);  // v1 = {3,4}, v2 = {1,2}

    // Demo clear()
    cout<<"Before clear size :"<<v.size()<<endl;
    v.clear();
    cout<<"After clear size :"<<v.size()<<endl;

    v.empty();

    return 0;
}