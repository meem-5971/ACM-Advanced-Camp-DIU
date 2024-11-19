//Given an array a of n integers. All integers are present in even count except one.
//find that one integer with odd count with O(n) TC and O(1) SC

#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 
 int n;
 cin>>n;
 int a[n];
 int ans=0;
 for(int i=0;i<n;i++){
    cin>>a[i];
    ans^=a[i];
 }
 cout<<ans<<"\n";
 
 
return 0;
}