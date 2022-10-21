/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_api.o -> phy_get_rx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 phy_get_rx_gain(void)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(_g_phyFuns + 0x28))(0,0xffffff9c,*(code **)(_g_phyFuns + 0x28));
  uVar2 = (**(code **)(_g_phyFuns + 0x28))
                    ((cVar1 + 0x5f) * 0x10000 >> 0x10,phy_param,0,*(code **)(_g_phyFuns + 0x28));
  return uVar2;
}

