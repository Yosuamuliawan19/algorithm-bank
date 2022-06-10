class Codec:
    def encode(self, strs: List[str]) -> str:
        """Encodes a list of strings to a single string.
        """
        
        
        
        '''
        
        convert each character to 1-256, seperator is 257
        
        '''
        
        result = ''
        
        for cur_str in strs:
            if cur_str == '': result += 'e'
            for c in cur_str:
                result += str(ord(c)) + ','
            result += '-'
                
        return result        

    def decode(self, s: str) -> List[str]:
        """Decodes a single string to a list of strings.
        """
        ans = []
        cur_string = '' # store accumulated chars
        cur_num = '' # store currently parsed num
        for c in s:
            if c == 'e':
                ans.append('')
            elif c == '-':
                if cur_string != '': ans.append(cur_string)
                cur_string = ''
            elif c == ',':
                cur_string += chr(int(cur_num))
                cur_num = ''
            else:
                cur_num += c 
        
        return ans
        
        


# Your Codec object will be instantiated and called as such:
# codec = Codec()
# codec.decode(codec.encode(strs))