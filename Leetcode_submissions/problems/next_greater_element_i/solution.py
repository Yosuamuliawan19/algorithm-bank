class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:

        d = {}
        st = []
        
        for x in nums2: 
            while (len(st) > 0 and st[-1] < x):
                d[st[-1]] = x
                st.pop()
            st.append(x)
            
        return [d.get(x, -1) for x in nums1]