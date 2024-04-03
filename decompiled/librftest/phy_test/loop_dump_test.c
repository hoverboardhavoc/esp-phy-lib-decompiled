/*
 * Last changed at upstream commit c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * https://github.com/espressif/esp-phy-lib/commit/c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * Upstream date: 2024-04-03 16:53:14 +0800
 * Upstream subject: fix coex test wifi affect ble s8 tx problm, and c3 s3 light sleep current opt, and c3 s3 ble rx problem
 * Source: librftest -> phy_test.o -> loop_dump_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void loop_dump_test(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_38 = 0x1000100;
  uStack_34 = 0x1000100;
  cVar1 = '\0';
  do {
    chip_v7_set_chan(0xe,(int)cVar1);
    set_dump_mode(param_1);
    set_txclk_en(1);
    set_rxclk_en(1);
    pbus_debugmode();
    sVar2 = 0;
    (**(code **)(_g_phyFuns + 0x84))(0,*(code **)(_g_phyFuns + 0x84));
    (**(code **)(_g_phyFuns + 0xc))(1,*(code **)(_g_phyFuns + 0xc));
    (**(code **)(_g_phyFuns + 0x90))(0,0x43,0x20,*(code **)(_g_phyFuns + 0x90));
    pbus_rx_dco_cal(0x1000,&uStack_38,10,0,0);
    uVar3 = 0;
    while( true ) {
      WifiTxStart_org(uVar3,1,0,0,0,1);
      adctrig(300,5,0,1,0,0,0,0);
      sVar2 = sVar2 + 1;
      uVar3 = print_dump_data(param_2);
      phy_printf(&_LC14,uVar3);
      if (sVar2 == 3) break;
      uVar3 = 0xb;
      if (sVar2 != 1) {
        uVar3 = 0x10;
      }
    }
    cVar1 = cVar1 + '\x02';
  } while (cVar1 != '\x04');
  pbus_workmode();
  set_txclk_en(0);
  set_rxclk_en(0);
  chip_v7_set_chan(0xe,0);
  return;
}

