from jinja2 import Template

f_instruc = open('instruc_h_template.jinja', 'r').read()
f_intrptr = open('intrptr_h_template.jinja', 'r').read()
f_gen_instruc = open('instruc_h_template.jinja', 'w')
f_gen_intrprt = open('instruc_h_template.jinja', 'w')

instr_types = ['I', 'D']

data_types = [
	['int'], 
	['int', 'int'], 
	['int', 'offset'], 
	['offset', 'int'], 
	['offset']
]

instructions = [
	['ADD', '+'],
	['SUB', '-'],
	['MUL', '*'],
	['DIV', '/']
]

for instr in instructions:
	for instr_type in instr_types:
		for data_type in data_types:
			print f_instruc.render( i_name = instr[0] + t, i_op = instr[1], i_type = "_".join(instr_type), d_type = data_type)