/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode.o -> rw_le_init_cs
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_init_cs(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  int param_7,uint param_8)

{
  uint in_stack_00000000;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_00000018;
  
  _DAT_3ffb021c = 0xffffffff;
  _DAT_3ffb0224 = 0;
  _DAT_3ffb0228 = 0;
  _DAT_3ffb022c = 0;
  _DAT_3ffb0230 = 0;
  _DAT_3ffb0234 = 0;
  _DAT_3ffb0238 = 0;
  _DAT_3ffb023c = 0;
  _DAT_3ffb0240 = 0;
  _DAT_3ffb0244 = 0;
  _DAT_3ffb0248 = 0;
  _DAT_3ffb024c = 0;
  _DAT_3ffb0250 = 0;
  _DAT_3ffb0254 = 0;
  _DAT_3ffb0258 = 0;
  _DAT_3ffb025c = 0;
  _DAT_3ffb0260 = 0;
  _DAT_3ffb026c = 0;
  _DAT_3ffb0200 = param_1 & 0x1f;
  _DAT_3ffb0204 = param_2 << 0x10;
  _DAT_3ffb0208 = param_2 >> 0x10 | param_3 << 0x10;
  _DAT_3ffb020c =
       (param_6 & 1) << 0x12 |
       (param_5 & 1) << 0x11 | (param_4 & 1) << 0x10 | param_3 >> 0x10 & 0xff | param_7 << 0x18;
  _DAT_3ffb0210 =
       (in_stack_00000008 & 0xff) << 0x10 |
       (in_stack_00000004 & 1) << 0xf | (in_stack_00000000 & 0x1f) << 8 | param_8 & 0x3f;
  _DAT_3ffb0214 =
       (in_stack_00000014 & 0x7fff) << 0x10 |
       (in_stack_0000000c & 1) << 0xf | in_stack_00000010 & 0x3fff;
  _DAT_3ffb0218 = in_stack_00000018 << 0x10;
  _DAT_3ffb0220 = 0xc8251f;
  return;
}

