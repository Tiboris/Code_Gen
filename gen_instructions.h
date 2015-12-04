/**
 * Copyright (c) 2015, Team Unknown,
 *                     Ján Mochňak,    <xmochn00@vutbr.cz>
 *                     Tibor Dudlák,   <xdudla00@vutbr.cz>
 *                     Dávid Prexta,   <xprext00@vutbr.cz>
 *                     Martin Krajňák, <xkrajn02@vutbr.cz>
 *                     Patrik Segedy,  <xseged00@vutbr.cz>
 * All rights reserved.
 *
 * This source code is licensed under the MIT license found in the
 * license.txt file in the root directory of this source tree.
 */

#ifndef GEN_INSTRUCTION_H
#define GEN_INSTRUCTIONS_H

#include <stdlib.h>
#include <string.h>
#include "klist.h"
#include "zval.h"
#include "expression.h"
#include "kvec.h"


/*
Generated ADDI_int
*/
INSTR_T create_I_ADDI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDI_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated ADDI_int_int
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
Generated ADDI_int_offset
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
Generated ADDI_offset_int
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
Generated ADDI_offset
*/
INSTR_T create_I_ADDI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDI_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated ADDD_double
*/
INSTR_T create_I_ADDD_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDD_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated ADDD_double_double
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
Generated ADDD_double_offset
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
Generated ADDD_offset_double
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
Generated ADDD_offset
*/
INSTR_T create_I_ADDD_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_ADDD_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated SUBI_int
*/
INSTR_T create_I_SUBI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBI_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated SUBI_int_int
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
Generated SUBI_int_offset
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
Generated SUBI_offset_int
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
Generated SUBI_offset
*/
INSTR_T create_I_SUBI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBI_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated SUBD_double
*/
INSTR_T create_I_SUBD_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBD_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated SUBD_double_double
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
Generated SUBD_double_offset
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
Generated SUBD_offset_double
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
Generated SUBD_offset
*/
INSTR_T create_I_SUBD_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_SUBD_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated MULI_int
*/
INSTR_T create_I_MULI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULI_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated MULI_int_int
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
Generated MULI_int_offset
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
Generated MULI_offset_int
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
Generated MULI_offset
*/
INSTR_T create_I_MULI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULI_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated MULD_double
*/
INSTR_T create_I_MULD_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULD_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated MULD_double_double
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
Generated MULD_double_offset
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
Generated MULD_offset_double
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
Generated MULD_offset
*/
INSTR_T create_I_MULD_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_MULD_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated DIVI_int
*/
INSTR_T create_I_DIVI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVI_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated DIVI_int_int
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
Generated DIVI_int_offset
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
Generated DIVI_offset_int
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
Generated DIVI_offset
*/
INSTR_T create_I_DIVI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVI_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated DIVD_double
*/
INSTR_T create_I_DIVD_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVD_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated DIVD_double_double
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
Generated DIVD_double_offset
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
Generated DIVD_offset_double
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
Generated DIVD_offset
*/
INSTR_T create_I_DIVD_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_DIVD_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLI_int
*/
INSTR_T create_I_CMPLI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLI_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLI_int_int
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
Generated CMPLI_int_offset
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
Generated CMPLI_offset_int
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
Generated CMPLI_offset
*/
INSTR_T create_I_CMPLI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLI_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLD_double
*/
INSTR_T create_I_CMPLD_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLD_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLD_double_double
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
Generated CMPLD_double_offset
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
Generated CMPLD_offset_double
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
Generated CMPLD_offset
*/
INSTR_T create_I_CMPLD_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLD_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMI_int
*/
INSTR_T create_I_CMPMI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMI_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMI_int_int
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
Generated CMPMI_int_offset
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
Generated CMPMI_offset_int
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
Generated CMPMI_offset
*/
INSTR_T create_I_CMPMI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMI_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMD_double
*/
INSTR_T create_I_CMPMD_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMD_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMD_double_double
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
Generated CMPMD_double_offset
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
Generated CMPMD_offset_double
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
Generated CMPMD_offset
*/
INSTR_T create_I_CMPMD_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMD_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLEI_int
*/
INSTR_T create_I_CMPLEI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLEI_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLEI_int_int
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
Generated CMPLEI_int_offset
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
Generated CMPLEI_offset_int
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
Generated CMPLEI_offset
*/
INSTR_T create_I_CMPLEI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLEI_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLED_double
*/
INSTR_T create_I_CMPLED_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLED_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPLED_double_double
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
Generated CMPLED_double_offset
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
Generated CMPLED_offset_double
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
Generated CMPLED_offset
*/
INSTR_T create_I_CMPLED_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPLED_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMEI_int
*/
INSTR_T create_I_CMPMEI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMEI_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMEI_int_int
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
Generated CMPMEI_int_offset
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
Generated CMPMEI_offset_int
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
Generated CMPMEI_offset
*/
INSTR_T create_I_CMPMEI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMEI_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMED_double
*/
INSTR_T create_I_CMPMED_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMED_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPMED_double_double
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
Generated CMPMED_double_offset
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
Generated CMPMED_offset_double
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
Generated CMPMED_offset
*/
INSTR_T create_I_CMPMED_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPMED_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPEI_int
*/
INSTR_T create_I_CMPEI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPEI_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPEI_int_int
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
Generated CMPEI_int_offset
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
Generated CMPEI_offset_int
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
Generated CMPEI_offset
*/
INSTR_T create_I_CMPEI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPEI_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPED_double
*/
INSTR_T create_I_CMPED_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPED_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPED_double_double
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
Generated CMPED_double_offset
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
Generated CMPED_offset_double
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
Generated CMPED_offset
*/
INSTR_T create_I_CMPED_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPED_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPNEI_int
*/
INSTR_T create_I_CMPNEI_int_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNEI_int;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPNEI_int_int
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
Generated CMPNEI_int_offset
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
Generated CMPNEI_offset_int
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
Generated CMPNEI_offset
*/
INSTR_T create_I_CMPNEI_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNEI_offset;
    ZVAL_INIT_INT(i->first, a);
    ZVAL_INIT_INT(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPNED_double
*/
INSTR_T create_I_CMPNED_double_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNED_double;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
/*
Generated CMPNED_double_double
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
Generated CMPNED_double_offset
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
Generated CMPNED_offset_double
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
Generated CMPNED_offset
*/
INSTR_T create_I_CMPNED_offset_instr(const int a, const int b) {
    instruction_t *i = calloc(1, sizeof(instruction_t));

    i->type = I_CMPNED_offset;
    ZVAL_INIT_DOUBLE(i->first, a);
    ZVAL_INIT_DOUBLE(i->second, b);

    return i;
}
/********************************************************************************/
#endif // GEN_INSTRUCTIONS_H
