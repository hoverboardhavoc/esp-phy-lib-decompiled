/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> Mem_WrByteEn_Test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void Mem_WrByteEn_Test(void)

{
  int iVar1;
  int iVar2;
  char local_2c [24];
  
  iVar2 = 0;
  do {
    local_2c[iVar2] = (char)iVar2;
    iVar1 = iVar2 + 1;
    phy_printf("test[%d]=%d \n",iVar2,iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0xc);
  local_2c[1] = local_2c[1] * '\n';
  local_2c[4] = local_2c[4] * '\n';
  local_2c[7] = local_2c[7] * '\n';
  local_2c[10] = local_2c[10] * '\n';
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    phy_printf("test[%d]=%d \n",iVar2,local_2c[iVar2]);
    iVar2 = iVar1;
  } while (iVar1 != 0xc);
  return;
}

