class Solution {
public:
    
    void swap(int* a, int* b) 
{ 
    if (*a == *b) 
        return; 
    *a ^= *b; 
    *b ^= *a; 
    *a ^= *b; 
} 
void rev(vector<int>& s, int l, int r) 
{ 
    while (l < r) 
        swap(&s[l++], &s[r--]); 
} 
  
int bsearch(vector<int>& s, int l, int r, int key) 
{ 
    int index = -1; 
    while (l <= r) { 
        int mid = l + (r - l) / 2; 
        if (s[mid] <= key) 
            r = mid - 1; 
        else { 
            l = mid + 1; 
            if (index == -1 || s[index] >= s[mid]) 
                index = mid; 
        } 
    } 
    return index; 
} 
  
bool nextpermutation(vector<int>& s) 
{ 
    int len = s.size(), i = len - 2; 
    while (i >= 0 && s[i] >= s[i + 1]) 
        --i; 
    if (i < 0) 
        return false; 
    else { 
        int index = bsearch(s, i + 1, len - 1, s[i]); 
        swap(&s[i], &s[index]); 
        rev(s, i + 1, len - 1); 
        return true; 
    } 
} 
    void nextPermutation(vector<int>& nums) {
        bool f = 1;
        for (int i=0;i<nums.size()-1;i++){
            if (nums[i] < nums[i+1]) {
                f = 0;
                break;
            }
        }
        if (f) {
            sort(nums.begin(), nums.end());
        }else{
            nextpermutation(nums);
        }
    }
};