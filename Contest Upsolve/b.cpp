#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        int n;
        cin>>n;
        string a;
        string b;
        cin>>a>>b;
        int cnt=0;
        bool flag=false;
        for(int i=n-1;i>=0;i--){
            if(a[i]<b[i]){
              flag=true;
            }
            else if(a[i]>b[i]){
               flag=false;
               
            }
            if(flag) cnt++;
        }
      
        cout<<cnt<<endl;

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