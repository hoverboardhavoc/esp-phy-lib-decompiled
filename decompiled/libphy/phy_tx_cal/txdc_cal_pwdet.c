/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_tx_cal.o -> txdc_cal_pwdet
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txdc_cal_pwdet(ushort *param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  ushort local_168 [4];
  ushort local_160 [48];
  uint local_100 [51];
  
  local_168[0] = *param_1;
  local_168[1] = param_1[1];
  local_168[2] = param_1[2];
  local_168[3] = param_1[3];
  iVar7 = 0;
  puVar1 = param_1;
  puVar12 = local_168;
  while( true ) {
    iVar8 = 0;
    uVar10 = 0;
    uVar11 = 0xffff;
    while( true ) {
      sVar9 = 0;
      do {
        sVar5 = sVar9;
        if (iVar8 != 0) {
          sVar5 = -sVar9;
        }
        *puVar12 = sVar5 + *puVar1;
        pbus_set_dco(local_168);
        ets_delay_us(10);
        uVar2 = get_tone_sar_dout(0x10);
        local_100[uVar10] = uVar2;
        local_160[uVar10] = *puVar12;
        uVar10 = uVar10 + 1 & 0xff;
        if (uVar2 < uVar11) {
          uVar11 = uVar2;
        }
        if (param_2 != 0) {
          phy_printf("%d,%d, dco %d,%d, code %d,%d\n",iVar7,iVar8,local_168[0],local_168[1],uVar2,
                     uVar11);
        }
      } while ((uVar2 <= uVar11 + 0xf) && (sVar9 = sVar9 + 1, sVar9 != 0x14));
      if (iVar8 == 1) break;
      iVar8 = 1;
    }
    puVar3 = local_100;
    uVar2 = 0;
    uVar6 = 0;
    for (uVar4 = 0; (uVar4 & 0xff) < uVar10; uVar4 = uVar4 + 1) {
      if (*puVar3 <= uVar11 + 10) {
        uVar6 = uVar6 + 1 & 0xff;
        uVar2 = uVar2 + local_160[uVar4] & 0xffff;
      }
      puVar3 = puVar3 + 1;
    }
    *puVar12 = (ushort)((((uVar6 >> 1) + uVar2) / uVar6 + 1) * 0x10000 >> 0x10);
    if (param_2 != 0) {
      phy_printf("%d,%d,%d,%d,%d\n",local_168[0],local_168[1]);
    }
    puVar12 = puVar12 + 1;
    puVar1 = puVar1 + 1;
    if (iVar7 == 1) break;
    iVar7 = 1;
  }
  *param_1 = local_168[0];
  param_1[1] = local_168[1];
  param_1[2] = local_168[2];
  param_1[3] = local_168[3];
  pbus_set_dco(local_168);
  return;
}

