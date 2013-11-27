#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <inttypes.h>

typedef uint8_t u1;
typedef uint16_t u2;
typedef uint32_t u4;

//Constant types: CONSTANT
const u1 CONSTANT_Class = 7;
const u1 CONSTANT_Fieldref = 9;
const u1 CONSTANT_Methodref = 10;
const u1 CONSTANT_InterfaceMethodref = 11;
const u1 CONSTANT_String = 8;
const u1 CONSTANT_Integer = 3;
const u1 CONSTANT_Float = 4;
const u1 CONSTANT_Long = 5;
const u1 CONSTANT_Double = 6;
const u1 CONSTANT_NameAndType = 12;
const u1 CONSTANT_Utf8 = 1;
const u1 CONSTANT_MethodHandle = 15;
const u1 CONSTANT_MethodType = 16;
const u1 CONSTANT_InvokeDynamic = 18;

//Access Flags: ACC
const u2 ACC_PUBLIC = 0x0001;
const u2 ACC_PRIVATE = 0x0002;
const u2 ACC_PROTECTED = 0x0004;
const u2 ACC_STATIC = 0x0008;
const u2 ACC_FINAL = 0x0010;
const u2 ACC_SYNCHRONIZED = 0x0020;
const u2 ACC_SUPER = 0x0020; //Same as ACC_SYNCHRONIZED
const u2 ACC_BRIDGE = 0x0040;
const u2 ACC_VOLATILE = 0x0040; //Same as ACC_BRIDGE
const u2 ACC_VARARGS = 0x0080;
const u2 ACC_TRANSIENT = 0x0080; //Same as ACC_VARARGS
const u2 ACC_NATIVE = 0x0100;
const u2 ACC_INTERFACE = 0x0200;
const u2 ACC_ABSTRACT = 0x0400;
const u2 ACC_STRICT = 0x0800;
const u2 ACC_SYNTHETIC = 0x1000;
const u2 ACC_ANNOTATION = 0x2000;
const u2 ACC_ENUM = 0x4000;

//bytecode: BY
const u1 BY_nop = 0x00;
const u1 BY_aconst_null = 0x01;
const u1 BY_iconst_m1 = 0x02;
const u1 BY_iconst_0 = 0x03;
const u1 BY_iconst_1 = 0x04;
const u1 BY_iconst_2 = 0x05;
const u1 BY_iconst_3 = 0x06;
const u1 BY_iconst_4 = 0x07;
const u1 BY_iconst_5 = 0x08;
const u1 BY_lconst_0 = 0x09;
const u1 BY_lconst_1 = 0x0a;
const u1 BY_fconst_0 = 0x0b;
const u1 BY_fconst_1 = 0x0c;
const u1 BY_fconst_2 = 0x0d;
const u1 BY_dconst_0 = 0x0e;
const u1 BY_dconst_1 = 0x0f;
const u1 BY_bipush = 0x10;
const u1 BY_sipush = 0x11;
const u1 BY_ldc = 0x12;
const u1 BY_ldc_w = 0x13;
const u1 BY_ldc2_w = 0x14;
const u1 BY_iload = 0x15;
const u1 BY_lload = 0x16;
const u1 BY_fload = 0x17;
const u1 BY_dload = 0x18;
const u1 BY_aload = 0x19;
const u1 BY_iload_0 = 0x1a;
const u1 BY_iload_1 = 0x1b;
const u1 BY_iload_2 = 0x1c;
const u1 BY_iload_3 = 0x1d;
const u1 BY_lload_0 = 0x1e;
const u1 BY_lload_1 = 0x1f;
const u1 BY_lload_2 = 0x20;
const u1 BY_lload_3 = 0x21;
const u1 BY_fload_0 = 0x22;
const u1 BY_fload_1 = 0x23;
const u1 BY_fload_2 = 0x24;
const u1 BY_fload_3 = 0x25;
const u1 BY_dload_0 = 0x26;
const u1 BY_dload_1 = 0x27;
const u1 BY_dload_2 = 0x28;
const u1 BY_dload_3 = 0x29;
const u1 BY_aload_0 = 0x2a;
const u1 BY_aload_1 = 0x2b;
const u1 BY_aload_2 = 0x2c;
const u1 BY_aload_3 = 0x2d;
const u1 BY_iaload = 0x2e;
const u1 BY_laload = 0x2f;
const u1 BY_faload = 0x30;
const u1 BY_daload = 0x31;
const u1 BY_aaload = 0x32;
const u1 BY_baload = 0x33;
const u1 BY_caload = 0x34;
const u1 BY_saload = 0x35;
const u1 BY_istore = 0x36;
const u1 BY_lstore = 0x37;
const u1 BY_fstore = 0x38;
const u1 BY_dstore = 0x39;
const u1 BY_astore = 0x3a;
const u1 BY_istore_0 = 0x3b;
const u1 BY_istore_1 = 0x3c;
const u1 BY_istore_2 = 0x3d;
const u1 BY_istore_3 = 0x3e;
const u1 BY_lstore_0 = 0x3f;
const u1 BY_lstore_1 = 0x40;
const u1 BY_lstore_2 = 0x41;
const u1 BY_lstore_3 = 0x42;
const u1 BY_fstore_0 = 0x43;
const u1 BY_fstore_1 = 0x44;
const u1 BY_fstore_2 = 0x45;
const u1 BY_fstore_3 = 0x46;
const u1 BY_dstore_0 = 0x47;
const u1 BY_dstore_1 = 0x48;
const u1 BY_dstore_2 = 0x49;
const u1 BY_dstore_3 = 0x4a;
const u1 BY_astore_0 = 0x4b;
const u1 BY_astore_1 = 0x4c;
const u1 BY_astore_2 = 0x4d;
const u1 BY_astore_3 = 0x4e;
const u1 BY_iastore = 0x4f;
const u1 BY_lastore = 0x50;
const u1 BY_fastore = 0x51;
const u1 BY_dastore = 0x52;
const u1 BY_aastore = 0x53;
const u1 BY_bastore = 0x54;
const u1 BY_castore = 0x55;
const u1 BY_sastore = 0x56;
const u1 BY_pop = 0x57;
const u1 BY_pop2 = 0x58;
const u1 BY_dup = 0x59;
const u1 BY_dup_x1 = 0x5a;
const u1 BY_dup_x2 = 0x5b;
const u1 BY_dup2 = 0x5c;
const u1 BY_dup2_x1 = 0x5d;
const u1 BY_dup2_x2 = 0x5e;
const u1 BY_swap = 0x5f;
const u1 BY_iadd = 0x60;
const u1 BY_ladd = 0x61;
const u1 BY_fadd = 0x62;
const u1 BY_dadd = 0x63;
const u1 BY_isub = 0x64;
const u1 BY_lsub = 0x65;
const u1 BY_fsub = 0x66;
const u1 BY_dsub = 0x67;
const u1 BY_imul = 0x68;
const u1 BY_lmul = 0x69;
const u1 BY_fmul = 0x6a;
const u1 BY_dmul = 0x6b;
const u1 BY_idiv = 0x6c;
const u1 BY_ldiv = 0x6d;
const u1 BY_fdiv = 0x6e;
const u1 BY_ddiv = 0x6f;
const u1 BY_irem = 0x70;
const u1 BY_lrem = 0x71;
const u1 BY_frem = 0x72;
const u1 BY_drem = 0x73;
const u1 BY_ineg = 0x74;
const u1 BY_lneg = 0x75;
const u1 BY_fneg = 0x76;
const u1 BY_dneg = 0x77;
const u1 BY_ishl = 0x78;
const u1 BY_lshl = 0x79;
const u1 BY_ishr = 0x7a;
const u1 BY_lshr = 0x7b;
const u1 BY_iushr = 0x7c;
const u1 BY_lushr = 0x7d;
const u1 BY_iand = 0x7e;
const u1 BY_land = 0x7f;
const u1 BY_ior = 0x80;
const u1 BY_lor = 0x81;
const u1 BY_ixor = 0x82;
const u1 BY_lxor = 0x83;
const u1 BY_iinc = 0x84;
const u1 BY_i2l = 0x85;
const u1 BY_i2f = 0x86;
const u1 BY_i2d = 0x87;
const u1 BY_l2i = 0x88;
const u1 BY_l2f = 0x89;
const u1 BY_l2d = 0x8a;
const u1 BY_f2i = 0x8b;
const u1 BY_f2l = 0x8c;
const u1 BY_f2d = 0x8d;
const u1 BY_d2i = 0x8e;
const u1 BY_d2l = 0x8f;
const u1 BY_d2f = 0x90;
const u1 BY_i2b = 0x91;
const u1 BY_i2c = 0x92;
const u1 BY_i2s = 0x93;
const u1 BY_lcmp = 0x94;
const u1 BY_fcmpl = 0x95;
const u1 BY_fcmpg = 0x96;
const u1 BY_dcmpl = 0x97;
const u1 BY_dcmpg = 0x98;
const u1 BY_ifeq = 0x99;
const u1 BY_ifne = 0x9a;
const u1 BY_iflt = 0x9b;
const u1 BY_ifgt = 0x9c;
const u1 BY_ifge = 0x9d;
const u1 BY_ifle = 0x9e;
const u1 BY_if_icmpeq = 0x9f;
const u1 BY_if_icmpne = 0xa0;
const u1 BY_if_icmplt = 0xa1;
const u1 BY_if_icmpge = 0xa2;
const u1 BY_if_icmpgt = 0xa3;
const u1 BY_if_icmple = 0xa4;
const u1 BY_if_acmpeq = 0xa5;
const u1 BY_if_acmpne = 0xa6;
const u1 BY_goto = 0xa7;
const u1 BY_jsr = 0xa8;
const u1 BY_ret = 0xa9;
const u1 BY_tableswitch = 0xaa;
const u1 BY_lookupswitch = 0xab;
const u1 BY_ireturn = 0xac;
const u1 BY_lreturn = 0xad;
const u1 BY_freturn = 0xae;
const u1 BY_dreturn = 0xaf;
const u1 BY_areturn = 0xb0;
const u1 BY_return = 0xb1;
const u1 BY_getstatic = 0xb2;
const u1 BY_putstatic = 0xb3;
const u1 BY_getfield = 0xb4;
const u1 BY_putfield = 0xb5;
const u1 BY_invokevirtual = 0xb6;
const u1 BY_invokespecial = 0xb7;
const u1 BY_invokestatic = 0xb8;
const u1 BY_invokeinterface = 0xb9;
const u1 BY_invokedynamic = 0xba;
const u1 BY_new = 0xbb;
const u1 BY_newarray = 0xbc;
const u1 BY_anewarray = 0xbd;
const u1 BY_arraylength = 0xbe;
const u1 BY_athrow = 0xbf;
const u1 BY_checkcast = 0xc0;
const u1 BY_instanceof = 0xc1;
const u1 BY_monitorenter = 0xc2;
const u1 BY_monitorexit = 0xc3;
const u1 BY_wide = 0xc4;
const u1 BY_multinewarray = 0xc5;
const u1 BY_ifnull = 0xc6;
const u1 BY_ifnonnull = 0xc7;
const u1 BY_goto_w = 0xc8;
const u1 BY_jsr_w = 0xc9;

const u4 const_null = 0;


#endif