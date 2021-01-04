class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j = 0;
        while (i != name.length() && j != typed.length()){
            char a = name[i], b = typed[j];
            if (a != b) return 0;
            int x = i, y = j;
            while (x != name.length() && name[x] == a) x++;
            while (y != typed.length() && typed[y] == b) y++;
            // printf("%c %d to %d\n", a, i, x);
            // printf("%c %d to %d\n\n", b, j, y);
            if (x-i > y-j) return 0;
            i = x; j = y;
        }
        while (i != name.length() || j != typed.length()) return 0;
        return 1;
    }
};