import queue

list = [50,17,72,12,93,54,76,9,14,19,0,0,67]


def dfs(cur, find, data):
    global idx
    if cur > len(data):
         return -1
    if data[cur-1] != 0:
        print("check ",idx,  " ", data[cur-1]);
        idx = idx + 1
    if data[cur-1] == find:

        return cur
    else :
        result = dfs(cur*2, find, data);
        if result != -1:
            return result
        return dfs(cur*2+1, find, data);
# iterative
def bfs(find, data):
    q = queue.Queue()
    q.put(1)
    while not q.empty():
        cur = q.get()
        print(data[cur-1]);
        if (data[cur-1] == -1 or cur > len(data)):
            continue
        if (data[cur-1] == find):
            return cur
        q.put(cur*2);
        q.put(cur*2+1);
# recursive
def bfs2(find, data, q):
    if q.empty():
        return
    cur = q.get()
    print(data[cur-1])
    if (data[cur-1] == 0 or cur > len(data)):
        return
    if (data[cur-1] == find):
        print("found at idx ", cur-1)
        return
    q.put(cur*2)
    q.put(cur*2+1)

    bfs2(find, data, q)

print("recursive bfs")
q = queue.Queue()
q.put(1)
bfs2(72, list, q)
print("iterative bfs")
bfs(72, list)
print("recursive dfs")
idx = 1
dfs(1,72, list)
