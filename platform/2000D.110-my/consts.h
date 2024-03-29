/*
 *  2000D 1.1.0 consts
 */

#define CARD_LED_ADDRESS 0xC0220134 // http://magiclantern.wikia.com/wiki/Led_addresses
#define LEDON 0x46
#define LEDOFF 0x44

#define HIJACK_CACHE_HACK

#define HIJACK_CACHE_HACK_BSS_END_ADDR   0xfe0c1b74
#define HIJACK_CACHE_HACK_BSS_END_INSTR  0xE3A01732 // should be the correct INSTRUCTION MOV R1, 0xc80000
#define HIJACK_CACHE_HACK_INITTASK_ADDR  0xfe0c3b34

#define HIJACK_INSTR_BL_CSTART  0xFE0C0638
#define HIJACK_INSTR_BSS_END 0xfe0c3b24
#define HIJACK_FIXBR_BZERO32 0xfe0c3a6c
#define HIJACK_FIXBR_CREATE_ITASK 0xfe0c3b0c
#define HIJACK_INSTR_MY_ITASK 0xfe0c3b34

#define HIJACK_TASK_ADDR 0x31170
#define DISPLAY_STATEOBJ (*(struct state_object **)0x318B8)
#define DISPLAY_IS_ON (DISPLAY_STATEOBJ->current_state != 0)
