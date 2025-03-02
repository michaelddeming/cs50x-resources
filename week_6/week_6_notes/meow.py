print("meow")
print("meow")
print("meow")

# ------------------------------

i = 0
while i < 3:
    print("meow")
    i += 1

# ----------------------

for _ in range(3):
    print("meow")

# ---------------------

def meow():
    print("meow")

for i in range(3):
    meow()

# ---------------------

def main():
    for i in range(3):
        meow()

def meow():
    print("meow")

main()

# ---------------------

def main():
    meow(3)

def meow(n):
    for _ in range(n):
        print("meow")

if __name__ == "__main__":
    main()
    

