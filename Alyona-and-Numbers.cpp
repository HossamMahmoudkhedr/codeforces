#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <cstring>
#include <math.h>
#include <stack>
using namespace std;

int main()
{
    long long n, m, a[5], b[5];
    cin >> n >> m;
    memset(a, 0 ,sizeof(a));
    memset(b, 0, sizeof(b));

    for(int i =1 ; i<= n; i++){
        a[i%5]++;
    }
    for(int i = 1; i<= m ; i++){
        b[i%5]++;
    }
    cout << a[0] * b[0] + a[1] * b[4] + a[2] * b[3] + a[3] * b[2] + a[4] * b[1];
    return 0;
}

