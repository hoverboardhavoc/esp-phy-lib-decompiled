/*
 * Last changed at upstream commit aa93b8ad95d8a3c646c24a314480e61b52502920
 * https://github.com/espressif/esp-phy-lib/commit/aa93b8ad95d8a3c646c24a314480e61b52502920
 * Upstream date: 2025-06-06 15:13:47 +0800
 * Upstream subject: support C61 ECO3 test
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
      uVar6 = (&_LANCHOR2)[uVar2];
      uVar5 = (&_LANCHOR3)[uVar2];
      uVar3 = (&_LANCHOR4)[uVar2];
    }
    else {
      uVar3 = 0xc;
      uVar5 = 0xe0;
      uVar6 = 0;
    }
    phy_pbus_force_test(1,1,0x1f1);
    phy_set_loopback_gain(uVar3,0x18c,uVar5);
    phy_pbus_rx_dco_cal(4000,&uStack_38,10,0,0);
    phy_start_tx_tone_step(1,0x80,uVar6,0,0,0);
    ets_delay_us(1);
    phy_iq_est_enable(1,0xfff);
    iVar1 = _DAT_600a046c;
    phy_iq_est_disable();
    phy_stop_tx_tone(0);
    if ((iVar1 >> 9) - 0x1000U < 0xf001) {
      return uVar6;
    }
    if (iVar1 >> 9 < 0x1000) {
      if (5 < uVar2) {
        return uVar6;
      }
      uVar2 = uVar2 + 1;
    }
    else {
      if (uVar2 == 0) {
        return uVar6;
      }
      uVar2 = uVar2 - 1;
    }
    cVar4 = cVar4 + -1;
    uVar2 = uVar2 & 0xff;
  } while (cVar4 != '\0');
  return uVar6;
}

