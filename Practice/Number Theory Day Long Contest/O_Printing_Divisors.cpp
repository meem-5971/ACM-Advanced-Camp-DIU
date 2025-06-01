

#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
       ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
int t;
cin>>t;
//cout<<"Case "<<cs<<": "<<x<<'\n';
for(int cs=1;cs<=t;cs++){
ll n;
cin>>n;
 vector<ll>ans{1};

        for(ll i = 2; i*i <= n; ++i) { //prime factorization
            int cnt = 0;
            while (n % i == 0) {
                cnt++;
                n /= i;
            }

            bool flag=false;
            int x=i; 
            int curr_size=ans.size();
            while(cnt>0){
                if(flag){
                    for(int i=0;i<curr_size;i++){
                        ans.push_back(ans[i]*x);
                    }

                }
                else{
                    for(int i=curr_size-1;i>=0;i--){
                        ans.push_back(ans[i]*x);
                    }

                   

                }
                 flag^=true;
                    x*=i;
                    cnt--;
            }
        }
            if(n > 1) {
            
            for(int i = ans.size()-1; i >= 0; --i) ans.push_back(n * ans[i]);
        }
        cout<<"Case "<<cs<<":\n";
        for(ll x : ans) {
            cout<<x<<' ';
        }
        cout<<'\n';

        }

return 0;
}