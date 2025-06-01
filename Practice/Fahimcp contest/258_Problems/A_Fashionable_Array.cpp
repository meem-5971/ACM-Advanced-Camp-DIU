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
vector<int>a(n);
int odd=0,ev=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%2==0) ev++;
    else odd++;
}
sort(a.begin(),a.end());
int tot=INT_MAX;
for(int i=0;i<n;i++){
   int cnt=i;
   for(int j=i;j<n;j++){
                 if ((a[i] + a[j]) % 2 == 0) {
                int ops = i + (n - 1 - j); 
                tot = min(tot, ops);
            }

   }
//   tot=min(tot,cnt);

}
cout<<tot<<endl;
}
return 0;
}