import sys

elements = []

print("--- DETECTING DYNAMIC ARRAY MEMORY OVERALLOCATION ---")
print(f"Initial Empty State | Size: {sys.getsizeof(elements)} bytes\n")

for i in range(1, 31):
    elements.append(i)
    curr_len = len(elements)
    curr_size = sys.getsizeof(elements)

    print(f"Length: {curr_len:<2} | Raw Memory Footprint: {curr_size} bytes")