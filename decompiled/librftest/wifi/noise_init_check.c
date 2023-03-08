/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> noise_init_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void noise_init_check(int param_1)

{
  char cVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  short asStack_28 [3];
  short sStack_22;
  
  cVar1 = '\x01';
  do {
    if (param_1 != 0) {
      chip_v7_set_chan((int)cVar1,0);
    }
    psVar2 = asStack_28;
    do {
      psVar3 = psVar2 + 1;
      sVar4 = (**(code **)(_g_phyFuns + 0x84))(*(code **)(_g_phyFuns + 0x84));
      *psVar2 = sVar4;
      psVar2 = psVar3;
    } while (&sStack_22 != psVar3);
    cVar1 = cVar1 + '\x05';
    phy_printf("%d,%d,%d;;;",(int)asStack_28[0],(int)asStack_28[1],(int)asStack_28[2]);
  } while (cVar1 != '\x10');
  phy_printf(&_LC12);
  return;
}

