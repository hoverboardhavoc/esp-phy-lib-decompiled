/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> mac_common.o -> bt_adctrig
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_adctrig(int param_1,int param_2,undefined1 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  undefined2 in_stack_00000000;
  
  _DAT_600a4c04 = param_1 + 1U & 0x7fff | _DAT_600a4c04 & 0xfffd8000;
  _DAT_600a4c14 = _DAT_600a4c14 & 0xfe000000 | 0x4503ce;
  _DAT_60095004 = _DAT_60095004 & 0xffff83ff | 0x1000;
  if (param_2 == 0) {
    _DAT_600a20b4 = _DAT_600a20b4 & 0xfffffffe;
    _DAT_600a4c08 = _DAT_600a4c08 | 0x78000;
    goto _L108;
  }
  _DAT_600a4c04 = _DAT_600a4c04 | 0x20000;
  switch(param_2) {
  case 1:
  case 3:
    uVar2 = 0x8000;
    break;
  case 2:
    _DAT_600a4c08 = _DAT_600a4c08 & 0xfff87fff;
    goto _L124;
  case 4:
    uVar2 = 0x10000;
    break;
  case 5:
    uVar2 = 0x18000;
    break;
  case 6:
    uVar2 = 0x20000;
    break;
  case 7:
    uVar2 = 0x28000;
    DAT_60013175 = param_3;
    break;
  default:
    goto _L108;
  }
  _DAT_600a4c08 = _DAT_600a4c08 & 0xfff87fff | uVar2;
_L124:
  _DAT_600a20b4 = _DAT_600a20b4 & 0xfffffffe;
_L108:
  if (param_2 == 0) {
    _DAT_600a4c04 = _DAT_600a4c04 & 0xfff7ffff;
  }
  _DAT_600a4c04 = _DAT_600a4c04 | 0x80000000;
  iVar1 = 0x2faf081;
  do {
    uVar2 = _DAT_600a4c04 & 0x40000;
    if (param_4 == 1) {
      _DAT_600a2840 = _DAT_600a2840 & 0xffffff | param_5 << 0x18;
      ets_delay_us(in_stack_00000000);
      _DAT_600a2840 = _DAT_600a2840 & 0xffffff | param_6 << 0x18;
      ets_delay_us(in_stack_00000000);
    }
  } while ((uVar2 == 0) && (iVar1 = iVar1 + -1, iVar1 != 0));
  _DAT_600a4c04 = _DAT_600a4c04 & 0x7fffffff;
  _DAT_60095004 = _DAT_60095004 & 0xffff83ff;
  phy_printf("0x%x,0x%x,0x%x,0x%x\n",_DAT_600a4c08 & 0x3fff,0x40820000,0x10000);
  return;
}

