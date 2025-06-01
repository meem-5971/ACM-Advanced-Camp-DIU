#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int a=s[0]-'0';
int b=s[2]-'0';
char op = s[1];

if ((op == '<' && a < b) || (op == '>' && a > b) || (op == '=' && a == b)) {
    cout << s << endl;
   continue;
}
else{
if (a < b) cout << a << '<' << b << endl;
else if (a > b) cout << a << '>' << b << endl;
else cout << a << '=' << b << endl;
}
}
return 0;
}