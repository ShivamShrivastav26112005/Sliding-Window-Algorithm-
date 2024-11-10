// #include<iostream>
// using namespace std;
// int main()
// {
//     // custo=arr 
//     int arr[]=  {1,0,1,2,1,1,7,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int grum[]= {0,1,0,1,0,1,0,1};
//     int k=3; // minutes

    // when custo is not grumpy -> grumpy=0(custo satisf), grumpy=1(custo not satisf)
    // return max no. of custo satif(grumpy=0) add custo 
    // k=3  times our owner have a technique not grumpy(1)

    // check custo loss-> jin window me custo loss max hoga to vha per custo use his technique 
    // us window me grumpy array me 0 put kar dega to our sati max ho jayega 
    // sat is calculated when grumpy arr is 0.

    // calculate loss of satis 1st window loss=0, satis=2, last window ->  maximum loss  (loss 6,satis=7) 
    // when loss is happen jb corresponding grum=1, satsi => grumpy=0

//     int preloss=0;
//     // first window
//     for(int i=0; i<k; i++)
//     {
//         if(grum[i]==1) preloss+=arr[i];
//     }
//     int maxloss = preloss;
//     int maxidx=0;
//     // 2nd window
//     // S.W. use -> two variables
//     int i=1;
//     int j=k;
//     while(j<n)

//     {
//         int currloss=preloss;
//         if(grum[j]==1) currloss+=arr[j];
//         if(grum[i-1]==1) currloss-=arr[i-1];
//         if(maxloss<currloss)
//         {
//             maxloss=currloss;
//             maxidx=i;
//         }
//         preloss=currloss;
//         i++;
//         j++;
//     }
//     // filling zeros in the grumpy array
//     for(int i=maxidx; i<maxidx+k; i++)
//     {
//         grum[i]=0;
//     }
//     // sum of satis 
//     int sum=0;
//     for(int i=0; i<n; i++)
//     {
//         if(grum[i]==0) sum+=arr[i];
//     }
//     cout<<sum;
// }


// 16


