#include <bits/stdc++.h>
using namespace std;

int main(){

    //intializing variable   
    int num = 5;
    //intializing the vector
    vector <int> v{1,2,3,4,5,6,7};

    for (int i = 0; i < v.size(); i++)
    {   
        //adding value of num to the elements of vector
        cout << v[i] + num << " " ; 
    }
     
}

/*
output : 
6 7 8 9 10 11 12
*/