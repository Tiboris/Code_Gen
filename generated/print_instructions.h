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

#ifndef _PRINT_INSTR_H_
#define _PRINT_INSTR_H_

#include <stdio.h>
#include "instruction.h"

/*
Generated print_I_ADDI_int_int
*/
static inline void print_I_ADDI_int_int_instr(instruction_t *instr) {
    printf("I_ADDI_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_ADDI_int_offset
*/
static inline void print_I_ADDI_int_offset_instr(instruction_t *instr) {
    printf("I_ADDI_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_ADDI_offset_int
*/
static inline void print_I_ADDI_offset_int_instr(instruction_t *instr) {
    printf("I_ADDI_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_ADDI_offset_offset
*/
static inline void print_I_ADDI_offset_offset_instr(instruction_t *instr) {
    printf("I_ADDI_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_ADDI_offset_int_int
*/
static inline void print_I_ADDI_offset_int_int_instr(instruction_t *instr) {
    printf("I_ADDI_offset_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_ADDI_offset_int_offset
*/
static inline void print_I_ADDI_offset_int_offset_instr(instruction_t *instr) {
    printf("I_ADDI_offset_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_ADDI_offset_offset_int
*/
static inline void print_I_ADDI_offset_offset_int_instr(instruction_t *instr) {
    printf("I_ADDI_offset_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_ADDI_offset_offset_offset
*/
static inline void print_I_ADDI_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_ADDI_offset_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_ADDD_double_double
*/
static inline void print_I_ADDD_double_double_instr(instruction_t *instr) {
    printf("I_ADDD_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_ADDD_double_offset
*/
static inline void print_I_ADDD_double_offset_instr(instruction_t *instr) {
    printf("I_ADDD_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_ADDD_offset_double
*/
static inline void print_I_ADDD_offset_double_instr(instruction_t *instr) {
    printf("I_ADDD_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_ADDD_offset_offset
*/
static inline void print_I_ADDD_offset_offset_instr(instruction_t *instr) {
    printf("I_ADDD_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_ADDD_offset_double_double
*/
static inline void print_I_ADDD_offset_double_double_instr(instruction_t *instr) {
    printf("I_ADDD_offset_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_ADDD_offset_double_offset
*/
static inline void print_I_ADDD_offset_double_offset_instr(instruction_t *instr) {
    printf("I_ADDD_offset_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_ADDD_offset_offset_double
*/
static inline void print_I_ADDD_offset_offset_double_instr(instruction_t *instr) {
    printf("I_ADDD_offset_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_ADDD_offset_offset_offset
*/
static inline void print_I_ADDD_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_ADDD_offset_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_SUBI_int_int
*/
static inline void print_I_SUBI_int_int_instr(instruction_t *instr) {
    printf("I_SUBI_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_SUBI_int_offset
*/
static inline void print_I_SUBI_int_offset_instr(instruction_t *instr) {
    printf("I_SUBI_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_SUBI_offset_int
*/
static inline void print_I_SUBI_offset_int_instr(instruction_t *instr) {
    printf("I_SUBI_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_SUBI_offset_offset
*/
static inline void print_I_SUBI_offset_offset_instr(instruction_t *instr) {
    printf("I_SUBI_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_SUBI_offset_int_int
*/
static inline void print_I_SUBI_offset_int_int_instr(instruction_t *instr) {
    printf("I_SUBI_offset_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_SUBI_offset_int_offset
*/
static inline void print_I_SUBI_offset_int_offset_instr(instruction_t *instr) {
    printf("I_SUBI_offset_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_SUBI_offset_offset_int
*/
static inline void print_I_SUBI_offset_offset_int_instr(instruction_t *instr) {
    printf("I_SUBI_offset_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_SUBI_offset_offset_offset
*/
static inline void print_I_SUBI_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_SUBI_offset_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_SUBD_double_double
*/
static inline void print_I_SUBD_double_double_instr(instruction_t *instr) {
    printf("I_SUBD_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_SUBD_double_offset
*/
static inline void print_I_SUBD_double_offset_instr(instruction_t *instr) {
    printf("I_SUBD_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_SUBD_offset_double
*/
static inline void print_I_SUBD_offset_double_instr(instruction_t *instr) {
    printf("I_SUBD_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_SUBD_offset_offset
*/
static inline void print_I_SUBD_offset_offset_instr(instruction_t *instr) {
    printf("I_SUBD_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_SUBD_offset_double_double
*/
static inline void print_I_SUBD_offset_double_double_instr(instruction_t *instr) {
    printf("I_SUBD_offset_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_SUBD_offset_double_offset
*/
static inline void print_I_SUBD_offset_double_offset_instr(instruction_t *instr) {
    printf("I_SUBD_offset_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_SUBD_offset_offset_double
*/
static inline void print_I_SUBD_offset_offset_double_instr(instruction_t *instr) {
    printf("I_SUBD_offset_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_SUBD_offset_offset_offset
*/
static inline void print_I_SUBD_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_SUBD_offset_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_MULI_int_int
*/
static inline void print_I_MULI_int_int_instr(instruction_t *instr) {
    printf("I_MULI_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_MULI_int_offset
*/
static inline void print_I_MULI_int_offset_instr(instruction_t *instr) {
    printf("I_MULI_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_MULI_offset_int
*/
static inline void print_I_MULI_offset_int_instr(instruction_t *instr) {
    printf("I_MULI_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_MULI_offset_offset
*/
static inline void print_I_MULI_offset_offset_instr(instruction_t *instr) {
    printf("I_MULI_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_MULI_offset_int_int
*/
static inline void print_I_MULI_offset_int_int_instr(instruction_t *instr) {
    printf("I_MULI_offset_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_MULI_offset_int_offset
*/
static inline void print_I_MULI_offset_int_offset_instr(instruction_t *instr) {
    printf("I_MULI_offset_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_MULI_offset_offset_int
*/
static inline void print_I_MULI_offset_offset_int_instr(instruction_t *instr) {
    printf("I_MULI_offset_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_MULI_offset_offset_offset
*/
static inline void print_I_MULI_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_MULI_offset_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_MULD_double_double
*/
static inline void print_I_MULD_double_double_instr(instruction_t *instr) {
    printf("I_MULD_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_MULD_double_offset
*/
static inline void print_I_MULD_double_offset_instr(instruction_t *instr) {
    printf("I_MULD_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_MULD_offset_double
*/
static inline void print_I_MULD_offset_double_instr(instruction_t *instr) {
    printf("I_MULD_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_MULD_offset_offset
*/
static inline void print_I_MULD_offset_offset_instr(instruction_t *instr) {
    printf("I_MULD_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_MULD_offset_double_double
*/
static inline void print_I_MULD_offset_double_double_instr(instruction_t *instr) {
    printf("I_MULD_offset_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_MULD_offset_double_offset
*/
static inline void print_I_MULD_offset_double_offset_instr(instruction_t *instr) {
    printf("I_MULD_offset_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_MULD_offset_offset_double
*/
static inline void print_I_MULD_offset_offset_double_instr(instruction_t *instr) {
    printf("I_MULD_offset_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_MULD_offset_offset_offset
*/
static inline void print_I_MULD_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_MULD_offset_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_DIVI_int_int
*/
static inline void print_I_DIVI_int_int_instr(instruction_t *instr) {
    printf("I_DIVI_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_DIVI_int_offset
*/
static inline void print_I_DIVI_int_offset_instr(instruction_t *instr) {
    printf("I_DIVI_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_DIVI_offset_int
*/
static inline void print_I_DIVI_offset_int_instr(instruction_t *instr) {
    printf("I_DIVI_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_DIVI_offset_offset
*/
static inline void print_I_DIVI_offset_offset_instr(instruction_t *instr) {
    printf("I_DIVI_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_DIVI_offset_int_int
*/
static inline void print_I_DIVI_offset_int_int_instr(instruction_t *instr) {
    printf("I_DIVI_offset_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_DIVI_offset_int_offset
*/
static inline void print_I_DIVI_offset_int_offset_instr(instruction_t *instr) {
    printf("I_DIVI_offset_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_DIVI_offset_offset_int
*/
static inline void print_I_DIVI_offset_offset_int_instr(instruction_t *instr) {
    printf("I_DIVI_offset_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_DIVI_offset_offset_offset
*/
static inline void print_I_DIVI_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_DIVI_offset_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_DIVD_double_double
*/
static inline void print_I_DIVD_double_double_instr(instruction_t *instr) {
    printf("I_DIVD_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_DIVD_double_offset
*/
static inline void print_I_DIVD_double_offset_instr(instruction_t *instr) {
    printf("I_DIVD_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_DIVD_offset_double
*/
static inline void print_I_DIVD_offset_double_instr(instruction_t *instr) {
    printf("I_DIVD_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_DIVD_offset_offset
*/
static inline void print_I_DIVD_offset_offset_instr(instruction_t *instr) {
    printf("I_DIVD_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_DIVD_offset_double_double
*/
static inline void print_I_DIVD_offset_double_double_instr(instruction_t *instr) {
    printf("I_DIVD_offset_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_DIVD_offset_double_offset
*/
static inline void print_I_DIVD_offset_double_offset_instr(instruction_t *instr) {
    printf("I_DIVD_offset_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_DIVD_offset_offset_double
*/
static inline void print_I_DIVD_offset_offset_double_instr(instruction_t *instr) {
    printf("I_DIVD_offset_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_DIVD_offset_offset_offset
*/
static inline void print_I_DIVD_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_DIVD_offset_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPLI_int_int
*/
static inline void print_I_CMPLI_int_int_instr(instruction_t *instr) {
    printf("I_CMPLI_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPLI_int_offset
*/
static inline void print_I_CMPLI_int_offset_instr(instruction_t *instr) {
    printf("I_CMPLI_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPLI_offset_int
*/
static inline void print_I_CMPLI_offset_int_instr(instruction_t *instr) {
    printf("I_CMPLI_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPLI_offset_offset
*/
static inline void print_I_CMPLI_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPLI_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPLI_offset_int_int
*/
static inline void print_I_CMPLI_offset_int_int_instr(instruction_t *instr) {
    printf("I_CMPLI_offset_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPLI_offset_int_offset
*/
static inline void print_I_CMPLI_offset_int_offset_instr(instruction_t *instr) {
    printf("I_CMPLI_offset_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPLI_offset_offset_int
*/
static inline void print_I_CMPLI_offset_offset_int_instr(instruction_t *instr) {
    printf("I_CMPLI_offset_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPLI_offset_offset_offset
*/
static inline void print_I_CMPLI_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPLI_offset_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPLD_double_double
*/
static inline void print_I_CMPLD_double_double_instr(instruction_t *instr) {
    printf("I_CMPLD_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPLD_double_offset
*/
static inline void print_I_CMPLD_double_offset_instr(instruction_t *instr) {
    printf("I_CMPLD_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPLD_offset_double
*/
static inline void print_I_CMPLD_offset_double_instr(instruction_t *instr) {
    printf("I_CMPLD_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPLD_offset_offset
*/
static inline void print_I_CMPLD_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPLD_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPLD_offset_double_double
*/
static inline void print_I_CMPLD_offset_double_double_instr(instruction_t *instr) {
    printf("I_CMPLD_offset_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPLD_offset_double_offset
*/
static inline void print_I_CMPLD_offset_double_offset_instr(instruction_t *instr) {
    printf("I_CMPLD_offset_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPLD_offset_offset_double
*/
static inline void print_I_CMPLD_offset_offset_double_instr(instruction_t *instr) {
    printf("I_CMPLD_offset_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPLD_offset_offset_offset
*/
static inline void print_I_CMPLD_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPLD_offset_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPMI_int_int
*/
static inline void print_I_CMPMI_int_int_instr(instruction_t *instr) {
    printf("I_CMPMI_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPMI_int_offset
*/
static inline void print_I_CMPMI_int_offset_instr(instruction_t *instr) {
    printf("I_CMPMI_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPMI_offset_int
*/
static inline void print_I_CMPMI_offset_int_instr(instruction_t *instr) {
    printf("I_CMPMI_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPMI_offset_offset
*/
static inline void print_I_CMPMI_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPMI_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPMI_offset_int_int
*/
static inline void print_I_CMPMI_offset_int_int_instr(instruction_t *instr) {
    printf("I_CMPMI_offset_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPMI_offset_int_offset
*/
static inline void print_I_CMPMI_offset_int_offset_instr(instruction_t *instr) {
    printf("I_CMPMI_offset_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPMI_offset_offset_int
*/
static inline void print_I_CMPMI_offset_offset_int_instr(instruction_t *instr) {
    printf("I_CMPMI_offset_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPMI_offset_offset_offset
*/
static inline void print_I_CMPMI_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPMI_offset_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPMD_double_double
*/
static inline void print_I_CMPMD_double_double_instr(instruction_t *instr) {
    printf("I_CMPMD_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPMD_double_offset
*/
static inline void print_I_CMPMD_double_offset_instr(instruction_t *instr) {
    printf("I_CMPMD_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPMD_offset_double
*/
static inline void print_I_CMPMD_offset_double_instr(instruction_t *instr) {
    printf("I_CMPMD_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPMD_offset_offset
*/
static inline void print_I_CMPMD_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPMD_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPMD_offset_double_double
*/
static inline void print_I_CMPMD_offset_double_double_instr(instruction_t *instr) {
    printf("I_CMPMD_offset_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPMD_offset_double_offset
*/
static inline void print_I_CMPMD_offset_double_offset_instr(instruction_t *instr) {
    printf("I_CMPMD_offset_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPMD_offset_offset_double
*/
static inline void print_I_CMPMD_offset_offset_double_instr(instruction_t *instr) {
    printf("I_CMPMD_offset_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPMD_offset_offset_offset
*/
static inline void print_I_CMPMD_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPMD_offset_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPLEI_int_int
*/
static inline void print_I_CMPLEI_int_int_instr(instruction_t *instr) {
    printf("I_CMPLEI_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPLEI_int_offset
*/
static inline void print_I_CMPLEI_int_offset_instr(instruction_t *instr) {
    printf("I_CMPLEI_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPLEI_offset_int
*/
static inline void print_I_CMPLEI_offset_int_instr(instruction_t *instr) {
    printf("I_CMPLEI_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPLEI_offset_offset
*/
static inline void print_I_CMPLEI_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPLEI_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPLEI_offset_int_int
*/
static inline void print_I_CMPLEI_offset_int_int_instr(instruction_t *instr) {
    printf("I_CMPLEI_offset_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPLEI_offset_int_offset
*/
static inline void print_I_CMPLEI_offset_int_offset_instr(instruction_t *instr) {
    printf("I_CMPLEI_offset_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPLEI_offset_offset_int
*/
static inline void print_I_CMPLEI_offset_offset_int_instr(instruction_t *instr) {
    printf("I_CMPLEI_offset_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPLEI_offset_offset_offset
*/
static inline void print_I_CMPLEI_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPLEI_offset_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPLED_double_double
*/
static inline void print_I_CMPLED_double_double_instr(instruction_t *instr) {
    printf("I_CMPLED_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPLED_double_offset
*/
static inline void print_I_CMPLED_double_offset_instr(instruction_t *instr) {
    printf("I_CMPLED_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPLED_offset_double
*/
static inline void print_I_CMPLED_offset_double_instr(instruction_t *instr) {
    printf("I_CMPLED_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPLED_offset_offset
*/
static inline void print_I_CMPLED_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPLED_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPLED_offset_double_double
*/
static inline void print_I_CMPLED_offset_double_double_instr(instruction_t *instr) {
    printf("I_CMPLED_offset_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPLED_offset_double_offset
*/
static inline void print_I_CMPLED_offset_double_offset_instr(instruction_t *instr) {
    printf("I_CMPLED_offset_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPLED_offset_offset_double
*/
static inline void print_I_CMPLED_offset_offset_double_instr(instruction_t *instr) {
    printf("I_CMPLED_offset_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPLED_offset_offset_offset
*/
static inline void print_I_CMPLED_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPLED_offset_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPMEI_int_int
*/
static inline void print_I_CMPMEI_int_int_instr(instruction_t *instr) {
    printf("I_CMPMEI_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPMEI_int_offset
*/
static inline void print_I_CMPMEI_int_offset_instr(instruction_t *instr) {
    printf("I_CMPMEI_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPMEI_offset_int
*/
static inline void print_I_CMPMEI_offset_int_instr(instruction_t *instr) {
    printf("I_CMPMEI_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPMEI_offset_offset
*/
static inline void print_I_CMPMEI_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPMEI_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPMEI_offset_int_int
*/
static inline void print_I_CMPMEI_offset_int_int_instr(instruction_t *instr) {
    printf("I_CMPMEI_offset_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPMEI_offset_int_offset
*/
static inline void print_I_CMPMEI_offset_int_offset_instr(instruction_t *instr) {
    printf("I_CMPMEI_offset_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPMEI_offset_offset_int
*/
static inline void print_I_CMPMEI_offset_offset_int_instr(instruction_t *instr) {
    printf("I_CMPMEI_offset_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPMEI_offset_offset_offset
*/
static inline void print_I_CMPMEI_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPMEI_offset_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPMED_double_double
*/
static inline void print_I_CMPMED_double_double_instr(instruction_t *instr) {
    printf("I_CMPMED_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPMED_double_offset
*/
static inline void print_I_CMPMED_double_offset_instr(instruction_t *instr) {
    printf("I_CMPMED_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPMED_offset_double
*/
static inline void print_I_CMPMED_offset_double_instr(instruction_t *instr) {
    printf("I_CMPMED_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPMED_offset_offset
*/
static inline void print_I_CMPMED_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPMED_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPMED_offset_double_double
*/
static inline void print_I_CMPMED_offset_double_double_instr(instruction_t *instr) {
    printf("I_CMPMED_offset_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPMED_offset_double_offset
*/
static inline void print_I_CMPMED_offset_double_offset_instr(instruction_t *instr) {
    printf("I_CMPMED_offset_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPMED_offset_offset_double
*/
static inline void print_I_CMPMED_offset_offset_double_instr(instruction_t *instr) {
    printf("I_CMPMED_offset_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPMED_offset_offset_offset
*/
static inline void print_I_CMPMED_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPMED_offset_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPEI_int_int
*/
static inline void print_I_CMPEI_int_int_instr(instruction_t *instr) {
    printf("I_CMPEI_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPEI_int_offset
*/
static inline void print_I_CMPEI_int_offset_instr(instruction_t *instr) {
    printf("I_CMPEI_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPEI_offset_int
*/
static inline void print_I_CMPEI_offset_int_instr(instruction_t *instr) {
    printf("I_CMPEI_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPEI_offset_offset
*/
static inline void print_I_CMPEI_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPEI_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPEI_offset_int_int
*/
static inline void print_I_CMPEI_offset_int_int_instr(instruction_t *instr) {
    printf("I_CMPEI_offset_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPEI_offset_int_offset
*/
static inline void print_I_CMPEI_offset_int_offset_instr(instruction_t *instr) {
    printf("I_CMPEI_offset_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPEI_offset_offset_int
*/
static inline void print_I_CMPEI_offset_offset_int_instr(instruction_t *instr) {
    printf("I_CMPEI_offset_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPEI_offset_offset_offset
*/
static inline void print_I_CMPEI_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPEI_offset_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPED_double_double
*/
static inline void print_I_CMPED_double_double_instr(instruction_t *instr) {
    printf("I_CMPED_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPED_double_offset
*/
static inline void print_I_CMPED_double_offset_instr(instruction_t *instr) {
    printf("I_CMPED_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPED_offset_double
*/
static inline void print_I_CMPED_offset_double_instr(instruction_t *instr) {
    printf("I_CMPED_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPED_offset_offset
*/
static inline void print_I_CMPED_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPED_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPED_offset_double_double
*/
static inline void print_I_CMPED_offset_double_double_instr(instruction_t *instr) {
    printf("I_CMPED_offset_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPED_offset_double_offset
*/
static inline void print_I_CMPED_offset_double_offset_instr(instruction_t *instr) {
    printf("I_CMPED_offset_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPED_offset_offset_double
*/
static inline void print_I_CMPED_offset_offset_double_instr(instruction_t *instr) {
    printf("I_CMPED_offset_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPED_offset_offset_offset
*/
static inline void print_I_CMPED_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPED_offset_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPNEI_int_int
*/
static inline void print_I_CMPNEI_int_int_instr(instruction_t *instr) {
    printf("I_CMPNEI_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPNEI_int_offset
*/
static inline void print_I_CMPNEI_int_offset_instr(instruction_t *instr) {
    printf("I_CMPNEI_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPNEI_offset_int
*/
static inline void print_I_CMPNEI_offset_int_instr(instruction_t *instr) {
    printf("I_CMPNEI_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPNEI_offset_offset
*/
static inline void print_I_CMPNEI_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPNEI_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPNEI_offset_int_int
*/
static inline void print_I_CMPNEI_offset_int_int_instr(instruction_t *instr) {
    printf("I_CMPNEI_offset_int_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPNEI_offset_int_offset
*/
static inline void print_I_CMPNEI_offset_int_offset_instr(instruction_t *instr) {
    printf("I_CMPNEI_offset_int_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPNEI_offset_offset_int
*/
static inline void print_I_CMPNEI_offset_offset_int_instr(instruction_t *instr) {
    printf("I_CMPNEI_offset_offset_int_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPNEI_offset_offset_offset
*/
static inline void print_I_CMPNEI_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPNEI_offset_offset_offset_instr\t%d\t%d\t%d\n", ZVAL_GET_INT(instr->first), ZVAL_GET_INT(instr->second), ZVAL_GET_INT(instr->third));
}
/*
Generated print_I_CMPNED_double_double
*/
static inline void print_I_CMPNED_double_double_instr(instruction_t *instr) {
    printf("I_CMPNED_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPNED_double_offset
*/
static inline void print_I_CMPNED_double_offset_instr(instruction_t *instr) {
    printf("I_CMPNED_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPNED_offset_double
*/
static inline void print_I_CMPNED_offset_double_instr(instruction_t *instr) {
    printf("I_CMPNED_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPNED_offset_offset
*/
static inline void print_I_CMPNED_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPNED_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPNED_offset_double_double
*/
static inline void print_I_CMPNED_offset_double_double_instr(instruction_t *instr) {
    printf("I_CMPNED_offset_double_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPNED_offset_double_offset
*/
static inline void print_I_CMPNED_offset_double_offset_instr(instruction_t *instr) {
    printf("I_CMPNED_offset_double_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPNED_offset_offset_double
*/
static inline void print_I_CMPNED_offset_offset_double_instr(instruction_t *instr) {
    printf("I_CMPNED_offset_offset_double_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
/*
Generated print_I_CMPNED_offset_offset_offset
*/
static inline void print_I_CMPNED_offset_offset_offset_instr(instruction_t *instr) {
    printf("I_CMPNED_offset_offset_offset_instr\t%u\t%u\t%u\n", ZVAL_GET_DOUBLE(instr->first), ZVAL_GET_DOUBLE(instr->second), ZVAL_GET_DOUBLE(instr->third));
}
#endif // _PRINT_INSTR_H_
