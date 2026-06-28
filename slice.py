import sys

nested = [[10], [20], [30]]

sliced_view = nested[0:2]

print("=== BEFORE MEMORY TAMPER ===")
print(f"Original list 'nested':     {nested}")
print(f"Sliced view 'sliced_view': {sliced_view}\n")

print("--- AUDITING CONTAINER HEX RAM ADDRESSES ---")
print(f"Address of nested container:      {hex(id(nested))}")
print(f"Address of sliced_view container: {hex(id(sliced_view))}")
print("-> Notice that the outer container addresses are DIFFERENT.\n")

print("--- AUDITING THE INNER SUB-LIST RAM ADDRESSES ---")
print(f"Address of nested[0]:      {hex(id(nested[0]))}")
print(f"Address of sliced_view[0]: {hex(id(sliced_view[0]))}")
print("-> The inner sub-list addresses are EXACTLY IDENTICAL!\n")

print("=== EXECUTING THE MEMORY TAMPER ===")
print("Modifying indexed space: sliced_view[0][0] = 999")
sliced_view[0][0] = 999

print("\n=== POST-TAMPER STATUS ===")
print(f"Original list 'nested':     {nested}")
print(f"Sliced view 'sliced_view': {sliced_view}\n")

print("--- 0.1% SOVEREIGN INSIGHT ---")
print("Modifying 'sliced_view' successfully smashed the data inside 'nested' as well!")
print("This explicitly proves that Python list slicing is a SHALLOW pointer window.")
print("It copies the outer container, but points to the exact same memory cells inside.")
