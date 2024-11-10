// Sliding window algo -: two pointer techniques used and used while loop, idx i starts from 1 and j from k -> 

// Q-> Maximum Sum Subarray of size k. 

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     // given 
//     int arr[]={7,1,2,5,8,4,9,3,6};
//     int k=4;
//     int n=sizeof(arr)/sizeof(arr[0]);

//     // take a variable 
//     int maxsum=INT_MIN;
//     int prevsum=0;
//     int maxidx=-1;
    
//     for(int i=0; i<k; i++){
//         prevsum+=arr[i];
//     }
//     maxsum=prevsum;

//     // sliding window algo -: 
//     int i=1;
//     int j=k;
//     while(j<n){
//         int currsum=prevsum+arr[j]-arr[i-1];
//         if(maxsum<currsum){
//             maxsum=currsum;
//             maxidx=i;
//         }
//         prevsum=currsum;
//         i++;
//         j++;
//     }
//     cout<<maxsum<<endl;
//     cout<<maxidx;
// }

// // 26
// // 3



// find maximum subarray sum from the given array of size/length k. 
// you have to given array and k.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,2,4,5,3,7};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxsum=INT_MIN;
    int maxidx=-1;
    int prevsum=0;
    // finding prevsum 
    for(int i=0; i<k; i++){
        prevsum+=arr[i];
    }
    maxsum=prevsum;

    // apply sliding window algo -: 
    int i=1;
    int j=k;
    while(j<n){
        int currsum=prevsum+arr[j]-arr[i-1];
        if(currsum>maxsum){
            maxsum=currsum;
            maxidx=i;
        }
        prevsum=currsum;
        i++;
        j++;
    }
    cout<<maxsum<<endl;
    cout<<maxidx;
}

// 15 -> ans 
// 3 -> idx starts 