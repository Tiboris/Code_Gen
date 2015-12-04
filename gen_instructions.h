/*
Generated ADDI_
*/
INSTR_T create_ADDI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated ADDI_
*/
INSTR_T create_ADDI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated ADDI_
*/
INSTR_T create_ADDI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated ADDI_
*/
INSTR_T create_ADDI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated ADDI_
*/
INSTR_T create_ADDI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated ADDD_
*/
INSTR_T create_ADDD_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated ADDD_
*/
INSTR_T create_ADDD_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated ADDD_
*/
INSTR_T create_ADDD_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated ADDD_
*/
INSTR_T create_ADDD_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated ADDD_
*/
INSTR_T create_ADDD_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated SUBI_
*/
INSTR_T create_SUBI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated SUBI_
*/
INSTR_T create_SUBI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated SUBI_
*/
INSTR_T create_SUBI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated SUBI_
*/
INSTR_T create_SUBI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated SUBI_
*/
INSTR_T create_SUBI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated SUBD_
*/
INSTR_T create_SUBD_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated SUBD_
*/
INSTR_T create_SUBD_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated SUBD_
*/
INSTR_T create_SUBD_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated SUBD_
*/
INSTR_T create_SUBD_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated SUBD_
*/
INSTR_T create_SUBD_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated MULI_
*/
INSTR_T create_MULI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated MULI_
*/
INSTR_T create_MULI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated MULI_
*/
INSTR_T create_MULI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated MULI_
*/
INSTR_T create_MULI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated MULI_
*/
INSTR_T create_MULI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated MULD_
*/
INSTR_T create_MULD_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated MULD_
*/
INSTR_T create_MULD_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated MULD_
*/
INSTR_T create_MULD_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated MULD_
*/
INSTR_T create_MULD_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated MULD_
*/
INSTR_T create_MULD_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated DIVI_
*/
INSTR_T create_DIVI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated DIVI_
*/
INSTR_T create_DIVI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated DIVI_
*/
INSTR_T create_DIVI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated DIVI_
*/
INSTR_T create_DIVI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated DIVI_
*/
INSTR_T create_DIVI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/**//*
Generated DIVD_
*/
INSTR_T create_DIVD_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated DIVD_
*/
INSTR_T create_DIVD_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated DIVD_
*/
INSTR_T create_DIVD_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated DIVD_
*/
INSTR_T create_DIVD_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**//*
Generated DIVD_
*/
INSTR_T create_DIVD_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/**/