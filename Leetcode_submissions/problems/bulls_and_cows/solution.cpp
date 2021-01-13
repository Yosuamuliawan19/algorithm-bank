class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;
        map<char, int> mp;
        for (int i=0;i<secret.size();i++){
            if (guess[i] == secret[i]){
                bulls++;
            }else{
                mp[secret[i]]++;
            }
        }
        for (int i=0;i<guess.size();i++){
            if (secret[i] == guess[i]){
                continue;
            } else{
                if (mp.find(guess[i]) == mp.end() || mp[guess[i]] <= 0){
                    continue;
                }else{
                    cows++;
                    mp[guess[i]]--;
                }
            }
                
        }
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};