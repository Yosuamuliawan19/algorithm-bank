class Solution {
public:
    map<string,string> mp = {{"Jan","01"},{"Feb","02"},{"Mar","03"},{"Apr","04"},{"May","05"},{ "Jun", "06"},{"Jul","07"},{"Aug","08"},{"Sep","09"},{ "Oct","10"},{"Nov","11"},{ "Dec","12"}};
    string reformatDate(string date) {
        return date.substr(date.length()-4, 4) + "-" + mp[date.substr(date.length()-8, 3)] +"-"+ (date[1] <= '9'? date.substr(0,2): "0"+date.substr(0,1));
    }
};