#!/usr/bin/env python2
#-*- coding: utf-8 -*-
from jinja2 import Template



## process types X is replaced down in fourth for
p_types = [
	# vysledok????
	['X', 'X'], 
	['X', 'offset'], 
	['offset', 'X'],
	['offset', 'offset'],
	# 
	['offset', 'X' ,'X'],
	['offset', 'X' ,'offset'],
	['offset', 'offset' ,'X'],
	['offset', 'offset' ,'offset']
]
## 

## instruction types
i_types = ['I', 'D']


############################################################################################					
###################### ARITMETICAL INSTRUCTIONS GENERATION START ###########################					
############################################################################################

### file template for instruction generator
instruc_templ 	= Template( open('instruc_h_templ.jinja', 'r').read() )
intrptr_templ 	= Template( open('intrptr_h_templ.jinja', 'r').read() )
print_templ		= Template( open('print_h_templ.jinja', 'r').read() )

header_instr=open('header_instr', "r").read()
header_procs=open('header_procs', "r").read()

footer_instr="\n#endif // GEN_INSTRUCTIONS_H\n"
footer_procs="\n#endif // GEN_PROCESSES_H\n"

#### file template for processes generator

#### file  for instruction generator output
f_gen_instruc = open("gen_instructions.h", "w")
#### file for processes generator generator output
f_gen_intrprt = open("gen_interpreter_instr.h", "w")
####
f_gen_print   = open("gen_print_instr.h","w")


f_gen_instruc.write(header_instr)
f_gen_intrprt.write(header_procs)


## INSTRUCTIONS
aritm_instructions = [
	['ADD', '+'],
	['SUB', '-'],
	['MUL', '*'],
	['DIV', '/'],
	['CMPL','<'],
	['CMPM','>'],
	['CMPLE','<='],
	['CMPME','>='],
	['CMPE','=='],
	['CMPNE','!=']
]
## @ARITMETICAL INSTRUCTIONS GENERATION
for instruction in aritm_instructions:
	for i_type in i_types:
		for p_type in p_types:
			G=[] # Prepac janko list nema join
			for obsah in p_type:
				if obsah == 'X':
					if i_type == 'I':
				 		G.append('int')
				 		print_data="%d"
				  	else:
				  		G.append('double')
				  		print_data="%u"
				else: 
					G.append('offset')

			print instruction[0] + i_type +"_".join(G)
			f_gen_instruc.write( instruc_templ.render(	inst_name = instruction[0] + i_type, data_type = 'INT' if i_type == 'I' else 'DOUBLE', proc_op = instruction[1], inst_type = "_".join(G)))
			f_gen_intrprt.write( intrptr_templ.render(	inst_name = instruction[0] + i_type, data_type = 'INT' if i_type == 'I' else 'DOUBLE', proc_op = instruction[1], inst_type = "_".join(G)))			
			f_gen_print.write( print_templ.render(	inst_name = instruction[0] + i_type, data_type = 'INT' if i_type == 'I' else 'DOUBLE', proc_op = instruction[1], data=print_data, inst_type = "_".join(G)))			
			
f_gen_instruc.write(footer_instr)
f_gen_intrprt.write(footer_procs)



###########################################################################################					
##################### ARITMETICAL -> END && COMPARE -> END ##############################					
###########################################################################################

f_gen_instruc.close()
f_gen_intrprt.close()
f_gen_print.close()