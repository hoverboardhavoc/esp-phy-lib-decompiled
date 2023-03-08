/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> rx_gain_comp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rx_gain_comp(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58 [14];
  
  local_60 = 0x1000100;
  uStack_5c = 0x1000100;
  (**(code **)(_g_phyFuns + 0x1d4))(*(code **)(_g_phyFuns + 0x1d4));
  puVar3 = local_58;
  (**(code **)(_g_phyFuns + 0x1e4))(0,*(code **)(_g_phyFuns + 0x1e4));
  cVar1 = '\0';
  (**(code **)(_g_phyFuns + 0x24))(1,*(code **)(_g_phyFuns + 0x24));
  _DAT_6000607c = _DAT_6000607c & 0xefffefff | 0x8000000;
  puVar4 = puVar3;
  do {
    cVar1 = cVar1 + '\x01';
    chip_v7_set_chan((int)cVar1,0);
    (**(code **)(_g_phyFuns + 0x1cc))(1,1,0x1f1,*(code **)(_g_phyFuns + 0x1cc));
    (**(code **)(_g_phyFuns + 0x1c))(0,0x1d0,0,*(code **)(_g_phyFuns + 0x1c));
    pbus_rx_dco_cal(4000,&local_60,10,0,0);
    start_tx_tone_step(1,0x80,0x50,0,0,0);
    ets_delay_us(1);
    uVar2 = get_iq_est_pwr();
    *puVar4 = uVar2;
    stop_tx_tone(0);
    puVar4 = puVar4 + 1;
  } while (cVar1 != '\x0e');
  (**(code **)(_g_phyFuns + 0x24))(0,*(code **)(_g_phyFuns + 0x24));
  _DAT_6000607c = _DAT_6000607c | 0x10001000;
  (**(code **)(_g_phyFuns + 0x1e4))(0,*(code **)(_g_phyFuns + 0x1e4));
  (**(code **)(_g_phyFuns + 0x1d8))(*(code **)(_g_phyFuns + 0x1d8));
  do {
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    phy_printf(&_LC49,uVar2);
  } while ((undefined4 *)&stack0xffffffe0 != puVar3);
  return;
}

