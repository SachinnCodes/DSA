#include<iostream>
#include<vector>
using namespace std;

int main(){
        vector<int> nums={-1,1,2,3,1};
        int target=2 , count=0;
        int size =nums.size();

            for(int i=0; i<=size; i++){
                for (int j=i+1; j<=size-1; j++){
                    if (nums[i]+nums[j] < target)
                    count++;
                }
            }
            cout<<count;

}