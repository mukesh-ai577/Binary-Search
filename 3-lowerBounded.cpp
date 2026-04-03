#include<iostream>
using namespace std ;
int lowerBounded(int arr[] , int n , int x){
    int low = 0 , high = n-1;
    int ans = n ;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid +1 ;
        }
    }
    return ans;

}
int upperBounded(int arr[] , int n , int x){
    int low = 0 , high = n-1;
    int ans = n ;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] > x){
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid +1 ;
        }
    }
    return ans;

}
int floor(int arr[] , int n , int x){
    int low = 0 , high = n-1;
    int ans = n ;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] <= x){
            ans = arr[mid];
            high = mid - 1;
        }
        else {
            low = mid +1 ;
        }
    }

    return ans ;
}
int ceil(int arr[] , int n , int x){
    int low = 0 , high = n-1;
    int ans = n ;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= x){
            ans = arr[mid];
            high = mid - 1;
        }
        else {
            low = mid +1 ;
        }
    }
    return ans;

}
int main(){
    int n = 6;
    int arr[n] = {3, 5,5 , 8, 15, 9};
    int x = 5;
    cout<<lowerBounded(arr , n , x)<<endl;
    cout<<upperBounded(arr , n , x)<<endl;
    cout<<floor(arr , n , x)<<endl;
    cout<<ceil(arr , n , x)<<endl;
    return 0;
}
