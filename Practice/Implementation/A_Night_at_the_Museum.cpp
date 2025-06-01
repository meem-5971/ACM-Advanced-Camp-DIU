#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 

string s;
cin>>s;
int cnt=0;
char c='a';
for (char ch : s) {
    cnt += min(abs(c - ch), 26 - abs(c - ch));
    c = ch; 
}
cout << cnt << endl;

return 0;
}