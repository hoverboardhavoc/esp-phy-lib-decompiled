/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
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
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
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
  txiq_set_reg(0,1);
  txiq_set_reg(0,0);
  uStack_54 = 0x800080;
  puVar10 = &local_48;
  iVar5 = 0;
_L139:
  uVar1 = *(undefined1 *)((int)&local_4c + iVar5);
  uVar2 = *(undefined1 *)((int)&local_50 + iVar5);
  uVar6 = *(undefined2 *)puVar10;
  set_loopback_gain(uVar6,uVar1,uVar2);
  pbus_rx_dco_cal(0x1000,&uStack_54,0);
  iVar9 = 2;
  uVar4 = 0x20;
  do {
    start_tx_tone_step(1,0x80,uVar4 & 0xff,0,0,0);
    iq_est_enable(1,0x3ff);
    iVar8 = _DAT_600a0490;
    iq_est_disable();
    stop_tx_tone(1);
    if (iVar8 >> 7 < 0x20001) {
      if (0xfff < iVar8 >> 7) break;
      sVar3 = (short)uVar4 + -0x14;
    }
    else {
      sVar3 = (short)uVar4 + 0x14;
    }
    iVar8 = (int)sVar3;
    if (0x78 < iVar8) {
      iVar8 = 0x78;
    }
    sVar3 = (short)iVar8;
    if (iVar8 << 0x10 < 0) {
      sVar3 = 0;
    }
    uVar4 = (uint)sVar3;
    if (iVar9 == 1) break;
    iVar9 = 1;
  } while( true );
  if (param_2 != 0) {
    uVar7 = pbus_rd(0,1);
    phy_printf("rxiq: rftx=0x%x, rfrx=x%x, att=%d, bbgain=0x%x, lna=%d\n",uVar6,uVar7,uVar4,uVar2,
               uVar1);
  }
  uVar6 = get_rfcal_rxiq_data(0x80,uVar4 & 0xff,param_2);
  *(undefined2 *)(iVar5 * 2 + param_1) = uVar6;
  iVar5 = iVar5 + 1;
  puVar10 = (undefined4 *)((int)puVar10 + 2);
  if (iVar5 == 4) {
    loopback_mode_en(0);
    pbus_xpd_rx_on(0);
    pbus_workmode();
    _DAT_600a0450 = _DAT_600a0450 | 0x40000000;
    return;
  }
  goto _L139;
}

