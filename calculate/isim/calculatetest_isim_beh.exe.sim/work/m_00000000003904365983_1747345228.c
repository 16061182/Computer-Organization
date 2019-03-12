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
static const char *ng0 = "E:/ISEproject/calculate/calculate.v";
static int ng1[] = {0, 0};
static int ng2[] = {43, 0};
static int ng3[] = {48, 0};
static int ng4[] = {57, 0};
static int ng5[] = {1, 0};
static int ng6[] = {3, 0};
static int ng7[] = {42, 0};
static int ng8[] = {2, 0};



static void Always_32_0(char *t0)
{
    char t14[8];
    char t18[8];
    char t27[8];
    char t31[8];
    char t39[8];
    char t82[8];
    char t83[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t84;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3808);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(41, ng0);

LAB10:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t13 == 1)
        goto LAB18;

LAB19:
LAB20:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(33, ng0);

LAB9:    xsi_set_current_line(34, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(44, ng0);

LAB21:    xsi_set_current_line(45, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t15 = (t12 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB23;

LAB22:    t16 = (t11 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t12) < *((unsigned int *)t11))
        goto LAB25;

LAB24:    *((unsigned int *)t14) = 1;

LAB25:    memset(t18, 0, 8);
    t19 = (t14 + 4);
    t6 = *((unsigned int *)t19);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t19) != 0)
        goto LAB29;

LAB30:    t21 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB31;

LAB32:    memcpy(t39, t18, 8);

LAB33:    t71 = (t39 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(50, ng0);

LAB50:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB48:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t3, 8, t2, 32);
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t14, 0, 0, 32, 0LL);
    goto LAB20;

LAB14:    xsi_set_current_line(57, ng0);

LAB51:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB55;

LAB52:    if (t34 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t14) = 1;

LAB55:    t16 = (t14 + 4);
    t37 = *((unsigned int *)t16);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB79;

LAB76:    if (t34 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t14) = 1;

LAB79:    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB82:
LAB58:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memcpy(t14, t3, 8);
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t14, 0, 0, 32, 0LL);
    goto LAB20;

LAB16:    xsi_set_current_line(85, ng0);

LAB100:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB102;

LAB101:    t12 = (t3 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB102;

LAB105:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB104;

LAB103:    *((unsigned int *)t14) = 1;

LAB104:    memset(t18, 0, 8);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t16) != 0)
        goto LAB108;

LAB109:    t19 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB110;

LAB111:    memcpy(t39, t18, 8);

LAB112:    t53 = (t39 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB125;

LAB126:    xsi_set_current_line(91, ng0);

LAB129:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB127:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t3, 8, t2, 32);
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t14, 0, 0, 32, 0LL);
    goto LAB20;

LAB18:    xsi_set_current_line(98, ng0);

LAB130:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB20;

LAB23:    t17 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB25;

LAB27:    *((unsigned int *)t18) = 1;
    goto LAB30;

LAB29:    t20 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB30;

LAB31:    t25 = (t0 + 1368U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng4)));
    memset(t27, 0, 8);
    t28 = (t26 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB35;

LAB34:    t29 = (t25 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t26) > *((unsigned int *)t25))
        goto LAB37;

LAB36:    *((unsigned int *)t27) = 1;

LAB37:    memset(t31, 0, 8);
    t32 = (t27 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t32) != 0)
        goto LAB41;

LAB42:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB33;

LAB35:    t30 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t31) = 1;
    goto LAB42;

LAB41:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB42;

LAB43:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t18 + 4);
    t54 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB45;

LAB46:    xsi_set_current_line(45, ng0);

LAB49:    xsi_set_current_line(46, ng0);
    t77 = (t0 + 2088);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    t80 = (t0 + 1368U);
    t81 = *((char **)t80);
    t80 = ((char*)((ng3)));
    memset(t82, 0, 8);
    xsi_vlog_unsigned_minus(t82, 32, t81, 8, t80, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t79, 32, t82, 32);
    t84 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t84, t83, 0, 0, 32, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t12, 8, t11, 32);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t5, 32, t14, 32);
    t15 = (t0 + 2248);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 32, t18, 32, t17, 32);
    t19 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t19, t27, 0, 0, 32, 0LL);
    goto LAB48;

LAB54:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(58, ng0);

LAB59:    xsi_set_current_line(59, ng0);
    t17 = ((char*)((ng1)));
    t19 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t19, t17, 0, 0, 32, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t12);
    t33 = *((unsigned int *)t15);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB63;

LAB60:    if (t34 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t14) = 1;

LAB63:    t17 = (t14 + 4);
    t37 = *((unsigned int *)t17);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng7)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t12);
    t33 = *((unsigned int *)t15);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB71;

LAB68:    if (t34 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t14) = 1;

LAB71:    t17 = (t14 + 4);
    t37 = *((unsigned int *)t17);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB72;

LAB73:
LAB74:
LAB66:    goto LAB58;

LAB62:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(60, ng0);

LAB67:    xsi_set_current_line(61, ng0);
    t19 = (t0 + 2088);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t25 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t25, t21, 0, 0, 32, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 32, 0LL);
    goto LAB66;

LAB70:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(64, ng0);

LAB75:    xsi_set_current_line(65, ng0);
    t19 = (t0 + 2088);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t25 = (t0 + 2248);
    t26 = (t25 + 56U);
    t28 = *((char **)t26);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t21, 32, t28, 32);
    t29 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t29, t18, 0, 0, 32, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB74;

LAB78:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(69, ng0);

LAB83:    xsi_set_current_line(70, ng0);
    t16 = ((char*)((ng8)));
    t17 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 32, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t12);
    t33 = *((unsigned int *)t15);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB87;

LAB84:    if (t34 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t14) = 1;

LAB87:    t17 = (t14 + 4);
    t37 = *((unsigned int *)t17);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng7)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t12);
    t33 = *((unsigned int *)t15);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB95;

LAB92:    if (t34 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t14) = 1;

LAB95:    t17 = (t14 + 4);
    t37 = *((unsigned int *)t17);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB96;

LAB97:
LAB98:
LAB90:    goto LAB82;

LAB86:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(71, ng0);

LAB91:    xsi_set_current_line(72, ng0);
    t19 = (t0 + 2088);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t25 = (t0 + 2408);
    t26 = (t25 + 56U);
    t28 = *((char **)t26);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t21, 32, t28, 32);
    t29 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t29, t18, 0, 0, 32, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 32, 0LL);
    goto LAB90;

LAB94:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(75, ng0);

LAB99:    xsi_set_current_line(76, ng0);
    t19 = (t0 + 2088);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t25 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t25, t21, 0, 0, 32, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 32, 0LL);
    goto LAB98;

LAB102:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB104;

LAB106:    *((unsigned int *)t18) = 1;
    goto LAB109;

LAB108:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB109;

LAB110:    t20 = (t0 + 1368U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng4)));
    memset(t27, 0, 8);
    t25 = (t21 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB114;

LAB113:    t26 = (t20 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB114;

LAB117:    if (*((unsigned int *)t21) > *((unsigned int *)t20))
        goto LAB116;

LAB115:    *((unsigned int *)t27) = 1;

LAB116:    memset(t31, 0, 8);
    t29 = (t27 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t29) != 0)
        goto LAB120;

LAB121:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t32 = (t18 + 4);
    t38 = (t31 + 4);
    t43 = (t39 + 4);
    t46 = *((unsigned int *)t32);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t43);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB122;

LAB123:
LAB124:    goto LAB112;

LAB114:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB116;

LAB118:    *((unsigned int *)t31) = 1;
    goto LAB121;

LAB120:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB121;

LAB122:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t43);
    *((unsigned int *)t39) = (t51 | t52);
    t44 = (t18 + 4);
    t45 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t44);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t45);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t67 & t65);
    t68 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB124;

LAB125:    xsi_set_current_line(86, ng0);

LAB128:    xsi_set_current_line(87, ng0);
    t54 = (t0 + 2248);
    t71 = (t54 + 56U);
    t77 = *((char **)t71);
    t78 = (t0 + 1368U);
    t79 = *((char **)t78);
    t78 = ((char*)((ng3)));
    memset(t82, 0, 8);
    xsi_vlog_unsigned_minus(t82, 32, t79, 8, t78, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_multiply(t83, 32, t77, 32, t82, 32);
    t80 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t80, t83, 0, 0, 32, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2248);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    t16 = (t0 + 1368U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t17, 8, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t15, 32, t14, 32);
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 32, t5, 32, t18, 32);
    t19 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t19, t27, 0, 0, 32, 0LL);
    goto LAB127;

}


extern void work_m_00000000003904365983_1747345228_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000003904365983_1747345228", "isim/calculatetest_isim_beh.exe.sim/work/m_00000000003904365983_1747345228.didat");
	xsi_register_executes(pe);
}
