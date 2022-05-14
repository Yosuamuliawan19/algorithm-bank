class Solution:
    def networkDelayTime(self, times: List[List[int]], n: int, k: int) -> int:
        
        q, t, adj = [[0, k-1]], {}, [[] for _ in range(n)]
        for u,v,w in times:
            adj[u-1].append([v-1, w])
        while q:
            cur_t, cur_n = heapq.heappop(q)
            if cur_n in t:
                continue
            t[cur_n] = cur_t
            for next_n, next_t in adj[cur_n]:
                heapq.heappush(q, (cur_t + next_t, next_n))
                
        if len(t.values()) != n:
            return -1
        
        return max(t.values())
        