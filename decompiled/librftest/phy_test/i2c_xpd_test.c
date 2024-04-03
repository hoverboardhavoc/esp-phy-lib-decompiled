/*
 * Last changed at upstream commit c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * https://github.com/espressif/esp-phy-lib/commit/c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * Upstream date: 2024-04-03 16:53:14 +0800
 * Upstream subject: fix coex test wifi affect ble s8 tx problm, and c3 s3 light sleep current opt, and c3 s3 ble rx problem
 * Source: librftest -> phy_test.o -> i2c_xpd_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void i2c_xpd_test(undefined2 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 local_1c [12];
  
  _DAT_600b0154 = _DAT_600b0154 & 0xfffffff;
  sVar1 = 1000;
  do {
    sVar1 = sVar1 + -1;
    ets_delay_us(1000);
  } while (sVar1 != 0);
  _DAT_600b0154 = _DAT_600b0154 | 0xf0000000;
  ets_delay_us(param_1);
  if (param_2 == 0) {
    iVar2 = 0;
    do {
      uVar3 = (**(code **)(_g_phyFuns + 0x50))(99,1,0,*(code **)(_g_phyFuns + 0x50));
      local_1c[iVar2] = uVar3;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 10);
    pcVar4 = "i2c_sdm: ";
  }
  else if (param_2 == 1) {
    iVar2 = 0;
    do {
      uVar3 = (**(code **)(_g_phyFuns + 0x50))(0x62,1,0,*(code **)(_g_phyFuns + 0x50));
      local_1c[iVar2] = uVar3;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 10);
    pcVar4 = "i2c_rfpll: ";
  }
  else {
    if (param_2 != 2) goto _L197;
    iVar2 = 0;
    do {
      uVar3 = (**(code **)(_g_phyFuns + 0x50))(0x6b,1,2,*(code **)(_g_phyFuns + 0x50));
      local_1c[iVar2] = uVar3;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 10);
    pcVar4 = "i2c_rftx: ";
  }
  phy_printf(pcVar4);
_L197:
  iVar2 = 0;
  do {
    puVar5 = local_1c + iVar2;
    iVar2 = iVar2 + 1;
    phy_printf(&_LC10,*puVar5);
  } while (iVar2 != 10);
  phy_printf(&_LC11);
  return;
}

