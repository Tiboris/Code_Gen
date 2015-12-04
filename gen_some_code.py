#!/usr/bin/env python2
#-*- coding: utf-8 -*-
from jinja2 import Template


#### file template for processes generator
intrptr_templ = Template( open('intrptr_h_templ.jinja', 'r').read() )
#### file  for instruction generator output
f_gen_instruc = open("gen_instructions.h", "w")
#### file for processes generator generator output
f_gen_intrprt = open("gen_interpr_inst.h", "w")

## process types X is replaced down in fourth for
p_types = [['X'], ['X', 'X'], ['X', 'offset'], ['offset', 'X'], ['offset']]
## 

## instruction types
i_types = ['I', 'D']


############################################################################################					
###################### ARITMETICAL INSTRUCTIONS GENERATION START ###########################					
############################################################################################

### file template for instruction generator
instruc_templ = Template( open('instruc_h_templ.jinja', 'r').read() )

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
				  	else:
				  		G.append('double')
				else: 
					G.append('offset')
			print instruction[0] + i_type +"_".join(G)
			f_gen_instruc.write( instruc_templ.render(	i_name = instruction[0] + i_type, data_type = 'INT' if i_type == 'I' else 'DOUBLE', i_op = instruction[1], inst_type = "_".join(G)))
###########################################################################################					
##################### ARITMETICAL -> END && COMPARE -> END ##############################					
###########################################################################################



f_gen_instruc.close()
f_gen_intrprt.close()
