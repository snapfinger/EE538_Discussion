#include "libs.h"

// Two pointers
// TC: O(n)
// SC: O(1)
vector<int> twoSum(vector<int>& numbers, int target) {
    int i = 0, j = numbers.size() - 1;
    while(true){
        if(numbers[i] + numbers[j] < target) i++;
        else if(numbers[i] + numbers[j] > target) j--;
        else break;
    }
    
    return vector<int>{i+1, j+1};
}