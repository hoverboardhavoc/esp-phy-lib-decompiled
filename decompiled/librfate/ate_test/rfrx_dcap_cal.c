/*
 * Last changed at upstream commit 772432d2e9e7422159ee3ef01a07fc985ce9466a
 * https://github.com/espressif/esp-phy-lib/commit/772432d2e9e7422159ee3ef01a07fc985ce9466a
 * Upstream date: 2024-08-30 17:42:59 +0800
 * Upstream subject: feat(phy): add phy support for esp32c61
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
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  phy_pbus_debugmode();
  phy_pbus_xpd_rx_on(0);
  phy_loopback_mode_en(1);
  uVar3 = phy_i2c_readReg_Mask(100,1,4,3,0);
  uVar4 = test_rx_gain_cal();
  uVar1 = 0;
  uVar2 = 0;
  iVar5 = 0;
  do {
    phy_i2c_writeReg_Mask(100,1,4,3,0,uVar1 & 0xff);
    phy_start_tx_tone_step(1,0x80,uVar4,0,0,0);
    ets_delay_us(1);
    phy_iq_est_enable(1,0xfff);
    if (iVar5 < _DAT_600a0464 >> 9) {
      uVar2 = uVar1 & 0xff;
      iVar5 = _DAT_600a0464 >> 9;
    }
    phy_iq_est_disable();
    phy_stop_tx_tone(0);
  } while (((int)(uVar1 - uVar2) < 3) && (uVar1 = uVar1 + 1, uVar1 != 8));
  phy_i2c_writeReg_Mask(100,1,4,3,0,uVar3);
  phy_loopback_mode_en(0);
  phy_pbus_xpd_rx_on(0);
  phy_pbus_workmode();
  return uVar2;
}

