/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> cmd_polling.o -> cmd_polling_attach
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 cmd_polling_attach(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = &cmd_queue;
  if (param_1 == 0) {
    pcVar1 = &cmd_queue;
    do {
      if ((*pcVar1 == '\x01') && (*(int *)(pcVar1 + 8) == param_3)) {
        return 0;
      }
      pcVar1 = pcVar1 + 0x10;
    } while (pcVar1 != (char *)0x1034c);
  }
  iVar2 = 0;
  do {
    if (*pcVar3 == '\0') {
      (&cmd_queue)[iVar2 * 0x10] = 1;
      (&DAT_0001014d)[iVar2 * 0x10] = (char)param_1;
      (&DAT_00010154)[iVar2 * 4] = param_3;
      (&DAT_00010158)[iVar2 * 4] = param_4;
      if (param_1 == 1) {
        (&DAT_00010150)[iVar2 * 4] = param_2;
        return 1;
      }
      (&DAT_00010150)[iVar2 * 4] = 0;
      return 1;
    }
    iVar2 = iVar2 + 1;
    pcVar3 = pcVar3 + 0x10;
  } while (iVar2 != 0x20);
  return 0;
}

