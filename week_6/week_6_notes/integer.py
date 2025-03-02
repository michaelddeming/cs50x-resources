n = input("Input: ")

if n.isnumeric():
    print("Integer.")
else:
    print("Not integer.")

# -------------------------------------

try:
    n = int(input("Input: "))

except ValueError:
    print("Not integer.")
else:
    print("Integer")

# -------------------------------------

print("#\n"*3)
