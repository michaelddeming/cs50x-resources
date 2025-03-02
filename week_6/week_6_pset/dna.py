import csv
import sys


def main():

    # TODO: Check for command-line usage
    if len(sys.argv) != 3:
        print("Error")
        sys.exit(1)
    # TODO: Read database file into a variable
    data = []
    with open(sys.argv[1], "r") as file:
        reader = csv.DictReader(file)
        for row in reader:
            data.append(row)



    # TODO: Read DNA sequence file into a variable
    with open(sys.argv[2], "r") as file:
        sequence = file.read()
    # TODO: Find longest match of each STR in DNA sequence
    new = {}
    for string in data[0].keys():
        if string != "name":
            val = longest_match(sequence, string)
            new[string] = str(val)

    # TODO: Check database for matching profiles
    match = False
    for profile in data:
            if "name" in profile:
                person = profile.pop("name")
                if profile == new:
                    print(person)
                    match = True
                    break
    if not match:
        print("No match")



def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()
