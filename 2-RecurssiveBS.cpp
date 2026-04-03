#include<iostream>
using namespace std;
int bs(int arr[] , int low , int high , int target){ // TC -> O(log2(n)) , SC -> O(1)
    if(low > high) return -1;
    int mid =low + (high-low) / 2;
    if(arr[mid] == target) return mid;
    else if(target > arr[mid]) return bs(arr , mid+1, high , target);
    return bs(arr , mid-1 , high , target);
    
}
int search(int arr[] , int n , int target){
    return bs(arr , 0 , n-1 , target);
}
int main(){
    int arr[8] = {3 , 4, 6, 7, 9 , 12 , 16 , 17};
    int n = 8;
    int target = 12;
    cout<<search(arr , n , target);
    return 0;
}
