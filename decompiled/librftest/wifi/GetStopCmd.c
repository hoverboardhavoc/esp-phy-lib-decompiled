/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> GetStopCmd
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 GetStopCmd(void)

{
  int iVar1;
  undefined1 auStack_94 [4];
  undefined1 *puStack_90;
  char acStack_8c [32];
  undefined1 auStack_6c [40];
  undefined1 auStack_44 [56];
  
  iVar1 = UartGetCmdLn(auStack_44);
  if (iVar1 == 0) {
    puStack_90 = auStack_44;
    remove_head_newline(auStack_44,&puStack_90);
    iVar1 = cmd_parse(puStack_90,acStack_8c,auStack_94,auStack_6c);
    if (iVar1 == 0) {
      iVar1 = strcmp(acStack_8c,"CmdStop");
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = strcmp(acStack_8c,"cmdstop");
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = strcmp(acStack_8c,"CmdStatus");
      if (iVar1 == 0) {
        return 3;
      }
      iVar1 = strcmp(acStack_8c,"cmdstatus");
      if (iVar1 == 0) {
        return 3;
      }
    }
    phy_printf(" Plz run CmdStop to exit current cmd!\n");
  }
  return 1;
}

