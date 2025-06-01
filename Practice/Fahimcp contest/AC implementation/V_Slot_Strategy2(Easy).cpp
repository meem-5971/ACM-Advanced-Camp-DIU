#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
int m;
cin>>m;
string s1,s2,s3;
map<char,int>m1;
map<char,int>m2;
map<char,int>m3;
cin>>s1>>s2>>s3;
vector<int>ans;
for(int i=0;i<m;i++){
    m1[s1[i]]=i;
}
for(int i=0;i<m;i++){
    if(m1[s2[i]]!=i){
        m2[s2[i]]=i;
    }
}
bool f=false;
for(int i=0;i<m;i++){
     if(m1[s3[i]]!=i && m2[s3[i]]!=i){
        m3[s3[i]]=i;
        int x=max(m1[s3[i]],m2[s3[i]]);
        ans.push_back(max(x,m3[s3[i]]));

    }
    if(m1[s3[i]]!=0 && m2[s3[i]]!=0) f=true;
}
if(ans.size()==0) {
    if(f) cout<<m<<endl;
    else cout<<-1<<endl;
}
else{
    cout<<*min_element(ans.begin(),ans.end())<<endl;
}


 
return 0;
}