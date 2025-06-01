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
        map<char,int> mp; 
        bool flag = true; 
        
        for(int i=0;i<n;i++){
            char c = s[i];
            if(mp.find(c) == mp.end()){ 
                mp[c] = i % 2;
            }
            else{
                if(mp[c] != i % 2){ 
                    cout<<"NO"<<endl;
                    flag = false;
                    break; 
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
    }
    return 0;
}
