#include <bits/stdc++.h>
using namespace std;

int sumbyD(vector<int>arr,int mid){
	int sum=0;
	for(int i=0;i<arr.size();i++){
		sum+=(ceil)((double)(arr[i])/(double)(mid));
	
	}
 return sum;
}

int smallestDivisor(vector<int>& arr, int limit)
{
	int low=1;
	int high=*max_element(arr.begin(),arr.end());
	while(low<=high){
		int mid=(low+high)/2;

		if(sumbyD(arr,mid)>limit) low=mid+1; //the greater number will give smaller sum after dividing all nums
		else high=mid-1;
	}
	return low;
}