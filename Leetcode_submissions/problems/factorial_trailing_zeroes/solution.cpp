class Solution {
public:
    int trailingZeroes(int n) {
        int a = 0, b = 0, c = 0;
        while (n){
             int m = n;
           while (m != 0 && m % 10 == 0) {
                    // cout << m << endl;
                    c++;
                    m /= 10;
                }
           
                while (m != 0 && m % 5 == 0) {
                    // cout << m << endl;
                    b++;
                    m /= 5;
                }
         
        
                while (m != 0 && m % 2 == 0) {
                    // cout << m << endl;
                    a++;
                    m /= 2;
                }
            
            n--;
        }
        // cout << a << " " << b << " " << c << endl;

        c += min(a,b);
        return c ;
    }
};