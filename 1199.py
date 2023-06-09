number = input()

while number[0] != '-':
	if len(number) <= 2:
		print('0x{}'.format(hex(int(number)).upper()[2:]))
	else:
		if number[1] == 'x':
			print(int(number, 16))
		else:
			print('0x{}'.format(hex(int(number)).upper()[2:]))

	number = input()
