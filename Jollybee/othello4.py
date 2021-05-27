from random import randint
from random import choice

board = ['-' for x in range(16)]
board[5] = 'O'
board[6] = 'X'
board[9] = 'X'
board[10] = 'O'

def showBoard(curBoard):
  for i in range(4):
    print(curBoard[i*4],curBoard[i*4+1],curBoard[i*4+2],curBoard[i*4+3])
  print()

def validMove(curBoard, x, player):
  if curBoard[x] != '-':
    return False
  if player == 'X':
    enemy = 'O'
  else:
    enemy = 'X'
  if (x > 7) and (curBoard[x-4] == enemy) and (curBoard[x-8] == player):
    return True
  if (x > 11) and (curBoard[x-4] == enemy) and (curBoard[x-8] == enemy) and (curBoard[x-12] == player):
    return True
  if (x % 4 < 2) and (curBoard[x+1] == enemy) and (curBoard[x+2] == player):
    return True
  if (x % 4 < 1) and (curBoard[x+1] == enemy) and (curBoard[x+2] == enemy) and (curBoard[x+3] == player):
    return True
  if (x < 8) and (curBoard[x+4] == enemy) and (curBoard[x+8] == player):
    return True
  if (x < 4) and (curBoard[x+4] == enemy) and (curBoard[x+8] == enemy) and (curBoard[x+12] == player):
    return True
  if (x % 4 > 1) and (curBoard[x-1] == enemy) and (curBoard[x-2] == player):
    return True
  if (x % 4 > 2) and (curBoard[x-1] == enemy) and (curBoard[x-2] == enemy) and (curBoard[x-3] == player):
    return True
  if (x > 7) and (x % 4 > 1) and (curBoard[x-5] == enemy) and (curBoard[x-10] == player):
    return True
  if (x > 11) and (x % 4 > 2) and (curBoard[x-5] == enemy) and (curBoard[x-10] == enemy) and (curBoard[x-15] == player):
    return True
  if (x > 7) and (x % 4 < 2) and (curBoard[x-3] == enemy) and (curBoard[x-6] == player):
    return True
  if (x > 11) and (x % 4 < 1) and (curBoard[x-3] == enemy) and (curBoard[x-6] == enemy) and (curBoard[x-9] == player):
    return True
  if (x < 8) and (x % 4 > 1) and (curBoard[x+3] == enemy) and (curBoard[x+6] == player):
    return True
  if (x < 4) and (x % 4 > 2) and (curBoard[x+3] == enemy) and (curBoard[x+6] == enemy) and (curBoard[x+9] == player):
    return True
  if (x < 8) and (x % 4 < 2) and (curBoard[x+5] == enemy) and (curBoard[x+10] == player):
    return True
  if (x < 4) and (x % 4 < 1) and (curBoard[x+5] == enemy) and (curBoard[x+10] == enemy) and (curBoard[x+15] == player):
    return True
  return False

def movePlayer(curBoard, x, player):
  if player == 'X':
    enemy = 'O'
  else:
    enemy = 'X'
  if (x > 7) and (curBoard[x-4] == enemy) and (curBoard[x-8] == player):
    curBoard[x-4] = player
  if (x > 11) and (curBoard[x-4] == enemy) and (curBoard[x-8] == enemy) and (curBoard[x-12] == player):
    curBoard[x-4] = player
    curBoard[x-8] = player
  if (x % 4 < 2) and (curBoard[x+1] == enemy) and (curBoard[x+2] == player):
    curBoard[x+1] = player
  if (x % 4 < 1) and (curBoard[x+1] == enemy) and (curBoard[x+2] == enemy) and (curBoard[x+3] == player):
    curBoard[x+1] = player
    curBoard[x+2] = player
  if (x < 8) and (curBoard[x+4] == enemy) and (curBoard[x+8] == player):
    curBoard[x+4] = player
  if (x < 4) and (curBoard[x+4] == enemy) and (curBoard[x+8] == enemy) and (curBoard[x+12] == player):
    curBoard[x+4] = player
    curBoard[x+8] = player
  if (x % 4 > 1) and (curBoard[x-1] == enemy) and (curBoard[x-2] == player):
    curBoard[x-1] = player
  if (x % 4 > 2) and (curBoard[x-1] == enemy) and (curBoard[x-2] == enemy) and (curBoard[x-3] == player):
    curBoard[x-1] = player
    curBoard[x-2] = player
  if (x > 7) and (x % 4 > 1) and (curBoard[x-5] == enemy) and (curBoard[x-10] == player):
    curBoard[x-5] = player
  if (x > 11) and (x % 4 > 2) and (curBoard[x-5] == enemy) and (curBoard[x-10] == enemy) and (curBoard[x-15] == player):
    curBoard[x-5] = player
    curBoard[x-10] = player
  if (x > 7) and (x % 4 < 2) and (curBoard[x-3] == enemy) and (curBoard[x-6] == player):
    curBoard[x-3] = player
  if (x > 11) and (x % 4 < 1) and (curBoard[x-3] == enemy) and (curBoard[x-6] == enemy) and (curBoard[x-9] == player):
    curBoard[x-3] = player
    curBoard[x-6] = player
  if (x < 8) and (x % 4 > 1) and (curBoard[x+3] == enemy) and (curBoard[x+6] == player):
    curBoard[x+3] = player
  if (x < 4) and (x % 4 > 2) and (curBoard[x+3] == enemy) and (curBoard[x+6] == enemy) and (curBoard[x+9] == player):
    curBoard[x+3] = player
    curBoard[x+6] = player
  if (x < 8) and (x % 4 < 2) and (curBoard[x+5] == enemy) and (curBoard[x+10] == player):
    curBoard[x+5] = player
  if (x < 4) and (x % 4 < 1) and (curBoard[x+5] == enemy) and (curBoard[x+10] == enemy) and (curBoard[x+15] == player):
    curBoard[x+5] = player
    curBoard[x+10] = player
  curBoard[x] = player

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
    for j in range(16):
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
    for i in range(16):
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
  totalX = sum([curBoard[x] == 'X' for x in range(16)])
  if totalX > 8:
    return 'X'
  elif totalX == 8:
    return '-'
  else:
    return 'O'

def playable(curBoard, player):
  if sum([validMove(curBoard, x, player) == True for x in range(16)]) > 0:
    return True
  return False

showBoard(board)
play()
