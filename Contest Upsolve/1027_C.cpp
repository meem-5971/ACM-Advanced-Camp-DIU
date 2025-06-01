#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        int n;
        cin>>n;
        vector<int>d(n);
        for(int i=0;i<n;i++) cin>>d[i];
            vector<pair<int,int>>range(n),valid_range(n);
      for(int i=0;i<n;i++){
            int x,y;    cin>>x>>y;
            range[i].first=x;
            range[i].second=y;
      }
      int l=0,r=0;
      bool psbl=true;
      for(int i=0;i<n;i++){
            if(d[i]==1) {
                  l++;
                  r++;
            }
            if(d[i]==-1) r++;
            int nl=max(l,range[i].first);
            int nr=min(r,range[i].second);
            if(nl>nr){
                  psbl=false;
                  break;
            }
            valid_range[i]={nl,nr};
            l=nl,r=nr;

      }
      if(!psbl){
            cout<<-1<<endl;
            return;
      }

      vector<int>ans;
      int last=valid_range[n-1].second;
      for(int i=n-1;i>0;i--){
            if(d[i]!=-1){
                  ans.push_back(d[i]);
                  if(d[i]) {last--;}
                   continue;
            }
            if(last<=valid_range[i-1].second) ans.push_back(0);
            else{
                  ans.push_back(1);
                  last--;
            }
      }
      //Exceptional
      if(d[0]!=-1){
            ans.push_back(d[0]);
      }
      else{
            if(last>0) ans.push_back(1);
            else ans.push_back(0);
      }
      reverse(ans.begin(),ans.end());
      for(auto u:ans) cout<<u<<" ";
            cout<<endl;


}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
solve();

}
return 0;
}
