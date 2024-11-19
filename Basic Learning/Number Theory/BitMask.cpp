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
vector<int>masks(n,0);
for(int i=0;i<n;i++){
    int num_worker;
    cin>>num_worker;
    int mask=0;
    for(int j=0;j<num_worker;j++){
     int day;
     cin>>day;
     mask=(mask | (1<<day));
    }
    masks[i]=mask;
}
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int intersection=(masks[i] & masks[j]);
            int common_days=__builtin_popcount(intersection);

            cout<<i<<" "<<j<<" "<<common_days<<endl;
    
    }

} 

return 0;
}