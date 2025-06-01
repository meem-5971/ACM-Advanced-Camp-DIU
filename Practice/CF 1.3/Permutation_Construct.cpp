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
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    if(n < 2*k)
    cout<<-1<<endl;
    else
    {
        for(int i=1;i<=n-k;i++)
        {
           arr[i]=i+k; 
        }

        for(int i=n-k+1;i<=n;i++)
        {
            arr[i]=(i)%k;
            if(arr[i]==0)
            arr[i]=k;
            
        }
        for(int i=1;i<=n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
return 0;
}