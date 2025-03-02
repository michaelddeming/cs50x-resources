while True:
    try:
        user_input = int(input("Height: "))
        if user_input not in range(1, 9):
            raise ValueError
        break
    except ValueError:
        continue

space = " "
block = "#"
for i in range(1, user_input + 1):
    print(f"{space * (user_input - i)}{block * i}  {block * i}")
