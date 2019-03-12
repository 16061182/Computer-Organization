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
static const char *ng0 = "E:/ISEproject/jizuhomework3_3_2/homework.v";
static int ng1[] = {0, 0};



static void Initial_28_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(28, ng0);

LAB2:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1608);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_34_1(char *t0)
{
    char t4[8];
    char t26[8];
    char t28[8];
    char t61[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3416);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t5 = (t0 + 1768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB11;

LAB10:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t25, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t6) != 0)
        goto LAB14;

LAB15:    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t8);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB16;

LAB17:    memcpy(t28, t4, 8);

LAB18:    t60 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t60, t28, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t6) == 0)
        goto LAB26;

LAB28:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;

LAB29:    t8 = (t4 + 4);
    t14 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB31;

LAB30:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 1U);
    memset(t26, 0, 8);
    t15 = (t4 + 4);
    t29 = *((unsigned int *)t15);
    t30 = (~(t29));
    t31 = *((unsigned int *)t4);
    t35 = (t31 & t30);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t15) != 0)
        goto LAB34;

LAB35:    t25 = (t26 + 4);
    t37 = *((unsigned int *)t26);
    t38 = (!(t37));
    t39 = *((unsigned int *)t25);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB36;

LAB37:    memcpy(t61, t26, 8);

LAB38:    t75 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t75, t61, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB10;

LAB12:    *((unsigned int *)t4) = 1;
    goto LAB15;

LAB14:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB15;

LAB16:    t14 = (t0 + 1608);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t26, 0, 8);
    t25 = (t16 + 4);
    t20 = *((unsigned int *)t25);
    t21 = (~(t20));
    t22 = *((unsigned int *)t16);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t25) != 0)
        goto LAB21;

LAB22:    t29 = *((unsigned int *)t4);
    t30 = *((unsigned int *)t26);
    t31 = (t29 & t30);
    *((unsigned int *)t28) = t31;
    t32 = (t4 + 4);
    t33 = (t26 + 4);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB18;

LAB19:    *((unsigned int *)t26) = 1;
    goto LAB22;

LAB21:    t27 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB22;

LAB23:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t40 | t41);
    t42 = (t4 + 4);
    t43 = (t26 + 4);
    t44 = *((unsigned int *)t4);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t26);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t55);
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t54);
    t59 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t59 & t55);
    goto LAB25;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB31:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t21 | t22);
    goto LAB30;

LAB32:    *((unsigned int *)t26) = 1;
    goto LAB35;

LAB34:    t16 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB35;

LAB36:    t27 = (t0 + 1448);
    t32 = (t27 + 56U);
    t33 = *((char **)t32);
    memset(t28, 0, 8);
    t34 = (t33 + 4);
    t41 = *((unsigned int *)t34);
    t44 = (~(t41));
    t45 = *((unsigned int *)t33);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t34) != 0)
        goto LAB41;

LAB42:    t48 = *((unsigned int *)t26);
    t49 = *((unsigned int *)t28);
    t50 = (t48 | t49);
    *((unsigned int *)t61) = t50;
    t43 = (t26 + 4);
    t60 = (t28 + 4);
    t62 = (t61 + 4);
    t51 = *((unsigned int *)t43);
    t54 = *((unsigned int *)t60);
    t55 = (t51 | t54);
    *((unsigned int *)t62) = t55;
    t56 = *((unsigned int *)t62);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB38;

LAB39:    *((unsigned int *)t28) = 1;
    goto LAB42;

LAB41:    t42 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB42;

LAB43:    t58 = *((unsigned int *)t61);
    t59 = *((unsigned int *)t62);
    *((unsigned int *)t61) = (t58 | t59);
    t63 = (t26 + 4);
    t64 = (t28 + 4);
    t65 = *((unsigned int *)t63);
    t66 = (~(t65));
    t67 = *((unsigned int *)t26);
    t52 = (t67 & t66);
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t28);
    t53 = (t70 & t69);
    t71 = (~(t52));
    t72 = (~(t53));
    t73 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t73 & t71);
    t74 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t74 & t72);
    goto LAB45;

}


extern void work_m_00000000004201876800_0984076178_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000004201876800_0984076178", "isim/homeworktest_isim_beh.exe.sim/work/m_00000000004201876800_0984076178.didat");
	xsi_register_executes(pe);
}
