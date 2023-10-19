/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> rf_test.o -> esp_tx_func_org
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void esp_tx_func_org(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar1 = _short_gi_enable;
  uVar9 = *param_1;
  uVar4 = param_1[1];
  iVar8 = 0;
  if (2 < param_2) {
    iVar8 = (int)(char)param_1[2];
  }
  uVar5 = change_data_rate(uVar4);
  iVar6 = 200;
  if ((3 < uVar4) && (iVar6 = 100, 7 < uVar4)) {
    iVar6 = 0x28;
  }
  iVar2 = 600;
  if (0x13 < uVar5) {
    iVar2 = 200;
  }
  if (param_2 < 4) {
    uVar3 = (iVar2 - iVar6) * uVar5 >> 3;
  }
  else {
    uVar3 = param_1[3];
    if (param_2 != 4) {
      uVar7 = param_1[4];
      goto _L20;
    }
  }
  uVar7 = 0x4b0;
  if (0x13 < uVar5) {
    uVar7 = 400;
  }
_L20:
  rftest_set_chan(uVar9 & 0xffff,(uint)(tx_cbw40m_en != '\0') << 1);
  target_power_backoff(iVar8);
  phy_printf("Wifi tx out: channel=%d, rate=0x%x, BK=%d, length=%d, delay=%d\n",uVar9,uVar4,iVar8,
             uVar3,uVar7);
  FillTxPacket(uVar3 + 0xa0000,uVar3,0,uVar4,0,iVar1 << 0x1c,1,2);
  WifiTxStart(uVar4 + 0xa0000,0,uVar7,tx_cbw40m_en,0,1);
  phy_printf("Tx Over 0x%x\n",DAT_60012fb9,DAT_60012fbb,DAT_60012fbc);
  return;
}

