#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<string>s(n);
for(int i=0;i<n;i++){
    cin>>s[i];
}
sort(s.begin(),s.end());
do{
    bool f=true;
    for(int i=0;i<n-1;i++){
        int cnt=0;
        for(int j=0;j<m;j++) if(s[i][j]!=s[i+1][j]) cnt++;
        if(cnt!=1) f=false;
    }
    if(f){
        cout<<"Yes"<<endl;
        return 0;
    }

}while (next_permutation(s.begin(),s.end()));

cout<<"No"<<endl;

 
return 0;
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<string>v(n);
unordered_map<string,bool>mp;
for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]=false;
}
sort(v.begin(),v.end());
for(int i=0;i<n-1;i++){
    string s=v[i];
    for(int j=i+1;j<n;j++){
        string p=v[j];
        int count=0;
        for(int x=0;x<m;x++){
            if(s[x]!=p[x]) count++;
        }
        if(count==1){
            mp[s]=true;
            mp[p]=true;
            //break;
        }
    }
}
bool ans=true;
 for(int i=0;i<n;i++){
    if(mp[v[i]]==false){
        //cout<<v[i];
        ans=false;
        break;
    }
 }
 if(ans) cout<<"Yes"<<endl;
 else cout<<"No"<<endl;
return 0;
}