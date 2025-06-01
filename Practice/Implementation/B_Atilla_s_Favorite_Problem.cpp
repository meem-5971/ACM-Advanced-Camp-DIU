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
int n;
cin>>n;
string s;
cin>>s;
char ans=*max_element(s.begin(),s.end());

cout<< (ans- 'a'+1) <<endl;
}
return 0;
}