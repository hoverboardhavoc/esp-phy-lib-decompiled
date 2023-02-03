/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rx_cal.o -> rxiq_get_mis
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rxiq_get_mis(int param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  uVar4 = param_1 - 2;
  iVar6 = _DAT_600a0484 >> (uVar4 & 0x1f);
  iVar8 = _DAT_600a0478 >> (uVar4 & 0x1f);
  iVar7 = _DAT_600a0480 >> (uVar4 & 0x1f);
  iVar9 = _DAT_600a047c >> (uVar4 & 0x1f);
  iVar10 = iVar8 - iVar6;
  iVar5 = iVar7 + iVar9;
  iVar8 = iVar8 + iVar6;
  iVar9 = iVar9 - iVar7;
  uVar4 = iVar9 * iVar9 + iVar8 * iVar8;
  iVar6 = (int)((ulonglong)((longlong)iVar8 * (longlong)iVar8) >> 0x20) +
          (int)((ulonglong)((longlong)iVar9 * (longlong)iVar9) >> 0x20) +
          (uint)(uVar4 < (uint)(iVar8 * iVar8));
  uVar3 = iVar8 * iVar10 - iVar9 * iVar5;
  uVar11 = iVar8 * iVar5 + iVar9 * iVar10;
  if (uVar4 == 0 && iVar6 == 0) {
    uVar4 = 1;
    iVar6 = 0;
  }
  cVar1 = __divdi3(uVar3 * 0x200,
                   uVar3 >> 0x17 |
                   (((int)((ulonglong)((longlong)iVar8 * (longlong)iVar10) >> 0x20) -
                    (int)((ulonglong)((longlong)iVar9 * (longlong)iVar5) >> 0x20)) -
                   (uint)((uint)(iVar8 * iVar10) < uVar3)) * 0x200,uVar4,iVar6);
  cVar2 = __divdi3(uVar11 * 0x200,
                   uVar11 >> 0x17 |
                   ((uint)(uVar11 < (uint)(iVar9 * iVar10)) +
                   (int)((ulonglong)((longlong)iVar9 * (longlong)iVar10) >> 0x20) +
                   (int)((ulonglong)((longlong)iVar8 * (longlong)iVar5) >> 0x20)) * 0x200,uVar4,
                   iVar6);
  iVar6 = cVar1 + 1 >> 1;
  *param_2 = (char)iVar6;
  param_2[1] = (char)(cVar2 + 1 >> 1);
  if (param_3 != 0) {
    phy_printf("%d, %d-%d, ",_DAT_600a0490 >> (param_1 - 3U & 0x1f),iVar6);
    return;
  }
  return;
}

