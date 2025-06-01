#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
   cout<<(char)(((s[i]-'A' +n) % 26) + 'A');
}
 cout<<endl;
return 0;
}