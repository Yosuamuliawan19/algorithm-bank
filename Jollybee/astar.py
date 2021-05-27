import math
data = [7,2,4,5,0,6,8,3,1]
goal = [1,2,3,4,5,6,7,8,0]
explored = [data]

def manhattan(data, goal):
    tot = 0
    for i in range(9):
        x = goal.index(data[i])
        y = i
        tot += abs(x%3 - y%3) + abs(math.floor(x/3) - math.floor(y/3))
    return tot
def hamming(queue):
    while queues:
        cur = queues.pop(0)
        if cur[0] == 0:
            print("Finish in ", cur[1], " steps(s)")
            j = -1
            # print(len(cur)-1)
            for i in range(len(cur)-1, 0, -3):
                j = j + 1
                print("Step ", j)
                print(cur[i][0], cur[i][1], cur[i][2])
                print(cur[i][3], cur[i][4], cur[i][5])
                print(cur[i][6], cur[i][7], cur[i][8])
            break
        puzzle = cur[2]
        # hash = sum([puzzle[i] * 10**i for i in range(9)])
        x = puzzle.index(0)
        # can go up
        if x > 2:
          next = puzzle.copy()
          next[x], next[x-3] = next[x-3], next[x]
          if next not in explored:
            queues.append([manhattan(next, goal), cur[1]+1, next] + cur)
            explored.append(next)
        # can go down
        if x < 6:
             next = puzzle.copy()
             next[x], next[x+3] = next[x+3], next[x]
             if next not in explored:
               queues.append([manhattan(next, goal), cur[1]+1, next] + cur)
               explored.append(next)
        # can go left
        if x%3 != 0:
             next = puzzle.copy()
             next[x], next[x-1] = next[x-1], next[x]
             if next not in explored:
               queues.append([manhattan(next, goal), cur[1]+1, next] + cur)
               explored.append(next)
        # can go right
        if x%3 != 2:
             next = puzzle.copy()
             next[x], next[x+1] = next[x+1], next[x]
             if next not in explored:
               queues.append([manhattan(next, goal), cur[1]+1, next] + cur)
               explored.append(next)
        queues.sort(key=lambda i:i[0])

queues = [[manhattan(data, goal),0,data]]
hamming(queues)
