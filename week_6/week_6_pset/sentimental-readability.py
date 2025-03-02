user_input = input("Text: ")

sentences = 0
words = 0
letters = 0

n = len(user_input)

for i in range(n):

    if user_input[i].isalpha():
        letters += 1
    elif user_input[i] == " ":
        words += 1
    elif user_input[i] in ("!", ".", "?"):
        sentences += 1
    else:
        pass

words +=1

L = (letters / words) * 100
S = (sentences / words) * 100
grade = round(0.0588 * L - 0.296 * S - 15.8)

if grade < 1:
        print("Before Grade 1")

elif grade >= 16:
    print("Grade 16+")
else:
    print(f"Grade {grade}")

