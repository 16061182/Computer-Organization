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
static const char *ng0 = "E:/ISEproject/P4CPU/pccal.v";
static int ng1[] = {4, 0};



static void Cont_33_0(char *t0)
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

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 4152);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 4056);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_34_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t22[8];
    char t23[8];
    char t37[8];
    char t42[8];
    char t43[8];
    char t46[8];
    char t59[8];
    char t66[8];
    char t111[8];
    char t114[8];
    char t115[8];
    char t122[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t112;
    char *t113;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2008U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t123 = (t0 + 4216);
    t124 = (t123 + 56U);
    t125 = *((char **)t124);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    memcpy(t127, t3, 8);
    xsi_driver_vfirst_trans(t123, 0, 31);
    t128 = (t0 + 4072);
    *((int *)t128) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 1368U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 1848U);
    t24 = *((char **)t16);
    memset(t23, 0, 8);
    t16 = (t24 + 4);
    t25 = *((unsigned int *)t16);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t16) != 0)
        goto LAB19;

LAB20:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB21;

LAB22:    t38 = *((unsigned int *)t23);
    t39 = (~(t38));
    t40 = *((unsigned int *)t31);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t31) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t23) > 0)
        goto LAB27;

LAB28:    memcpy(t22, t42, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t17, 32, t22, 32);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t23) = 1;
    goto LAB20;

LAB19:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB20;

LAB21:    t35 = (t0 + 1208U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng1)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_multiply(t37, 32, t36, 32, t35, 32);
    goto LAB22;

LAB23:    t44 = (t0 + 1688U);
    t45 = *((char **)t44);
    memset(t46, 0, 8);
    t44 = (t45 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (~(t47));
    t49 = *((unsigned int *)t45);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t44) != 0)
        goto LAB32;

LAB33:    t53 = (t46 + 4);
    t54 = *((unsigned int *)t46);
    t55 = *((unsigned int *)t53);
    t56 = (t54 || t55);
    if (t56 > 0)
        goto LAB34;

LAB35:    memcpy(t66, t46, 8);

LAB36:    memset(t43, 0, 8);
    t98 = (t66 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t66);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t98) != 0)
        goto LAB46;

LAB47:    t105 = (t43 + 4);
    t106 = *((unsigned int *)t43);
    t107 = *((unsigned int *)t105);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB48;

LAB49:    t116 = *((unsigned int *)t43);
    t117 = (~(t116));
    t118 = *((unsigned int *)t105);
    t119 = (t117 || t118);
    if (t119 > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t105) > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t43) > 0)
        goto LAB54;

LAB55:    memcpy(t42, t122, 8);

LAB56:    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t22, 32, t37, 32, t42, 32);
    goto LAB29;

LAB27:    memcpy(t22, t37, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t46) = 1;
    goto LAB33;

LAB32:    t52 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB33;

LAB34:    t57 = (t0 + 1528U);
    t58 = *((char **)t57);
    memset(t59, 0, 8);
    t57 = (t58 + 4);
    t60 = *((unsigned int *)t57);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t57) != 0)
        goto LAB39;

LAB40:    t67 = *((unsigned int *)t46);
    t68 = *((unsigned int *)t59);
    t69 = (t67 & t68);
    *((unsigned int *)t66) = t69;
    t70 = (t46 + 4);
    t71 = (t59 + 4);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t70);
    t74 = *((unsigned int *)t71);
    t75 = (t73 | t74);
    *((unsigned int *)t72) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB36;

LAB37:    *((unsigned int *)t59) = 1;
    goto LAB40;

LAB39:    t65 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB40;

LAB41:    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t66) = (t78 | t79);
    t80 = (t46 + 4);
    t81 = (t59 + 4);
    t82 = *((unsigned int *)t46);
    t83 = (~(t82));
    t84 = *((unsigned int *)t80);
    t85 = (~(t84));
    t86 = *((unsigned int *)t59);
    t87 = (~(t86));
    t88 = *((unsigned int *)t81);
    t89 = (~(t88));
    t90 = (t83 & t85);
    t91 = (t87 & t89);
    t92 = (~(t90));
    t93 = (~(t91));
    t94 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t94 & t92);
    t95 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t95 & t93);
    t96 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t96 & t92);
    t97 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t97 & t93);
    goto LAB43;

LAB44:    *((unsigned int *)t43) = 1;
    goto LAB47;

LAB46:    t104 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB47;

LAB48:    t109 = (t0 + 1048U);
    t110 = *((char **)t109);
    t109 = ((char*)((ng1)));
    memset(t111, 0, 8);
    xsi_vlog_unsigned_add(t111, 32, t110, 32, t109, 32);
    t112 = (t0 + 1208U);
    t113 = *((char **)t112);
    t112 = ((char*)((ng1)));
    memset(t114, 0, 8);
    xsi_vlog_unsigned_multiply(t114, 32, t113, 32, t112, 32);
    memset(t115, 0, 8);
    xsi_vlog_unsigned_add(t115, 32, t111, 32, t114, 32);
    goto LAB49;

LAB50:    t120 = (t0 + 1048U);
    t121 = *((char **)t120);
    t120 = ((char*)((ng1)));
    memset(t122, 0, 8);
    xsi_vlog_unsigned_add(t122, 32, t121, 32, t120, 32);
    goto LAB51;

LAB52:    xsi_vlog_unsigned_bit_combine(t42, 32, t115, 32, t122, 32);
    goto LAB56;

LAB54:    memcpy(t42, t115, 8);
    goto LAB56;

}


extern void work_m_00000000003048071918_1792161214_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Cont_34_1};
	xsi_register_didat("work_m_00000000003048071918_1792161214", "isim/test1_isim_beh.exe.sim/work/m_00000000003048071918_1792161214.didat");
	xsi_register_executes(pe);
}
