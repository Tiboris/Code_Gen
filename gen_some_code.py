#!/usr/bin/env python2
#-*- coding: utf-8 -*-
from jinja2 import Template

instruc_templ = Template( open('instruc_h_templ.jinja', 'r').read() )

intrptr_templ = Template( open('intrptr_h_templ.jinja', 'r').read() )

f_gen_instruc = open("gen_instructions.h", "w")
f_gen_intrprt = open("gen_interpr_inst.h", "w")

p_types = [['X'], ['X', 'X'], ['X', 'offset'], ['offset', 'X'], ['offset']]

i_types = ['I', 'D']

instructions = [
	['ADD', '+'],
	['SUB', '-'],
	['MUL', '*'],
	['DIV', '/']
]
for instruction in instructions:
	for i_type in i_types:
		for p_type in p_types:
			G=[] # Prepac janko list nema join
			for obsah in p_type:
				if obsah == 'X':
					if i_type == 'I':
				 		G.append('int')
				  	else:
				  		G.append('double')
				else: 
					G.append('offset')
			print instruction[0] + i_type +"_".join(G)
			f_gen_instruc.write( instruc_templ.render(	i_name = instruction[0] + i_type, data_type = 'INT' if i_type == 'I' else 'DOUBLE', i_op = instruction[1], inst_type = "_".join(G)))
					
						
					
			#														    join(pt.replace('X', t2 == 'I' ? 'int' : 'double')))
			# INSTR_T create_{{ i_name }}_{{ i_type }}_instr(const int a, const int b) {
#     instruction_t *instruction = calloc(1, sizeof(instruction_t));

#     instruction->type = I_{{ i_name }};
#     ZVAL_INIT_{{ d_type }}(instruction->first, a);
#     ZVAL_INIT_{{ d_type}}(instruction->second, b);

#     return instruction;
# }

f_gen_instruc.close()
f_gen_intrprt.close()
# 	TRUE
# ('int' if i_type == 'I' 'double' ) obsah =='X'  'offset' for obsah in p_type


