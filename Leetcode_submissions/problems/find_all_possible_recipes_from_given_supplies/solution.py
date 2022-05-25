class Solution:
    def findAllRecipes(self, recipes: List[str], ingredients: List[List[str]], supplies: List[str]) -> List[str]:
        
        n = len(recipes)
        memo = {} 
        for current in supplies:
            memo[current] = 1

        recipe_map = {} 
        for i in range(n):
            recipe_map[recipes[i]] = ingredients[i]

        def dp(recipe): 
            if recipe in memo:
                return memo[recipe]
            
            if recipe not in recipe_map:
                return 0
            
            memo[recipe] = 0
            m = len(recipe_map[recipe])
            metRequirements = 0
            for requirement in recipe_map[recipe]:
                if requirement == recipe:
                    memo[recipe] = 0
                    return  memo[recipe] 
                metRequirements += dp(requirement)

            if m == metRequirements: memo[recipe] = 1 
                
            return memo[recipe]

        ans = []
        for i in range(n):
            if dp(recipes[i]) == 1:
                    ans.append(recipes[i])

        return ans
        