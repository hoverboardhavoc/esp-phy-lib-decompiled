/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> rf_test.o -> esp_crc8
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint esp_crc8(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  
  uVar5 = 0;
  pbVar1 = param_1;
  while (pbVar1 != param_1 + param_2) {
    pbVar2 = pbVar1 + 1;
    uVar5 = uVar5 ^ *pbVar1;
    cVar4 = '\b';
    do {
      uVar3 = uVar5 & 1;
      uVar5 = uVar5 >> 1;
      if (uVar3 != 0) {
        uVar5 = (uVar5 ^ 0xffffff8c) & 0xff;
      }
      cVar4 = cVar4 + -1;
      pbVar1 = pbVar2;
    } while (cVar4 != '\0');
  }
  return uVar5;
}

