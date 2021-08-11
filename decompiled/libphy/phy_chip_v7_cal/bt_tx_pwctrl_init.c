/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> bt_tx_pwctrl_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_tx_pwctrl_init(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  
  DAT_00013135 = 0x28;
  if (-1 < (int)(_DAT_0001310c << 0x10)) {
    txcal_debuge_mode();
    puVar2 = &phy_param;
    iVar8 = 0;
    uVar1 = 0x18;
    do {
      set_channel_rfpll_freq((int)(char)(&CSWTCH_195)[iVar8],DAT_000130b3,0);
      start_tx_tone_step(1,0xe0,uVar1 & 0xff,0,0,0);
      _DAT_6000e05c = _DAT_6000e05c & 0xffff0000;
      ets_delay_us(2);
      _DAT_0001309c = read_sar2_code();
      _DAT_6000e05c = _DAT_6000e05c & 0xffff0000 | 0xaaaa;
      ets_delay_us(2);
      _DAT_0001309a = read_sar2_code();
      cVar7 = '\b';
      do {
        start_tx_tone_step(1,0xe0,uVar1 & 0xff,0,0,0);
        ets_delay_us(2);
        iVar3 = read_sar2_code();
        iVar3 = (iVar3 + (-0xd8 - (uint)_DAT_0001309c)) * 0x10000;
        uVar4 = iVar3 >> 0x10;
        uVar5 = iVar3 >> 0x1f;
        if ((((int)((uVar5 ^ uVar4) - uVar5) < 10) ||
            (uVar1 = (int)(((int)uVar4 / 10 + (uVar1 & 0xff)) * 0x1000000) >> 0x18, uVar1 == 0)) ||
           (uVar1 == 0x40)) break;
        if (0x40 < (int)uVar1) {
          uVar1 = 0x40;
        }
        cVar6 = (char)uVar1;
        if (cVar6 < '\0') {
          cVar6 = '\0';
        }
        cVar7 = cVar7 + -1;
        uVar1 = (uint)cVar6;
      } while (cVar7 != '\0');
      puVar2[0x11a] = (char)uVar1;
      iVar8 = iVar8 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar8 != 3);
    start_tx_tone_step(0,0xe0,uVar1 & 0xff,0,0,0);
    txcal_work_mode();
    _DAT_0001310c = _DAT_0001310c | 0x8000;
  }
  return;
}

