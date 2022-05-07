/*
 * Last changed at upstream commit 478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * https://github.com/espressif/esp-phy-lib/commit/478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * Upstream date: 2022-05-07 21:35:33 +0800
 * Upstream subject: add phy for esp32c2
 * Source: libphy -> phy_feature.o -> phy_set_rate
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_set_rate(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = -6;
  if (((1 < (param_1 - 0x10U & 0xff)) && (param_1 != 0xb)) && (cVar1 = '\0', param_1 == 0xf)) {
    cVar1 = -6;
  }
  if (phy_param != cVar1) {
    if ((param_1 == 0xb) || ((param_1 - 0xfU & 0xff) < 3)) {
      DAT_000110c0 = 0xa5;
      DAT_000110c3 = 0x6f;
    }
    else {
      DAT_000110c0 = 0xa4;
      DAT_000110c3 = 0x5f;
    }
    iVar2 = 0;
    do {
      (&phy_param)[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0xe);
                    /* WARNING: Could not recover jumptable at 0x00010078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_g_phyFuns + 0x1e4))(&phy_param);
    return;
  }
  return;
}

