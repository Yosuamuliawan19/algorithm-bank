class Solution {
public:
    vector<int> transformArray(vector<int>& arr) {
        int n = arr.size();
        vector<int> arr2(n, 0);
        arr2[0] = arr[0];
        arr2[n-1] = arr[n-1];
        bool f = 1;
        while (1){
            bool change = 0;
            if (f){
                for (int i=1;i<n-1;i++){
                     arr2[i] = arr[i]; 
                    if (arr[i] < arr[i-1] && arr[i] < arr[i+1]){
                        arr2[i]++;
                        change = 1;
                    }
                    if (arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                        arr2[i]--;
                        change = 1;
                    }
                }
            }else{
                
                 for (int i=1;i<n-1;i++){
                      arr[i] = arr2[i];
                     if (arr2[i] < arr2[i-1] && arr2[i] < arr2[i+1]){
                        arr[i]++;
                        change = 1;
                    }
                    if (arr2[i] > arr2[i-1] && arr2[i] > arr2[i+1]){
                        arr[i]--;
                        change = 1;
                    }
                 }
            }
//             if (f){
//                 for (int i=0;i<n;i++){
//                     cout << arr[i] << " ";
//                 }
//                 cout << endl;
//             }else{
//                 for (int i=0;i<n;i++){
//                     cout << arr2[i] << " ";
//                 }
//                 cout << endl;
                
//             }
            if (!change){
                if (f){
                    return arr;
                }else{
                    return arr2;
                }
            }
            f = !f;
        }
        return arr;
    }
};