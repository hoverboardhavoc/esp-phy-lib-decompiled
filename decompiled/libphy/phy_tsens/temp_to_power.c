/*
 * Last changed at upstream commit 97a141a563a4b752f5943d0049aa691038d08613
 * https://github.com/espressif/esp-phy-lib/commit/97a141a563a4b752f5943d0049aa691038d08613
 * Upstream date: 2023-06-28 11:18:04 +0800
 * Upstream subject: h2: optimize track pll when temperature changes. fix ramp up and ramp down timing.
 * Source: libphy -> phy_tsens.o -> temp_to_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int temp_to_power(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (param_1 - param_2) * 0x10000 >> 0x10;
  uVar3 = _DAT_600a150c & 0xff;
  if (iVar2 < 1) {
    iVar1 = 4;
    if ((5 < uVar3) && (iVar1 = 3, 10 < uVar3)) {
      iVar1 = (0xd < uVar3) + 2;
    }
  }
  else {
    iVar1 = 5;
    if ((4 < uVar3) && (iVar1 = 3, 7 < uVar3)) {
      iVar1 = 2;
    }
  }
  return (int)(char)(iVar2 / iVar1);
}

