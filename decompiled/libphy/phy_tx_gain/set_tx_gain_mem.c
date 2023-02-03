/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_tx_gain.o -> set_tx_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_tx_gain_mem(int param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = _DAT_600a0410 >> 0x18;
  uVar3 = param_1 + uVar2;
  for (; uVar2 != (uVar3 & 0xff); uVar2 = uVar2 + 1 & 0xff) {
    uVar1 = *param_2;
    write_gain_mem(0,(uint)(uVar1 >> 0xc) << 10 | uVar1 & 0x3f | uVar1 >> 2 & 0x3c0 | 0x10100000,
                   uVar2);
    param_2 = param_2 + 1;
  }
  return;
}

