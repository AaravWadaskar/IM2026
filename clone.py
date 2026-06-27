import copy

og_mat = [[10, 20], [30, 40]]

print(og_mat)
print(f"{hex(id(og_mat))}\n")

shallow = copy.copy(og_mat)
deep = copy.deepcopy(og_mat)

print(shallow)
print(deep)
print(hex(id(og_mat)))
print(hex(id(shallow)))
print(f"{hex(id(deep))}\n")

og_mat[0][0] = 999

print(og_mat)
print(shallow)
print(deep)
print(hex(id(og_mat)))
print(hex(id(shallow)))
print(hex(id(deep)))