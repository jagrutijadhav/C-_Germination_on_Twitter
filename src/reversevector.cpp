
#include <bits/stdc++.h>

using namespace std;
int main(){

    //intializing vector
    vector<int> v;
    int n = 5;
    //insertion
    for (int i = 0; i < n; i++){
        //inserting value of i
        v.push_back(i);
    }

    cout << "Vector Before Reversing :" << endl;

    //print  before reverseing vector [values]
    for (int i = 0; i < v.size(); i++){

        cout << v[i] << " ";
    }

    //reverse
    reverse(v.begin(), v.end());

    cout << "\nVector After Reversing :" << endl;

    //print after reverseing vector [values]
    for (int i = 0; i < v.size(); i++){

        cout << v[i] << " ";
    }
}

/*
output : 
Vector Before Reversing :
0 1 2 3 4 
Vector After Reversing :
4 3 2 1 0 
*/