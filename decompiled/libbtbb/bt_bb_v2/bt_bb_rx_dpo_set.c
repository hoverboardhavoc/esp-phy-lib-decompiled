/*
 * Last changed at upstream commit 1d4cd3aafa244a0adf5891f058b3519bc970d644
 * https://github.com/espressif/esp-phy-lib/commit/1d4cd3aafa244a0adf5891f058b3519bc970d644
 * Upstream date: 2025-08-01 19:50:02 +0800
 * Upstream subject: 1. fix C5ECO2 signaling test power 2. fix C5ECO2/C6ECO3/H2ECO5 coex problem
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_dpo_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_rx_dpo_set(void)

{
  int iVar1;
  uint uVar2;
  
  if (phy_param < 5) {
    _DAT_600a2038 = _DAT_600a2038 & 0xfffff87f | 0x300;
    _DAT_600a2034 = _DAT_600a2034 & 0xffff | 0x77770000;
    _DAT_600a2020 = _DAT_600a2020 & 0xfffc03c0 | 0x19c06;
    _DAT_600a2024 = _DAT_600a2024 & 0x83ffffff | 0x30000000;
    _DAT_600a2028 = _DAT_600a2028 & 0xffffffc3;
    _DAT_600a2030 = _DAT_600a2030 & 0xffffffc0;
    uVar2 = _DAT_600a28f4 & 0x20100fff | 0x500a000;
    iVar1 = -0x20000000;
  }
  else {
    _DAT_600a2034 = _DAT_600a2034 & 0xff0f00f0 | 0x606707;
    _DAT_600a203c = _DAT_600a203c & 0xf00f0fff | 0x6707000;
    _DAT_600a2024 = _DAT_600a2024 & 0xfffc0fff | 0x6000;
    _DAT_600a2038 = _DAT_600a2038 & 0xd0ffffff | 0x7000000;
    _DAT_600a2030 = _DAT_600a2030 & 0x3fffffc0;
    uVar2 = _DAT_600a28f4 & 0x500807ff | 0x2805000;
    iVar1 = -0x10000000;
  }
  _DAT_600a202c = _DAT_600a202c & 0xfffff009 | 0xdc4;
  _DAT_600a2030 = _DAT_600a2030 | 3;
  _DAT_600a28f4 = uVar2 & iVar1 - 1U;
  return;
}

