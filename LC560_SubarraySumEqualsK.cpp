#include "libs.h"

// hashmap
// TC: O(n)
// SC: O(n)
int subarraySum(vector<int>& nums, int k) {
    int count = 0, sum = 0;
    unordered_map<int, int> map;
    map[0] = 1;
    for(auto n: nums){
        sum += n;
        int target = sum - k;
        if(map.find(target) != map.end()){
            count += map[target];
        }
        map[sum]++;
    }
    return count;
}