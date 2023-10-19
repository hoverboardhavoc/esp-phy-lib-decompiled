/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> noise_init_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void noise_init_check(int param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short local_38 [3];
  short asStack_32 [7];
  
  psVar1 = (short *)&noise_array;
  sVar2 = 1;
  do {
    if (param_1 != 0) {
      chip_v7_set_chan(sVar2,0);
    }
    if (param_2 != 0) {
      *psVar1 = 0;
    }
    psVar4 = local_38;
    do {
      iVar3 = check_noise_floor();
      *psVar4 = (short)iVar3;
      if ((param_2 != 0) && (iVar3 < *psVar1)) {
        *psVar1 = (short)iVar3;
      }
      psVar4 = psVar4 + 1;
    } while (asStack_32 != psVar4);
    sVar2 = sVar2 + 5;
    phy_printf("%d,%d,%d;;;",(int)local_38[0],(int)local_38[1],(int)local_38[2]);
    psVar1 = psVar1 + 1;
  } while (sVar2 != 0x10);
  phy_printf(&_LC11);
  return;
}

