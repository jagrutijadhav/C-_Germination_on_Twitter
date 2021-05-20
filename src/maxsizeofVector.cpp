#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v;

    for (int i = 0; i < 5; i++)
    {
        v.push_back(i);
    }

    //maximum number of elements that the vector can hold.
    cout << " Max size : " ;
    cout << v.max_size() << endl;

    // number of elements in the vector.
    cout << " Size : " ;
    cout << v.size() << endl;

    //size of the storage space currently allocated to the vector expressed as number of elements.
    cout << " Capacity : " ;
    cout << v.capacity() << endl;
}

/*
output: 
Max size : 2305843009213693951
 Size : 5
 Capacity : 8
 */