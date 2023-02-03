/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rx_cal.o -> set_rx_gain_cal_iq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_rx_gain_cal_iq(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  local_48 = 0x1f0f3f0f;
  uStack_44 = 0xf030f07;
  local_50 = 0xc0c0;
  local_4c = 0x3020100;
  pbus_debugmode();
  pbus_xpd_rx_on(0);
  loopback_mode_en(1);
  _DAT_600a0450 = _DAT_600a0450 & 0xbfffffff | 0x20000000;
  uVar8 = (uint)(char)(_phy_param >> 6);
  uVar6 = uVar8 & 0x1f;
  if ((uVar8 & 0x10) != 0) {
    uVar6 = uVar6 - 0x20;
  }
  uVar8 = (int)(char)_phy_param & 0x3f;
  if (((int)(char)_phy_param & 0x20U) != 0) {
    uVar8 = uVar8 - 0x40;
  }
  txiq_set_reg(uVar6,1);
  txiq_set_reg(uVar8,0);
  uStack_54 = 0x800080;
  puVar11 = &local_48;
  iVar4 = 0;
_L114:
  uVar1 = *(undefined1 *)((int)&local_4c + iVar4);
  uVar2 = *(undefined1 *)((int)&local_50 + iVar4);
  uVar5 = *(undefined2 *)puVar11;
  set_loopback_gain(uVar5,uVar1,uVar2);
  pbus_rx_dco_cal(0x1000,&uStack_54,0);
  iVar10 = 2;
  uVar6 = 0x20;
  do {
    start_tx_tone_step(1,0x80,uVar6 & 0xff,0,0,0);
    iq_est_enable(1,0x3ff);
    iVar9 = _DAT_600a0490;
    iq_est_disable();
    stop_tx_tone(1);
    if (iVar9 >> 7 < 0x20001) {
      if (0xfff < iVar9 >> 7) break;
      sVar3 = (short)uVar6 + -0x14;
    }
    else {
      sVar3 = (short)uVar6 + 0x14;
    }
    iVar9 = (int)sVar3;
    if (0x78 < iVar9) {
      iVar9 = 0x78;
    }
    sVar3 = (short)iVar9;
    if (iVar9 << 0x10 < 0) {
      sVar3 = 0;
    }
    uVar6 = (uint)sVar3;
    if (iVar10 == 1) break;
    iVar10 = 1;
  } while( true );
  if (param_2 != 0) {
    uVar7 = pbus_rd(0,1);
    phy_printf("rxiq: rftx=0x%x, rfrx=x%x, att=%d, bbgain=0x%x, lna=%d\n",uVar5,uVar7,uVar6,uVar2,
               uVar1);
  }
  uVar5 = get_rfcal_rxiq_data(0x80,uVar6 & 0xff,param_2);
  *(undefined2 *)(iVar4 * 2 + param_1) = uVar5;
  iVar4 = iVar4 + 1;
  puVar11 = (undefined4 *)((int)puVar11 + 2);
  if (iVar4 == 4) {
    loopback_mode_en(0);
    pbus_xpd_rx_on(0);
    pbus_workmode();
    _DAT_600a0450 = _DAT_600a0450 | 0x40000000;
    return;
  }
  goto _L114;
}

