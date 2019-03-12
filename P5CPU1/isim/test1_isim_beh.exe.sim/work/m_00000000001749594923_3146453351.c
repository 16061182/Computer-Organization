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
static const char *ng0 = "E:/ISEproject/P5CPU1/npc.v";
static int ng1[] = {4, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {8U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {4U, 0U};
static int ng7[] = {14, 0};



static void Cont_31_0(char *t0)
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

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 3672);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 3576);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_32_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t31[8];
    char t43[8];
    char t54[8];
    char t70[8];
    char t78[8];
    char t127[8];
    char t128[8];
    char t129[8];
    char t139[8];
    char t155[8];
    char t168[8];
    char t179[8];
    char t195[8];
    char t203[8];
    char t242[8];
    char t244[8];
    char t254[8];
    char t268[8];
    char t269[8];
    char t270[8];
    char t281[8];
    char t297[8];
    char t311[8];
    char t318[8];
    char t363[8];
    char t364[8];
    char t374[8];
    char t378[8];
    char t386[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
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
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t169;
    char *t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    char *t180;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    char *t208;
    char *t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;
    char *t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t237;
    char *t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    char *t243;
    char *t245;
    char *t246;
    char *t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    char *t255;
    char *t256;
    char *t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    char *t271;
    char *t272;
    char *t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    char *t280;
    char *t282;
    char *t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    char *t296;
    char *t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    char *t304;
    char *t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    char *t309;
    char *t310;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    char *t317;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    char *t322;
    char *t323;
    char *t324;
    unsigned int t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    char *t332;
    char *t333;
    unsigned int t334;
    unsigned int t335;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    unsigned int t339;
    unsigned int t340;
    unsigned int t341;
    int t342;
    int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    unsigned int t348;
    unsigned int t349;
    char *t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    unsigned int t354;
    unsigned int t355;
    char *t356;
    char *t357;
    unsigned int t358;
    unsigned int t359;
    unsigned int t360;
    char *t361;
    char *t362;
    char *t365;
    char *t366;
    char *t367;
    unsigned int t368;
    unsigned int t369;
    unsigned int t370;
    unsigned int t371;
    unsigned int t372;
    unsigned int t373;
    char *t375;
    char *t376;
    char *t377;
    char *t379;
    unsigned int t380;
    unsigned int t381;
    unsigned int t382;
    unsigned int t383;
    unsigned int t384;
    unsigned int t385;
    unsigned int t387;
    unsigned int t388;
    unsigned int t389;
    unsigned int t390;
    char *t391;
    char *t392;
    char *t393;
    char *t394;
    char *t395;
    char *t396;
    char *t397;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 26);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t31, 0, 8);
    t32 = (t15 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t32) != 0)
        goto LAB10;

LAB11:    t39 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t39);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB12;

LAB13:    memcpy(t78, t31, 8);

LAB14:    memset(t4, 0, 8);
    t110 = (t78 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t78);
    t114 = (t113 & t112);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t110) != 0)
        goto LAB28;

LAB29:    t117 = (t4 + 4);
    t118 = *((unsigned int *)t4);
    t119 = *((unsigned int *)t117);
    t120 = (t118 || t119);
    if (t120 > 0)
        goto LAB30;

LAB31:    t123 = *((unsigned int *)t4);
    t124 = (~(t123));
    t125 = *((unsigned int *)t117);
    t126 = (t124 || t125);
    if (t126 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t117) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t4) > 0)
        goto LAB36;

LAB37:    memcpy(t3, t127, 8);

LAB38:    t391 = (t0 + 3736);
    t393 = (t391 + 56U);
    t394 = *((char **)t393);
    t395 = (t394 + 56U);
    t396 = *((char **)t395);
    memcpy(t396, t3, 8);
    xsi_driver_vfirst_trans(t391, 0, 31);
    t397 = (t0 + 3592);
    *((int *)t397) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB10:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB11;

LAB12:    t44 = (t0 + 1048U);
    t45 = *((char **)t44);
    memset(t43, 0, 8);
    t44 = (t43 + 4);
    t46 = (t45 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (t47 >> 0);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 0);
    *((unsigned int *)t44) = t50;
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 63U);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 63U);
    t53 = ((char*)((ng3)));
    memset(t54, 0, 8);
    t55 = (t43 + 4);
    t56 = (t53 + 4);
    t57 = *((unsigned int *)t43);
    t58 = *((unsigned int *)t53);
    t59 = (t57 ^ t58);
    t60 = *((unsigned int *)t55);
    t61 = *((unsigned int *)t56);
    t62 = (t60 ^ t61);
    t63 = (t59 | t62);
    t64 = *((unsigned int *)t55);
    t65 = *((unsigned int *)t56);
    t66 = (t64 | t65);
    t67 = (~(t66));
    t68 = (t63 & t67);
    if (t68 != 0)
        goto LAB18;

LAB15:    if (t66 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t54) = 1;

LAB18:    memset(t70, 0, 8);
    t71 = (t54 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t54);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t71) != 0)
        goto LAB21;

LAB22:    t79 = *((unsigned int *)t31);
    t80 = *((unsigned int *)t70);
    t81 = (t79 & t80);
    *((unsigned int *)t78) = t81;
    t82 = (t31 + 4);
    t83 = (t70 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t69 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t70) = 1;
    goto LAB22;

LAB21:    t77 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB22;

LAB23:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t31 + 4);
    t93 = (t70 + 4);
    t94 = *((unsigned int *)t31);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t98 = *((unsigned int *)t70);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (~(t100));
    t102 = (t95 & t97);
    t103 = (t99 & t101);
    t104 = (~(t102));
    t105 = (~(t103));
    t106 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t106 & t104);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t107 & t105);
    t108 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t108 & t104);
    t109 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t109 & t105);
    goto LAB25;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB28:    t116 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t116) = 1;
    goto LAB29;

LAB30:    t121 = (t0 + 1368U);
    t122 = *((char **)t121);
    goto LAB31;

LAB32:    t121 = (t0 + 1048U);
    t130 = *((char **)t121);
    memset(t129, 0, 8);
    t121 = (t129 + 4);
    t131 = (t130 + 4);
    t132 = *((unsigned int *)t130);
    t133 = (t132 >> 26);
    *((unsigned int *)t129) = t133;
    t134 = *((unsigned int *)t131);
    t135 = (t134 >> 26);
    *((unsigned int *)t121) = t135;
    t136 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t136 & 63U);
    t137 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t137 & 63U);
    t138 = ((char*)((ng4)));
    memset(t139, 0, 8);
    t140 = (t129 + 4);
    t141 = (t138 + 4);
    t142 = *((unsigned int *)t129);
    t143 = *((unsigned int *)t138);
    t144 = (t142 ^ t143);
    t145 = *((unsigned int *)t140);
    t146 = *((unsigned int *)t141);
    t147 = (t145 ^ t146);
    t148 = (t144 | t147);
    t149 = *((unsigned int *)t140);
    t150 = *((unsigned int *)t141);
    t151 = (t149 | t150);
    t152 = (~(t151));
    t153 = (t148 & t152);
    if (t153 != 0)
        goto LAB42;

LAB39:    if (t151 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t139) = 1;

LAB42:    memset(t155, 0, 8);
    t156 = (t139 + 4);
    t157 = *((unsigned int *)t156);
    t158 = (~(t157));
    t159 = *((unsigned int *)t139);
    t160 = (t159 & t158);
    t161 = (t160 & 1U);
    if (t161 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t156) != 0)
        goto LAB45;

LAB46:    t163 = (t155 + 4);
    t164 = *((unsigned int *)t155);
    t165 = (!(t164));
    t166 = *((unsigned int *)t163);
    t167 = (t165 || t166);
    if (t167 > 0)
        goto LAB47;

LAB48:    memcpy(t203, t155, 8);

LAB49:    memset(t128, 0, 8);
    t231 = (t203 + 4);
    t232 = *((unsigned int *)t231);
    t233 = (~(t232));
    t234 = *((unsigned int *)t203);
    t235 = (t234 & t233);
    t236 = (t235 & 1U);
    if (t236 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t231) != 0)
        goto LAB63;

LAB64:    t238 = (t128 + 4);
    t239 = *((unsigned int *)t128);
    t240 = *((unsigned int *)t238);
    t241 = (t239 || t240);
    if (t241 > 0)
        goto LAB65;

LAB66:    t264 = *((unsigned int *)t128);
    t265 = (~(t264));
    t266 = *((unsigned int *)t238);
    t267 = (t265 || t266);
    if (t267 > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t238) > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t128) > 0)
        goto LAB71;

LAB72:    memcpy(t127, t268, 8);

LAB73:    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t3, 32, t122, 32, t127, 32);
    goto LAB38;

LAB36:    memcpy(t3, t122, 8);
    goto LAB38;

LAB41:    t154 = (t139 + 4);
    *((unsigned int *)t139) = 1;
    *((unsigned int *)t154) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t155) = 1;
    goto LAB46;

LAB45:    t162 = (t155 + 4);
    *((unsigned int *)t155) = 1;
    *((unsigned int *)t162) = 1;
    goto LAB46;

LAB47:    t169 = (t0 + 1048U);
    t170 = *((char **)t169);
    memset(t168, 0, 8);
    t169 = (t168 + 4);
    t171 = (t170 + 4);
    t172 = *((unsigned int *)t170);
    t173 = (t172 >> 26);
    *((unsigned int *)t168) = t173;
    t174 = *((unsigned int *)t171);
    t175 = (t174 >> 26);
    *((unsigned int *)t169) = t175;
    t176 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t176 & 63U);
    t177 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t177 & 63U);
    t178 = ((char*)((ng5)));
    memset(t179, 0, 8);
    t180 = (t168 + 4);
    t181 = (t178 + 4);
    t182 = *((unsigned int *)t168);
    t183 = *((unsigned int *)t178);
    t184 = (t182 ^ t183);
    t185 = *((unsigned int *)t180);
    t186 = *((unsigned int *)t181);
    t187 = (t185 ^ t186);
    t188 = (t184 | t187);
    t189 = *((unsigned int *)t180);
    t190 = *((unsigned int *)t181);
    t191 = (t189 | t190);
    t192 = (~(t191));
    t193 = (t188 & t192);
    if (t193 != 0)
        goto LAB53;

LAB50:    if (t191 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t179) = 1;

LAB53:    memset(t195, 0, 8);
    t196 = (t179 + 4);
    t197 = *((unsigned int *)t196);
    t198 = (~(t197));
    t199 = *((unsigned int *)t179);
    t200 = (t199 & t198);
    t201 = (t200 & 1U);
    if (t201 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t196) != 0)
        goto LAB56;

LAB57:    t204 = *((unsigned int *)t155);
    t205 = *((unsigned int *)t195);
    t206 = (t204 | t205);
    *((unsigned int *)t203) = t206;
    t207 = (t155 + 4);
    t208 = (t195 + 4);
    t209 = (t203 + 4);
    t210 = *((unsigned int *)t207);
    t211 = *((unsigned int *)t208);
    t212 = (t210 | t211);
    *((unsigned int *)t209) = t212;
    t213 = *((unsigned int *)t209);
    t214 = (t213 != 0);
    if (t214 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB49;

LAB52:    t194 = (t179 + 4);
    *((unsigned int *)t179) = 1;
    *((unsigned int *)t194) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t195) = 1;
    goto LAB57;

LAB56:    t202 = (t195 + 4);
    *((unsigned int *)t195) = 1;
    *((unsigned int *)t202) = 1;
    goto LAB57;

LAB58:    t215 = *((unsigned int *)t203);
    t216 = *((unsigned int *)t209);
    *((unsigned int *)t203) = (t215 | t216);
    t217 = (t155 + 4);
    t218 = (t195 + 4);
    t219 = *((unsigned int *)t217);
    t220 = (~(t219));
    t221 = *((unsigned int *)t155);
    t222 = (t221 & t220);
    t223 = *((unsigned int *)t218);
    t224 = (~(t223));
    t225 = *((unsigned int *)t195);
    t226 = (t225 & t224);
    t227 = (~(t222));
    t228 = (~(t226));
    t229 = *((unsigned int *)t209);
    *((unsigned int *)t209) = (t229 & t227);
    t230 = *((unsigned int *)t209);
    *((unsigned int *)t209) = (t230 & t228);
    goto LAB60;

LAB61:    *((unsigned int *)t128) = 1;
    goto LAB64;

LAB63:    t237 = (t128 + 4);
    *((unsigned int *)t128) = 1;
    *((unsigned int *)t237) = 1;
    goto LAB64;

LAB65:    t243 = ((char*)((ng2)));
    t245 = (t0 + 1048U);
    t246 = *((char **)t245);
    memset(t244, 0, 8);
    t245 = (t244 + 4);
    t247 = (t246 + 4);
    t248 = *((unsigned int *)t246);
    t249 = (t248 >> 0);
    *((unsigned int *)t244) = t249;
    t250 = *((unsigned int *)t247);
    t251 = (t250 >> 0);
    *((unsigned int *)t245) = t251;
    t252 = *((unsigned int *)t244);
    *((unsigned int *)t244) = (t252 & 67108863U);
    t253 = *((unsigned int *)t245);
    *((unsigned int *)t245) = (t253 & 67108863U);
    t255 = (t0 + 1848U);
    t256 = *((char **)t255);
    memset(t254, 0, 8);
    t255 = (t254 + 4);
    t257 = (t256 + 4);
    t258 = *((unsigned int *)t256);
    t259 = (t258 >> 28);
    *((unsigned int *)t254) = t259;
    t260 = *((unsigned int *)t257);
    t261 = (t260 >> 28);
    *((unsigned int *)t255) = t261;
    t262 = *((unsigned int *)t254);
    *((unsigned int *)t254) = (t262 & 15U);
    t263 = *((unsigned int *)t255);
    *((unsigned int *)t255) = (t263 & 15U);
    xsi_vlogtype_concat(t242, 32, 32, 3U, t254, 4, t244, 26, t243, 2);
    goto LAB66;

LAB67:    t271 = (t0 + 1048U);
    t272 = *((char **)t271);
    memset(t270, 0, 8);
    t271 = (t270 + 4);
    t273 = (t272 + 4);
    t274 = *((unsigned int *)t272);
    t275 = (t274 >> 26);
    *((unsigned int *)t270) = t275;
    t276 = *((unsigned int *)t273);
    t277 = (t276 >> 26);
    *((unsigned int *)t271) = t277;
    t278 = *((unsigned int *)t270);
    *((unsigned int *)t270) = (t278 & 63U);
    t279 = *((unsigned int *)t271);
    *((unsigned int *)t271) = (t279 & 63U);
    t280 = ((char*)((ng6)));
    memset(t281, 0, 8);
    t282 = (t270 + 4);
    t283 = (t280 + 4);
    t284 = *((unsigned int *)t270);
    t285 = *((unsigned int *)t280);
    t286 = (t284 ^ t285);
    t287 = *((unsigned int *)t282);
    t288 = *((unsigned int *)t283);
    t289 = (t287 ^ t288);
    t290 = (t286 | t289);
    t291 = *((unsigned int *)t282);
    t292 = *((unsigned int *)t283);
    t293 = (t291 | t292);
    t294 = (~(t293));
    t295 = (t290 & t294);
    if (t295 != 0)
        goto LAB77;

LAB74:    if (t293 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t281) = 1;

LAB77:    memset(t297, 0, 8);
    t298 = (t281 + 4);
    t299 = *((unsigned int *)t298);
    t300 = (~(t299));
    t301 = *((unsigned int *)t281);
    t302 = (t301 & t300);
    t303 = (t302 & 1U);
    if (t303 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t298) != 0)
        goto LAB80;

LAB81:    t305 = (t297 + 4);
    t306 = *((unsigned int *)t297);
    t307 = *((unsigned int *)t305);
    t308 = (t306 || t307);
    if (t308 > 0)
        goto LAB82;

LAB83:    memcpy(t318, t297, 8);

LAB84:    memset(t269, 0, 8);
    t350 = (t318 + 4);
    t351 = *((unsigned int *)t350);
    t352 = (~(t351));
    t353 = *((unsigned int *)t318);
    t354 = (t353 & t352);
    t355 = (t354 & 1U);
    if (t355 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t350) != 0)
        goto LAB94;

LAB95:    t357 = (t269 + 4);
    t358 = *((unsigned int *)t269);
    t359 = *((unsigned int *)t357);
    t360 = (t358 || t359);
    if (t360 > 0)
        goto LAB96;

LAB97:    t387 = *((unsigned int *)t269);
    t388 = (~(t387));
    t389 = *((unsigned int *)t357);
    t390 = (t388 || t389);
    if (t390 > 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t357) > 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t269) > 0)
        goto LAB102;

LAB103:    memcpy(t268, t392, 8);

LAB104:    goto LAB68;

LAB69:    xsi_vlog_unsigned_bit_combine(t127, 32, t242, 32, t268, 32);
    goto LAB73;

LAB71:    memcpy(t127, t242, 8);
    goto LAB73;

LAB76:    t296 = (t281 + 4);
    *((unsigned int *)t281) = 1;
    *((unsigned int *)t296) = 1;
    goto LAB77;

LAB78:    *((unsigned int *)t297) = 1;
    goto LAB81;

LAB80:    t304 = (t297 + 4);
    *((unsigned int *)t297) = 1;
    *((unsigned int *)t304) = 1;
    goto LAB81;

LAB82:    t309 = (t0 + 1528U);
    t310 = *((char **)t309);
    memset(t311, 0, 8);
    t309 = (t310 + 4);
    t312 = *((unsigned int *)t309);
    t313 = (~(t312));
    t314 = *((unsigned int *)t310);
    t315 = (t314 & t313);
    t316 = (t315 & 1U);
    if (t316 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t309) != 0)
        goto LAB87;

LAB88:    t319 = *((unsigned int *)t297);
    t320 = *((unsigned int *)t311);
    t321 = (t319 & t320);
    *((unsigned int *)t318) = t321;
    t322 = (t297 + 4);
    t323 = (t311 + 4);
    t324 = (t318 + 4);
    t325 = *((unsigned int *)t322);
    t326 = *((unsigned int *)t323);
    t327 = (t325 | t326);
    *((unsigned int *)t324) = t327;
    t328 = *((unsigned int *)t324);
    t329 = (t328 != 0);
    if (t329 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB84;

LAB85:    *((unsigned int *)t311) = 1;
    goto LAB88;

LAB87:    t317 = (t311 + 4);
    *((unsigned int *)t311) = 1;
    *((unsigned int *)t317) = 1;
    goto LAB88;

LAB89:    t330 = *((unsigned int *)t318);
    t331 = *((unsigned int *)t324);
    *((unsigned int *)t318) = (t330 | t331);
    t332 = (t297 + 4);
    t333 = (t311 + 4);
    t334 = *((unsigned int *)t297);
    t335 = (~(t334));
    t336 = *((unsigned int *)t332);
    t337 = (~(t336));
    t338 = *((unsigned int *)t311);
    t339 = (~(t338));
    t340 = *((unsigned int *)t333);
    t341 = (~(t340));
    t342 = (t335 & t337);
    t343 = (t339 & t341);
    t344 = (~(t342));
    t345 = (~(t343));
    t346 = *((unsigned int *)t324);
    *((unsigned int *)t324) = (t346 & t344);
    t347 = *((unsigned int *)t324);
    *((unsigned int *)t324) = (t347 & t345);
    t348 = *((unsigned int *)t318);
    *((unsigned int *)t318) = (t348 & t344);
    t349 = *((unsigned int *)t318);
    *((unsigned int *)t318) = (t349 & t345);
    goto LAB91;

LAB92:    *((unsigned int *)t269) = 1;
    goto LAB95;

LAB94:    t356 = (t269 + 4);
    *((unsigned int *)t269) = 1;
    *((unsigned int *)t356) = 1;
    goto LAB95;

LAB96:    t361 = (t0 + 1208U);
    t362 = *((char **)t361);
    t361 = ((char*)((ng2)));
    t365 = (t0 + 1048U);
    t366 = *((char **)t365);
    memset(t364, 0, 8);
    t365 = (t364 + 4);
    t367 = (t366 + 4);
    t368 = *((unsigned int *)t366);
    t369 = (t368 >> 0);
    *((unsigned int *)t364) = t369;
    t370 = *((unsigned int *)t367);
    t371 = (t370 >> 0);
    *((unsigned int *)t365) = t371;
    t372 = *((unsigned int *)t364);
    *((unsigned int *)t364) = (t372 & 65535U);
    t373 = *((unsigned int *)t365);
    *((unsigned int *)t365) = (t373 & 65535U);
    t375 = ((char*)((ng7)));
    t376 = (t0 + 1048U);
    t377 = *((char **)t376);
    memset(t378, 0, 8);
    t376 = (t378 + 4);
    t379 = (t377 + 4);
    t380 = *((unsigned int *)t377);
    t381 = (t380 >> 15);
    t382 = (t381 & 1);
    *((unsigned int *)t378) = t382;
    t383 = *((unsigned int *)t379);
    t384 = (t383 >> 15);
    t385 = (t384 & 1);
    *((unsigned int *)t376) = t385;
    xsi_vlog_mul_concat(t374, 14, 1, t375, 1U, t378, 1);
    xsi_vlogtype_concat(t363, 32, 32, 3U, t374, 14, t364, 16, t361, 2);
    memset(t386, 0, 8);
    xsi_vlog_unsigned_add(t386, 32, t362, 32, t363, 32);
    goto LAB97;

LAB98:    t391 = (t0 + 1208U);
    t392 = *((char **)t391);
    goto LAB99;

LAB100:    xsi_vlog_unsigned_bit_combine(t268, 32, t386, 32, t392, 32);
    goto LAB104;

LAB102:    memcpy(t268, t386, 8);
    goto LAB104;

}


extern void work_m_00000000001749594923_3146453351_init()
{
	static char *pe[] = {(void *)Cont_31_0,(void *)Cont_32_1};
	xsi_register_didat("work_m_00000000001749594923_3146453351", "isim/test1_isim_beh.exe.sim/work/m_00000000001749594923_3146453351.didat");
	xsi_register_executes(pe);
}
