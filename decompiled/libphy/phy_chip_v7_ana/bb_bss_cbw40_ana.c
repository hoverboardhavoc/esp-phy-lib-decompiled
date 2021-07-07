/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> bb_bss_cbw40_ana
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_bss_cbw40_ana(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  char cVar6;
  
  if (param_1 == 0) {
    cVar6 = '\n';
    cVar4 = '\x02';
    iVar1 = 0;
    iVar5 = 3;
  }
  else {
    cVar6 = '\x05';
    cVar4 = '\x01';
    iVar1 = 2;
    iVar5 = 1;
  }
  chip_i2c_writeReg(0x67,1,3,*(char *)(iVar1 + 0x13074) - cVar4);
  chip_i2c_writeReg(0x67,1,4,*(undefined1 *)(iVar1 + 0x13074));
  chip_i2c_writeReg(0x67,1,10,0x10);
  chip_i2c_writeReg(0x67,1,1,(-4 - cVar6) + *(char *)(iVar1 + 0x13075) | 0x80);
  chip_i2c_writeReg(0x67,1,2,*(char *)(iVar1 + 0x13075) - 4U | 0x80);
  uVar2 = phy_enter_critical();
  do {
    uVar3 = fpga_mem_rd(0x6000e004);
  } while ((uVar3 & 0x2000000) != 0);
  fpga_mem_wr(0x6000e004,(iVar5 << 5 | 0x11U) << 0x10 | 0x5000967);
  do {
    uVar3 = fpga_mem_rd(0x6000e004);
  } while ((uVar3 & 0x2000000) != 0);
  phy_exit_critical(uVar2);
  return;
}

