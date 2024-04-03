/*
 * Last changed at upstream commit c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * https://github.com/espressif/esp-phy-lib/commit/c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * Upstream date: 2024-04-03 16:53:14 +0800
 * Upstream subject: fix coex test wifi affect ble s8 tx problm, and c3 s3 light sleep current opt, and c3 s3 ble rx problem
 * Source: librftest -> phy_test.o -> phy_11ax_tx_mode
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_11ax_tx_mode(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar1 = param_1 + 0xa0000 >> 0x10;
  puVar2 = (uint *)Plcp1AddrGet(uVar1);
  puVar3 = (uint *)HTsigAddrGet(uVar1);
  puVar4 = (uint *)Hesig1AddrGet(uVar1);
  puVar5 = (uint *)Hesig2AddrGet(uVar1);
  if (phy_11ax_array == 0) {
    phy_11ax_hesiga1 = 0;
    phy_11ax_hesiga2 = 0;
  }
  else {
    phy_11ax_hesiga1 = param_2;
    phy_11ax_hesiga2 = param_3;
    if (param_2 == 0 && param_3 == 0) {
      phy_11ax_hesiga1 = DAT_0001196c * 0x200000 + 0xe007 + (param_1 - 0x10) * 8;
      phy_11ax_hesiga2 = 0x4000;
    }
    if (phy_11ax_array == 1) {
      *puVar5 = *puVar5 & 0xfffffbff;
      tx_nominal_pe_set(param_1 & 0xffff,(undefined2)DAT_00011968);
      *puVar2 = *puVar2 & 0xf9ffffff | 0x4000000;
      *puVar4 = phy_11ax_hesiga2 << 0x1a | phy_11ax_hesiga1 & 0x3ffffff;
      uVar1 = phy_11ax_hesiga2 >> 6 & 0x3ff | *puVar5 & 0xfffffc00;
    }
    else {
      if (phy_11ax_array != 2) {
        return;
      }
      tx_nominal_pe_set(param_1 & 0xffff,(undefined2)DAT_00011968);
      *puVar2 = *puVar2 & 0xf9ffffff | 0x4000000;
      *puVar4 = phy_11ax_hesiga2 << 0x1a | phy_11ax_hesiga1 & 0x3ffffff;
      *puVar5 = phy_11ax_hesiga2 >> 6 & 0x3ff | *puVar5 & 0xfffffc00;
      uVar1 = *puVar5 | 0x400;
    }
    *puVar5 = uVar1;
    *puVar3 = *puVar3 & 0xffffff7f;
  }
  return;
}

