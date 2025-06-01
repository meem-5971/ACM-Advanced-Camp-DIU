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
set<string>st;
map<string,int>mp;
int cnt=0;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    string s1=s;
    reverse(s1.begin(),s1.end());
    if(mp[s]==0 && mp[s1]==0){
        st.insert(s);
        mp[s]++;
        mp[s1]++;
    }
    
}
 
cout<<st.size()<<endl;
return 0;
}