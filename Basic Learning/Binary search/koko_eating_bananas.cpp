//my code 
#include <bits/stdc++.h>
using namespace std;

long long calculatehours(vector<int>& v, int mid) {
    long long ans = 0;
    for (int i : v) {
        ans += ceil((double)i / (double)mid);
    }
    return ans;
}

int minimumRateToEatBananas(vector<int> v, int h) {
    int low = 1, high = *max_element(v.begin(), v.end());
    while (low <= high) {
        int mid = (low + high) / 2;
        long long totalhours = calculatehours(v, mid);
        if (totalhours > h) 
            low = mid + 1;
        else 
            high = mid - 1;
    }
    return low;
}
