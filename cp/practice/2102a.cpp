
#include <bits/stdc++.h>
using namespace std;
class Solution{
    int solve(vector<int>&nums,int k,int ind,int sum){
        if(sum==k)
        return 1;
        if(sum>k||ind==nums.size())
        return 0;
        
        int nottake=solve(nums,k,ind+1,sum);
        int take=solve(nums,k,ind+1,sum+nums[ind]);
        return take+nottake;
    }
    public:    	

    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
    	return solve(nums,k,0,0);
    }
};
int main(){
Solution s;
vector<int>nums={4,9,2,5,1};

int a=s.countSubsequenceWithTargetSum(nums,10);
cout<<a<<endl;
return 0;
}
