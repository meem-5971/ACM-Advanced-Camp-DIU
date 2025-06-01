#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
string a;
cin>>a;
for(int i=1;i<n;i++){
    string s="";
    string b;
    cin>>b;
    for(int p=0;p<a.size();p++){
        for(int q=0;q<b.size();q++){
             if(a[p] == b[q]){
                    s +=  b[q];
                    b.erase(b.begin()+q, b.begin()+q+1);
                    break;
                }
        }
    }
    a=s;

}
sort(a.begin(),a.end());
if(a.length() == 0) cout << "no such string" << endl;
    else cout << a << endl;
 
return 0;
}