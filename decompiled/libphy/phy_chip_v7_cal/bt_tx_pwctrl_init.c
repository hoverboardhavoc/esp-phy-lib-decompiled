/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7_cal.o -> bt_tx_pwctrl_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_tx_pwctrl_init(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  
  puVar1 = &phy_param;
  if (chip_lp_en == '\0') {
    DAT_00013135 = 0x28;
    iVar7 = 0xd8;
  }
  else {
    DAT_00013135 = 0xc;
    iVar7 = 0x1d3;
  }
  if (-1 < (int)(_DAT_0001310c << 0x10)) {
    txcal_debuge_mode();
    iVar9 = 0;
    uVar2 = 0x18;
    do {
      set_channel_rfpll_freq((int)(char)(&CSWTCH_197)[iVar9],DAT_000130b3,0);
      start_tx_tone_step(1,0xe0,uVar2 & 0xff,0,0,0);
      _DAT_6000e05c = _DAT_6000e05c & 0xffff0000;
      ets_delay_us(2);
      _DAT_0001309c = read_sar2_code();
      _DAT_6000e05c = _DAT_6000e05c & 0xffff0000 | 0xaaaa;
      ets_delay_us(2);
      _DAT_0001309a = read_sar2_code();
      cVar8 = '\b';
      do {
        start_tx_tone_step(1,0xe0,uVar2 & 0xff,0,0,0);
        ets_delay_us(2);
        iVar3 = read_sar2_code();
        iVar3 = (iVar3 - ((uint)_DAT_0001309c + iVar7)) * 0x10000;
        uVar4 = iVar3 >> 0x10;
        uVar5 = iVar3 >> 0x1f;
        if ((((int)((uVar5 ^ uVar4) - uVar5) < 10) ||
            (uVar2 = (int)(((int)uVar4 / 10 + (uVar2 & 0xff)) * 0x1000000) >> 0x18, uVar2 == 0)) ||
           (uVar2 == 0x40)) break;
        if (0x40 < (int)uVar2) {
          uVar2 = 0x40;
        }
        cVar6 = (char)uVar2;
        if (cVar6 < '\0') {
          cVar6 = '\0';
        }
        cVar8 = cVar8 + -1;
        uVar2 = (uint)cVar6;
      } while (cVar8 != '\0');
      puVar1[0x11a] = (char)uVar2;
      iVar9 = iVar9 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar9 != 3);
    start_tx_tone_step(0,0xe0,uVar2 & 0xff,0,0,0);
    txcal_work_mode();
    _DAT_0001310c = _DAT_0001310c | 0x8000;
  }
  return;
}

