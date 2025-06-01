#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int bcount = 0;
    long long steps = 0;

    for (char c : S) {
        int d = c - '0';
        int add = (d - bcount + 10) % 10; 
        steps += add + 1; // add B presses + 1 A press
        bcount = (bcount + add) % 10;
    }

    cout << steps << '\n';
    return 0;
}
