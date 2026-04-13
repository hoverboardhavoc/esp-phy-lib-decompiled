/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
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
    phy_start_tx_tone_step_new(1,0x80,uVar4,0,0,0);
    ets_delay_us(1);
    phy_iq_est_enable(1,0xfff);
    if (iVar5 < _DAT_2010046c >> 9) {
      uVar2 = uVar1 & 0xff;
      iVar5 = _DAT_2010046c >> 9;
    }
    phy_iq_est_disable();
    phy_stop_tx_tone_new(0);
  } while (((int)(uVar1 - uVar2) < 3) && (uVar1 = uVar1 + 1, uVar1 != 8));
  phy_i2c_writeReg_Mask(100,1,4,3,0,uVar3);
  phy_loopback_mode_en(0);
  phy_pbus_xpd_rx_on(0);
  phy_pbus_workmode();
  return uVar2;
}

