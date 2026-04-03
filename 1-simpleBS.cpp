#include<iostream>
using namespace std;
int bs1(int arr[] , int low , int high , int target){
    while(low <= high){
        int mid = low + (high-low) / 2;
        if(arr[mid] == target) return mid;
        else if(target > arr[mid]) low = mid+1;
        else high = mid-1;
    }
    return -1;
}
int main(){
    int arr[8] = {3 , 4, 6, 7, 9 , 12 , 16 , 17};
    int n = 8;
    int target = 12;
    int ans = bs1(arr , 0 , n ,target) ;
    if( arr[ans] == target){
        cout<<"Element present at index : " <<ans;
    }
    else {
        cout<<"Not Present\n";
    }
    return 0;
}
