/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_rx_cal.o -> rxiq_get_mis_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rxiq_get_mis_new(uint param_1,undefined1 *param_2,int param_3)

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
  
  (**(code **)(_g_phyFuns + 0xa0))(1,1 << (param_1 & 0x1f) & 0xffff,*(code **)(_g_phyFuns + 0xa0));
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
  cVar2 = __divdi3(uVar11 * 0x400,
                   uVar11 >> 0x16 |
                   ((uint)(uVar11 < (uint)(iVar9 * iVar10)) +
                   (int)((ulonglong)((longlong)iVar9 * (longlong)iVar10) >> 0x20) +
                   (int)((ulonglong)((longlong)iVar8 * (longlong)iVar5) >> 0x20)) * 0x400,uVar4,
                   iVar6);
  iVar6 = cVar1 + 1 >> 1;
  *param_2 = (char)iVar6;
  param_2[1] = (char)(cVar2 + 1 >> 1);
  if (param_3 != 0) {
    phy_printf("%d, %d-%d, ",_DAT_600a0490 >> (param_1 - 3 & 0x1f),iVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x0001015c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0xa4))();
  return;
}

