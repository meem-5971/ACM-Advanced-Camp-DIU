//Inclusion Exclusion

#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isVowel(char c){
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

vector<string>subsets(string s){
    int sz=(1<<s.size());
    vector<string>ans;
    for(int mask=0;mask<sz;mask++){
        string subset;
        for(int bit=0;bit<s.size();bit++){
            if(mask & (1<<bit)) subset.push_back(s[bit]);
        }
        if(subset.size()) ans.push_back(subset);
    }
    return ans;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 string str[n];
 for(int i=0;i<n;i++){
    cin>>str[i];
 }
 unordered_map<string,int>hsh;
 for(int i=0;i<n;i++){ //Extract and store distinct vowels
    set<char>dis_vwl;
    for(char c: str[i]){
        if(isVowel(c)){
            dis_vwl.insert(c);
        }
    }
    string vwl_str; //store vowels as string for each name
    for(char c:dis_vwl){
        vwl_str.push_back(c);
    }
    vector<string>all_subset=subsets(vwl_str); //subsets for finding all the combinations
    for(string vwl_sb:all_subset){
        hsh[vwl_sb]++; //count all pssbl combinations of vowels
    }
 }
 ll ans=0;
 for(auto &pr :hsh){
    if(pr.second <3) continue;
    ll ct=pr.second;
    ll ways =ct*(ct-1)*(ct-2)/6; //nC3 formula
    if(pr.first.size()%2==0) ans-=ways; //formula of inclusion exclusion
    else ans+=ways;
 }
 cout<<ans<<'\n';
}
return 0;
}