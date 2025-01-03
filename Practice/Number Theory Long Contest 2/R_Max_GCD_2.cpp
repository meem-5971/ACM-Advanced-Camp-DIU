#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+10;
vector<int>divisors[N];

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

int a,b;
cin>>a>>b;
int ans=1;
// If there are at least two multiples of d in the range [A,B], d is considered as a potential candidate for the maximum gcd.
for(int d=1;d<=b;d++){
int first_multiple=((a+d-1)/d)*d; //takes ceil value
int last_multiple=((b/d)*d);//takes floor value

if(first_multiple<last_multiple) ans=max(ans,d);
}
cout<<ans<<endl;

 
return 0;
}