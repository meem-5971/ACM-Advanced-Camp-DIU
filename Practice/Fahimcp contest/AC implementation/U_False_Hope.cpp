#include<bits/stdc++.h>
#define ll long long
using namespace std;
const vector<array<int,3>>lines={
    {0,1,2},{3,4,5},{6,7,8},//Row
    {0,3,6},{1,4,7},{2,5,8},//col
    {0,4,8},{2,4,6}
};


int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
    vector<int>grid(9);
    for (int i = 0; i < 9; ++i) cin >> grid[i];

    vector<int>perm(9);
    iota(perm.begin(),perm.end(),0); // 0 to 8

    ll total=0, good=0;

    do {
        ++total;
        vector<int>seen(9); // seen[i] = order in which cell i is visited
        for (int i=0;i<9;i++) {
            seen[perm[i]]=i;
        }

        bool disappointed = false;

        for (const auto& lineTriplet : lines) {
    int a = lineTriplet[0];
    int b = lineTriplet[1];
    int c = lineTriplet[2];

            vector<pair<int, int>> line = {
                {seen[a], a},
                {seen[b], b},
                {seen[c], c}
            };
            sort(line.begin(), line.end());

            int x = line[0].second;
            int y = line[1].second;
            int z = line[2].second;

            if (grid[x] == grid[y] && grid[z] != grid[x]) {
                disappointed = true;
                break;
            }
        }

        if (!disappointed) ++good;

    } while (next_permutation(perm.begin(), perm.end()));

    cout << fixed << setprecision(10) << (double)good / total << '\n';
return 0;
}
