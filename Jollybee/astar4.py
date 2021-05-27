
data = [1,2,3,0,4,5,6,7,8,9,10,11,12,13,14,15]
goal = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]

# data = [1,2,3,4,5,6,7,8,0,9,10,11,12,13,14,15]
# goal = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
explored = [data]

def pgrid(cur, i):
    print(cur[i][0], cur[i][1], cur[i][2], cur[i][3])
    print(cur[i][4], cur[i][5], cur[i][6], cur[i][7])
    print(cur[i][8], cur[i][9], cur[i][10], cur[i][11])
    print(cur[i][12], cur[i][13], cur[i][14], cur[i][15])
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
                pgrid(cur, i)
            break
        puzzle = cur[2]
        # hash = sum([puzzle[i] * 10**i for i in range(9)])
        x = puzzle.index(0)
        # can go up
        if x > 3:
          next = puzzle.copy()
          next[x], next[x-4] = next[x-4], next[x]
          if next not in explored:
            queues.append([sum([next[i] != goal[i] for i in range(16)]), cur[1]+1, next] + cur)
            explored.append(next)
        # can go down
        if x < 12:
             next = puzzle.copy()
             next[x], next[x+4] = next[x+4], next[x]
             if next not in explored:
               queues.append([sum([next[i] != goal[i] for i in range(16)]), cur[1]+1, next] + cur)
               explored.append(next)
        # can go left
        if x%4 != 0:
             next = puzzle.copy()
             next[x], next[x-1] = next[x-1], next[x]
             if next not in explored:
               queues.append([sum([next[i] != goal[i] for i in range(16)]), cur[1]+1, next] + cur)
               explored.append(next)
        # can go right
        if x%4 != 3:
             next = puzzle.copy()
             next[x], next[x+1] = next[x+1], next[x]
             if next not in explored:
               queues.append([sum([next[i] != goal[i] for i in range(16)]), cur[1]+1, next] + cur)
               explored.append(next)
        queues.sort(key=lambda i:i[0])

queues = [[sum([data[i] != goal[i] for i in range(16) ]),0,data]]
hamming(queues)
