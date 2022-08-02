#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(2);
    v.push_back(6);
    v.push_back(4);
    v.push_back(0);
    v.push_back(7);
    v.push_back(1);

    cout<<"Finding 6-->"<<binary_search(v.begin(), v.end(), 6)<<endl;
    cout<<"Lower Bound -->"<<lower_bound(v.begin(), v.end(), 6) - v.begin()<<endl;
    cout<<"Upper Bound -->"<<upper_bound(v.begin(), v.end(), 6) - v.beign()<<endl;

    int a=3;
    int b=5;
    cout<<"Max = "<<max(a,b)<<endl;
    cout<<"Min = "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"Swapped Values : a="<<a<<" b="<<b<<endl;

    string ab = "rishav";
    reverse(ab.being(), ab.end());
    cout<<"Reversed String ="<<ab<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After Rotation :"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v.begin(), v.end());  // Sorting is based on Intro Sort which is a combination of Quick, Heap and Insertion Sort.
    cout<<"after Sorting :"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

}