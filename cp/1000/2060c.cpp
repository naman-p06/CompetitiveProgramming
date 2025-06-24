#include <bits/stdc++.h>
using namespace std;
int tw(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int left = 0, right = nums.size()-1;
    int count = 0;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            count++;
            left++;
            right--;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return count;
}
int main(){
long long t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<int>nums(n);
for(int i=0;i<n;i++)
cin>>nums[i];
cout<<tw(nums,k)<<endl;
}
return 0;
}