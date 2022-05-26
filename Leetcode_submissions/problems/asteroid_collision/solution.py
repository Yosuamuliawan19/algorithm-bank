class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        # [5, 10, -5]
        # [5, -5, 10, -10] = []
        # [5, -6, 10, -11]
        # maintain a stack 
        # if differnt +, -, 
        #   pop until right asteroid disapper
        # if same, append
        # if reach end, append
        
        
        n = len(asteroids)
        st, idx = [asteroids[0]], 0
        
        for i in range(1, n):
            destroyed = False
            # if different sign, and +, -
            while idx != -1 and st[idx] >= 0 and asteroids[i] < 0 and not destroyed: 
                l, r = st[idx], -1*asteroids[i]
                if l <= r: idx -= 1
                if l >= r: destroyed = True
            if not destroyed: 
                idx += 1
                if idx == len(st): st.append(asteroids[i])
                else: st[idx] = asteroids[i]
        
        return st[0: idx+1]
            
            
            
            
            
            
            
            
        
        
        
        
        
        
        