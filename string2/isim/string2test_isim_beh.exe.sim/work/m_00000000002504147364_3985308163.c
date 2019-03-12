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
static const char *ng0 = "E:/ISEproject/string2/string2.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {48, 0};
static int ng4[] = {57, 0};
static int ng5[] = {40, 0};
static int ng6[] = {3, 0};
static int ng7[] = {6, 0};
static int ng8[] = {43, 0};
static int ng9[] = {42, 0};
static int ng10[] = {2, 0};
static int ng11[] = {4, 0};
static int ng12[] = {5, 0};
static int ng13[] = {41, 0};



static void Always_30_0(char *t0)
{
    char t6[8];
    char t31[8];
    char t36[8];
    char t40[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
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
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(36, ng0);

LAB14:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB15:    t5 = ((char*)((ng2)));
    t30 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng1)));
    t30 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng12)));
    t30 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t30 == 1)
        goto LAB28;

LAB29:
LAB30:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(31, ng0);

LAB13:    xsi_set_current_line(32, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(39, ng0);

LAB31:    xsi_set_current_line(40, ng0);
    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t21 = (t8 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB33;

LAB32:    t22 = (t7 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t8) < *((unsigned int *)t7))
        goto LAB35;

LAB34:    *((unsigned int *)t6) = 1;

LAB35:    memset(t31, 0, 8);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t29) != 0)
        goto LAB39;

LAB40:    t33 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t33);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB41;

LAB42:    memcpy(t43, t31, 8);

LAB43:    t71 = (t43 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t43);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB63;

LAB60:    if (t18 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t6) = 1;

LAB63:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(48, ng0);

LAB68:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB66:
LAB58:    goto LAB30;

LAB18:    xsi_set_current_line(55, ng0);

LAB69:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB73;

LAB70:    if (t18 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t6) = 1;

LAB73:    memset(t31, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t22) != 0)
        goto LAB76;

LAB77:    t29 = (t31 + 4);
    t47 = *((unsigned int *)t31);
    t48 = (!(t47));
    t49 = *((unsigned int *)t29);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB78;

LAB79:    memcpy(t43, t31, 8);

LAB80:    t53 = (t43 + 4);
    t95 = *((unsigned int *)t53);
    t96 = (~(t95));
    t97 = *((unsigned int *)t43);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(60, ng0);

LAB96:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB94:    goto LAB30;

LAB20:    xsi_set_current_line(67, ng0);

LAB97:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB99;

LAB98:    t8 = (t3 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB99;

LAB102:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB101;

LAB100:    *((unsigned int *)t6) = 1;

LAB101:    memset(t31, 0, 8);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t22) != 0)
        goto LAB105;

LAB106:    t29 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t29);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB107;

LAB108:    memcpy(t43, t31, 8);

LAB109:    t53 = (t43 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t43);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB129;

LAB126:    if (t18 != 0)
        goto LAB128;

LAB127:    *((unsigned int *)t6) = 1;

LAB129:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB130;

LAB131:    xsi_set_current_line(76, ng0);

LAB134:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB132:
LAB124:    goto LAB30;

LAB22:    xsi_set_current_line(83, ng0);

LAB135:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB137;

LAB136:    t8 = (t3 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB137;

LAB140:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB139;

LAB138:    *((unsigned int *)t6) = 1;

LAB139:    memset(t31, 0, 8);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t22) != 0)
        goto LAB143;

LAB144:    t29 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t29);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB145;

LAB146:    memcpy(t43, t31, 8);

LAB147:    t53 = (t43 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t43);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB160;

LAB161:    xsi_set_current_line(88, ng0);

LAB164:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB162:    goto LAB30;

LAB24:    xsi_set_current_line(95, ng0);

LAB165:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB169;

LAB166:    if (t18 != 0)
        goto LAB168;

LAB167:    *((unsigned int *)t6) = 1;

LAB169:    memset(t31, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB170;

LAB171:    if (*((unsigned int *)t22) != 0)
        goto LAB172;

LAB173:    t29 = (t31 + 4);
    t47 = *((unsigned int *)t31);
    t48 = (!(t47));
    t49 = *((unsigned int *)t29);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB174;

LAB175:    memcpy(t43, t31, 8);

LAB176:    t53 = (t43 + 4);
    t95 = *((unsigned int *)t53);
    t96 = (~(t95));
    t97 = *((unsigned int *)t43);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB188;

LAB189:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB195;

LAB192:    if (t18 != 0)
        goto LAB194;

LAB193:    *((unsigned int *)t6) = 1;

LAB195:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB196;

LAB197:    xsi_set_current_line(104, ng0);

LAB200:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB198:
LAB190:    goto LAB30;

LAB26:    xsi_set_current_line(111, ng0);

LAB201:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB203;

LAB202:    t8 = (t3 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB203;

LAB206:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB205;

LAB204:    *((unsigned int *)t6) = 1;

LAB205:    memset(t31, 0, 8);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB207;

LAB208:    if (*((unsigned int *)t22) != 0)
        goto LAB209;

LAB210:    t29 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t29);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB211;

LAB212:    memcpy(t43, t31, 8);

LAB213:    t53 = (t43 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t43);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB226;

LAB227:    xsi_set_current_line(116, ng0);

LAB230:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB228:    goto LAB30;

LAB28:    xsi_set_current_line(123, ng0);

LAB231:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB30;

LAB33:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB35;

LAB37:    *((unsigned int *)t31) = 1;
    goto LAB40;

LAB39:    t32 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB40;

LAB41:    t34 = (t0 + 1368U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng4)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB45;

LAB44:    t38 = (t34 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB45;

LAB48:    if (*((unsigned int *)t35) > *((unsigned int *)t34))
        goto LAB47;

LAB46:    *((unsigned int *)t36) = 1;

LAB47:    memset(t40, 0, 8);
    t41 = (t36 + 4);
    t17 = *((unsigned int *)t41);
    t18 = (~(t17));
    t19 = *((unsigned int *)t36);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t41) != 0)
        goto LAB51;

LAB52:    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t40);
    t26 = (t24 & t25);
    *((unsigned int *)t43) = t26;
    t44 = (t31 + 4);
    t45 = (t40 + 4);
    t46 = (t43 + 4);
    t27 = *((unsigned int *)t44);
    t47 = *((unsigned int *)t45);
    t48 = (t27 | t47);
    *((unsigned int *)t46) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB53;

LAB54:
LAB55:    goto LAB43;

LAB45:    t39 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB47;

LAB49:    *((unsigned int *)t40) = 1;
    goto LAB52;

LAB51:    t42 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB52;

LAB53:    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t46);
    *((unsigned int *)t43) = (t51 | t52);
    t53 = (t31 + 4);
    t54 = (t40 + 4);
    t55 = *((unsigned int *)t31);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t69 & t65);
    t70 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t70 & t66);
    goto LAB55;

LAB56:    xsi_set_current_line(40, ng0);

LAB59:    xsi_set_current_line(41, ng0);
    t77 = ((char*)((ng1)));
    t78 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t78, t77, 0, 0, 32, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB58;

LAB62:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(44, ng0);

LAB67:    xsi_set_current_line(45, ng0);
    t22 = ((char*)((ng6)));
    t28 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 32, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB66;

LAB72:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB73;

LAB74:    *((unsigned int *)t31) = 1;
    goto LAB77;

LAB76:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB77;

LAB78:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng9)));
    memset(t36, 0, 8);
    t34 = (t33 + 4);
    t35 = (t32 + 4);
    t51 = *((unsigned int *)t33);
    t52 = *((unsigned int *)t32);
    t55 = (t51 ^ t52);
    t56 = *((unsigned int *)t34);
    t57 = *((unsigned int *)t35);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t34);
    t61 = *((unsigned int *)t35);
    t62 = (t60 | t61);
    t65 = (~(t62));
    t66 = (t59 & t65);
    if (t66 != 0)
        goto LAB84;

LAB81:    if (t62 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t36) = 1;

LAB84:    memset(t40, 0, 8);
    t38 = (t36 + 4);
    t67 = *((unsigned int *)t38);
    t68 = (~(t67));
    t69 = *((unsigned int *)t36);
    t70 = (t69 & t68);
    t72 = (t70 & 1U);
    if (t72 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t38) != 0)
        goto LAB87;

LAB88:    t73 = *((unsigned int *)t31);
    t74 = *((unsigned int *)t40);
    t75 = (t73 | t74);
    *((unsigned int *)t43) = t75;
    t41 = (t31 + 4);
    t42 = (t40 + 4);
    t44 = (t43 + 4);
    t76 = *((unsigned int *)t41);
    t79 = *((unsigned int *)t42);
    t80 = (t76 | t79);
    *((unsigned int *)t44) = t80;
    t81 = *((unsigned int *)t44);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB80;

LAB83:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB84;

LAB85:    *((unsigned int *)t40) = 1;
    goto LAB88;

LAB87:    t39 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB88;

LAB89:    t83 = *((unsigned int *)t43);
    t84 = *((unsigned int *)t44);
    *((unsigned int *)t43) = (t83 | t84);
    t45 = (t31 + 4);
    t46 = (t40 + 4);
    t85 = *((unsigned int *)t45);
    t86 = (~(t85));
    t87 = *((unsigned int *)t31);
    t63 = (t87 & t86);
    t88 = *((unsigned int *)t46);
    t89 = (~(t88));
    t90 = *((unsigned int *)t40);
    t64 = (t90 & t89);
    t91 = (~(t63));
    t92 = (~(t64));
    t93 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t93 & t91);
    t94 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t94 & t92);
    goto LAB91;

LAB92:    xsi_set_current_line(56, ng0);

LAB95:    xsi_set_current_line(57, ng0);
    t54 = ((char*)((ng10)));
    t71 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t71, t54, 0, 0, 32, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB94;

LAB99:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB101;

LAB103:    *((unsigned int *)t31) = 1;
    goto LAB106;

LAB105:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB106;

LAB107:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng4)));
    memset(t36, 0, 8);
    t34 = (t33 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB111;

LAB110:    t35 = (t32 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB111;

LAB114:    if (*((unsigned int *)t33) > *((unsigned int *)t32))
        goto LAB113;

LAB112:    *((unsigned int *)t36) = 1;

LAB113:    memset(t40, 0, 8);
    t38 = (t36 + 4);
    t17 = *((unsigned int *)t38);
    t18 = (~(t17));
    t19 = *((unsigned int *)t36);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t38) != 0)
        goto LAB117;

LAB118:    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t40);
    t26 = (t24 & t25);
    *((unsigned int *)t43) = t26;
    t41 = (t31 + 4);
    t42 = (t40 + 4);
    t44 = (t43 + 4);
    t27 = *((unsigned int *)t41);
    t47 = *((unsigned int *)t42);
    t48 = (t27 | t47);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t44);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB119;

LAB120:
LAB121:    goto LAB109;

LAB111:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB113;

LAB115:    *((unsigned int *)t40) = 1;
    goto LAB118;

LAB117:    t39 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB118;

LAB119:    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t43) = (t51 | t52);
    t45 = (t31 + 4);
    t46 = (t40 + 4);
    t55 = *((unsigned int *)t31);
    t56 = (~(t55));
    t57 = *((unsigned int *)t45);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t46);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t68 & t66);
    t69 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t69 & t65);
    t70 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t70 & t66);
    goto LAB121;

LAB122:    xsi_set_current_line(68, ng0);

LAB125:    xsi_set_current_line(69, ng0);
    t54 = ((char*)((ng1)));
    t71 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t71, t54, 0, 0, 32, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB124;

LAB128:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB129;

LAB130:    xsi_set_current_line(72, ng0);

LAB133:    xsi_set_current_line(73, ng0);
    t22 = ((char*)((ng6)));
    t28 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 32, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB132;

LAB137:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB139;

LAB141:    *((unsigned int *)t31) = 1;
    goto LAB144;

LAB143:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB144;

LAB145:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng4)));
    memset(t36, 0, 8);
    t34 = (t33 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB149;

LAB148:    t35 = (t32 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB149;

LAB152:    if (*((unsigned int *)t33) > *((unsigned int *)t32))
        goto LAB151;

LAB150:    *((unsigned int *)t36) = 1;

LAB151:    memset(t40, 0, 8);
    t38 = (t36 + 4);
    t17 = *((unsigned int *)t38);
    t18 = (~(t17));
    t19 = *((unsigned int *)t36);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB153;

LAB154:    if (*((unsigned int *)t38) != 0)
        goto LAB155;

LAB156:    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t40);
    t26 = (t24 & t25);
    *((unsigned int *)t43) = t26;
    t41 = (t31 + 4);
    t42 = (t40 + 4);
    t44 = (t43 + 4);
    t27 = *((unsigned int *)t41);
    t47 = *((unsigned int *)t42);
    t48 = (t27 | t47);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t44);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB157;

LAB158:
LAB159:    goto LAB147;

LAB149:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB151;

LAB153:    *((unsigned int *)t40) = 1;
    goto LAB156;

LAB155:    t39 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB156;

LAB157:    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t43) = (t51 | t52);
    t45 = (t31 + 4);
    t46 = (t40 + 4);
    t55 = *((unsigned int *)t31);
    t56 = (~(t55));
    t57 = *((unsigned int *)t45);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t46);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t68 & t66);
    t69 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t69 & t65);
    t70 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t70 & t66);
    goto LAB159;

LAB160:    xsi_set_current_line(84, ng0);

LAB163:    xsi_set_current_line(85, ng0);
    t54 = ((char*)((ng11)));
    t71 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t71, t54, 0, 0, 32, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB162;

LAB168:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB169;

LAB170:    *((unsigned int *)t31) = 1;
    goto LAB173;

LAB172:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB173;

LAB174:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng9)));
    memset(t36, 0, 8);
    t34 = (t33 + 4);
    t35 = (t32 + 4);
    t51 = *((unsigned int *)t33);
    t52 = *((unsigned int *)t32);
    t55 = (t51 ^ t52);
    t56 = *((unsigned int *)t34);
    t57 = *((unsigned int *)t35);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t34);
    t61 = *((unsigned int *)t35);
    t62 = (t60 | t61);
    t65 = (~(t62));
    t66 = (t59 & t65);
    if (t66 != 0)
        goto LAB180;

LAB177:    if (t62 != 0)
        goto LAB179;

LAB178:    *((unsigned int *)t36) = 1;

LAB180:    memset(t40, 0, 8);
    t38 = (t36 + 4);
    t67 = *((unsigned int *)t38);
    t68 = (~(t67));
    t69 = *((unsigned int *)t36);
    t70 = (t69 & t68);
    t72 = (t70 & 1U);
    if (t72 != 0)
        goto LAB181;

LAB182:    if (*((unsigned int *)t38) != 0)
        goto LAB183;

LAB184:    t73 = *((unsigned int *)t31);
    t74 = *((unsigned int *)t40);
    t75 = (t73 | t74);
    *((unsigned int *)t43) = t75;
    t41 = (t31 + 4);
    t42 = (t40 + 4);
    t44 = (t43 + 4);
    t76 = *((unsigned int *)t41);
    t79 = *((unsigned int *)t42);
    t80 = (t76 | t79);
    *((unsigned int *)t44) = t80;
    t81 = *((unsigned int *)t44);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB185;

LAB186:
LAB187:    goto LAB176;

LAB179:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB180;

LAB181:    *((unsigned int *)t40) = 1;
    goto LAB184;

LAB183:    t39 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB184;

LAB185:    t83 = *((unsigned int *)t43);
    t84 = *((unsigned int *)t44);
    *((unsigned int *)t43) = (t83 | t84);
    t45 = (t31 + 4);
    t46 = (t40 + 4);
    t85 = *((unsigned int *)t45);
    t86 = (~(t85));
    t87 = *((unsigned int *)t31);
    t63 = (t87 & t86);
    t88 = *((unsigned int *)t46);
    t89 = (~(t88));
    t90 = *((unsigned int *)t40);
    t64 = (t90 & t89);
    t91 = (~(t63));
    t92 = (~(t64));
    t93 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t93 & t91);
    t94 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t94 & t92);
    goto LAB187;

LAB188:    xsi_set_current_line(96, ng0);

LAB191:    xsi_set_current_line(97, ng0);
    t54 = ((char*)((ng12)));
    t71 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t71, t54, 0, 0, 32, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB190;

LAB194:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB195;

LAB196:    xsi_set_current_line(100, ng0);

LAB199:    xsi_set_current_line(101, ng0);
    t22 = ((char*)((ng1)));
    t28 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 32, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB198;

LAB203:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB205;

LAB207:    *((unsigned int *)t31) = 1;
    goto LAB210;

LAB209:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB210;

LAB211:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng4)));
    memset(t36, 0, 8);
    t34 = (t33 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB215;

LAB214:    t35 = (t32 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB215;

LAB218:    if (*((unsigned int *)t33) > *((unsigned int *)t32))
        goto LAB217;

LAB216:    *((unsigned int *)t36) = 1;

LAB217:    memset(t40, 0, 8);
    t38 = (t36 + 4);
    t17 = *((unsigned int *)t38);
    t18 = (~(t17));
    t19 = *((unsigned int *)t36);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB219;

LAB220:    if (*((unsigned int *)t38) != 0)
        goto LAB221;

LAB222:    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t40);
    t26 = (t24 & t25);
    *((unsigned int *)t43) = t26;
    t41 = (t31 + 4);
    t42 = (t40 + 4);
    t44 = (t43 + 4);
    t27 = *((unsigned int *)t41);
    t47 = *((unsigned int *)t42);
    t48 = (t27 | t47);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t44);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB223;

LAB224:
LAB225:    goto LAB213;

LAB215:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB217;

LAB219:    *((unsigned int *)t40) = 1;
    goto LAB222;

LAB221:    t39 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB222;

LAB223:    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t43) = (t51 | t52);
    t45 = (t31 + 4);
    t46 = (t40 + 4);
    t55 = *((unsigned int *)t31);
    t56 = (~(t55));
    t57 = *((unsigned int *)t45);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t46);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t68 & t66);
    t69 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t69 & t65);
    t70 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t70 & t66);
    goto LAB225;

LAB226:    xsi_set_current_line(112, ng0);

LAB229:    xsi_set_current_line(113, ng0);
    t54 = ((char*)((ng11)));
    t71 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t71, t54, 0, 0, 32, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB228;

}


extern void work_m_00000000002504147364_3985308163_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000002504147364_3985308163", "isim/string2test_isim_beh.exe.sim/work/m_00000000002504147364_3985308163.didat");
	xsi_register_executes(pe);
}
