import sys

char_val = "A"
int_val = 99
list_val = [10, 20, 30]

print("--- PYTHON OBJECT ADDRESS & SIZE AUDIT ---")
print(f"Char 'A' -> RAM Address: {hex(id(char_val))} | Size: {sys.getsizeof(char_val)} bytes")
print(f"Int 99   -> RAM Address: {hex(id(int_val))} | Size: {sys.getsizeof(char_val)} bytes")
print(f"List     -> RAM Adress: {hex(id(list_val))} | Size: {sys.getsizeof(list_val)} bytes")