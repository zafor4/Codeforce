def count_letters(name):
    letter_count = {}
    for letter in name:
        if letter in letter_count:
            letter_count[letter] += 1
        else:
            letter_count[letter] = 1
    return letter_count

guest_name = input().strip()
host_name = input().strip()
pile_letters = input().strip()

guest_count = count_letters(guest_name)
host_count = count_letters(host_name)

pile_count = {}
for letter in pile_letters:
    if letter in pile_count:
        pile_count[letter] += 1
    else:
        pile_count[letter] = 1


possible = True
for letter, count in guest_count.items():
    if letter not in pile_count or pile_count[letter] < count:
        possible = False
        break

for letter, count in host_count.items():
    if letter not in pile_count or pile_count[letter] < count:
        possible = False
        break

if possible:
    print("YES")
else:
    print("NO")
