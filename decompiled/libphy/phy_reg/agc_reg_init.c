/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> agc_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 agc_reg_init(uint param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  _DAT_600a2058 = _DAT_600a2058 | 8;
  iVar2 = param_1 << 0xf;
  uVar1 = DAT_600123e9;
  DAT_600123e9 = 0x46;
  DAT_600123ea = (byte)((uint)iVar2 >> 8) | 0x23;
  DAT_600123eb = (char)((uint)iVar2 >> 0x10);
  DAT_600123ec = (char)((uint)iVar2 >> 0x18);
  _DAT_600a2848 = _DAT_600a2848 & 0xffff;
  _DAT_600a2868 = _DAT_600a2868 & 0xffff;
  _DAT_600a2850 = param_1 << 0xe | param_1 << 7 | param_1;
  _DAT_600a2840 = param_1 & 0x7f | _DAT_600a2840 & 0xffffff80;
  _DAT_600a2844 = 0x213870;
  _DAT_600a2854 = _DAT_600a2854 & 0xff83ffff;
  return uVar1;
}

