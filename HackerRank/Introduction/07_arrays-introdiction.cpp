#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    
    vector<int> vec;
    vec.reserve(n);
    
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
    for (int i = n - 1; i >= 0; i--)
        cout << vec[i] << " ";
    cout << endl;
    
    return 0;
}
