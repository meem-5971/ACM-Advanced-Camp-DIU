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
bool flag=true;
for(int i=0;i<s.size()-1;i++){
    if(s[i]==s[i+1]){
       flag=false;
       break;
    }
}
if(flag) cout<<s.size()<<endl;
else cout<<1<<endl;

}
return 0;
}