def isprime_number(number):
    if number < 2:
        return False

    i = 2
    while i ** 2 <= number:
        if number % i == 0:
            return False
        i += 1

    return True


for teste in range(int(input())):
	if isprime_number(int(input())):
		print('Prime')
	else:
		print('Not Prime')
