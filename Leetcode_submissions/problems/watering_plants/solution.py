class Solution:
    def wateringPlants(self, plants: List[int], capacity: int) -> int:
        ans, cap, idx = 0, capacity, 0
        while (idx != len(plants)):
            if (cap >= plants[idx]):
                cap -= plants[idx]
                idx += 1
            else:
                cap = capacity
                ans += 2*idx
            # print(idx)
            
        return ans + len(plants)