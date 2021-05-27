from random import randint
from random import choice

board = ['-' for x in range(64)]
board[27] = 'O'
board[28] = 'X'
board[35] = 'X'
board[36] = 'O'

def showBoard(curBoard):
  for i in range(8):
    print(curBoard[i*8],curBoard[i*8+1],curBoard[i*8+2],curBoard[i*8+3],
        curBoard[i*8+4],curBoard[i*8+5],curBoard[i*8+6],curBoard[i*8+7])
  print()

showBoard(board)
def move(idx , dir):
    if dir == 1:
        idx -= 8
    elif dir == 2:
        idx += 1
    elif dir == 3:
        idx += 8
    elif dir == 4:
        idx -= 1
    if (idx > 15) or (idx < 0):
        idx = -1
    return idx

def dfs(curBoard, dir, player, idx):
    if player == 'X':
        enemy = 'O'
    else:
        enemy = 'X'
    if idx == -1 or curBoard[idx] == player:
        return False
    if (curBoard[idx] == '-'):
        return True
    return dfs(curBoard, dir, player, move(idx,dir))

def validMove(curBoard, x, player):
    if curBoard[x] != '-':
        return False
    if player == 'X':
        enemy = 'O'
    else:
        enemy = 'X'
    ret = True
    for dir in range(4):
        ret = ret or dfs(curBoard, dir, player, move(idx, dir))
    return ret

def dfs2(curBoard, dir, player, idx):
    if player == 'X':
        enemy = 'O'
    else:
        enemy = 'X'
    if idx == -1 or curBoard[idx] == player:
        return False
    if (curBoard[idx] == '-'):
        curBoard[idx] = player
        return True

    ret =  dfs(curBoard, dir, player, move(idx,dir))
    if ret == True:
        curBoard[idx] = player
    return ret

def movePlayer(curBoard, x, player):
    if player == 'X':
        enemy = 'O'
    else:
        enemy = 'X'
    ret = True
    for dir in range(4):
        ret = ret or dfs(curBoard, dir, player, move(idx, dir))
    return ret



def minimax(newBoard, i, player):
  movePlayer(newBoard, i, player)
  if not playable(newBoard, player):
    winner = checkWinner(newBoard)
    if winner == 'X':
      return -1
    else:
      return 1
    return 0
  else:
    if player == 'X':
      bestval = 2
      enemy = 'O'
    else:
      bestval = -2
      enemy = 'X'
    for j in range(64):
      if validMove(newBoard, j, enemy):
        minimaxval = minimax(newBoard.copy(), j, enemy)
        if player == 'X':
          if minimaxval < bestval:
            bestval = minimaxval
        else:
          if minimaxval > bestval:
            bestval = minimaxval
    return bestval

def play():
  player = 'X'
  while playable(board, player):
    moves = []
    if player == 'X':
      best = 2
    else:
      best = -2
    for i in range(64):
      if validMove(board, i , player):
        minimaxval = minimax(board.copy(), i, player)
        if player == 'X':
          if minimaxval < best:
            best = minimaxval
            moves = [i]
        else:
          if minimaxval > best:
            best = minimaxval
            moves = [i]
        if minimaxval == best:
          moves.append(i)
    move = choice(moves)
    movePlayer(board, move, player)
    if player == 'X':
      player = 'O'
    else:
      player = 'X'
    showBoard(board)
  print("Winner",checkWinner(board))

def checkWinner(curBoard):
  totalX = sum([curBoard[x] == 'X' for x in range(64)])
  if totalX > 32:
    return 'X'
  elif totalX == 32:
    return '-'
  else:
    return 'O'

def playable(curBoard, player):
  if sum([validMove(curBoard, x, player) == True for x in range(32)]) > 0:
    return True
  return False

showBoard(board)
play()
