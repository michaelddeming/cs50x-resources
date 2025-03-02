before = input("Before: ")

print("After: ", end="")

for c in before:
    print(c.upper(), end="")
print()


# -------------------------------------

before = input("Before: ")
after = before.upper()
print(f"After: {after}")

# ----------------------------

before = input("Before: ")
print(f"After: {before.upper()}")