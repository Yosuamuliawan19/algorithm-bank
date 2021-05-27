data = [7,2,4,5,0,6,8,3,1]
goal = [1,2,3,4,5,6,7,8,0]
explored = [data]

def hamming(queues):
  while queues:
    nn = queues.pop(0)
    if nn[0] == 0:
      print("Finish in",nn[1],"step(s)")
      j = -1
      print(len(nn)-1)
      # for i in range(len(nn)-1, 0, -3):
      #   j = j + 1
      #   print("Step",j)
      #   print(nn[i][0], nn[i][1], nn[i][2])
      #   print(nn[i][3], nn[i][4], nn[i][5])
      #   print(nn[i][6], nn[i][7], nn[i][8])
      #   print()
      break
    puzzle = nn[2]
    puzzlehash = sum([puzzle[i] * 10**i for i in range(9)])
    x = puzzle.index(0)
    if x > 2:
      newpuzzle = puzzle.copy()
      newpuzzle[x], newpuzzle[x-3] = newpuzzle[x-3], newpuzzle[x]
      if newpuzzle not in explored:
        queues.append([sum([newpuzzle[i] != goal[i] for i in range(9)]), nn[1]+1, newpuzzle] + nn)
        explored.append(newpuzzle)
    if (x % 3) < 2:
      newpuzzle = puzzle.copy()
      newpuzzle[x], newpuzzle[x+1] = newpuzzle[x+1], newpuzzle[x]
      if newpuzzle not in explored:
        queues.append([sum([newpuzzle[i] != goal[i] for i in range(9)]), nn[1]+1, newpuzzle] + nn)
        explored.append(newpuzzle)
    if x < 6:
      newpuzzle = puzzle.copy()
      newpuzzle[x], newpuzzle[x+3] = newpuzzle[x+3], newpuzzle[x]
      if newpuzzle not in explored:
        queues.append([sum([newpuzzle[i] != goal[i] for i in range(9)]), nn[1]+1, newpuzzle] + nn)
        explored.append(newpuzzle)
    if (x % 3) > 0:
      newpuzzle = puzzle.copy()
      newpuzzle[x], newpuzzle[x-1] = newpuzzle[x-1], newpuzzle[x]
      if newpuzzle not in explored:
        queues.append([sum([newpuzzle[i] != goal[i] for i in range(9)]), nn[1]+1, newpuzzle] + nn)
        explored.append(newpuzzle)
    queues.sort(key=lambda i: i[0])

queues = [[sum([data[i] != goal[i] for i in range(9)]), 0, data]]
hamming(queues)
