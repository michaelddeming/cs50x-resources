
char = input("Do you agree? ")

if char == "Y" or char == "y":
    print("Agreed.")
elif char == "N" or char == "n":
    print("Not agreed.")

# ------------------------------

char = input("Do you agree? ")

if char in ["Y", "y"]:
    print("Agreed.")
elif char in ["N", "n"]:
    print("Not agreed.")

# -------------------------------

s = input("Do you agree? ").lower()

if s == "y" or s == "yes":
    print("Agreed.")
elif s == "n" or s == "no":
    print("Not agreed.")