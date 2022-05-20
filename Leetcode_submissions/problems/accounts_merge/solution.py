class Solution:
    def accountsMerge(self, accounts: List[List[str]]) -> List[List[str]]:
        n = sum([len(arr) for arr in accounts]) - len(accounts)
        parent = [0 for _ in range(n)]        
        
        def getParent(i):
            if parent[i] == i:
                return i
            parent[i] = getParent(parent[i])
            return parent[i]
            
        def unify(a, b):
            x, y = getParent(a), getParent(b)
            if x != y:
                if a < b:
                    parent[b] = x
                else:
                    parent[a] = y
        
        
        names, emails, group_idxs = {}, [], set()
        
        # build parents array
        for arr in accounts:
            group = len(emails)
            group_idxs.add(group)
            for element_idx, element in enumerate(arr):
                if element_idx == 0: names[group] = element
                else:
                    emails.append(element)
                    parent[len(emails)-1] = group
    
        # unify disjoint sets
        seen = {}
        for idx, email in enumerate(emails):
            if email in seen:
                a, b = getParent(seen[email]), getParent(idx)
                if a != b:
                    unify(a,b)
            else:
                seen[email] = idx
        
        # generate set for each disjoint sets
        ans = {}
        for i in range(len(parent)):
            group = getParent(i)
            if group in ans:
                ans[group].add(emails[i])
            else:
                ans[group] = set([emails[i]])
        
        # format final output
        final_ans = []
        for key, val in ans.items():
            final_ans.append([names[key]] + sorted(list(val)))

            
        return final_ans
        
        