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
vector<string>v;
for(int i=0;i<t;i++){
    string x;
    cin>>x;
    v.push_back(x);
}
bool flag=false;
for(int i=0;i<t-1;i++){
    string ans=v[i];
    for(int j=i+1;j<t;j++){
        ans+=v[j];
        string p=ans;
        string q=v[j]+v[i];
        string r=q;
        reverse(p.begin(),p.end());
        reverse(r.begin(),r.end());
        if(p==ans || q==r){
            flag=true;
          //  cout<<ans<<endl;
            break;
        }
        else{
            ans=v[i];
        }
    }
    if(flag) break;
}
if(flag) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}