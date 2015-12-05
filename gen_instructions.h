
/*
Generated I_ADDI_int_int
*/
INSTR_T create_I_ADDI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDI_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_ADDI_int_offset
*/
INSTR_T create_I_ADDI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDI_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_ADDI_offset_int
*/
INSTR_T create_I_ADDI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDI_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_ADDI_offset_offset
*/
INSTR_T create_I_ADDI_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDI_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_ADDI_offset_int_int
*/
INSTR_T create_I_ADDI_offset_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDI_offset_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_ADDI_offset_int_offset
*/
INSTR_T create_I_ADDI_offset_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDI_offset_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_ADDI_offset_offset_int
*/
INSTR_T create_I_ADDI_offset_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDI_offset_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_ADDI_offset_offset_offset
*/
INSTR_T create_I_ADDI_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDI_offset_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_ADDD_double_double
*/
INSTR_T create_I_ADDD_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDD_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_ADDD_double_offset
*/
INSTR_T create_I_ADDD_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDD_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_ADDD_offset_double
*/
INSTR_T create_I_ADDD_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDD_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_ADDD_offset_offset
*/
INSTR_T create_I_ADDD_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDD_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_ADDD_offset_double_double
*/
INSTR_T create_I_ADDD_offset_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDD_offset_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_ADDD_offset_double_offset
*/
INSTR_T create_I_ADDD_offset_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDD_offset_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_ADDD_offset_offset_double
*/
INSTR_T create_I_ADDD_offset_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDD_offset_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_ADDD_offset_offset_offset
*/
INSTR_T create_I_ADDD_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDD_offset_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_SUBI_int_int
*/
INSTR_T create_I_SUBI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBI_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_SUBI_int_offset
*/
INSTR_T create_I_SUBI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBI_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_SUBI_offset_int
*/
INSTR_T create_I_SUBI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBI_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_SUBI_offset_offset
*/
INSTR_T create_I_SUBI_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBI_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_SUBI_offset_int_int
*/
INSTR_T create_I_SUBI_offset_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBI_offset_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_SUBI_offset_int_offset
*/
INSTR_T create_I_SUBI_offset_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBI_offset_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_SUBI_offset_offset_int
*/
INSTR_T create_I_SUBI_offset_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBI_offset_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_SUBI_offset_offset_offset
*/
INSTR_T create_I_SUBI_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBI_offset_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_SUBD_double_double
*/
INSTR_T create_I_SUBD_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBD_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_SUBD_double_offset
*/
INSTR_T create_I_SUBD_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBD_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_SUBD_offset_double
*/
INSTR_T create_I_SUBD_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBD_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_SUBD_offset_offset
*/
INSTR_T create_I_SUBD_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBD_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_SUBD_offset_double_double
*/
INSTR_T create_I_SUBD_offset_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBD_offset_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_SUBD_offset_double_offset
*/
INSTR_T create_I_SUBD_offset_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBD_offset_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_SUBD_offset_offset_double
*/
INSTR_T create_I_SUBD_offset_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBD_offset_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_SUBD_offset_offset_offset
*/
INSTR_T create_I_SUBD_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBD_offset_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_MULI_int_int
*/
INSTR_T create_I_MULI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULI_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_MULI_int_offset
*/
INSTR_T create_I_MULI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULI_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_MULI_offset_int
*/
INSTR_T create_I_MULI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULI_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_MULI_offset_offset
*/
INSTR_T create_I_MULI_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULI_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_MULI_offset_int_int
*/
INSTR_T create_I_MULI_offset_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULI_offset_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_MULI_offset_int_offset
*/
INSTR_T create_I_MULI_offset_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULI_offset_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_MULI_offset_offset_int
*/
INSTR_T create_I_MULI_offset_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULI_offset_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_MULI_offset_offset_offset
*/
INSTR_T create_I_MULI_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULI_offset_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_MULD_double_double
*/
INSTR_T create_I_MULD_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULD_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_MULD_double_offset
*/
INSTR_T create_I_MULD_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULD_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_MULD_offset_double
*/
INSTR_T create_I_MULD_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULD_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_MULD_offset_offset
*/
INSTR_T create_I_MULD_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULD_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_MULD_offset_double_double
*/
INSTR_T create_I_MULD_offset_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULD_offset_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_MULD_offset_double_offset
*/
INSTR_T create_I_MULD_offset_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULD_offset_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_MULD_offset_offset_double
*/
INSTR_T create_I_MULD_offset_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULD_offset_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_MULD_offset_offset_offset
*/
INSTR_T create_I_MULD_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULD_offset_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_DIVI_int_int
*/
INSTR_T create_I_DIVI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVI_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_DIVI_int_offset
*/
INSTR_T create_I_DIVI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVI_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_DIVI_offset_int
*/
INSTR_T create_I_DIVI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVI_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_DIVI_offset_offset
*/
INSTR_T create_I_DIVI_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVI_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_DIVI_offset_int_int
*/
INSTR_T create_I_DIVI_offset_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVI_offset_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_DIVI_offset_int_offset
*/
INSTR_T create_I_DIVI_offset_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVI_offset_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_DIVI_offset_offset_int
*/
INSTR_T create_I_DIVI_offset_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVI_offset_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_DIVI_offset_offset_offset
*/
INSTR_T create_I_DIVI_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVI_offset_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_DIVD_double_double
*/
INSTR_T create_I_DIVD_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVD_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_DIVD_double_offset
*/
INSTR_T create_I_DIVD_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVD_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_DIVD_offset_double
*/
INSTR_T create_I_DIVD_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVD_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_DIVD_offset_offset
*/
INSTR_T create_I_DIVD_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVD_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_DIVD_offset_double_double
*/
INSTR_T create_I_DIVD_offset_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVD_offset_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_DIVD_offset_double_offset
*/
INSTR_T create_I_DIVD_offset_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVD_offset_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_DIVD_offset_offset_double
*/
INSTR_T create_I_DIVD_offset_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVD_offset_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_DIVD_offset_offset_offset
*/
INSTR_T create_I_DIVD_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVD_offset_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLI_int_int
*/
INSTR_T create_I_CMPLI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLI_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLI_int_offset
*/
INSTR_T create_I_CMPLI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLI_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLI_offset_int
*/
INSTR_T create_I_CMPLI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLI_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLI_offset_offset
*/
INSTR_T create_I_CMPLI_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLI_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLI_offset_int_int
*/
INSTR_T create_I_CMPLI_offset_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLI_offset_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLI_offset_int_offset
*/
INSTR_T create_I_CMPLI_offset_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLI_offset_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLI_offset_offset_int
*/
INSTR_T create_I_CMPLI_offset_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLI_offset_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLI_offset_offset_offset
*/
INSTR_T create_I_CMPLI_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLI_offset_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLD_double_double
*/
INSTR_T create_I_CMPLD_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLD_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLD_double_offset
*/
INSTR_T create_I_CMPLD_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLD_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLD_offset_double
*/
INSTR_T create_I_CMPLD_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLD_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLD_offset_offset
*/
INSTR_T create_I_CMPLD_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLD_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLD_offset_double_double
*/
INSTR_T create_I_CMPLD_offset_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLD_offset_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLD_offset_double_offset
*/
INSTR_T create_I_CMPLD_offset_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLD_offset_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLD_offset_offset_double
*/
INSTR_T create_I_CMPLD_offset_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLD_offset_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLD_offset_offset_offset
*/
INSTR_T create_I_CMPLD_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLD_offset_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMI_int_int
*/
INSTR_T create_I_CMPMI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMI_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMI_int_offset
*/
INSTR_T create_I_CMPMI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMI_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMI_offset_int
*/
INSTR_T create_I_CMPMI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMI_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMI_offset_offset
*/
INSTR_T create_I_CMPMI_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMI_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMI_offset_int_int
*/
INSTR_T create_I_CMPMI_offset_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMI_offset_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMI_offset_int_offset
*/
INSTR_T create_I_CMPMI_offset_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMI_offset_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMI_offset_offset_int
*/
INSTR_T create_I_CMPMI_offset_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMI_offset_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMI_offset_offset_offset
*/
INSTR_T create_I_CMPMI_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMI_offset_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMD_double_double
*/
INSTR_T create_I_CMPMD_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMD_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMD_double_offset
*/
INSTR_T create_I_CMPMD_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMD_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMD_offset_double
*/
INSTR_T create_I_CMPMD_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMD_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMD_offset_offset
*/
INSTR_T create_I_CMPMD_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMD_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMD_offset_double_double
*/
INSTR_T create_I_CMPMD_offset_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMD_offset_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMD_offset_double_offset
*/
INSTR_T create_I_CMPMD_offset_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMD_offset_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMD_offset_offset_double
*/
INSTR_T create_I_CMPMD_offset_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMD_offset_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMD_offset_offset_offset
*/
INSTR_T create_I_CMPMD_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMD_offset_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLEI_int_int
*/
INSTR_T create_I_CMPLEI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLEI_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLEI_int_offset
*/
INSTR_T create_I_CMPLEI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLEI_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLEI_offset_int
*/
INSTR_T create_I_CMPLEI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLEI_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLEI_offset_offset
*/
INSTR_T create_I_CMPLEI_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLEI_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLEI_offset_int_int
*/
INSTR_T create_I_CMPLEI_offset_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLEI_offset_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLEI_offset_int_offset
*/
INSTR_T create_I_CMPLEI_offset_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLEI_offset_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLEI_offset_offset_int
*/
INSTR_T create_I_CMPLEI_offset_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLEI_offset_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLEI_offset_offset_offset
*/
INSTR_T create_I_CMPLEI_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLEI_offset_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLED_double_double
*/
INSTR_T create_I_CMPLED_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLED_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLED_double_offset
*/
INSTR_T create_I_CMPLED_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLED_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLED_offset_double
*/
INSTR_T create_I_CMPLED_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLED_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLED_offset_offset
*/
INSTR_T create_I_CMPLED_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLED_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLED_offset_double_double
*/
INSTR_T create_I_CMPLED_offset_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLED_offset_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLED_offset_double_offset
*/
INSTR_T create_I_CMPLED_offset_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLED_offset_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLED_offset_offset_double
*/
INSTR_T create_I_CMPLED_offset_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLED_offset_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPLED_offset_offset_offset
*/
INSTR_T create_I_CMPLED_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLED_offset_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMEI_int_int
*/
INSTR_T create_I_CMPMEI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMEI_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMEI_int_offset
*/
INSTR_T create_I_CMPMEI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMEI_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMEI_offset_int
*/
INSTR_T create_I_CMPMEI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMEI_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMEI_offset_offset
*/
INSTR_T create_I_CMPMEI_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMEI_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMEI_offset_int_int
*/
INSTR_T create_I_CMPMEI_offset_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMEI_offset_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMEI_offset_int_offset
*/
INSTR_T create_I_CMPMEI_offset_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMEI_offset_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMEI_offset_offset_int
*/
INSTR_T create_I_CMPMEI_offset_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMEI_offset_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMEI_offset_offset_offset
*/
INSTR_T create_I_CMPMEI_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMEI_offset_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMED_double_double
*/
INSTR_T create_I_CMPMED_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMED_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMED_double_offset
*/
INSTR_T create_I_CMPMED_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMED_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMED_offset_double
*/
INSTR_T create_I_CMPMED_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMED_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMED_offset_offset
*/
INSTR_T create_I_CMPMED_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMED_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMED_offset_double_double
*/
INSTR_T create_I_CMPMED_offset_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMED_offset_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMED_offset_double_offset
*/
INSTR_T create_I_CMPMED_offset_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMED_offset_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMED_offset_offset_double
*/
INSTR_T create_I_CMPMED_offset_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMED_offset_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPMED_offset_offset_offset
*/
INSTR_T create_I_CMPMED_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMED_offset_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPEI_int_int
*/
INSTR_T create_I_CMPEI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPEI_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPEI_int_offset
*/
INSTR_T create_I_CMPEI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPEI_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPEI_offset_int
*/
INSTR_T create_I_CMPEI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPEI_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPEI_offset_offset
*/
INSTR_T create_I_CMPEI_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPEI_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPEI_offset_int_int
*/
INSTR_T create_I_CMPEI_offset_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPEI_offset_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPEI_offset_int_offset
*/
INSTR_T create_I_CMPEI_offset_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPEI_offset_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPEI_offset_offset_int
*/
INSTR_T create_I_CMPEI_offset_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPEI_offset_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPEI_offset_offset_offset
*/
INSTR_T create_I_CMPEI_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPEI_offset_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPED_double_double
*/
INSTR_T create_I_CMPED_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPED_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPED_double_offset
*/
INSTR_T create_I_CMPED_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPED_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPED_offset_double
*/
INSTR_T create_I_CMPED_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPED_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPED_offset_offset
*/
INSTR_T create_I_CMPED_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPED_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPED_offset_double_double
*/
INSTR_T create_I_CMPED_offset_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPED_offset_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPED_offset_double_offset
*/
INSTR_T create_I_CMPED_offset_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPED_offset_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPED_offset_offset_double
*/
INSTR_T create_I_CMPED_offset_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPED_offset_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPED_offset_offset_offset
*/
INSTR_T create_I_CMPED_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPED_offset_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPNEI_int_int
*/
INSTR_T create_I_CMPNEI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNEI_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPNEI_int_offset
*/
INSTR_T create_I_CMPNEI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNEI_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPNEI_offset_int
*/
INSTR_T create_I_CMPNEI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNEI_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPNEI_offset_offset
*/
INSTR_T create_I_CMPNEI_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNEI_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPNEI_offset_int_int
*/
INSTR_T create_I_CMPNEI_offset_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNEI_offset_int_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPNEI_offset_int_offset
*/
INSTR_T create_I_CMPNEI_offset_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNEI_offset_int_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPNEI_offset_offset_int
*/
INSTR_T create_I_CMPNEI_offset_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNEI_offset_offset_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPNEI_offset_offset_offset
*/
INSTR_T create_I_CMPNEI_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNEI_offset_offset_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPNED_double_double
*/
INSTR_T create_I_CMPNED_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNED_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPNED_double_offset
*/
INSTR_T create_I_CMPNED_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNED_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPNED_offset_double
*/
INSTR_T create_I_CMPNED_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNED_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPNED_offset_offset
*/
INSTR_T create_I_CMPNED_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNED_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPNED_offset_double_double
*/
INSTR_T create_I_CMPNED_offset_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNED_offset_double_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPNED_offset_double_offset
*/
INSTR_T create_I_CMPNED_offset_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNED_offset_double_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPNED_offset_offset_double
*/
INSTR_T create_I_CMPNED_offset_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNED_offset_offset_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated I_CMPNED_offset_offset_offset
*/
INSTR_T create_I_CMPNED_offset_offset_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNED_offset_offset_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/