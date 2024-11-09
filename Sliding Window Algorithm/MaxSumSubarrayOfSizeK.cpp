// 01-01-2024
// Sliding Window 
// Ques->      Find the maximum sum subarray(continous) of size k(window's size(window=>subarray of array))
// givev k=3

// Method - 1 



// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[]={7,9,9,5,8,9,9,3,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k=3;
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // use 2 for loops 1st for loop travel array and 2nd for loop travel window and find the sum
//     int mxsum=INT_MIN;
//     for(int i=0; i<=n-k; i++) // travel in array            Total no. of ops=n-k+1 = O(n)
//     {
//       int sum=0; 
//       for(int j=i; j<i+k; j++) // travel in window          Tno. = k times = O(k)
//       {
//         sum+=arr[j]; // we find sum of all window
//       }
//      mxsum=max(mxsum,sum);
//     }
//     cout<<mxsum;
// }

// Total no. of ops.=(n-k+1)*k
// T.C. = O(n*k)
// 7 9 9 5 8 9 9 3 6 
// 26



//  ****************    we also want to find (index) from where we picks the maximum subarray.

// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,6,9,9,5,6,7,8,9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k=4;
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     int idx=-1;
//     int mxsum=INT_MIN;
//     for(int i=0; i<=n-k; i++)
//     {
//       int sum=0; 
//       for(int j=i; j<i+k; j++) 
//       {
//         sum+=arr[j]; 
//         if(mxsum<sum)
//         {
//             mxsum=sum;
//             idx=i;
//         }
//       }
//     }
//     cout<<idx<<" ";
//     cout<<mxsum;
// }
// 1 2 3 6 9 9 5 6 7 8 9 
// 7 30 idx starts from 7.




//   ********************  Method - 2 -> Sliding Window  ********************   


// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     // int arr[]={1,2,3,4,4,70,0,9,5,8,4,8,8,8,9,3,6};
//     int arr[]={1,90,3,5,8,49,3,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     // Sliding window   T.C.= O(n) only use one for loop
//     int k=3;
//     int maxsum=INT_MIN;
//     int idx=-1;
//     // presum -> sum of the 1st window 
//     int presum=0;
//     for(int i=0; i<k; i++)
//     {
//         presum+=arr[i];
//         idx=i;
//     }
//     maxsum=presum;

//     // Sliding Window -> use two pointers/variables 
//     int i=1;
//     int j=k;
//     while(j<n)
//     {
//         int cursum=presum+arr[j]-arr[i-1];
//         if(maxsum<cursum)
//         {
//             maxsum=cursum;
//             idx=i;
//         }
//     presum=cursum;
//     i++;
//     j++;
//     }
//     cout<<idx;
//     cout<<endl;
//     cout<<maxsum;
// }




// 1 2 3 4 4 70 0 9 5 8 4 8 8 8 9 3 6 
// 5
// 79

// 90 3 5 8 49 3 6 
// 2
// 98

// 1 90 3 5 8 49 3 6 
// 1
// 98








// maximum sum of subarray(window) given size k = 4

//   ******** use 2 loops 1-for,2-while ***********
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     // int arr[]={300,5,7,7,5,8,2,1};
//     int arr[]={3,550,7,7,5,8,2,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     int k=4;
//     int maxsum=INT_MIN;
//     int idx=-1;
//     // find the sum of first window -> previous sum
//     int presum=0;
//     for(int i=0; i<k; i++)
//     {
//         presum+=arr[i];
//         idx=i;
//     }
//     maxsum=presum;

//     // Sliding Window
//     int i=1;
//     int j=k; // becoz we find sum window wise 
//     while(j<n)
//     {
//         int currsum=presum+arr[j]-arr[i-1];
//         if(maxsum<currsum)
//         {
//             maxsum=currsum;
//             idx=i;
//         }
//     i++;
//     j++;
//     presum=currsum;
//     }
//     cout<<idx;
//     cout<<endl;
//     cout<<maxsum;
// }



// Dry run and output -:


// given k=4
// 300 5 7 7 5 8 2 1 
// 3  // max sum till 3 index( it is find in case of our maxsum present in our 1st window or previous sum
// and ele.s starts from 1st index only ) it is true only for 1st index 
// 319

// 3 5 7 7 5 8 2 1 
// 2  // index starts from 2  it is always true
// 27

// 3 550 7 7 5 8 2 1 
// 1  // index starts from 1 means -> maxsum starts from 2 ele.s/window
// 569




// // 1-> same code but some changes in variables like in place of current sum we use previous sum.

// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[]={3,5,7,7,5,8,2,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int k=4;
//     int presum=0;
//     int maxsum=INT_MIN;
//     for(int i=0; i<k; i++)
//     {
//         presum+=arr[i];
//     }
//     maxsum=presum;

//     int i=1;
//     int j=k;
//     while(j<n)
//     {
//         presum=presum+arr[j]-arr[i-1];
//         if(maxsum<presum)
//         {
//             maxsum=presum;
//         }
//         i++;
//         j++;
//     }
//     cout<<maxsum;
// }

// 3 5 7 7 5 8 2 1 
// 27


// 2 -> same code but some changes in (variables) like in place of previous sum we use sum variable only.

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={3,5,7,7,5,8,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int k=4;
    int sum=0;
    int maxsum=INT_MIN;
    for(int i=0; i<k; i++)
    {
        sum+=arr[i];
    }
    maxsum=sum;

    int i=1;
    int j=k;
    while(j<n)
    {
        sum=sum+arr[j]-arr[i-1];
        if(maxsum<sum)
        {
            maxsum=sum;
        }
        i++;
        j++;
    }
    cout<<maxsum;
}

// 3 5 7 7 5 8 2 1 
// 27 