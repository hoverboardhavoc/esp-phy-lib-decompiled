/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librfate -> ate_test.o -> test_rx_gain_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 test_rx_gain_cal(void)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 uVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_38 = 0x1000100;
  uStack_34 = 0x1000100;
  cVar3 = '\x04';
  uVar1 = 3;
  do {
    if (uVar1 < 7) {
      uVar6 = (&_LANCHOR2)[uVar1];
      uVar4 = (&_LANCHOR3)[uVar1];
      uVar2 = (&_LANCHOR4)[uVar1];
    }
    else {
      uVar2 = 0xc;
      uVar4 = 0xe0;
      uVar6 = 0;
    }
    (**(code **)(_g_phyFuns + 0x1cc))(1,1,0x1f1,*(code **)(_g_phyFuns + 0x1cc));
    (**(code **)(_g_phyFuns + 0x1c))(uVar2,0x18c,uVar4,*(code **)(_g_phyFuns + 0x1c));
    pbus_rx_dco_cal(4000,&uStack_38,10,0,0);
    start_tx_tone_step(1,0x80,uVar6,0,0,0);
    ets_delay_us(1);
    (**(code **)(_g_phyFuns + 0x104))(1,0xfff,*(code **)(_g_phyFuns + 0x104));
    iVar5 = _DAT_60006164 >> 9;
    (**(code **)(_g_phyFuns + 0x108))(*(code **)(_g_phyFuns + 0x108));
    stop_tx_tone(0);
    if (iVar5 - 0x1000U < 0xf001) {
      return uVar6;
    }
    if (iVar5 < 0x1000) {
      if (5 < uVar1) {
        return uVar6;
      }
      uVar1 = uVar1 + 1;
    }
    else {
      if (uVar1 == 0) {
        return uVar6;
      }
      uVar1 = uVar1 - 1;
    }
    cVar3 = cVar3 + -1;
    uVar1 = uVar1 & 0xff;
  } while (cVar3 != '\0');
  return uVar6;
}

