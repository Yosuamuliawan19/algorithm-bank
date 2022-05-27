class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        heights = [0] + heights + [0]
        st = [-1]
        ans = 0
        
        # print('---')
        for i in range(len(heights)):
            while st and  heights[i] < heights[st[-1]]:
                h = heights[st.pop()]
                w = i - st[-1]-1
                # print(h,  i , st[-1])
                ans = max(ans, h * w)
                # st.pop()
            st.append(i)
        return ans