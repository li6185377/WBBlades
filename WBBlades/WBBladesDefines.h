
#define NSSTRING(C_STR) [NSString stringWithCString: (char *)(C_STR) encoding: [NSString defaultCStringEncoding]]
#define CSTRING(NS_STR) [(NS_STR) cStringUsingEncoding: [NSString defaultCStringEncoding]]

struct class64
{
    unsigned long long isa;
    unsigned long long superClass;
    unsigned long long cache;
    unsigned long long vtable;
    unsigned long long data;
    
};

struct cfstring64
{
    unsigned long long ptr;
    unsigned long long unknown;
    unsigned long long stringAddress;
    unsigned long long size;
};

struct class64Info
{
    unsigned int flags;
    unsigned int instanceStart;
    unsigned int instanceSize;
    unsigned int reserved;
    unsigned long long  instanceVarLayout;
    unsigned long long  name;
    unsigned long long  baseMethods;
    unsigned long long  baseProtocols;
    unsigned long long  instanceVariables;
    unsigned long long  weakInstanceVariables;
    unsigned long long  baseProperties;
};

struct method64_list_t
{
  unsigned int entsize;
  unsigned int count;
};

struct method64_t
{
  unsigned long long name;
  unsigned long long types;
  unsigned long long imp;
};

struct ivar64_list_t
{
  unsigned int entsize;
  unsigned int count;
};

struct ivar64_t
{
  unsigned long long offset;
  unsigned long long name;
  unsigned long long type;
  unsigned int alignment;
  unsigned int size;
};
struct category64
{
    unsigned long long name;
    unsigned long long cls;
    unsigned long long instanceMethods;
    unsigned long long classMethods;
    unsigned long long instanceProperties;
    
};


//指令定义
#define RET  (0xd65f03c0)
#define B  (0x14000001)

//段定义
#define SEGMENT_TEXT @"__TEXT"
#define SEGMENT_RODATA @"__RODATA"
#define SEGMENT_DATA @"__DATA"
#define SEGMENT_DATA_CONST @"__DATA_CONST"

//符号表前缀定义
#define CLASS_SYMBOL_PRE @"_OBJC_CLASS_$_"
#define METACLASS_SYMBOL_PRE @"_OBJC_METACLASS_$_"

//中文字符串所处的节
#define CHINESE_STRING_SECTION  @"(__TEXT,__ustring)"

//节定义
#define DATA_CLASSLIST_SECTION @"__objc_classlist__DATA"
#define CONST_DATA_CLASSLIST_SECTION @"__objc_classlist__DATA_CONST"
#define DATA_CLASSREF_SECTION @"__objc_classrefs__DATA"
#define CONST_DATA_CLASSREF_SECTION @"__objc_classrefs__DATA_CONST"
#define DATA_NCLSLIST_SECTION @"__objc_nlclslist__DATA"
#define CONST_DATA_NCLSLIST_SECTION @"__objc_nlclslist__DATA_CONST"
#define DATA_NCATLIST_SECTION @"__objc_nlcatlist__DATA"
#define CONST_DATA_NCATLIST_SECTION @"__objc_nlcatlist__DATA_CONST"
#define DATA_CSTRING @"__cfstring"
#define TEXT_TEXT_SECTION @"__text"
#define IMP_KEY @"imp"
#define SYMBOL_KEY @"symbol"

#define SPECIAL_NUM 0x5614542
#define SPECIAL_SECTION_TYPE   0x3c

#define CLASSNAME_MAX_LEN 50
#define METHODNAME_MAX_LEN 150

#define BIND_OPCODE_MASK                    0xF0
#define BIND_IMMEDIATE_MASK                    0x0F

#define BIND_OPCODE_DONE                    0x00
#define BIND_OPCODE_SET_DYLIB_ORDINAL_IMM            0x10
#define BIND_OPCODE_SET_DYLIB_ORDINAL_ULEB            0x20
#define BIND_OPCODE_SET_DYLIB_SPECIAL_IMM            0x30
#define BIND_OPCODE_SET_SYMBOL_TRAILING_FLAGS_IMM        0x40
#define BIND_OPCODE_SET_TYPE_IMM                0x50
#define BIND_OPCODE_SET_ADDEND_SLEB                0x60
#define BIND_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB            0x70
#define BIND_OPCODE_ADD_ADDR_ULEB                0x80
#define BIND_OPCODE_DO_BIND                    0x90
#define BIND_OPCODE_DO_BIND_ADD_ADDR_ULEB            0xA0
#define BIND_OPCODE_DO_BIND_ADD_ADDR_IMM_SCALED            0xB0
#define BIND_OPCODE_DO_BIND_ULEB_TIMES_SKIPPING_ULEB        0xC0

