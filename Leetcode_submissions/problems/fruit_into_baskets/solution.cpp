class Solution {
public:
    int totalFruit(vector<int>& tree) {
        int l = 0, r = 0;
        int type = 0;
        int ans = 0, cur = 0;
        map<int, int> mp;
        while (r != tree.size()){
            if (mp.find(tree[r]) == mp.end() || mp[tree[r]] == 0){
                mp[tree[r]] = 1;
                cur ++;
                type ++;
            }else{
                mp[tree[r]] ++;
                cur ++;
            }
            // printf("added %d, type = %d\n", tree[r], type);
            r ++;
            while (type > 2){
                mp[tree[l]]--;
                cur --;
                // printf("removed %d\n", tree[l]);
                if (mp[tree[l]] == 0){
                    type --;
                }
                l++;
            }
            ans = max(cur, ans);
        }
        return ans;
    }
};

// int prev = tree[0], cnt = 1;
//         vector<vector<int>> arr;
//         for (int i=1;i<tree.size();i++){
//             if (tree[i] != prev){
//                 arr.push_back(vector<int>({prev, cnt}));
//                 // printf("%d %d\n", prev, cnt);
//                 cnt = 1;
//                 prev = tree[i];
//             }else{
//                 cnt ++;
//             }
//         }
//         if (tree.size() != 0) arr.push_back(vector<int>({prev, cnt}));
//         int ans = 0;
//         if (arr.size() != 0) ans = arr[0][1];
//          for (int i=0;i<arr.size();i++){
//             // printf("started at %d\n", i);
//             int current = arr[i][1];
//             int first = arr[i][0];
//             int second = -1;
//             for (int j=i+1;j<arr.size();j++){
//                 if (arr[j][0] == first){
//                     current += arr[j][1];
//                     // printf("added %d %d\n", arr[j][0] , arr[j][1]);
//                 }else{
//                     if (second == -1){
//                         second = arr[j][0];
//                         current += arr[j][1];
//                         // printf("added %d %d\n", arr[j][0] , arr[j][1]);
//                     }else if (second == arr[j][0]){
//                         current += arr[j][1];
//                         // printf("added %d %d\n", arr[j][0] , arr[j][1]);
//                     }else{ 
//                         // printf("no match %d to %d %d\n", arr[j][0], first, second);
//                         break;
//                     }
//                 }
                
//             }
//             // printf("current %d\n", current);
//             ans = max(ans, current);
//         }
//         return ans;
// 3 3
// 1 1
// 2 1
// 1 2
// 2 1
// 3 2
// 4 1