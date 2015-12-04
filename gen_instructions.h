
/*
Generated ADDI_int
*/
INSTR_T create_ADDI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated ADDI_int_int
*/
INSTR_T create_ADDI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated ADDI_int_offset
*/
INSTR_T create_ADDI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated ADDI_offset_int
*/
INSTR_T create_ADDI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated ADDI_offset
*/
INSTR_T create_ADDI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated ADDD_double
*/
INSTR_T create_ADDD_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated ADDD_double_double
*/
INSTR_T create_ADDD_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated ADDD_double_offset
*/
INSTR_T create_ADDD_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated ADDD_offset_double
*/
INSTR_T create_ADDD_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated ADDD_offset
*/
INSTR_T create_ADDD_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = ADDD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated SUBI_int
*/
INSTR_T create_SUBI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated SUBI_int_int
*/
INSTR_T create_SUBI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated SUBI_int_offset
*/
INSTR_T create_SUBI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated SUBI_offset_int
*/
INSTR_T create_SUBI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated SUBI_offset
*/
INSTR_T create_SUBI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated SUBD_double
*/
INSTR_T create_SUBD_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated SUBD_double_double
*/
INSTR_T create_SUBD_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated SUBD_double_offset
*/
INSTR_T create_SUBD_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated SUBD_offset_double
*/
INSTR_T create_SUBD_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated SUBD_offset
*/
INSTR_T create_SUBD_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = SUBD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated MULI_int
*/
INSTR_T create_MULI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated MULI_int_int
*/
INSTR_T create_MULI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated MULI_int_offset
*/
INSTR_T create_MULI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated MULI_offset_int
*/
INSTR_T create_MULI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated MULI_offset
*/
INSTR_T create_MULI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated MULD_double
*/
INSTR_T create_MULD_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated MULD_double_double
*/
INSTR_T create_MULD_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated MULD_double_offset
*/
INSTR_T create_MULD_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated MULD_offset_double
*/
INSTR_T create_MULD_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated MULD_offset
*/
INSTR_T create_MULD_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = MULD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated DIVI_int
*/
INSTR_T create_DIVI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated DIVI_int_int
*/
INSTR_T create_DIVI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated DIVI_int_offset
*/
INSTR_T create_DIVI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated DIVI_offset_int
*/
INSTR_T create_DIVI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated DIVI_offset
*/
INSTR_T create_DIVI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated DIVD_double
*/
INSTR_T create_DIVD_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated DIVD_double_double
*/
INSTR_T create_DIVD_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated DIVD_double_offset
*/
INSTR_T create_DIVD_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated DIVD_offset_double
*/
INSTR_T create_DIVD_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated DIVD_offset
*/
INSTR_T create_DIVD_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = DIVD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLI_int
*/
INSTR_T create_CMPLI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLI_int_int
*/
INSTR_T create_CMPLI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLI_int_offset
*/
INSTR_T create_CMPLI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLI_offset_int
*/
INSTR_T create_CMPLI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLI_offset
*/
INSTR_T create_CMPLI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLD_double
*/
INSTR_T create_CMPLD_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLD_double_double
*/
INSTR_T create_CMPLD_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLD_double_offset
*/
INSTR_T create_CMPLD_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLD_offset_double
*/
INSTR_T create_CMPLD_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLD_offset
*/
INSTR_T create_CMPLD_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMI_int
*/
INSTR_T create_CMPMI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMI_int_int
*/
INSTR_T create_CMPMI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMI_int_offset
*/
INSTR_T create_CMPMI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMI_offset_int
*/
INSTR_T create_CMPMI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMI_offset
*/
INSTR_T create_CMPMI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMD_double
*/
INSTR_T create_CMPMD_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMD_double_double
*/
INSTR_T create_CMPMD_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMD_double_offset
*/
INSTR_T create_CMPMD_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMD_offset_double
*/
INSTR_T create_CMPMD_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMD_offset
*/
INSTR_T create_CMPMD_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMD;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLEI_int
*/
INSTR_T create_CMPLEI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLEI_int_int
*/
INSTR_T create_CMPLEI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLEI_int_offset
*/
INSTR_T create_CMPLEI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLEI_offset_int
*/
INSTR_T create_CMPLEI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLEI_offset
*/
INSTR_T create_CMPLEI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLED_double
*/
INSTR_T create_CMPLED_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLED_double_double
*/
INSTR_T create_CMPLED_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLED_double_offset
*/
INSTR_T create_CMPLED_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLED_offset_double
*/
INSTR_T create_CMPLED_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLED_offset
*/
INSTR_T create_CMPLED_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPLED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMEI_int
*/
INSTR_T create_CMPMEI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMEI_int_int
*/
INSTR_T create_CMPMEI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMEI_int_offset
*/
INSTR_T create_CMPMEI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMEI_offset_int
*/
INSTR_T create_CMPMEI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMEI_offset
*/
INSTR_T create_CMPMEI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMED_double
*/
INSTR_T create_CMPMED_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMED_double_double
*/
INSTR_T create_CMPMED_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMED_double_offset
*/
INSTR_T create_CMPMED_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMED_offset_double
*/
INSTR_T create_CMPMED_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMED_offset
*/
INSTR_T create_CMPMED_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPMED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPEI_int
*/
INSTR_T create_CMPEI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPEI_int_int
*/
INSTR_T create_CMPEI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPEI_int_offset
*/
INSTR_T create_CMPEI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPEI_offset_int
*/
INSTR_T create_CMPEI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPEI_offset
*/
INSTR_T create_CMPEI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPED_double
*/
INSTR_T create_CMPED_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPED_double_double
*/
INSTR_T create_CMPED_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPED_double_offset
*/
INSTR_T create_CMPED_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPED_offset_double
*/
INSTR_T create_CMPED_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPED_offset
*/
INSTR_T create_CMPED_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPNEI_int
*/
INSTR_T create_CMPNEI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPNEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPNEI_int_int
*/
INSTR_T create_CMPNEI_int_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPNEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPNEI_int_offset
*/
INSTR_T create_CMPNEI_int_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPNEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPNEI_offset_int
*/
INSTR_T create_CMPNEI_offset_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPNEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPNEI_offset
*/
INSTR_T create_CMPNEI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPNEI;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPNED_double
*/
INSTR_T create_CMPNED_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPNED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPNED_double_double
*/
INSTR_T create_CMPNED_double_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPNED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPNED_double_offset
*/
INSTR_T create_CMPNED_double_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPNED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPNED_offset_double
*/
INSTR_T create_CMPNED_offset_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPNED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPNED_offset
*/
INSTR_T create_CMPNED_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = CMPNED;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/