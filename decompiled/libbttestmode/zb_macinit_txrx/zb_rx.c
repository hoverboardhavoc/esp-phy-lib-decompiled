/*
 * Last changed at upstream commit 8608fcf54d51e81f2e74ebf335fa33f61953f7c8
 * https://github.com/espressif/esp-phy-lib/commit/8608fcf54d51e81f2e74ebf335fa33f61953f7c8
 * Upstream date: 2024-09-14 10:30:08 +0800
 * Upstream subject: update ESP32, S2 and H2 librftest.a to support RF cert_test
 * Source: libbttestmode -> zb_macinit_txrx.o -> zb_rx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_rx(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int aiStack_1c [4];
  
  chip_v7_set_chan(1,0);
  zb_rx_init(param_1);
  uVar1 = _DAT_600a3048 + 2U & 0xffff;
  xtal_freq_rx_cal(1,uVar1,0);
  iStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  aiStack_1c[0] = 0;
  aiStack_1c[1] = 0;
  aiStack_1c[2] = 0;
  do {
    iVar2 = zb_rx_a_frame(&iStack_38,aiStack_1c,aiStack_1c + 2,&uStack_20,&uStack_34,&uStack_30,
                          &uStack_2c,aiStack_1c + 1);
    iVar3 = GetStopCmd();
    if (iVar3 == 0) break;
  } while (iVar2 == 0);
  xtal_freq_rx_cal(0,uVar1,0);
  _DAT_600a3000 = 0x45;
  _phy_time_now = 0;
  if (iStack_38 != 0) {
    _phy_time_now = aiStack_1c[0] / iStack_38;
  }
  esp_rx_valid = 3;
  _esp_rx_result = aiStack_1c[0];
  _phy_set_clk_conf = iStack_38;
  phy_printf("RX %d %d %d %d %d %d %d %d %d %d\n",uStack_34,uStack_30,uStack_2c,uStack_28,uStack_24)
  ;
  return;
}

