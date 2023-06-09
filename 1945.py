variable_state = {}
last_variable = str()

while True:
    try:
        instruction = str(input())

        if '+' not in instruction:
            instruction = instruction.split(':=')

            instruction[0] = instruction[0].strip()
            instruction[1] = instruction[1].strip()

            last_variable = instruction[0]
            variable_state[instruction[0]] = int(instruction[1])
        else:
            instruction = instruction.split(':=')
            last_variable = instruction[0].strip()

            instruction_sum = instruction[1]
            instruction_sum = instruction_sum.split('+')

            instruction_sum[0] = instruction_sum[0].strip()
            instruction_sum[1] = instruction_sum[1].strip()

            variable_state[last_variable] = variable_state[instruction_sum[0]] + variable_state[instruction_sum[1]]
    except EOFError:
        print(variable_state[last_variable])
        break
