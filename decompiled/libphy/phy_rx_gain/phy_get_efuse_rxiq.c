/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_rx_gain.o -> phy_get_efuse_rxiq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_get_efuse_rxiq(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if ((_DAT_600b084c & 7) == 1) {
    bVar1 = (byte)(_DAT_600b084c >> 3) & 0x7f;
    if ((_DAT_600b084c >> 3 & 0x40) != 0) {
      bVar1 = bVar1 + 0x80;
    }
    uVar3 = _DAT_600b084c >> 10;
    *param_1 = bVar1;
    uVar2 = uVar3 & 0x7f;
    if ((uVar3 & 0x40) == 0) {
      bVar1 = (byte)uVar2;
    }
    else {
      bVar1 = (byte)((uVar2 - 0x80) * 0x1000000 >> 0x18);
    }
    param_1[1] = bVar1;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

