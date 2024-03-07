#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int A[n];
    for(int i = 0; i < n ;i ++) cin >> A[i];
    int B[n+1];
    for(int i = 0; i < n + 1 ;i ++) cin >> B[i];
    unordered_map<int, int> mp;
    for (int element : A) mp[element]++;
    for (int element : B) mp[element]++;

    for(auto x : mp)
    {
        if(x.second == 1) cout << x.first;
    }
    return 0;
}
