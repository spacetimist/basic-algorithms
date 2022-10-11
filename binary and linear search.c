#include <stdio.h>

int linearSearch(int arr[], int n, int x)
{
	int i;
	for(i = 0; i < n; i++){
		if(arr[i] == x){
			return i;
		}
	}
	
	return -1;
}

int binarySearchRecursive(int arr[], int L, int R, int x)
{
	//L = left
	//R = right
	if(R >= L){
		int mid = L + (R-L)/2;
		if(arr[mid] == x){
			return mid;
		}
		if(arr[mid] > x){
			return binarySearchRecursive(arr, L, mid-1, x);
		}
		else{
			return binarySearchRecursive(arr, mid+1, R, x);
		}
	}
	
	return -1;
}

int binarySearchIterative(int arr[], int L, int R, int x)
{
	while(R >= L){
		int mid = L + (R-L)/2;
		if(arr[mid] == x){
			return mid;
		}
		if(arr[mid] > x){
			R = mid-1;
		}
		else{
			L = mid+1;
		}
	}
	
	return -1;
}

int interpolationSearch(int arr[], int L, int R, int x)
{
	int pos;
	if(L <= R && x >= arr[L] && x <= arr[R]){
		pos = L + ((double)(R-L)/(arr[R]-arr[L])) * (x - arr[L]);
		if(x == arr[pos]){
			return pos;
		}
		if(arr[pos] < x){
			return interpolationSearch(arr, pos+1, R, x);
		}
		else{
			return interpolationSearch(arr, L, pos-1, x);
		}
	}
	
	return -1;
}

int main()
{
	//kalo binary dan interpolation search array nya harus sorted
	int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
	int x = 9;
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int hasil = interpolationSearch(arr, 0, n-1, x);
	printf("%d", hasil);
	
  	return 0;
}
