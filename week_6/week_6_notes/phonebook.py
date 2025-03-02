names = ["Yuliia", "David", "Jonh"]

name = input("Name: ")

for n in names:
    if name == n:
        print("Found")
        break
else:
    print("Not found")


# ----------------------------------

if name in names:
    print("Found")
else:
    print("Not found")

# -------------------------------------

people = [
    {"name": "Yuliia", "number": "+1-617-495-1000"},
    {"name": "David", "number": "+1-617-495-1000"},
    {"name": "John", "number": "+1-949-468-2750"},
]

name = input("Name: ")
for person in people:
    if person["name"] == name:
        number = person["number"]
        print(f"Found Number: {number}")
        break
else:
    print("Not found")

# -------------------------------------

people = {
    "Yuliia": "+1-617-495-1000",
    "David": "+1-617-495-1000",
    "John": "+1-949-468-2750"
}

name = input("Name: ")

if name in people:
    print(f"Number: {people[name]}")

# -------------------------------------

import csv

file = open("phonebook.csv", "a")

name = input("Name: ")
number = input("Number: ")

writer = csv.writer(file)

writer.writerow([name, number])
file.close()

# -------------------------------------

import csv

name = input("Name: ")
number = input("Number: ")
with open("phonebook.csv", "a") as file:
    writer = csv.writer(file)
    writer.writerow([name, number])

# -------------------------------------

import csv

name = input("Name: ")
number = input("Number: ")

with open("phonebook.csv", "a") as file:
    writer = csv.DictWriter(file, fieldnames=["name", "number"])
    writer.writerow({"name": name, "number": number})

    


