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
for(int i=0;i<n;i++){
    cin>>a[i];
}
int l=0,r=n-1;
int suml=0,sumr=0,ansl=0,ansr=0,mv=0;
while(l<=r){
    if(mv%2==0){
        int currsum=0;
        while(l<=r && currsum<=sumr){
            currsum+=a[l];
            l++;
        }
        ansl+=currsum;
        suml=currsum;
    }
    else{
        int currsum=0;
        while(l<=r && currsum<=suml){
            currsum+=a[r];
            r--;
        }
        ansr+=currsum;
        sumr=currsum;
    }
    mv++;
}
cout<<mv<<" "<<ansl<<" "<<ansr<<endl;
}
return 0;
}