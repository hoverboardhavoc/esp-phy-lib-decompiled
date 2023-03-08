/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librfate -> ate_test.o -> rfrx_dcap_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint rfrx_dcap_cal(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  (**(code **)(_g_phyFuns + 0x1d4))(*(code **)(_g_phyFuns + 0x1d4));
  uVar1 = 0;
  uVar4 = 0;
  (**(code **)(_g_phyFuns + 0x1e4))(0,*(code **)(_g_phyFuns + 0x1e4));
  iVar5 = 0;
  (**(code **)(_g_phyFuns + 0x24))(1,*(code **)(_g_phyFuns + 0x24));
  uVar2 = (**(code **)(_g_phyFuns + 0x1b8))(100,1,4,3,0,*(code **)(_g_phyFuns + 0x1b8));
  uVar3 = test_rx_gain_cal();
  do {
    (**(code **)(_g_phyFuns + 0x1bc))(100,1,4,3,0,uVar1 & 0xff,*(code **)(_g_phyFuns + 0x1bc));
    start_tx_tone_step(1,0x80,uVar3,0,0,0);
    ets_delay_us(1);
    (**(code **)(_g_phyFuns + 0x104))(1,0xfff,*(code **)(_g_phyFuns + 0x104));
    if (iVar5 < _DAT_60006164 >> 9) {
      uVar4 = uVar1 & 0xff;
      iVar5 = _DAT_60006164 >> 9;
    }
    (**(code **)(_g_phyFuns + 0x108))(*(code **)(_g_phyFuns + 0x108));
    stop_tx_tone(0);
  } while (((int)(uVar1 - uVar4) < 3) && (uVar1 = uVar1 + 1, uVar1 != 8));
  (**(code **)(_g_phyFuns + 0x1bc))(100,1,4,3,0,uVar2,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x24))(0,*(code **)(_g_phyFuns + 0x24));
  (**(code **)(_g_phyFuns + 0x1e4))(0,*(code **)(_g_phyFuns + 0x1e4));
  (**(code **)(_g_phyFuns + 0x1d8))(*(code **)(_g_phyFuns + 0x1d8));
  return uVar4;
}

