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
int n,m;
cin>>n>>m;
vector<vector<char>>a(n,vector<char>(m));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}
int rowcnt=0, colcnt=0;
for(int i=0;i<n;i++){
    int cnt=0;
    for(int j=0;j<m;j++){
       if(a[i][j]=='1'){
        cnt++;
       }
    }
    if(cnt%2==1) rowcnt++;
}
for(int j=0;j<m;j++){
    int cnt=0;
    for(int i=0;i<n;i++){
       if(a[i][j]=='1'){
        cnt++;
       }
    }
    if(cnt%2==1) colcnt++;
}
//cout<<rowcnt<<" "<<colcnt;
int ans=max(rowcnt,colcnt);
cout<<ans<<endl;
}
return 0;
}