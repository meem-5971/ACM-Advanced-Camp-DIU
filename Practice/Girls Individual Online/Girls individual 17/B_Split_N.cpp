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
string ans;
while(n!=0){
    if(n%2==1) ans+='1';
    else ans+='0';
    n/=2;
}
reverse(ans.begin(),ans.end());
int count=0;
for(int i=0;i<ans.size();i++){
    if(ans[i]=='1') count++;
}
cout<<count-1<<endl;
}
return 0;
}