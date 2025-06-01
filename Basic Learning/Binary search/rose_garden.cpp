//my code 
#include <bits/stdc++.h>
using namespace std;
int countbouque(vector<int>arr,int mid,int k){
	int count=0;
	int boq=0;
for(int i:arr){
	if(i<=mid){
      count++;
	  if(count==k){
		  count=0;
		  boq++;
	  }
	} 
	else count=0;
}
return boq;
}

int roseGarden(vector<int> arr, int k, int m)
{
	int low=*min_element(arr.begin(),arr.end());
	int high=*max_element(arr.begin(),arr.end());
	if( m * 1ll * k * 1ll>arr.size()) return -1;
	while(low<=high){
		int mid=(low+high)/2;
		int boq=countbouque(arr,mid,k);
		if(boq<m) low=mid+1;
		else high=mid-1;
	}
	return low;
}