from sys import stdin, stdout

str_num1, str_num2 = [list(n) for n in stdin.readline().split()]

while str_num1 != ['0'] or str_num2 != ['0']:
	num1 = [0] * 10
	num2 = [0] * 10

	for i, j in zip(range(len(num1)-1, -1, -1), range(len(str_num1)-1, -1, -1)):
		num1[i] = int(str_num1[j])
	for i, j in zip(range(len(num2)-1, -1, -1), range(len(str_num2)-1, -1, -1)):
		num2[i] = int(str_num2[j])

	num_carrys = 0
	for i in range(9, -1, -1):
		#print('\n\nDebug\n' + str(num1[i]) + '\n' + str(num2[i]))
		if num1[i] + num2[i] >= 10:
			num_carrys += 1
			num1[i-1] += 1

	if num_carrys == 0:
		stdout.write('No carry operation.\n')
	elif num_carrys == 1:
		stdout.write('1 carry operation.\n')
	else:
		stdout.write(str(num_carrys) + ' carry operations.\n')

	str_num1, str_num2 = [list(n) for n in stdin.readline().split()]
