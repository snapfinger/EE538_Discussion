// Sol 1
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      unordered_set<int> s;

      sort(nums1.begin(), nums1.end());
      sort(nums2.begin(), nums2.end());

      int i = 0, j = 0;
      int n1 = nums1.size(), n2 = nums2.size();

      while((i < n1) && (j < n2)){
          if(nums1[i] < nums2[j]) i++;
          else if(nums2[j] < nums1[i]) j++;
          else{
              s.insert(nums1[i]);
              i++;
              j++;
          }
      }

      vector<int> v(s.begin(), s.end());

      return v;        
  }
