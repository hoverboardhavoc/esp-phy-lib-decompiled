/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_gain.o -> ram_wifi_tx_dig_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_wifi_tx_dig_gain(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  byte bStack_4;
  byte bStack_3;
  
  iVar5 = 0;
  do {
    pcVar2 = (char *)(param_1 + iVar5);
    pcVar8 = &phy_param + iVar5;
    pcVar1 = (char *)((int)&local_10 + iVar5);
    iVar5 = iVar5 + 1;
    *pcVar1 = *pcVar2 + *pcVar8;
  } while (iVar5 != 0xe);
  cVar3 = (char)local_10 + '\x04';
  cVar4 = local_10._1_1_ + '\x04';
  local_10._0_2_ = CONCAT11(cVar4,cVar3);
  puVar6 = &local_10;
  do {
    puVar7 = (undefined4 *)((int)puVar6 + 1);
    *(char *)((int)puVar6 + 10) = *(char *)((int)puVar6 + 10) + '\x02';
    puVar6 = puVar7;
  } while (puVar7 != &uStack_c);
  _DAT_60006024 = local_10;
  _DAT_60006028 = uStack_c;
  _DAT_6000602c = uStack_8;
  _DAT_60006030 =
       (uint)bStack_4 | (int)(char)bStack_3 << 0x18 | (uint)bStack_3 << 0x10 | (uint)bStack_3 << 8;
  return;
}

