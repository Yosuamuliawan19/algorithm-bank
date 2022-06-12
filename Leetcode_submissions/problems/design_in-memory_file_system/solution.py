class Trie:
    def __init__(self, val):
        self.val = val
        self.children = {}
        self.content = ''
        self.isFile = False
        
class FileSystem:

    def __init__(self):
        self.root = Trie('')

    def ls(self, path: str) -> List[str]:
        dirs, idx, node = path.split('/')[1:], 1, self.root
        if dirs[-1] == '': dirs = dirs[0:-1]
        
        for idx, dir_name in enumerate(dirs):
            node = node.children[dir_name]
            
        # If file, return file name
        if node.isFile: return [node.val]
        
        # If directory, return list of children
        child = list(node.children.keys())
        child.sort()
        return child

    def mkdir(self, path: str) -> None:
        dirs, idx, node = path.split('/')[1:], 1, self.root
        if dirs[-1] == '': dirs = dirs[0:-1]
        
        # traverse, force create
        for idx, dir_name in enumerate(dirs):
            if dir_name not in node.children: node.children[dir_name] = Trie(dir_name)
            node = node.children[dir_name]
            
            
    def addContentToFile(self, filePath: str, content: str) -> None:
        dirs, idx, node = filePath.split('/')[1:], 1, self.root
        if dirs[-1] == '': dirs = dirs[0:-1]
        
        # traverse, force create
        for idx, dir_name in enumerate(dirs):      
            if dir_name not in node.children:  node.children[dir_name] = Trie(dir_name)
            node = node.children[dir_name]
            
        # Add to content, and denote that this is a file
        node.content += content
        node.isFile = True

    def readContentFromFile(self, filePath: str) -> str:
        dirs, idx, node = filePath.split('/')[1:], 1, self.root
        if dirs[-1] == '': dirs = dirs[0:-1]
              
        # traverse, force create
        for idx, dir_name in enumerate(dirs):     
            if dir_name not in node.children: node.children[dir_name] = Trie(dir_name)
            node = node.children[dir_name]
            
        # Return the content
        return node.content


# Your FileSystem object will be instantiated and called as such:
# obj = FileSystem()
# param_1 = obj.ls(path)
# obj.mkdir(path)
# obj.addContentToFile(filePath,content)
# param_4 = obj.readContentFromFile(filePath)