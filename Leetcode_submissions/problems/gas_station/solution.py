class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        
        # starting points =  gas[i] > cost[i]
        # best starting point = max(gas[i], cost[i])
        # if memo[i] >= current, and can't reach, then stop
        # 
        # 
        n = len(gas)
        starting_points = []
        
        for i in range(n):
            if gas[i] >= cost[i]:
                starting_points.append(i)
        
        memo = {}
        max_fuel = {}
        
        def dp(s, t, fuel):
            # print(s,t,fuel)
            net = fuel+gas[s]-cost[s]
            if net < 0:
                return 0
            if s == t:
                return 1 if net >= 0 else 0
            if s in memo and max_fuel[s] >= net and memo[s] == 0:
                return 0

            memo[s] = dp(s+1 if s+1 != n else 0, t, net)
            max_fuel[s] = max(max_fuel[s] if s in max_fuel else 0, net)
            return memo[s]
            
        for i in range(len(starting_points)):
            s, t = starting_points[i], starting_points[i] - 1 if starting_points[i] != 0 else n-1
            res = dp(s, t, 0)
            if res == 1:
                return s
        
        return -1
            
            
            
            
            
            