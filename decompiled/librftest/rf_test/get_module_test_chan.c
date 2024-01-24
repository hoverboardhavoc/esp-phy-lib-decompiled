/*
 * Last changed at upstream commit 2d319a382336cf0522ea4bb5a3fbd6701a8633c6
 * https://github.com/espressif/esp-phy-lib/commit/2d319a382336cf0522ea4bb5a3fbd6701a8633c6
 * Upstream date: 2024-01-24 19:07:44 +0800
 * Upstream subject: keep regs before sleep and after wakeup are same
 * Source: librftest -> rf_test.o -> get_module_test_chan
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

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
    sVar4 = abs_temp(iVar3 - module_test_freq);
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

