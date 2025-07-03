
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

// int main(){
//     vector <int> height={4,2,0,5,2,6,2,3};
//     int size=height.size();

//     vector<int> left_max (size);
//     vector<int> right_max (size);
//     left_max[0]=0;
//     for(int i=1;i<size;i++){
//         left_max[i]=max(left_max[i-1],height[i-1]);
//     }
//     right_max[size-1]=0;
//     for(int i=size-2;i>=0;i--){
//         right_max[i]=max(right_max[i+1],height[i+1]);
//     }
//     int water=0;
//     for(int i=0;i<size;i++){
//         int temp=min(left_max[i],right_max[i]);
//         if(temp-height[i]>=0){
//             water+=temp-height[i];
//         }
//     }
//     cout<<water;

// }


int main(){
    vector <int> height={4,2,0,5,2,6,2,3};
    int size=height.size();
    int maxLeft=0,maxRight=0,water=0;
    int maxHeight=height[0], index=0;

    for(int i=0;i<size;i++){
        if(maxHeight<height[i]){
            maxHeight=height[i];
            index=i;
        }
    }
    // cout<<maxHeight;

    // LEFT
    for(int i=0;i<index;i++){
        if(maxLeft>height[i]){
            water+=maxLeft-height[i];
        }else{
            maxLeft=height[i];
        }
    }

    // RIGHT
    for(int i=size-1;i>index;i--){
        if(maxRight>height[i]){
            water+=maxRight-height[i];
        }else{
            maxRight=height[i];
        }
    }
    cout<<water;

}