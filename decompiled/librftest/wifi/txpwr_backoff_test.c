/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> txpwr_backoff_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txpwr_backoff_test(void)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  char cStack_35;
  undefined1 local_34 [12];
  
  puVar5 = local_34;
  sVar2 = 1;
  do {
    chip_v7_set_chan(sVar2,0);
    (**(code **)(_g_phyFuns + 0x94))(*(code **)(_g_phyFuns + 0x94));
    iVar3 = tx_pwr_backoff(&phy_param,&cStack_35,(int)((DAT_00017106 + 0x28) * 0x1000000) >> 0x18,0)
    ;
    if ((iVar3 != 0) || (uVar1 = 0, cStack_35 != '\x01')) {
      iVar4 = tx_pwr_backoff(&phy_param,&cStack_35,(int)((DAT_00017106 + 0x28) * 0x1000000) >> 0x18,
                             0);
      if ((iVar4 == 0) && (cStack_35 == '\x01')) {
        uVar1 = 0;
      }
      else {
        uVar1 = (undefined1)((((iVar3 + iVar4) * 0x10000 >> 0x10) + 1) / 2);
      }
    }
    sVar2 = sVar2 + 5;
    *puVar5 = uVar1;
    txcal_work_mode();
    puVar5 = puVar5 + 1;
  } while (sVar2 != 0x10);
  phy_printf("tx_backoff: %d, %d, %d\n",local_34[0],local_34[1],local_34[2]);
  return;
}

