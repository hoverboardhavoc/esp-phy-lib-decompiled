/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: librfate -> ate_test.o -> test_rx_gain_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 test_rx_gain_cal(void)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_38 = 0x1000100;
  uStack_34 = 0x1000100;
  cVar4 = '\x04';
  uVar2 = 3;
  do {
    if (uVar2 < 7) {
      uVar5 = (&_LANCHOR1)[uVar2];
      uVar6 = (&_LANCHOR2)[uVar2];
      uVar3 = (&_LANCHOR3)[uVar2];
    }
    else {
      uVar3 = 0xc;
      uVar6 = 0xe0;
      uVar5 = 0;
    }
    pbus_force_test(1,1,0x1f1);
    set_loopback_gain(uVar3,0x18c,uVar6);
    pbus_rx_dco_cal(0x1000,&uStack_38,0);
    start_tx_tone_step(1,0x80,uVar5,0,0,0);
    ets_delay_us(1);
    iq_est_enable(1,0xfff);
    iVar1 = _DAT_600c0464;
    iq_est_disable();
    stop_tx_tone(0);
    if ((iVar1 >> 9) - 0x1000U < 0xf001) {
      return uVar5;
    }
    if (iVar1 >> 9 < 0x1000) {
      if (5 < uVar2) {
        return uVar5;
      }
      uVar2 = uVar2 + 1;
    }
    else {
      if (uVar2 == 0) {
        return uVar5;
      }
      uVar2 = uVar2 - 1;
    }
    cVar4 = cVar4 + -1;
    uVar2 = uVar2 & 0xff;
  } while (cVar4 != '\0');
  return uVar5;
}

