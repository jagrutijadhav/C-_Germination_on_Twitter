#include <bits/stdc++.h>

using namespace std;
int main (){

    //intializing vector
    vector <int> v; 
    int n = 5;
    //insertion 
    for (int i = 0; i < n; i++)
    {
        //inserting value of i
        v.push_back(i);
    }
    
    //print vector [values]
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    
}

/*
output : 
0 1 2 3 4
*/