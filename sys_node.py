import sys

class SystemNode:
    def __init__(self, node_id, internal_ip, operational_load):
        self.node_id = node_id
        self.internal_ip = internal_ip
        self.operational_load = operational_load

    def __str__(self):
        return f"[Node {self.node_id} | IP: {self.internal_ip} | Load: {self.operational_load}%]"
    
if __name__ == "__main__":
        print("--- INSTANTIATING HARDWARE OBJECTS IN RAM ---\n")
        node1 = SystemNode(101, "192.168.1.50", 45)
        node2 = SystemNode(102, "10.0.0.12", 88)

        print("Printing Node 1 (Intercepted String Representation):")
        print(node1)
        
        print("\nPrinting Node 2 (Intercepted String Representation):")
        print(node2)

        print("\n--- PEEKING AT THE UNDERLYING HARDWARE LAYOUT ---")
        print(f"Node 1 -> Physical RAM Location: {hex(id(node1))}")
        print(f"Node 2 -> Physical RAM Location: {hex(id(node2))}")

        print("\n--- INSIGHT ---")
        print("Because you overrode __str__, you converted a raw object footprint into")
        print("a custom diagnostic tool, while hex(id()) still lets you audit the")
        print("raw 64-bit address space on your Mac. You hold total structural command.")