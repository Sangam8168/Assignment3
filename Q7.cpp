#include<bits/stdc++.h>
using namespace std ;
int missingnumber(vector<int>& nums){
    int n=nums.size();
    int expectedsum=(n*(n+1))/2;
    int actualsum=0;
    for(int i=0;i<n;i++){
        actualsum+=nums[i];
    }
    return expectedsum-actualsum;
}
int main (){
    vector <int>nums={1,3,2};
    cout<<"the missing number is "<< missingnumber(nums)<<endl;
    return 0 ;
}
