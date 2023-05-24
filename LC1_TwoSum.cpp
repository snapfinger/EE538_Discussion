#include "libs.h"

// Solution 2: hashmap
// Time: O(n)
// Space: O(n) 
vector<int> twoSum2(vector<int>& nums, int target) {
    unordered_map<int, int> rec;
    for(int i=0; i<nums.size(); i++){
        if(rec.find(nums[i]) != rec.end()){
            return {i, rec[nums[i]]};
        }else{
            rec[target-nums[i]] = i;
//          or
//          rec.insert(make_pair(target - nums[i], i));
        }
    }
    return vector<int>{};
}


// Solution 1: brute force
// Time: O(n^2)
// Space: O(1) 
vector<int> twoSum1(vector<int>& nums, int target) {
    for(int i=0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size(); j++){
            if(nums[i] + nums[j] == target){
                vector<int> rst = {i, j};
                return rst;
            }
        }
    }
    return vector<int>{};
}

int main(){
    vector<int> input1 = {1, 2, 3, 4};
    int t1 = 3;
    vector<int> res = twoSum2(input1, t1);
    for (auto v: res){
        cout << v << ' ';
    }
    cout << endl;
}
