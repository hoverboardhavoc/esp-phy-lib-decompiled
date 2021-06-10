/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> module_test_cal_print_phy
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void module_test_cal_print_phy(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  short *psVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  
  ets_printf("phy_version: %d, %s, %s\n",1,"Mar 26 2021","18:06:08");
  uVar9 = chip7_sleep_params._192_4_;
  ets_printf("param_flag: 0x%x\n",chip7_sleep_params._0_4_);
  ets_printf("vdd33=%d, temp_code=%d, offset=%d\n",(uint)uVar9 >> 0x10,uVar9 & 0xff,
             (int)SUB41(uVar9,1));
  ets_printf("rc_dout, %d; wifi: %d, %d, %d, %d, bt: %d, %d\n",chip7_sleep_params[0x50],
             chip7_sleep_params[0x54],chip7_sleep_params[0x55],chip7_sleep_params[0x56],
             chip7_sleep_params[0x57],chip7_sleep_params[0x58],chip7_sleep_params[0x59]);
  ets_printf("cal_rf_ana_gain, rf_gain=0x%x, ana_gain=0x%x\n",tx_rf_ana_gain,DAT_00015e22);
  ets_printf("RX_NOISEFLOOR, %d\n",(int)noise_array);
  puVar14 = chip7_sleep_params;
  ets_printf("RX_NOISEFLOOR, %d\n",(int)DAT_00015e26);
  puVar10 = chip7_sleep_params;
  ets_printf("RX_NOISEFLOOR, %d\n",(int)DAT_00015e28);
  ets_printf("TXCAP_TMX2G_CCT_LOAD, ");
  do {
    puVar2 = puVar14 + 0x40;
    puVar14 = puVar14 + 3;
    ets_printf(&_LC15,*puVar2);
  } while (puVar14 != (undefined1 *)0x1602c);
  ets_printf(&_LC16);
  ets_printf("TXCAP_PA2G_CCT_STG1, ");
  ets_printf(&_LC15,chip7_sleep_params[0x41]);
  ets_printf(&_LC15,chip7_sleep_params[0x44]);
  ets_printf(&_LC15,chip7_sleep_params[0x47]);
  ets_printf(&_LC15,chip7_sleep_params[0x4a]);
  ets_printf(&_LC16);
  ets_printf("TXCAP_PA2G_CCT_STG2, ");
  ets_printf(&_LC15,chip7_sleep_params[0x42]);
  ets_printf(&_LC15,chip7_sleep_params[0x45]);
  ets_printf(&_LC15,chip7_sleep_params[0x48]);
  ets_printf(&_LC15,chip7_sleep_params[0x4b]);
  ets_printf(&_LC16);
  ets_printf("TX_POWER_BACKOFF, ");
  puVar14 = puVar10;
  do {
    psVar3 = (short *)(puVar14 + 4);
    puVar14 = puVar14 + 2;
    ets_printf(&_LC15,(int)*psVar3);
  } while (puVar14 != (undefined1 *)0x16028);
  ets_printf(&_LC16);
  ets_printf("TX_PWRCTRL_ATTEN, ");
  puVar14 = puVar10;
  do {
    pcVar1 = puVar14 + 0x60;
    puVar14 = puVar14 + 1;
    ets_printf(&_LC15,(int)*pcVar1);
  } while (puVar14 != (undefined1 *)0x16038);
  ets_printf(&_LC16);
  ets_printf("TXIQ,");
  puVar14 = puVar10;
  do {
    uVar12 = (uint)(char)(*(ushort *)(puVar14 + 0x34) >> 6);
    uVar11 = uVar12 & 0x1f;
    if ((uVar12 & 0x10) != 0) {
      uVar11 = uVar11 - 0x20;
    }
    uVar13 = (uint)(char)*(ushort *)(puVar14 + 0x34);
    uVar12 = uVar13 & 0x3f;
    if ((uVar13 & 0x20) != 0) {
      uVar12 = uVar12 - 0x40;
    }
    puVar14 = puVar14 + 2;
    ets_printf("%d, %d; ",uVar11,uVar12);
  } while (puVar14 != (undefined1 *)0x16024);
  ets_printf(&_LC16);
  ets_printf("TXDC, ");
  puVar14 = puVar10;
  do {
    puVar4 = (undefined2 *)(puVar14 + 0x12);
    puVar5 = (undefined2 *)(puVar14 + 0x10);
    puVar6 = (undefined2 *)(puVar14 + 0xe);
    puVar7 = (undefined2 *)(puVar14 + 0xc);
    puVar14 = puVar14 + 8;
    ets_printf("%d, %d, %d, %d; ",*puVar7,*puVar6,*puVar5,*puVar4);
  } while (puVar14 != (undefined1 *)0x16048);
  ets_printf(&_LC16);
  ets_printf("RXIQ, ");
  do {
    uVar12 = (uint)(char)(*(ushort *)(puVar10 + 0x38) >> 6);
    uVar11 = uVar12 & 0x1f;
    if ((uVar12 & 0x10) != 0) {
      uVar11 = uVar11 - 0x20;
    }
    uVar13 = (uint)(char)*(ushort *)(puVar10 + 0x38);
    uVar12 = uVar13 & 0x3f;
    if ((uVar13 & 0x20) != 0) {
      uVar12 = uVar12 - 0x40;
    }
    puVar10 = puVar10 + 2;
    ets_printf("%d, %d; ",uVar11,uVar12);
  } while (puVar10 != (undefined1 *)0x16028);
  ets_printf(&_LC16);
  puVar14 = phy_rxrf_dc;
  ets_printf("RXDC_RFRX_BT, ");
  puVar10 = phy_rxrf_dc;
  do {
    uVar11 = *(uint *)puVar10;
    puVar10 = (undefined1 *)((int)puVar10 + 4);
    ets_printf("%d, %d; ",uVar11 >> 0x10,uVar11 & 0xffff);
  } while (puVar10 != phy_rxrf_dc + 0x1c);
  ets_printf(&_LC16);
  ets_printf("RXDC_RFRX_WIFI, ");
  do {
    puVar8 = (uint *)(puVar14 + 0x30);
    puVar14 = puVar14 + 4;
    ets_printf("%d, %d; ",*puVar8 >> 0x10,*puVar8 & 0xffff);
  } while (puVar14 != (undefined1 *)0x16384);
  ets_printf(&_LC16);
  puVar10 = phy_rxbb_dc;
  ets_printf("RXDC_RXBB_WIFI, ");
  do {
    uVar11 = *(uint *)puVar10;
    puVar10 = (undefined1 *)((int)puVar10 + 4);
    ets_printf("%d, %d; ",uVar11 >> 0x10,uVar11 & 0xffff);
  } while (puVar10 != phy_rxrf_dc);
  ets_printf(&_LC16);
  return;
}

