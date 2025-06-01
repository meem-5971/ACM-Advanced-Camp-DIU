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
string s;
cin>>s;
vector<char>ans;
for(int i=0;i<n-1;i++){
    if(s[i]!='a' && s[i]!='e'){
       
            if( s[i+3]!='a' && s[i+3]!='e' && i+2<n){
                ans.push_back(s[i]);
                ans.push_back(s[i+1]);
                ans.push_back(s[i+2]);
                i+=2;
               
            }
            else{
                ans.push_back(s[i]);
                ans.push_back(s[i+1]);
                i++;
                
            }
            if(i+1<n && !ans.empty() && ans.back() != '.') ans.push_back('.');
        
    }
}
string result(ans.begin(), ans.end());
    if (!result.empty() && result.back() == ' ') {
        result.pop_back();
    }
    
    cout << result << endl;

}
return 0;
}