/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_tsens.o -> ram_temp_to_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int ram_temp_to_power(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (param_1 - param_2) * 0x10000 >> 0x10;
  if (param_3 == 0) {
    if (iVar2 < 1) {
      cVar1 = (char)(iVar2 / -0xf);
      if ('\x04' < cVar1) {
        cVar1 = '\x04';
      }
    }
    else {
      cVar1 = -(char)(iVar2 / 8);
      if ((iVar2 / 8) * -0x1000000 >> 0x18 < -8) {
        cVar1 = -8;
      }
    }
  }
  else if (iVar2 < 1) {
    cVar1 = (char)(iVar2 / 10);
  }
  else {
    cVar1 = -(char)(iVar2 / 0x10);
  }
  return (int)cVar1;
}

