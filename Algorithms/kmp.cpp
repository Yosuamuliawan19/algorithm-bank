
void makeArr(string pat, int m, int* arr){
     arr[0] = 0;
    int len = 0, i = 1;
    while (i < m) {
        if (pat[i] == pat[len]){
             arr[i] = len++;
             i++;
        }
        else
        {
            if (len != 0) len = arr[len - 1];
            else arr[i++] = 0;
        }
    }
}
void kmp(string find, string text){
    int m = find.length(), n = text.length(), arr[find.length()];
    makeArr(find, m, arr);
    int i = 0, j = 0;
    while (i < n) {
         if (find[j] == text[i]) {j++;i++;}
         if (j == m) {
             cout << i-j<< endl;
             j = arr[j - 1];
          }else if (text[i] != find[j] && i < n) {
            if (j != 0) j = arr[j - 1];
            else i++;
        }
    }
}
// correct one
void makeArr(string pat, int* arr){
     int len = 0;
     int m = pat.length();
     arr[0] = 0;
     int i = 1;
     while (i < m){
          if (pat[i] == pat[len]){
               len ++;
               arr[i] = len;
               i++;
          }else{
               if (len != 0) len = arr[len-1];
               else arr[i++] = 0;
          }
     }
}
void kmp(string pat, string txt){
     int m = pat.length();
     int n = txt.length();
     int arr[m];
     makeArr(pat, arr);
     int i = 0, j = 0;
     while (i < n){
          if (pat[j] == txt[i]){
               j++; i++;
          }
          if (j == m){
               cout << "found at " << i-j << endl;
               j = arr[j-1];
          }else if (i < n && pat[j] != txt[i]){
               if (j != 0) j = arr[j-1];
               else i++;
          }
     }
}
