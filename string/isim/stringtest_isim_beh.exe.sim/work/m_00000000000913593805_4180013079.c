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
static const char *ng0 = "E:/ISEproject/string/string.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {48, 0};
static int ng4[] = {57, 0};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {42, 0};
static int ng7[] = {43, 0};
static unsigned int ng8[] = {16U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {8U, 0U};
static int ng11[] = {1, 0};



static void Initial_28_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(28, ng0);

LAB2:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_39_1(char *t0)
{
    char t12[8];
    char t18[8];
    char t27[8];
    char t31[8];
    char t39[8];
    char t78[8];
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
    char *t13;
    int t14;
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
    char *t79;
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
    unsigned int t100;

LAB0:    t1 = (t0 + 3776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4096);
    *((int *)t2) = 1;
    t3 = (t0 + 3808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(44, ng0);

LAB10:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng2)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 32, t5, 5);
    if (t14 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 5);
    if (t14 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng9)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 5);
    if (t14 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng10)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 5);
    if (t14 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng8)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 5);
    if (t14 == 1)
        goto LAB20;

LAB21:
LAB22:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);

LAB9:    xsi_set_current_line(41, ng0);
    t11 = ((char*)((ng2)));
    memcpy(t12, t11, 8);
    t13 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 32, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(47, ng0);

LAB23:    xsi_set_current_line(48, ng0);
    t11 = (t0 + 2048U);
    t13 = *((char **)t11);
    t11 = ((char*)((ng3)));
    memset(t12, 0, 8);
    t15 = (t13 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB25;

LAB24:    t16 = (t11 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t13) < *((unsigned int *)t11))
        goto LAB27;

LAB26:    *((unsigned int *)t12) = 1;

LAB27:    memset(t18, 0, 8);
    t19 = (t12 + 4);
    t6 = *((unsigned int *)t19);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t19) != 0)
        goto LAB31;

LAB32:    t21 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB33;

LAB34:    memcpy(t39, t18, 8);

LAB35:    t71 = (t39 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t12, 0, 8);
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
        goto LAB54;

LAB51:    if (t34 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t12) = 1;

LAB54:    memset(t18, 0, 8);
    t15 = (t12 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t12);
    t42 = (t41 & t40);
    t46 = (t42 & 1U);
    if (t46 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t15) != 0)
        goto LAB57;

LAB58:    t17 = (t18 + 4);
    t47 = *((unsigned int *)t18);
    t48 = (!(t47));
    t49 = *((unsigned int *)t17);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB59;

LAB60:    memcpy(t39, t18, 8);

LAB61:    t45 = (t39 + 4);
    t96 = *((unsigned int *)t45);
    t97 = (~(t96));
    t98 = *((unsigned int *)t39);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng8)));
    memcpy(t12, t2, 8);
    t3 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t3, t12, 0, 0, 32, 0LL);

LAB75:
LAB50:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB22;

LAB14:    xsi_set_current_line(54, ng0);

LAB76:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 2048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t12, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB78;

LAB77:    t13 = (t3 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB78;

LAB81:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB80;

LAB79:    *((unsigned int *)t12) = 1;

LAB80:    memset(t18, 0, 8);
    t16 = (t12 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t16) != 0)
        goto LAB84;

LAB85:    t19 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB86;

LAB87:    memcpy(t39, t18, 8);

LAB88:    t53 = (t39 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t12, 0, 8);
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
        goto LAB107;

LAB104:    if (t34 != 0)
        goto LAB106;

LAB105:    *((unsigned int *)t12) = 1;

LAB107:    memset(t18, 0, 8);
    t15 = (t12 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t12);
    t42 = (t41 & t40);
    t46 = (t42 & 1U);
    if (t46 != 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t15) != 0)
        goto LAB110;

LAB111:    t17 = (t18 + 4);
    t47 = *((unsigned int *)t18);
    t48 = (!(t47));
    t49 = *((unsigned int *)t17);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB112;

LAB113:    memcpy(t39, t18, 8);

LAB114:    t45 = (t39 + 4);
    t96 = *((unsigned int *)t45);
    t97 = (~(t96));
    t98 = *((unsigned int *)t39);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB126;

LAB127:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng8)));
    memcpy(t12, t2, 8);
    t3 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t3, t12, 0, 0, 32, 0LL);

LAB128:
LAB103:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB22;

LAB16:    xsi_set_current_line(61, ng0);

LAB129:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 2048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t12, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB131;

LAB130:    t13 = (t3 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB131;

LAB134:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB133;

LAB132:    *((unsigned int *)t12) = 1;

LAB133:    memset(t18, 0, 8);
    t16 = (t12 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t16) != 0)
        goto LAB137;

LAB138:    t19 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB139;

LAB140:    memcpy(t39, t18, 8);

LAB141:    t53 = (t39 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB154;

LAB155:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t12, 0, 8);
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
        goto LAB160;

LAB157:    if (t34 != 0)
        goto LAB159;

LAB158:    *((unsigned int *)t12) = 1;

LAB160:    memset(t18, 0, 8);
    t15 = (t12 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t12);
    t42 = (t41 & t40);
    t46 = (t42 & 1U);
    if (t46 != 0)
        goto LAB161;

LAB162:    if (*((unsigned int *)t15) != 0)
        goto LAB163;

LAB164:    t17 = (t18 + 4);
    t47 = *((unsigned int *)t18);
    t48 = (!(t47));
    t49 = *((unsigned int *)t17);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB165;

LAB166:    memcpy(t39, t18, 8);

LAB167:    t45 = (t39 + 4);
    t96 = *((unsigned int *)t45);
    t97 = (~(t96));
    t98 = *((unsigned int *)t39);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB179;

LAB180:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng8)));
    memcpy(t12, t2, 8);
    t3 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t3, t12, 0, 0, 32, 0LL);

LAB181:
LAB156:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t12, 0, 8);
    t5 = (t3 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB183;

LAB182:    t11 = (t2 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB183;

LAB186:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB185;

LAB184:    *((unsigned int *)t12) = 1;

LAB185:    memset(t18, 0, 8);
    t15 = (t12 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB187;

LAB188:    if (*((unsigned int *)t15) != 0)
        goto LAB189;

LAB190:    t17 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t17);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB191;

LAB192:    memcpy(t39, t18, 8);

LAB193:    t45 = (t39 + 4);
    t72 = *((unsigned int *)t45);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB206;

LAB207:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB208:    goto LAB22;

LAB18:    xsi_set_current_line(69, ng0);

LAB209:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 2048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t12, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB211;

LAB210:    t13 = (t3 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB211;

LAB214:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB213;

LAB212:    *((unsigned int *)t12) = 1;

LAB213:    memset(t18, 0, 8);
    t16 = (t12 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB215;

LAB216:    if (*((unsigned int *)t16) != 0)
        goto LAB217;

LAB218:    t19 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB219;

LAB220:    memcpy(t39, t18, 8);

LAB221:    t53 = (t39 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB234;

LAB235:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t12, 0, 8);
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
        goto LAB240;

LAB237:    if (t34 != 0)
        goto LAB239;

LAB238:    *((unsigned int *)t12) = 1;

LAB240:    memset(t18, 0, 8);
    t15 = (t12 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t12);
    t42 = (t41 & t40);
    t46 = (t42 & 1U);
    if (t46 != 0)
        goto LAB241;

LAB242:    if (*((unsigned int *)t15) != 0)
        goto LAB243;

LAB244:    t17 = (t18 + 4);
    t47 = *((unsigned int *)t18);
    t48 = (!(t47));
    t49 = *((unsigned int *)t17);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB245;

LAB246:    memcpy(t39, t18, 8);

LAB247:    t45 = (t39 + 4);
    t96 = *((unsigned int *)t45);
    t97 = (~(t96));
    t98 = *((unsigned int *)t39);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB259;

LAB260:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng8)));
    memcpy(t12, t2, 8);
    t3 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t3, t12, 0, 0, 32, 0LL);

LAB261:
LAB236:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB22;

LAB20:    xsi_set_current_line(76, ng0);

LAB262:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng8)));
    memcpy(t12, t3, 8);
    t5 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t5, t12, 0, 0, 32, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB22;

LAB25:    t17 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB27;

LAB29:    *((unsigned int *)t18) = 1;
    goto LAB32;

LAB31:    t20 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB32;

LAB33:    t25 = (t0 + 2048U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng4)));
    memset(t27, 0, 8);
    t28 = (t26 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB37;

LAB36:    t29 = (t25 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t26) > *((unsigned int *)t25))
        goto LAB39;

LAB38:    *((unsigned int *)t27) = 1;

LAB39:    memset(t31, 0, 8);
    t32 = (t27 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t32) != 0)
        goto LAB43;

LAB44:    t40 = *((unsigned int *)t18);
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
        goto LAB45;

LAB46:
LAB47:    goto LAB35;

LAB37:    t30 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB39;

LAB41:    *((unsigned int *)t31) = 1;
    goto LAB44;

LAB43:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB44;

LAB45:    t51 = *((unsigned int *)t39);
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
    goto LAB47;

LAB48:    xsi_set_current_line(48, ng0);
    t77 = ((char*)((ng5)));
    memcpy(t78, t77, 8);
    t79 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t79, t78, 0, 0, 32, 0LL);
    goto LAB50;

LAB53:    t13 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t18) = 1;
    goto LAB58;

LAB57:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB58;

LAB59:    t19 = (t0 + 2048U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng7)));
    memset(t27, 0, 8);
    t21 = (t20 + 4);
    t25 = (t19 + 4);
    t51 = *((unsigned int *)t20);
    t52 = *((unsigned int *)t19);
    t55 = (t51 ^ t52);
    t56 = *((unsigned int *)t21);
    t57 = *((unsigned int *)t25);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t21);
    t61 = *((unsigned int *)t25);
    t62 = (t60 | t61);
    t65 = (~(t62));
    t66 = (t59 & t65);
    if (t66 != 0)
        goto LAB65;

LAB62:    if (t62 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t27) = 1;

LAB65:    memset(t31, 0, 8);
    t28 = (t27 + 4);
    t67 = *((unsigned int *)t28);
    t68 = (~(t67));
    t69 = *((unsigned int *)t27);
    t70 = (t69 & t68);
    t72 = (t70 & 1U);
    if (t72 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t28) != 0)
        goto LAB68;

LAB69:    t73 = *((unsigned int *)t18);
    t74 = *((unsigned int *)t31);
    t75 = (t73 | t74);
    *((unsigned int *)t39) = t75;
    t30 = (t18 + 4);
    t32 = (t31 + 4);
    t38 = (t39 + 4);
    t76 = *((unsigned int *)t30);
    t80 = *((unsigned int *)t32);
    t81 = (t76 | t80);
    *((unsigned int *)t38) = t81;
    t82 = *((unsigned int *)t38);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB70;

LAB71:
LAB72:    goto LAB61;

LAB64:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB65;

LAB66:    *((unsigned int *)t31) = 1;
    goto LAB69;

LAB68:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB69;

LAB70:    t84 = *((unsigned int *)t39);
    t85 = *((unsigned int *)t38);
    *((unsigned int *)t39) = (t84 | t85);
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t86 = *((unsigned int *)t43);
    t87 = (~(t86));
    t88 = *((unsigned int *)t18);
    t14 = (t88 & t87);
    t89 = *((unsigned int *)t44);
    t90 = (~(t89));
    t91 = *((unsigned int *)t31);
    t63 = (t91 & t90);
    t92 = (~(t14));
    t93 = (~(t63));
    t94 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t94 & t92);
    t95 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t95 & t93);
    goto LAB72;

LAB73:    xsi_set_current_line(49, ng0);
    t53 = ((char*)((ng8)));
    memcpy(t78, t53, 8);
    t54 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t54, t78, 0, 0, 32, 0LL);
    goto LAB75;

LAB78:    t15 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB80;

LAB82:    *((unsigned int *)t18) = 1;
    goto LAB85;

LAB84:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB85;

LAB86:    t20 = (t0 + 2048U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng4)));
    memset(t27, 0, 8);
    t25 = (t21 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB90;

LAB89:    t26 = (t20 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB90;

LAB93:    if (*((unsigned int *)t21) > *((unsigned int *)t20))
        goto LAB92;

LAB91:    *((unsigned int *)t27) = 1;

LAB92:    memset(t31, 0, 8);
    t29 = (t27 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t29) != 0)
        goto LAB96;

LAB97:    t40 = *((unsigned int *)t18);
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
        goto LAB98;

LAB99:
LAB100:    goto LAB88;

LAB90:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB92;

LAB94:    *((unsigned int *)t31) = 1;
    goto LAB97;

LAB96:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB97;

LAB98:    t51 = *((unsigned int *)t39);
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
    goto LAB100;

LAB101:    xsi_set_current_line(55, ng0);
    t54 = ((char*)((ng8)));
    memcpy(t78, t54, 8);
    t71 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t71, t78, 0, 0, 32, 0LL);
    goto LAB103;

LAB106:    t13 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB107;

LAB108:    *((unsigned int *)t18) = 1;
    goto LAB111;

LAB110:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB111;

LAB112:    t19 = (t0 + 2048U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng7)));
    memset(t27, 0, 8);
    t21 = (t20 + 4);
    t25 = (t19 + 4);
    t51 = *((unsigned int *)t20);
    t52 = *((unsigned int *)t19);
    t55 = (t51 ^ t52);
    t56 = *((unsigned int *)t21);
    t57 = *((unsigned int *)t25);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t21);
    t61 = *((unsigned int *)t25);
    t62 = (t60 | t61);
    t65 = (~(t62));
    t66 = (t59 & t65);
    if (t66 != 0)
        goto LAB118;

LAB115:    if (t62 != 0)
        goto LAB117;

LAB116:    *((unsigned int *)t27) = 1;

LAB118:    memset(t31, 0, 8);
    t28 = (t27 + 4);
    t67 = *((unsigned int *)t28);
    t68 = (~(t67));
    t69 = *((unsigned int *)t27);
    t70 = (t69 & t68);
    t72 = (t70 & 1U);
    if (t72 != 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t28) != 0)
        goto LAB121;

LAB122:    t73 = *((unsigned int *)t18);
    t74 = *((unsigned int *)t31);
    t75 = (t73 | t74);
    *((unsigned int *)t39) = t75;
    t30 = (t18 + 4);
    t32 = (t31 + 4);
    t38 = (t39 + 4);
    t76 = *((unsigned int *)t30);
    t80 = *((unsigned int *)t32);
    t81 = (t76 | t80);
    *((unsigned int *)t38) = t81;
    t82 = *((unsigned int *)t38);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB123;

LAB124:
LAB125:    goto LAB114;

LAB117:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB118;

LAB119:    *((unsigned int *)t31) = 1;
    goto LAB122;

LAB121:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB122;

LAB123:    t84 = *((unsigned int *)t39);
    t85 = *((unsigned int *)t38);
    *((unsigned int *)t39) = (t84 | t85);
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t86 = *((unsigned int *)t43);
    t87 = (~(t86));
    t88 = *((unsigned int *)t18);
    t14 = (t88 & t87);
    t89 = *((unsigned int *)t44);
    t90 = (~(t89));
    t91 = *((unsigned int *)t31);
    t63 = (t91 & t90);
    t92 = (~(t14));
    t93 = (~(t63));
    t94 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t94 & t92);
    t95 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t95 & t93);
    goto LAB125;

LAB126:    xsi_set_current_line(56, ng0);
    t53 = ((char*)((ng9)));
    memcpy(t78, t53, 8);
    t54 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t54, t78, 0, 0, 32, 0LL);
    goto LAB128;

LAB131:    t15 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB133;

LAB135:    *((unsigned int *)t18) = 1;
    goto LAB138;

LAB137:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB138;

LAB139:    t20 = (t0 + 2048U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng4)));
    memset(t27, 0, 8);
    t25 = (t21 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB143;

LAB142:    t26 = (t20 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB143;

LAB146:    if (*((unsigned int *)t21) > *((unsigned int *)t20))
        goto LAB145;

LAB144:    *((unsigned int *)t27) = 1;

LAB145:    memset(t31, 0, 8);
    t29 = (t27 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB147;

LAB148:    if (*((unsigned int *)t29) != 0)
        goto LAB149;

LAB150:    t40 = *((unsigned int *)t18);
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
        goto LAB151;

LAB152:
LAB153:    goto LAB141;

LAB143:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB145;

LAB147:    *((unsigned int *)t31) = 1;
    goto LAB150;

LAB149:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB150;

LAB151:    t51 = *((unsigned int *)t39);
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
    goto LAB153;

LAB154:    xsi_set_current_line(62, ng0);
    t54 = ((char*)((ng10)));
    memcpy(t78, t54, 8);
    t71 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t71, t78, 0, 0, 32, 0LL);
    goto LAB156;

LAB159:    t13 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB160;

LAB161:    *((unsigned int *)t18) = 1;
    goto LAB164;

LAB163:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB164;

LAB165:    t19 = (t0 + 2048U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng7)));
    memset(t27, 0, 8);
    t21 = (t20 + 4);
    t25 = (t19 + 4);
    t51 = *((unsigned int *)t20);
    t52 = *((unsigned int *)t19);
    t55 = (t51 ^ t52);
    t56 = *((unsigned int *)t21);
    t57 = *((unsigned int *)t25);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t21);
    t61 = *((unsigned int *)t25);
    t62 = (t60 | t61);
    t65 = (~(t62));
    t66 = (t59 & t65);
    if (t66 != 0)
        goto LAB171;

LAB168:    if (t62 != 0)
        goto LAB170;

LAB169:    *((unsigned int *)t27) = 1;

LAB171:    memset(t31, 0, 8);
    t28 = (t27 + 4);
    t67 = *((unsigned int *)t28);
    t68 = (~(t67));
    t69 = *((unsigned int *)t27);
    t70 = (t69 & t68);
    t72 = (t70 & 1U);
    if (t72 != 0)
        goto LAB172;

LAB173:    if (*((unsigned int *)t28) != 0)
        goto LAB174;

LAB175:    t73 = *((unsigned int *)t18);
    t74 = *((unsigned int *)t31);
    t75 = (t73 | t74);
    *((unsigned int *)t39) = t75;
    t30 = (t18 + 4);
    t32 = (t31 + 4);
    t38 = (t39 + 4);
    t76 = *((unsigned int *)t30);
    t80 = *((unsigned int *)t32);
    t81 = (t76 | t80);
    *((unsigned int *)t38) = t81;
    t82 = *((unsigned int *)t38);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB176;

LAB177:
LAB178:    goto LAB167;

LAB170:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB171;

LAB172:    *((unsigned int *)t31) = 1;
    goto LAB175;

LAB174:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB175;

LAB176:    t84 = *((unsigned int *)t39);
    t85 = *((unsigned int *)t38);
    *((unsigned int *)t39) = (t84 | t85);
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t86 = *((unsigned int *)t43);
    t87 = (~(t86));
    t88 = *((unsigned int *)t18);
    t14 = (t88 & t87);
    t89 = *((unsigned int *)t44);
    t90 = (~(t89));
    t91 = *((unsigned int *)t31);
    t63 = (t91 & t90);
    t92 = (~(t14));
    t93 = (~(t63));
    t94 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t94 & t92);
    t95 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t95 & t93);
    goto LAB178;

LAB179:    xsi_set_current_line(63, ng0);
    t53 = ((char*)((ng8)));
    memcpy(t78, t53, 8);
    t54 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t54, t78, 0, 0, 32, 0LL);
    goto LAB181;

LAB183:    t13 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB185;

LAB187:    *((unsigned int *)t18) = 1;
    goto LAB190;

LAB189:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB190;

LAB191:    t19 = (t0 + 2048U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng4)));
    memset(t27, 0, 8);
    t21 = (t20 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB195;

LAB194:    t25 = (t19 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB195;

LAB198:    if (*((unsigned int *)t20) > *((unsigned int *)t19))
        goto LAB197;

LAB196:    *((unsigned int *)t27) = 1;

LAB197:    memset(t31, 0, 8);
    t28 = (t27 + 4);
    t33 = *((unsigned int *)t28);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB199;

LAB200:    if (*((unsigned int *)t28) != 0)
        goto LAB201;

LAB202:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t30 = (t18 + 4);
    t32 = (t31 + 4);
    t38 = (t39 + 4);
    t46 = *((unsigned int *)t30);
    t47 = *((unsigned int *)t32);
    t48 = (t46 | t47);
    *((unsigned int *)t38) = t48;
    t49 = *((unsigned int *)t38);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB203;

LAB204:
LAB205:    goto LAB193;

LAB195:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB197;

LAB199:    *((unsigned int *)t31) = 1;
    goto LAB202;

LAB201:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB202;

LAB203:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t38);
    *((unsigned int *)t39) = (t51 | t52);
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t43);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t44);
    t62 = (~(t61));
    t14 = (t56 & t58);
    t63 = (t60 & t62);
    t65 = (~(t14));
    t66 = (~(t63));
    t67 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB205;

LAB206:    xsi_set_current_line(65, ng0);
    t53 = ((char*)((ng11)));
    t54 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t54, t53, 0, 0, 1, 0LL);
    goto LAB208;

LAB211:    t15 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB213;

LAB215:    *((unsigned int *)t18) = 1;
    goto LAB218;

LAB217:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB218;

LAB219:    t20 = (t0 + 2048U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng4)));
    memset(t27, 0, 8);
    t25 = (t21 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB223;

LAB222:    t26 = (t20 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB223;

LAB226:    if (*((unsigned int *)t21) > *((unsigned int *)t20))
        goto LAB225;

LAB224:    *((unsigned int *)t27) = 1;

LAB225:    memset(t31, 0, 8);
    t29 = (t27 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB227;

LAB228:    if (*((unsigned int *)t29) != 0)
        goto LAB229;

LAB230:    t40 = *((unsigned int *)t18);
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
        goto LAB231;

LAB232:
LAB233:    goto LAB221;

LAB223:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB225;

LAB227:    *((unsigned int *)t31) = 1;
    goto LAB230;

LAB229:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB230;

LAB231:    t51 = *((unsigned int *)t39);
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
    goto LAB233;

LAB234:    xsi_set_current_line(70, ng0);
    t54 = ((char*)((ng8)));
    memcpy(t78, t54, 8);
    t71 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t71, t78, 0, 0, 32, 0LL);
    goto LAB236;

LAB239:    t13 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB240;

LAB241:    *((unsigned int *)t18) = 1;
    goto LAB244;

LAB243:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB244;

LAB245:    t19 = (t0 + 2048U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng7)));
    memset(t27, 0, 8);
    t21 = (t20 + 4);
    t25 = (t19 + 4);
    t51 = *((unsigned int *)t20);
    t52 = *((unsigned int *)t19);
    t55 = (t51 ^ t52);
    t56 = *((unsigned int *)t21);
    t57 = *((unsigned int *)t25);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t21);
    t61 = *((unsigned int *)t25);
    t62 = (t60 | t61);
    t65 = (~(t62));
    t66 = (t59 & t65);
    if (t66 != 0)
        goto LAB251;

LAB248:    if (t62 != 0)
        goto LAB250;

LAB249:    *((unsigned int *)t27) = 1;

LAB251:    memset(t31, 0, 8);
    t28 = (t27 + 4);
    t67 = *((unsigned int *)t28);
    t68 = (~(t67));
    t69 = *((unsigned int *)t27);
    t70 = (t69 & t68);
    t72 = (t70 & 1U);
    if (t72 != 0)
        goto LAB252;

LAB253:    if (*((unsigned int *)t28) != 0)
        goto LAB254;

LAB255:    t73 = *((unsigned int *)t18);
    t74 = *((unsigned int *)t31);
    t75 = (t73 | t74);
    *((unsigned int *)t39) = t75;
    t30 = (t18 + 4);
    t32 = (t31 + 4);
    t38 = (t39 + 4);
    t76 = *((unsigned int *)t30);
    t80 = *((unsigned int *)t32);
    t81 = (t76 | t80);
    *((unsigned int *)t38) = t81;
    t82 = *((unsigned int *)t38);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB256;

LAB257:
LAB258:    goto LAB247;

LAB250:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB251;

LAB252:    *((unsigned int *)t31) = 1;
    goto LAB255;

LAB254:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB255;

LAB256:    t84 = *((unsigned int *)t39);
    t85 = *((unsigned int *)t38);
    *((unsigned int *)t39) = (t84 | t85);
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t86 = *((unsigned int *)t43);
    t87 = (~(t86));
    t88 = *((unsigned int *)t18);
    t14 = (t88 & t87);
    t89 = *((unsigned int *)t44);
    t90 = (~(t89));
    t91 = *((unsigned int *)t31);
    t63 = (t91 & t90);
    t92 = (~(t14));
    t93 = (~(t63));
    t94 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t94 & t92);
    t95 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t95 & t93);
    goto LAB258;

LAB259:    xsi_set_current_line(71, ng0);
    t53 = ((char*)((ng9)));
    memcpy(t78, t53, 8);
    t54 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t54, t78, 0, 0, 32, 0LL);
    goto LAB261;

}


extern void work_m_00000000000913593805_4180013079_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Always_39_1};
	xsi_register_didat("work_m_00000000000913593805_4180013079", "isim/stringtest_isim_beh.exe.sim/work/m_00000000000913593805_4180013079.didat");
	xsi_register_executes(pe);
}
