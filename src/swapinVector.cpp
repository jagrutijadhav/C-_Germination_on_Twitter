#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v1{1, 1, 1};
    vector<int> v2{2, 2, 2};

    cout << "Before swapping : " << endl;
    cout << "v1 v2" << endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << "  " << v2[i] << endl;
    }
    //swap function
    v1.swap(v2);

    cout << "After swapping : " << endl;
    cout << "v1 v2" << endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << "  " << v2[i] << endl;
    }

    return 0;
}

/*
output : 
Before swapping : 
v1 v2
1  2
1  2
1  2
After swapping : 
v1 v2
2  1
2  1
2  1
*/