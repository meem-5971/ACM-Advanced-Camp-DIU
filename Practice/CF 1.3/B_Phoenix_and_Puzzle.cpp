#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool issquare(int x) 
{
    int y = sqrt(x);
    return y * y == x;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
cin>>t;
while(t--){
    ll n; cin >> n;
    if (issquare(n / 2) and n % 2 == 0) cout << "YES" << endl;
    else if (issquare(n / 4) and n % 4 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}
return 0;
}