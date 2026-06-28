class VectorNode():
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def __add__(self, other):
        return VectorNode(other.x + self.x, other.y + self.y)

    def __eq__(self, other):
        if self.x == other.x and self.y == other.y:
            return True
        return False
    
    def __str__(self):
        return f"Node({self.x}, {self.y})"
    
node1 = VectorNode(2, 7)
node2 = VectorNode(2, 7)
node3 = node1 + node2
print(f"Node 1 + Node 2 = {node3}")
print(f"Equal" if node1 == node2 else "Not Equal")