from abc import ABC, abstractmethod

class NetworkDevice(ABC):
    def __init__(self, device_id):
        self.device_id = device_id
    
    @abstractmethod
    def connect(self):
        pass

class RouterNode(NetworkDevice):
    def connect(self):
        return f"[SYSTEM LOG] Router Node {self.device_id} successfully established a secure socket stream."

if __name__ == "__main__":
    node  = RouterNode(102)
    print(node.connect())
        