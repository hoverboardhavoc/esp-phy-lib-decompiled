/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_feature.o -> phy_get_most_tpw
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint phy_get_most_tpw(void)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte local_40 [24];
  
  uVar1 = DAT_00011210;
  cVar2 = '\x01';
  DAT_00011210 = 0;
  uVar5 = 0xffffff80;
  do {
    ram_get_chan_target_power
              (cVar2,(int)DAT_000110a4,local_40,&phy_param,DAT_00011110,&chip7_phy_init_ctrl,
               &phy_param);
    iVar4 = 0;
    do {
      uVar3 = (uint)local_40[iVar4];
      if ((int)(char)local_40[iVar4] < (int)uVar5) {
        uVar3 = uVar5;
      }
      iVar4 = iVar4 + 1;
      uVar5 = (uint)(char)uVar3;
    } while (iVar4 != 0xe);
    cVar2 = cVar2 + '\x01';
  } while (cVar2 != '\x0f');
  DAT_00011210 = uVar1;
  return uVar5;
}

