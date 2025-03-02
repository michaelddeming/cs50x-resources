for i in range(3):
    print("#")

# -----------------------------------

while True:
    n = input("Height: ")
    if n > 0:
        break

for i in range(n):
    print("#")

# -----------------------------------

for i in range(4):
    print("?", end="")
print()

# -----------------------------------

print("?" * 4)

# -----------------------------------

for i in range(3):
    for j in range(3):
        print("#", end="")
    print()

# -----------------------------------

for i in range(3):
    print("#" * 3)
    