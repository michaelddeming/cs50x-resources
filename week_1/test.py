rows = 8

brick = "#"
space = " "
space_count = rows - 1
brick_count = 1

for _ in range(rows):
    print(f"{space*space_count}{brick*brick_count}  {brick*brick_count}{space*space_count}")
    brick_count += 1
    space_count -= 1
