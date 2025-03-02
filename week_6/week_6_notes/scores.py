scores = [72, 73, 33]

average = sum(scores) / len(scores)

print(f"Average: {average}")

# --------------------------------------

scores = []

for i in range(3):
    try:
        score = int(input("Score: "))
    except ValueError:
        print("Score must be integer.")
    scores.append(score)
average = sum(scores) / len(scores)

print(f"Average")