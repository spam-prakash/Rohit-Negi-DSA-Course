
#include <iostream>
#include <vector> //Include to use vector in the programme
using namespace std;
#include <algorithm>

// Initialization:
    // 1. vector <datatype> name;      [will create a vector of the given datatype with the given name]
    // 2. vector <datatype> name(size);    [will create a vecor of the given datatype with the given name of given side]
    // 3. vectir <datatype> name(size,initial value);   [will create a vector with given datatype, name, size and initialize them with the given value]

    // Example:
    // 1. vector <int> v1;   [Will create a vector named v1 of int datatype]
    // 2. vector <int> v2(4); [its size will be predefined]
    // 3. vector <int> v3(4,2);  [all the postion will be filled with 2]   [2,2,2,2];
    // 4. vector <int> v4={2,3,4,5,6};    [2,3,4,5,6]
    // 5. vector <int> v2(n); [create a vecyor of n size]


// Insertion of values
    // 1.
    //     a.push_back(4);    a=[4]
    //     a.push_back(9);    a=[4,9]
    //     a.push_back(5);    a=[4,9,5]

    // 2.
    //     v[0]=2;   a=[2];
    //     v[1]=4;   a=[2,4]

    // 3.  
        // v=[1,3,5,2,7,8,19];
        // v.insert(v.begin()+2,222); 
        //     ==>> v=[1,3,222,5,2,7,8,19]
        // Insert 222 at the 2nd index and push all the valuse to right
    



// Remove Value From Vector
    // a=[1,2,3,4,5,6,7];
    // 1. a.pop_back();   //a=[1,2,3,4,5,6]
    // 2. a.erase(v.begin()+2);   //a=[1,2,4,5,6]
    // 3. a.clear();   //a=[]


// Size and Capacity
    // vector <int> v;
    // v.push_back(1);    size=1,capacity=1;
    // v.psuh_back(11);   size=2,capicity=2;
    // v.psuh_back(15);   szie=3,capacity=4;
    // v.push_back(13);   size=4,capacity=4;
    // v.push_back(17);   size=5,cqapacity=8; 

    // v.size()  //to find size
    // v.capacity()  //to find capacity


// front, back, at, empty:
    // v=[1,2,3,4,5];
    // cout<<v.front()   => 1
    // cout<<v.back()    => 4
    // cout<<v.empty()   => 0
    // cout<<v.at(2)     => 3

    
// Iterator in Vector
    // v=[1,2,3,4,5];

    // v.begin() => points first value
    // v.end() => points one after the last value
    // v.rbegin() => points last value
    // v.rend() => points one value before the last value

    // for(auto it=v.begin();it!=v.end();it++)
    //     cout<<*it<<" ";
    //     ==>>  1,2,3,4,5
    
    // for(auto it=v.rbegin();it!=v.rend();it--)
    //     cout<<*it<<" ";
    //     ==>>  5,4,3,2,1
    
    // for(int i=0;i<v.size();i++)
    //     cout<<v[i]<<" ";
    //     ==>>  1,2,3,4,5


// Sorting
    // v=[2,3,1,7,4];
    // 1. Increasing Order
    //     sort(v.begin(),v.end());  ==>> [1,2,3,4,7]
    // 2.Descreasing Order 
    //     sort(v.begin(),v.end(),greater<int>());  ==>> [7,4,3,2,1]


// Search
    // v=[1,2,3,4,7,8];
    // cout<<binary_search(v.begin(),v.end(),4);
    //     ==>> 1
    //     returns 1 if it is present and
    //             0 if it is not denorm_present
    
    // cout<<find(v.begin(),v.end(),4)-v.begin();
    //     ==>> 3
    //     returns index of the element



int main()
{
    int n;
    cout<<"ENTER SIZE: ";
    cin>>n;

    vector<int>v1(n);

    for(int i=0;i<n;i++){
        cin>>v1[i];
    }

    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    int key;
    cout<<"ENTER KEY: ";
    cin>>key;
    cout<<find(v1.begin(),v1.end(),key)-v1.begin();

    // cout<<v1.at(2);
    
}