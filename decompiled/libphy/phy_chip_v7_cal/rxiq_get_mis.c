/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> rxiq_get_mis
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rxiq_get_mis(int param_1,char *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  uVar1 = param_1 - 2;
  iVar4 = fpga_mem_rd(0x60006080);
  iVar4 = iVar4 >> (uVar1 & 0x1f);
  iVar5 = fpga_mem_rd(0x6000608c);
  iVar5 = iVar5 >> (uVar1 & 0x1f);
  iVar6 = fpga_mem_rd(0x60006088);
  iVar6 = iVar6 >> (uVar1 & 0x1f);
  iVar7 = fpga_mem_rd(0x60006084);
  iVar7 = iVar7 >> (uVar1 & 0x1f);
  iVar10 = iVar7 - iVar6;
  iVar9 = iVar4 + iVar5;
  iVar4 = iVar4 - iVar5;
  iVar6 = iVar6 + iVar7;
  uVar1 = iVar10 * iVar10 + iVar9 * iVar9;
  iVar5 = (int)((ulonglong)((longlong)iVar9 * (longlong)iVar9) >> 0x20) +
          (int)((ulonglong)((longlong)iVar10 * (longlong)iVar10) >> 0x20) +
          (uint)(uVar1 < (uint)(iVar9 * iVar9));
  uVar8 = iVar9 * iVar4 - iVar10 * iVar6;
  uVar11 = iVar9 * iVar6 + iVar10 * iVar4;
  if (uVar1 == 0 && iVar5 == 0) {
    uVar1 = 1;
    iVar5 = 0;
  }
  cVar2 = __divdi3(uVar8 * 0x200,
                   uVar8 >> 0x17 |
                   (((int)((ulonglong)((longlong)iVar9 * (longlong)iVar4) >> 0x20) -
                    (int)((ulonglong)((longlong)iVar10 * (longlong)iVar6) >> 0x20)) -
                   (uint)((uint)(iVar9 * iVar4) < uVar8)) * 0x200,uVar1,iVar5);
  cVar3 = __divdi3(uVar11 * 0x200,
                   uVar11 >> 0x17 |
                   ((uint)(uVar11 < (uint)(iVar10 * iVar4)) +
                   (int)((ulonglong)((longlong)iVar10 * (longlong)iVar4) >> 0x20) +
                   (int)((ulonglong)((longlong)iVar9 * (longlong)iVar6) >> 0x20)) * 0x200,uVar1,
                   iVar5);
  *param_2 = (char)(cVar2 + 1 >> 1);
  param_2[1] = (char)(cVar3 + 1 >> 1);
  if (param_3 != 0) {
    iVar5 = fpga_mem_rd(0x600060e4);
    ets_printf("%d, %d-%d, ",iVar5 >> (param_1 - 3U & 0x1f),(int)*param_2,(int)param_2[1]);
    return;
  }
  return;
}

