/*
 * Last changed at upstream commit c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * https://github.com/espressif/esp-phy-lib/commit/c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * Upstream date: 2024-04-03 16:53:14 +0800
 * Upstream subject: fix coex test wifi affect ble s8 tx problm, and c3 s3 light sleep current opt, and c3 s3 ble rx problem
 * Source: librftest -> rf_test.o -> get_module_test_chan
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int get_module_test_chan(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  
  if (7 < (ushort)(dut_rx_test_num - 1U)) {
    dut_rx_test_num = 8;
  }
  if (0x8c < (ushort)(module_test_freq - 0x94cU)) {
    module_test_freq = 0x94c;
  }
  iVar3 = 0x96c;
  sVar6 = 100;
  iVar5 = 1;
  iVar1 = 1;
  do {
    sVar4 = (**(code **)(_g_phyFuns + 0x100))
                      (iVar3 - module_test_freq,*(code **)(_g_phyFuns + 0x100));
    if (iVar1 == 1) {
      iVar5 = 1;
      sVar6 = sVar4;
    }
    else if (sVar4 < sVar6) {
      iVar5 = iVar1;
      sVar6 = sVar4;
    }
    uVar2 = iVar1 + 1;
    iVar3 = iVar3 + 5;
    iVar1 = (int)(short)uVar2;
  } while ((uVar2 & 0xffff) != 0xe);
  return iVar5;
}

