import csv


with open("week_7/favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    py_count, scratch_count, c_count = 0, 0, 0
    counts = {}

    for row in reader:
        if row["language"] in counts:
            counts[row["language"]] += 1
        else:
            counts[row["language"]] = 1
        

print(counts)
for language_count in sorted(counts, key=counts.get, reverse=True):
    print(f"{language_count}: {counts[language_count]}")


# ------------------------------------------------

from cs50 import SQL

db = SQL("sqlite:///favorites.db")

favorite = input("Favorite: ")

rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE language = ?", favorite) # a single ? is a placeholder for a sinlge value, like %s in printf from C.


