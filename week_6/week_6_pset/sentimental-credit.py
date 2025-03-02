def check_sum(cc: str):
    n = len(cc)
    evens = []
    odds = []

    for i in range(-1,-(n + 1), -1):
        val = int(cc[i])
        if i % 2 == 0:
            temp = 2 * val
            if temp >= 10:
                remainder = temp % 10
                evens.append(remainder + 1)
            else:
                evens.append(temp)

        else:
            odds.append(val)

    sum_lists = sum(evens) + sum(odds)
    if sum_lists % 10 == 0:
        return True
    else:
        return False




user_input = input("Number: ")

n = len(user_input)

if check_sum(user_input):
    print("INVALID")
    if n == 15:
        if int(user_input[:2]) in (34, 37):
            print("AMEX")
        else:
            print("INVALID")
        # AE
    elif n in (13, 16):
        if int(user_input[0]) == 4:
            #visa
            print("VISA")
        elif int(user_input[:2]) in (range(51, 56)):
            # mc 16
            print("MASTERCARD")
        else:
            print("INVALID")
    else:
        print("INVALID")
else:
    print("INVALID")





