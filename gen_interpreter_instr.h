
/*
Generated I_ADDI_int_int
*/
static inline void process_I_ADDI_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) + ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_ADDI_int_offset
*/
static inline void process_I_ADDI_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) + ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_ADDI_offset_int
*/
static inline void process_I_ADDI_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) + ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_ADDI_offset_offset
*/
static inline void process_I_ADDI_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) + ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_ADDI_offset_int_int
*/
static inline void process_I_ADDI_offset_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) + ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_ADDI_offset_int_offset
*/
static inline void process_I_ADDI_offset_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) + ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_ADDI_offset_offset_int
*/
static inline void process_I_ADDI_offset_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) + ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_ADDI_offset_offset_offset
*/
static inline void process_I_ADDI_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) + ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_ADDD_double_double
*/
static inline void process_I_ADDD_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) + ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_ADDD_double_offset
*/
static inline void process_I_ADDD_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) + ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_ADDD_offset_double
*/
static inline void process_I_ADDD_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) + ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_ADDD_offset_offset
*/
static inline void process_I_ADDD_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) + ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_ADDD_offset_double_double
*/
static inline void process_I_ADDD_offset_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) + ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_ADDD_offset_double_offset
*/
static inline void process_I_ADDD_offset_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) + ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_ADDD_offset_offset_double
*/
static inline void process_I_ADDD_offset_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) + ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_ADDD_offset_offset_offset
*/
static inline void process_I_ADDD_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) + ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_SUBI_int_int
*/
static inline void process_I_SUBI_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) - ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_SUBI_int_offset
*/
static inline void process_I_SUBI_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) - ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_SUBI_offset_int
*/
static inline void process_I_SUBI_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) - ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_SUBI_offset_offset
*/
static inline void process_I_SUBI_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) - ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_SUBI_offset_int_int
*/
static inline void process_I_SUBI_offset_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) - ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_SUBI_offset_int_offset
*/
static inline void process_I_SUBI_offset_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) - ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_SUBI_offset_offset_int
*/
static inline void process_I_SUBI_offset_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) - ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_SUBI_offset_offset_offset
*/
static inline void process_I_SUBI_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) - ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_SUBD_double_double
*/
static inline void process_I_SUBD_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) - ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_SUBD_double_offset
*/
static inline void process_I_SUBD_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) - ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_SUBD_offset_double
*/
static inline void process_I_SUBD_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) - ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_SUBD_offset_offset
*/
static inline void process_I_SUBD_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) - ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_SUBD_offset_double_double
*/
static inline void process_I_SUBD_offset_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) - ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_SUBD_offset_double_offset
*/
static inline void process_I_SUBD_offset_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) - ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_SUBD_offset_offset_double
*/
static inline void process_I_SUBD_offset_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) - ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_SUBD_offset_offset_offset
*/
static inline void process_I_SUBD_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) - ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_MULI_int_int
*/
static inline void process_I_MULI_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) * ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_MULI_int_offset
*/
static inline void process_I_MULI_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) * ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_MULI_offset_int
*/
static inline void process_I_MULI_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) * ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_MULI_offset_offset
*/
static inline void process_I_MULI_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) * ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_MULI_offset_int_int
*/
static inline void process_I_MULI_offset_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) * ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_MULI_offset_int_offset
*/
static inline void process_I_MULI_offset_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) * ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_MULI_offset_offset_int
*/
static inline void process_I_MULI_offset_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) * ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_MULI_offset_offset_offset
*/
static inline void process_I_MULI_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) * ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_MULD_double_double
*/
static inline void process_I_MULD_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) * ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_MULD_double_offset
*/
static inline void process_I_MULD_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) * ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_MULD_offset_double
*/
static inline void process_I_MULD_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) * ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_MULD_offset_offset
*/
static inline void process_I_MULD_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) * ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_MULD_offset_double_double
*/
static inline void process_I_MULD_offset_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) * ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_MULD_offset_double_offset
*/
static inline void process_I_MULD_offset_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) * ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_MULD_offset_offset_double
*/
static inline void process_I_MULD_offset_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) * ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_MULD_offset_offset_offset
*/
static inline void process_I_MULD_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) * ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_DIVI_int_int
*/
static inline void process_I_DIVI_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) / ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_DIVI_int_offset
*/
static inline void process_I_DIVI_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) / ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_DIVI_offset_int
*/
static inline void process_I_DIVI_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) / ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_DIVI_offset_offset
*/
static inline void process_I_DIVI_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) / ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_DIVI_offset_int_int
*/
static inline void process_I_DIVI_offset_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) / ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_DIVI_offset_int_offset
*/
static inline void process_I_DIVI_offset_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) / ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_DIVI_offset_offset_int
*/
static inline void process_I_DIVI_offset_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) / ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_DIVI_offset_offset_offset
*/
static inline void process_I_DIVI_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) / ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_DIVD_double_double
*/
static inline void process_I_DIVD_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) / ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_DIVD_double_offset
*/
static inline void process_I_DIVD_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) / ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_DIVD_offset_double
*/
static inline void process_I_DIVD_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) / ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_DIVD_offset_offset
*/
static inline void process_I_DIVD_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) / ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_DIVD_offset_double_double
*/
static inline void process_I_DIVD_offset_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) / ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_DIVD_offset_double_offset
*/
static inline void process_I_DIVD_offset_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) / ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_DIVD_offset_offset_double
*/
static inline void process_I_DIVD_offset_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) / ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_DIVD_offset_offset_offset
*/
static inline void process_I_DIVD_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) / ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLI_int_int
*/
static inline void process_I_CMPLI_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) < ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLI_int_offset
*/
static inline void process_I_CMPLI_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) < ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLI_offset_int
*/
static inline void process_I_CMPLI_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) < ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLI_offset_offset
*/
static inline void process_I_CMPLI_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) < ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLI_offset_int_int
*/
static inline void process_I_CMPLI_offset_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) < ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLI_offset_int_offset
*/
static inline void process_I_CMPLI_offset_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) < ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLI_offset_offset_int
*/
static inline void process_I_CMPLI_offset_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) < ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLI_offset_offset_offset
*/
static inline void process_I_CMPLI_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) < ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLD_double_double
*/
static inline void process_I_CMPLD_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) < ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLD_double_offset
*/
static inline void process_I_CMPLD_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) < ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLD_offset_double
*/
static inline void process_I_CMPLD_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) < ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLD_offset_offset
*/
static inline void process_I_CMPLD_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) < ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLD_offset_double_double
*/
static inline void process_I_CMPLD_offset_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) < ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLD_offset_double_offset
*/
static inline void process_I_CMPLD_offset_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) < ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLD_offset_offset_double
*/
static inline void process_I_CMPLD_offset_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) < ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLD_offset_offset_offset
*/
static inline void process_I_CMPLD_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) < ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMI_int_int
*/
static inline void process_I_CMPMI_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) > ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMI_int_offset
*/
static inline void process_I_CMPMI_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) > ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMI_offset_int
*/
static inline void process_I_CMPMI_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) > ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMI_offset_offset
*/
static inline void process_I_CMPMI_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) > ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMI_offset_int_int
*/
static inline void process_I_CMPMI_offset_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) > ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMI_offset_int_offset
*/
static inline void process_I_CMPMI_offset_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) > ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMI_offset_offset_int
*/
static inline void process_I_CMPMI_offset_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) > ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMI_offset_offset_offset
*/
static inline void process_I_CMPMI_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) > ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMD_double_double
*/
static inline void process_I_CMPMD_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) > ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMD_double_offset
*/
static inline void process_I_CMPMD_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) > ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMD_offset_double
*/
static inline void process_I_CMPMD_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) > ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMD_offset_offset
*/
static inline void process_I_CMPMD_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) > ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMD_offset_double_double
*/
static inline void process_I_CMPMD_offset_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) > ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMD_offset_double_offset
*/
static inline void process_I_CMPMD_offset_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) > ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMD_offset_offset_double
*/
static inline void process_I_CMPMD_offset_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) > ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMD_offset_offset_offset
*/
static inline void process_I_CMPMD_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) > ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLEI_int_int
*/
static inline void process_I_CMPLEI_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) <= ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLEI_int_offset
*/
static inline void process_I_CMPLEI_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) <= ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLEI_offset_int
*/
static inline void process_I_CMPLEI_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) <= ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLEI_offset_offset
*/
static inline void process_I_CMPLEI_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) <= ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLEI_offset_int_int
*/
static inline void process_I_CMPLEI_offset_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) <= ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLEI_offset_int_offset
*/
static inline void process_I_CMPLEI_offset_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) <= ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLEI_offset_offset_int
*/
static inline void process_I_CMPLEI_offset_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) <= ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLEI_offset_offset_offset
*/
static inline void process_I_CMPLEI_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) <= ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLED_double_double
*/
static inline void process_I_CMPLED_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) <= ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLED_double_offset
*/
static inline void process_I_CMPLED_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) <= ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLED_offset_double
*/
static inline void process_I_CMPLED_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) <= ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLED_offset_offset
*/
static inline void process_I_CMPLED_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) <= ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLED_offset_double_double
*/
static inline void process_I_CMPLED_offset_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) <= ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLED_offset_double_offset
*/
static inline void process_I_CMPLED_offset_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) <= ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLED_offset_offset_double
*/
static inline void process_I_CMPLED_offset_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) <= ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPLED_offset_offset_offset
*/
static inline void process_I_CMPLED_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) <= ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMEI_int_int
*/
static inline void process_I_CMPMEI_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) >= ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMEI_int_offset
*/
static inline void process_I_CMPMEI_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) >= ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMEI_offset_int
*/
static inline void process_I_CMPMEI_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) >= ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMEI_offset_offset
*/
static inline void process_I_CMPMEI_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) >= ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMEI_offset_int_int
*/
static inline void process_I_CMPMEI_offset_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) >= ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMEI_offset_int_offset
*/
static inline void process_I_CMPMEI_offset_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) >= ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMEI_offset_offset_int
*/
static inline void process_I_CMPMEI_offset_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) >= ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMEI_offset_offset_offset
*/
static inline void process_I_CMPMEI_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) >= ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMED_double_double
*/
static inline void process_I_CMPMED_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) >= ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMED_double_offset
*/
static inline void process_I_CMPMED_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) >= ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMED_offset_double
*/
static inline void process_I_CMPMED_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) >= ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMED_offset_offset
*/
static inline void process_I_CMPMED_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) >= ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMED_offset_double_double
*/
static inline void process_I_CMPMED_offset_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) >= ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMED_offset_double_offset
*/
static inline void process_I_CMPMED_offset_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) >= ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMED_offset_offset_double
*/
static inline void process_I_CMPMED_offset_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) >= ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPMED_offset_offset_offset
*/
static inline void process_I_CMPMED_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) >= ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPEI_int_int
*/
static inline void process_I_CMPEI_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) == ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPEI_int_offset
*/
static inline void process_I_CMPEI_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) == ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPEI_offset_int
*/
static inline void process_I_CMPEI_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) == ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPEI_offset_offset
*/
static inline void process_I_CMPEI_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) == ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPEI_offset_int_int
*/
static inline void process_I_CMPEI_offset_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) == ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPEI_offset_int_offset
*/
static inline void process_I_CMPEI_offset_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) == ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPEI_offset_offset_int
*/
static inline void process_I_CMPEI_offset_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) == ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPEI_offset_offset_offset
*/
static inline void process_I_CMPEI_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) == ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPED_double_double
*/
static inline void process_I_CMPED_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) == ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPED_double_offset
*/
static inline void process_I_CMPED_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) == ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPED_offset_double
*/
static inline void process_I_CMPED_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) == ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPED_offset_offset
*/
static inline void process_I_CMPED_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) == ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPED_offset_double_double
*/
static inline void process_I_CMPED_offset_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) == ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPED_offset_double_offset
*/
static inline void process_I_CMPED_offset_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) == ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPED_offset_offset_double
*/
static inline void process_I_CMPED_offset_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) == ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPED_offset_offset_offset
*/
static inline void process_I_CMPED_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) == ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPNEI_int_int
*/
static inline void process_I_CMPNEI_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) != ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPNEI_int_offset
*/
static inline void process_I_CMPNEI_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) != ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPNEI_offset_int
*/
static inline void process_I_CMPNEI_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) != ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPNEI_offset_offset
*/
static inline void process_I_CMPNEI_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) != ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPNEI_offset_int_int
*/
static inline void process_I_CMPNEI_offset_int_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) != ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPNEI_offset_int_offset
*/
static inline void process_I_CMPNEI_offset_int_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) != ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPNEI_offset_offset_int
*/
static inline void process_I_CMPNEI_offset_offset_intinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) != ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPNEI_offset_offset_offset
*/
static inline void process_I_CMPNEI_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_INT(instr->second) && ZVAL_IS_INT(instr->third)) {
        ZVAL_SET_INT(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_INT(instr->first) - 1), ZVAL_GET_INT(instr->second) != ZVAL_GET_INT(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPNED_double_double
*/
static inline void process_I_CMPNED_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) != ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPNED_double_offset
*/
static inline void process_I_CMPNED_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) != ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPNED_offset_double
*/
static inline void process_I_CMPNED_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) != ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPNED_offset_offset
*/
static inline void process_I_CMPNED_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) != ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPNED_offset_double_double
*/
static inline void process_I_CMPNED_offset_double_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) != ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPNED_offset_double_offset
*/
static inline void process_I_CMPNED_offset_double_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) != ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPNED_offset_offset_double
*/
static inline void process_I_CMPNED_offset_offset_doubleinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) != ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/
/*
Generated I_CMPNED_offset_offset_offset
*/
static inline void process_I_CMPNED_offset_offset_offsetinstr(struct __stack_t *stack, instruction_t *instr, const int offset)
{
    if (ZVAL_IS_DOUBLE(instr->second) && ZVAL_IS_DOUBLE(instr->third)) {
        ZVAL_SET_DOUBLE(&kv_A(stack->data, stack->base_pointer + ZVAL_GET_DOUBLE(instr->first) - 1), ZVAL_GET_DOUBLE(instr->second) != ZVAL_GET_DOUBLE(instr->third));
	}else
		return;	
}
/********************************************************************************/