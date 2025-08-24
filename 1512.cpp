#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={1,2,3,1,1,3};
    int size = nums.size();
        int output=0;
        for ( int i=0; i<=size-1; i++){
            for (int j=0; j<=size-1; j++){
                if (nums[i] ==  nums[j] && i<j) 
                {
                    output++;
                }
            }
        } cout<<output;
}