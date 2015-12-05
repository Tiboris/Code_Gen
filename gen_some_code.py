#!/usr/bin/env python2
#-*- coding: utf-8 -*-
from jinja2 import Template

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

## process types X is replaced down in fourth for
p_types = [
	# TO DO PRINT WITH 2 OPERANDS
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
p_types_bi = [
	# TO DO PRINT WITH 2 OPERANDS issue
	['X', 'X'], 
	['X', 'offset'], 
	['offset', 'X'],
	['offset', 'offset']
	# 
]
p_types_tr=[
	['offset', 'X' ,'X'],
	['offset', 'X' ,'offset'],
	['offset', 'offset' ,'X'],
	['offset', 'offset' ,'offset']
]


## instruction types
i_types = ['I', 'D']


############################################################################################					
###################### ARITMETICAL INSTRUCTIONS GENERATION START ###########################					
############################################################################################

### file template for instruction generator
instruc_templ 		= Template( open('templates/instruc_h_templ.jinja', 'r').read() )
intrptr_templ 		= Template( open('templates/intrptr_h_templ.jinja', 'r').read() )
bi_print_h_templ	= Template( open('templates/bi_print_h_templ.jinja', 'r').read() ) # print with two operands has different 
tr_print_h_templ	= Template( open('templates/tr_print_h_templ.jinja', 'r').read() ) # template prints 2 or 3 values of operands # maybe fix
print_c_templ		= Template( open('templates/print_c_templ.jinja', 'r').read() )
case_templ			= Template( open('templates/interpreter_case.jinja', 'r').read())

header_instr		= open('heads&foots/header_instr', "r").read()
header_procs		= open('heads&foots/header_procs', "r").read()
header_print_h		= open('heads&foots/header_print_h', "r").read()
header_print_c		= open('heads&foots/header_print_c', "r").read()

footer_print_c		=open('heads&foots/footer_print_c', "r").read()
footer_instr		="\n#endif // GEN_INSTRUCTIONS_H\n"
footer_procs		="\n#endif // GEN_PROCESSES_H\n"
footer_print_h		="\n#endif // _PRINT_INSTR_H_\n"

#### file template for processes generator

#### file  for instruction generator output
f_gen_instruc	= open("generated/gen_instructions.h", "w")
#### file for processes generator generator output
f_gen_intrprt	= open("generated/gen_interpreter_instr.h", "w")
#### PATO #### @Tiboris
f_gen_print_h	= open("generated/print_instructions.h","w")

#### PATO
f_gen_print_c	= open("generated/print_instructions.c","w")
#### XKRAT
f_gen_case		= open("generated/gen_case_instr.c","w")


f_gen_instruc.write(header_instr)
f_gen_intrprt.write(header_procs)
f_gen_print_h.write(header_print_h)
f_gen_print_c.write(header_print_c)



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
			f_gen_instruc.write( instruc_templ.render(	inst_name = instruction[0] + i_type, data_type = 'INT' if i_type == 'I' else 'DOUBLE', proc_op = instruction[1], inst_type = "_".join(G)))
			f_gen_intrprt.write( intrptr_templ.render(	inst_name = instruction[0] + i_type, data_type = 'INT' if i_type == 'I' else 'DOUBLE', proc_op = instruction[1], inst_type = "_".join(G)))			
			#f_gen_print_h.write( print_h_templ.render(	inst_name = instruction[0] + i_type, data_type = 'INT' if i_type == 'I' else 'DOUBLE', proc_op = instruction[1], data=print_data, inst_type = "_".join(G)))
			f_gen_print_c.write( print_c_templ.render(	inst_name = instruction[0] + i_type, data_type = 'INT' if i_type == 'I' else 'DOUBLE', proc_op = instruction[1], data=print_data, inst_type = "_".join(G)))			
			f_gen_case.write( case_templ.render ( inst_name = instruction[0] + i_type, inst_type = "_".join(G) ))	
			#there wass issue with print 2 or 3 operands to print so here are two fors up to row 149 on row 114 is without case that there are 2 or 3 operands in print
		
# finaly fixed this issue i thouht i was blind
		for p_type_bi in p_types_bi:
			H=[]
			for bi_obsah in p_type_bi:
				if bi_obsah == 'X':
					if i_type == 'I':
				 		H.append('int')
				 		print_data="%d"
				  	else:
				  		H.append('double')
				  		print_data="%u"
				else: 
					H.append('offset')
				print "_".join(H)
			f_gen_print_h.write( bi_print_h_templ.render(inst_name = instruction[0] + i_type, data_type = 'INT' if i_type == 'I' else 'DOUBLE', proc_op = instruction[1], data=print_data, inst_type = "_".join(H)))
# finaly fixed this issue i thouht i was blind
		for p_type_tr in p_types_tr:	
			I=[]
			for tr_obsah in p_type_tr:
				if tr_obsah == 'X':
					if i_type == 'I':
				 		I.append('int')
				 		print_data="%d"
				  	else:
				  		I.append('double')	
				  		print_data="%u"
				else: 
					I.append('offset')

				print "_".join(I)
			f_gen_print_h.write( tr_print_h_templ.render(inst_name = instruction[0] + i_type, data_type = 'INT' if i_type == 'I' else 'DOUBLE', proc_op = instruction[1], data=print_data, inst_type = "_".join(I)))

f_gen_instruc.write(footer_instr)
f_gen_intrprt.write(footer_procs)
f_gen_print_h.write(footer_print_h)
f_gen_print_c.write(footer_print_c)

###########################################################################################					
##################### ARITMETICAL -> END && COMPARE -> END ##############################					
###########################################################################################

f_gen_instruc.close()
f_gen_intrprt.close()
f_gen_print_h.close()
f_gen_print_c.close()