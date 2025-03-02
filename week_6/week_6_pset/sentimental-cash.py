
while True:
    user_input = input("Change: ")
    if "." in user_input:
        try:
            dollars, cents = user_input.split(".")
            if len(cents) == 1:
                cents = cents + "0"
            dollars = int(dollars)
            change = int(cents)
            if change <= 0:
                raise ValueError
            else:
                break
        except ValueError:
            continue
    else:
        try:
            dollars = int(user_input)
            change = 0

            if dollars < 0:
                raise ValueError
            else:
                break
        except ValueError:
            continue

dollars_in_quarters = dollars * 4
max_quarters = change // 25
change = change % 25
max_dimes = change // 10;
change = change % 10

max_nickels = change // 5
change = change % 5

max_pennies = change // 1
change = change % 1

coins = (dollars_in_quarters + max_quarters + max_dimes + max_nickels + max_pennies)

print(coins)





