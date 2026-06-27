import sys

def modify_sys(number, collection):
    print("After Calling function:")
    print(f"Number Address: {hex(id(number))}")
    print(f"Collection Address: {hex(id(collection))}\n")

    number = number + 100
    collection.append(999)

    print("After running function:")
    print(f"Number Address: {hex(id(number))}")
    print(f"Collection Address: {hex(id(collection))}")


num = 10
list = [1, 2, 3]

print("Before calling function")
print(f"Number Address: {hex(id(num))}")
print(f"Collection Address: {hex(id(list))}\n")

modify_sys(num, list)



