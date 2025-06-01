#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int>pal;
for(int i=1;i<=1000;i++){
    string s="";
 int n=i;
    while(n>0){
        s+=(n%2);
        //i/=2;
        n=(n/2);
    }

    string s2=s;
    reverse(s2.begin(),s2.end());
    if(s2==s) pal.push_back(i);

}
reverse(pal.begin(),pal.end());
//for(auto u:pal) cout<<u<<endl;
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vector<int>ans;
    for(auto u:pal){

      while(u<=n){
         // cout<<u<<endl;
        ans.push_back(u);
       // cout<<n/u;
        n-=u;
      }
      if(n==0) break;
    }
    cout<<ans.size()<<endl;
    for(auto u: ans){
        cout<<u<<" ";
    }
    cout<<endl;
 }
return 0;
}
