/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/ISEproject/fileIOtest/file.v";
static const char *ng1 = "code.txt";
static int ng2[] = {0, 0};
static int ng3[] = {100, 0};
static int ng4[] = {3, 0};



static void Initial_25_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(25, ng0);

LAB2:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1448);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng3)));
    xsi_vlogfile_readmemh(ng1, 0, t1, 1, *((unsigned int *)t2), 1, *((unsigned int *)t3));
    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1448);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 1448);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 1448);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t0 + 1288);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);

LAB1:    return;
}


extern void work_m_00000000003053472308_0582581851_init()
{
	static char *pe[] = {(void *)Initial_25_0};
	xsi_register_didat("work_m_00000000003053472308_0582581851", "isim/IOtest_isim_beh.exe.sim/work/m_00000000003053472308_0582581851.didat");
	xsi_register_executes(pe);
}
