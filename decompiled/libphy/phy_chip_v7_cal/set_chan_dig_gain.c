/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> set_chan_dig_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_chan_dig_gain(undefined4 param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined1 *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  byte bStack_38;
  byte bStack_37;
  byte bStack_36;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined1 auStack_30 [5];
  char cStack_2b;
  char local_28 [12];
  
  get_phy_target_power(auStack_30,(int)phy_in_vdd33_offset);
  iVar9 = 0;
  puVar2 = &chip7_sleep_params;
  do {
    uStack_34 = puVar2[0x60];
    uStack_33 = puVar2[0x66];
    uStack_32 = puVar2[0x6c];
    uStack_31 = puVar2[0x72];
    cVar4 = set_chan_cal_interp(&uStack_34,param_1);
    local_28[iVar9] = -cVar4;
    *(char *)((int)&phy_chan_gain_table + iVar9) = -cVar4;
    iVar9 = iVar9 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar9 != 6);
  get_chan_pwr_index();
  phy_chan_gain_table._6_1_ = phy_chan_gain_table._5_1_;
  puVar3 = phy_chan_pwr_index;
  phy_chan_gain_table._7_1_ =
       *(char *)((int)&phy_chan_gain_table + (uint)phy_chan_pwr_index[0x10]) + '\x06';
  iVar9 = 0;
  do {
    pbVar7 = phy_chan_pwr_index + iVar9;
    puVar5 = phy_chan_target_power + iVar9;
    iVar9 = iVar9 + 1;
    *puVar5 = auStack_30[*pbVar7];
  } while (iVar9 != 0x11);
  if (chip7_phy_init_ctrl == '\x02') {
    get_rate_fcc_index(param_1,&bStack_38);
    uVar6 = 0;
    do {
      uVar8 = (uint)bStack_38;
      if ((7 < uVar6) && (uVar8 = (uint)bStack_36, (uVar6 & 0xff) == 0x10)) {
        uVar8 = (uint)bStack_37;
      }
      if ((byte)*puVar3 < uVar8) {
        if (uVar8 < 6) {
          uVar1 = auStack_30[uVar8];
          *puVar3 = (byte)uVar8;
          phy_chan_target_power[uVar6] = uVar1;
          if (uVar6 == 0x10) {
            phy_chan_gain_table._7_1_ = local_28[uVar8] + '\x06';
          }
        }
        else {
          if (uVar6 < 8) {
            *puVar3 = 5;
          }
          else if ((uVar6 & 0xff) != 0x10) {
            *puVar3 = 6;
          }
          cVar4 = (byte)uVar8 - 5;
          phy_chan_target_power[uVar6] = cStack_2b + cVar4 * -4;
          if (uVar6 == 0x10) {
            phy_chan_gain_table._7_1_ = local_28[5] + '\x06' + cVar4 * -4;
          }
          else {
            *(char *)((int)&phy_chan_gain_table + (uint)(byte)*puVar3) = local_28[5] + cVar4 * -4;
          }
        }
      }
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 != 0x11);
  }
  write_txrate_power_offset_part_1();
  write_wifi_dig_gain((int)DAT_000140e6);
  return;
}

