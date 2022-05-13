class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        dict = {}
        ans = []
        distances = set()
        for x,y in points:
            dis = sqrt(x**2 + y**2)
            if dis not in dict:
                dict[dis] = []
            dict[dis].append((x,y))
            distances.add(dis)
        distances = sorted(list(distances))
        # print(distances)
        
        i = 0
        while i < len(distances) and i < k:
            arr = dict[distances[i]]
            # print(arr)
            for el in arr:
                ans.append(el)
                i += 1
                if (i == k):
                    break
        
        return ans