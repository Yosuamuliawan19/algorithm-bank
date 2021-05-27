from random import randint

def fitscore(x, y):
    total1 = sum((1+i)*(0 if x[y][i] == 1 else 1) for i in range(50))

    total2 = 1
    for i in range(50):
        total2 = total2 * ((1+i) if x[y][i] == 1 else 1)
    total1diff = (total1 - 1000) / 1000
    total2diff = (total2 - (10**15)) / (10**15)
    return abs(total1diff) + abs(total2diff)

def printRes(x, y):
    total1 = sum((1+i)*(0 if x[y][i] == 1 else 1) for i in range(50))
    total2 = 1
    for i in range(50):
        total2 = total2 * ((1+i) if x[y][i] == 1 else 1)
    print("values " ,total1, " ", total2)

def genetic_algorithm(x):
    # print(x)
    found = False
    total = 0
    while not found:
        total = total + 1
        a = randint(0,99)
        b = randint(0,99)
        if a == b:
            continue
        loser = a
        winner = b
        if fitscore(x, a) < fitscore(x, b):
            loser = b
            winner = a
        for i in range(50):
            if randint(0,1) == 0:
                # 1 in 2 chance to change the bit to winner's bit
                x[loser][i] = x[winner][i]
            if randint(0,9) == 0:
                # 1 in 10 chance to flip the bit
                x[loser][i] = 1 - x[loser][i]
            # print(fitscore(x, loser))
            if (fitscore(x, loser) <= 0.005) or (total == 10**5):
                # if the fit score is 0
                print("Finish in ",total," iteration(s)")
                print("Fitcore ", fitscore(x, loser))
                printRes(x, loser)
                print(x[loser])

                found = True
                break

x = [[randint(0,1) for x in range(50)] for y in range(100)]
# print(x)
genetic_algorithm(x)
