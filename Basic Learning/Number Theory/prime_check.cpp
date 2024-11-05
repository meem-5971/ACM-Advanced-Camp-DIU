#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime( int n )
{
    int i;
    int x = sqrt( n );
    for( i = 2; i <= x; i++ ) {
        if( n % i == 0 ) break;
    }
    if( n > 1 && i == x+1 ) return 1; // লুপ break হয়নি, তাই n প্রাইম
    else return 0; // লুপ break হয়েছে, তাই n প্রাইম না
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
int n;
cin>>n;
cout<<isPrime(n)<<endl;
 
return 0;
}