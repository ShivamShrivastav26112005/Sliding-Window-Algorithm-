// // Maximum consecutive ones Leetcode (1004)
// // Algorithm used -> Use 2 pointers and sliding window.

// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[]={1,1,1,0,0,0,0,1,1,1,1,0};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k=4;
//     int flips=0;
//     int i=0;
//     int j=0;
//     int len=INT_MIN;
//     int maxlen=INT_MIN;
//     while(j<n)
//     {
//         if(arr[j]==1) j++;
//         else
//         {
//             if(flips<k)
//             {
//                 flips++;
//                 j++;
//             }
//             else // flips==k , then calculate len 
//             {
//                 len=j-i;
//                 maxlen=max(maxlen,len);
//                 // 'i' ko uske just aage wale 0 per le jao ek idx aage
//                 while(arr[i]==1) i++; // means arr[i]==0 per hai es time 
//                 // to apne i ko badhate rho aur j ko bhi badhate rho badhate rho 
//                 i++;
//                 j++;

//             }
//         }
//     }
//     len=j-i;
//     maxlen=max(maxlen,len);
//     cout<<maxlen;

// }


// Maximum consecutive ones Leetcode (1004) -> we have given a binary array and a integer k and we have to flips k times 0
// and then calculate maximum consecutive ones from the whole array 
// Use 2 pointers and sliding window
// flips => 0 to 1 

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={1,1,1,0,1,0,1,0,0,0,1,1,1,0,1,0,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    int i=0;
    int j=0;
    int len=INT_MIN;
    int maxlen=INT_MIN;
    int flips=0;
    while(j<n)
    {
        if(arr[j]==1) j++;
        else
        {
            if(flips<k)
            {
                flips++;
                j++;
            }
            else // flips==k
            {
                len=j-i;
                maxlen=max(maxlen,len);
                // ************* i ko apne pahle 0 se ek aage le aao ****************
                while(arr[i]==1) i++; // means agar hm 1 per h to 0 per lao esiliye i++ , ab hm 0 per aa gye h 
                // ab hme apne pahle zero se ek idx aage, ek 0 aage jana h to esliye i++ hoga
                i++;
                // then apne j ko badhate rho jb tk condition fail na ho jaye or flips k times complete na ho jay.
                j++;
            }
        }
    }
                // at the end we find our length onces again 
                len=j-i;
                maxlen=max(maxlen,len);
                cout<<maxlen;
}