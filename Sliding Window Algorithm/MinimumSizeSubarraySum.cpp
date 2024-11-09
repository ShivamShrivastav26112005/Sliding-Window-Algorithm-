// Find the minimum size (k) subarray sum 
// condition -> sum>=target
// By using Sliding Windoe

// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,1,10,1,1,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     // Sliding Window Algo -:
//     int target=10;
//     int i=0;
//     int j=0;
//     int sum=0;
//     int minlen=INT_MAX;
//     int len=0;
//     while(j<n)
//     {
//        sum+=arr[j];
//        while(sum>=target)
//        {
//         len=j-i+1;
//         minlen=min(minlen,len);
//         sum-=arr[i];
//         i++;
//        }
//     j++;
//     }
//     cout<<minlen;
// }
// // 1 2 1 1 1 1 3 
// // 7 min length jiska sum>=target

// // 1 2 1 10 1 1 3 
// // 1 


// Same code only practice purpose   find the min subarray(length) condi-: sum>=target
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int nums[]={1,4,4,6}; // subarray = {{2,3,1,2},3,1,2,4},{1,2,4,{2,4,3},{4,3}} => min len = {4,3} ans = 2.
    int n=sizeof(nums)/sizeof(nums[0]);
    for(int i=0; i<n; i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    // Sliding Window -> use two pointers 
    int target=10;
    int i=0;
    int j=0;
    int minlen=INT_MAX;
    int sum=0;
    int len=0;
    while(j<n)
    {
        sum+=nums[j];
        while(sum>=target)
        {
            len=j-i+1;
            minlen=min(minlen,len);
            sum-=nums[i];
            i++;
        }
        j++;
    }
    if(minlen==INT_MAX) cout<<0;
    else cout<<minlen;
}
// 2 3 1 2 4 3 
// 2

// 1 4 4 
// 2