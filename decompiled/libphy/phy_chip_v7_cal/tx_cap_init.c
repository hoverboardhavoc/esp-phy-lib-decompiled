/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> tx_cap_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_cap_init(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  int iVar7;
  char cVar8;
  
  if (-1 < (int)(_chip7_sleep_params << 0xd)) {
    txcal_debuge_mode();
    i2c_writeReg_Mask(0x6b,1,1,3,0,0xf);
    puVar6 = &chip7_sleep_params;
    iVar7 = 0;
    bVar5 = 0x50;
    do {
      set_channel_rfpll_freq((int)(char)(&CSWTCH_286)[iVar7],DAT_00014055,0);
      if (iVar7 == 0) {
        cVar8 = '\x04';
        do {
          start_tx_tone_step(1,0x80,(uint)bVar5,0,0,0);
          ets_delay_us(2);
          iVar1 = get_power_db(_pwrdet_offset);
          uVar2 = iVar1 >> 2 & 0xffff;
          uVar3 = uVar2 - 0x28;
          uVar4 = uVar3 & 0xffff;
          iVar1 = (int)(short)uVar3;
          if ((uVar2 - 0x25 & 0xffff) < 7) break;
          if (iVar1 < 1) {
            uVar4 = (iVar1 * 3) / 4;
          }
          iVar1 = (int)((bVar5 + uVar4) * 0x1000000) >> 0x18;
          if (0x78 < iVar1) {
            iVar1 = 0x78;
          }
          bVar5 = (byte)iVar1;
          if ((char)bVar5 < '\0') {
            bVar5 = 0;
          }
          cVar8 = cVar8 + -1;
        } while (cVar8 != '\0');
        rfcal_bb_atten_init = bVar5 - 8;
      }
      iVar7 = iVar7 + 1;
      rfcal_txcap(0x80,bVar5,0,puVar6);
      puVar6 = puVar6 + 3;
    } while (iVar7 != 3);
    phy_chan_pwr_index[5] = phy_chan_pwr_index[2];
    phy_chan_pwr_index[6] = phy_chan_pwr_index[3];
    phy_chan_pwr_index[7] = phy_chan_pwr_index[4];
    txcal_work_mode();
    _chip7_sleep_params = _chip7_sleep_params | 0x40000;
  }
  return;
}

