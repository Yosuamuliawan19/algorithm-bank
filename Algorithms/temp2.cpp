#include<cstring>
#include<iostream>
#include<string.h>
using namespace std;

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
int main()
{
    string txt = "ABABDABACDABABCABAB";
    string pat = "ABABCABAB";
    kmp(pat, txt);
    return 0;
}
