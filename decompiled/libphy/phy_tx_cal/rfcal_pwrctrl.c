/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_tx_cal.o -> rfcal_pwrctrl
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rfcal_pwrctrl(byte *param_1,undefined1 *param_2,undefined4 param_3,int param_4,int param_5)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  bVar1 = *param_1;
  iVar10 = 0;
  iVar3 = 0;
  iVar9 = 2;
  do {
    uVar7 = param_4 - iVar3 / 4;
    uVar8 = uVar7 & 0xff;
    pbus_force_test(3,1,uVar8 << 3 | 7);
    ets_delay_us(2);
    iVar5 = get_power_db(param_3);
    iVar6 = get_power_db(param_3);
    iVar5 = ((iVar5 + iVar6) * 0x10000 >> 0x10) + 4 >> 3;
    sVar4 = get_data_sat(iVar5 - (uint)bVar1,0x10,0xfffffff0);
    iVar6 = (int)sVar4;
    if (param_5 != 0) {
      phy_printf("i=%02d  acc=%03d  tgt=%03d  err=%03d  ser=%03d att=0x%x\n",iVar10,iVar5,
                 (uint)bVar1,iVar6,iVar3,uVar8);
    }
    if (iVar6 == 0) {
      if (iVar10 != 0) break;
_L123:
      if (iVar9 == 0) break;
    }
    else {
      if (iVar6 == -1) {
        if (iVar9 != 1) goto _L123;
        break;
      }
      if ((iVar9 == 0) || ((iVar6 == 1 && (iVar9 == 1)))) break;
    }
    sVar2 = (short)iVar3 + sVar4;
    if (4 < (ushort)(sVar4 + 2U)) {
      sVar2 = sVar2 - (short)(iVar6 >> 2);
    }
    iVar10 = iVar10 + 1;
    iVar3 = (int)sVar2;
    iVar9 = iVar6;
  } while (iVar10 != 10);
  *param_2 = (char)uVar7;
  return;
}

