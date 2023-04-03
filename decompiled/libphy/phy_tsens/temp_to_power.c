/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
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
  
  iVar1 = (param_1 - param_2) * 0x10000 >> 0x10;
  uVar3 = _DAT_600a150c & 0xff;
  if (iVar1 < 1) {
    iVar2 = 4;
    if (0xe < uVar3) {
      iVar2 = 10;
    }
  }
  else {
    iVar2 = 4;
    if ((4 < uVar3) && (iVar2 = 6, uVar3 < 0xf)) {
      iVar2 = 3;
    }
  }
  return (int)(char)(iVar1 / iVar2);
}

