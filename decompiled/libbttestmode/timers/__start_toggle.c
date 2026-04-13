/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> timers.o -> __start_toggle
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void __start_toggle(undefined4 param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  if (param_2 == 0) {
_L12:
    puVar1 = (uint *)&DAT_60008000;
  }
  else {
    puVar1 = (uint *)&DAT_60009000;
    if (param_2 != 1) {
      ebreak();
      goto _L12;
    }
  }
  *puVar1 = *puVar1 | 0x60000400;
  if (param_2 == 0) {
    puVar4 = &DAT_60008000;
_L26:
    puVar2 = (uint *)(puVar4 + 0x70);
  }
  else {
    if (param_2 == 1) {
      puVar4 = &DAT_60009000;
      goto _L26;
    }
    puVar2 = (uint *)&DAT_00000070;
  }
  *puVar2 = *puVar2 | 1;
  *puVar1 = *puVar1 & 0xe0001fff | 0xa0000;
  if (param_2 == 0) {
    puVar4 = &DAT_60008000;
_L27:
    puVar3 = (undefined4 *)(puVar4 + 0x10);
  }
  else {
    if (param_2 == 1) {
      puVar4 = &DAT_60009000;
      goto _L27;
    }
    puVar3 = (undefined4 *)&DAT_00000010;
  }
  *puVar3 = param_1;
  if (param_2 == 0) {
    puVar4 = &DAT_60008000;
_L28:
    puVar3 = (undefined4 *)(puVar4 + 0x14);
  }
  else {
    if (param_2 == 1) {
      puVar4 = &DAT_60009000;
      goto _L28;
    }
    puVar3 = (undefined4 *)&DAT_00000014;
  }
  *puVar3 = 0;
  if (param_2 == 0) {
    puVar4 = &DAT_60008000;
_L29:
    puVar3 = (undefined4 *)(puVar4 + 0x18);
  }
  else {
    if (param_2 == 1) {
      puVar4 = &DAT_60009000;
      goto _L29;
    }
    puVar3 = (undefined4 *)&DAT_00000018;
  }
  *puVar3 = 0;
  if (param_2 == 0) {
    puVar4 = &DAT_60008000;
_L30:
    puVar3 = (undefined4 *)(puVar4 + 0x1c);
  }
  else {
    if (param_2 == 1) {
      puVar4 = &DAT_60009000;
      goto _L30;
    }
    puVar3 = (undefined4 *)&DAT_0000001c;
  }
  *puVar3 = 0;
  if (param_2 == 0) {
    puVar4 = &DAT_60008000;
  }
  else {
    if (param_2 != 1) {
      puVar3 = (undefined4 *)&DAT_00000020;
      goto _L11;
    }
    puVar4 = &DAT_60009000;
  }
  puVar3 = (undefined4 *)(puVar4 + 0x20);
_L11:
  *puVar3 = 0;
  *puVar1 = *puVar1 | 0x80000000;
  return;
}

