class Logger {
public:
    /** Initialize your data structure here. */
    Logger() {
        
    }
    
    /** Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity. */
    map<string, int> mp;
    bool shouldPrintMessage(int timestamp, string message) {
        if (mp.find(message) == mp.end()){
            mp[message] = timestamp + 10;
            return 1;
        }else if (mp[message] > timestamp){
            return 0;
        }
        mp[message] = timestamp + 10;
        return 1;
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */