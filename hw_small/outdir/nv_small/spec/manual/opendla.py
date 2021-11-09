registers         = {}
addr_spaces       = {}

# Register NVDLA_CFGROM_CFGROM_HW_VERSION_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_HW_VERSION_0'] = {
    'addr'            : 0x0,
    'size'            : 0x20,
    'reset_val'       : 0x10001,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'HW_VERSION' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x10001,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'HW_VERSION',
    ],
} # End of register: CFGROM_HW_VERSION_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_HW_VERSION_0')



# Register NVDLA_CFGROM_CFGROM_GLB_DESC_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_GLB_DESC_0'] = {
    'addr'            : 0x4,
    'size'            : 0x20,
    'reset_val'       : 0x1,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'GLB_DESC' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'GLB_DESC',
    ],
} # End of register: CFGROM_GLB_DESC_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_GLB_DESC_0')



# Register NVDLA_CFGROM_CFGROM_CIF_DESC_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CIF_DESC_0'] = {
    'addr'            : 0x8,
    'size'            : 0x20,
    'reset_val'       : 0x180002,
    'reset_mask'      : 0x7ffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CIF_DESC' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x180002,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CIF_DESC',
    ],
} # End of register: CFGROM_CIF_DESC_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CIF_DESC_0')



# Register NVDLA_CFGROM_CFGROM_CIF_CAP_INCOMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CIF_CAP_INCOMPAT_0'] = {
    'addr'            : 0xc,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CIF_CAP_INCOMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CIF_CAP_INCOMPAT',
    ],
} # End of register: CFGROM_CIF_CAP_INCOMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CIF_CAP_INCOMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CIF_CAP_COMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CIF_CAP_COMPAT_0'] = {
    'addr'            : 0x10,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CIF_CAP_COMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CIF_CAP_COMPAT',
    ],
} # End of register: CFGROM_CIF_CAP_COMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CIF_CAP_COMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CIF_BASE_WIDTH_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CIF_BASE_WIDTH_0'] = {
    'addr'            : 0x14,
    'size'            : 0x8,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xf,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xff,
    'write_mask'      : 0x0,
    'CIF_BASE_WIDTH' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CIF_BASE_WIDTH',
    ],
} # End of register: CFGROM_CIF_BASE_WIDTH_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CIF_BASE_WIDTH_0')



# Register NVDLA_CFGROM_CFGROM_CIF_BASE_LATENCY_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CIF_BASE_LATENCY_0'] = {
    'addr'            : 0x18,
    'size'            : 0x20,
    'reset_val'       : 0x32,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CIF_BASE_LATENCY' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x32,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CIF_BASE_LATENCY',
    ],
} # End of register: CFGROM_CIF_BASE_LATENCY_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CIF_BASE_LATENCY_0')



# Register NVDLA_CFGROM_CFGROM_CIF_BASE_BURST_LENGTH_MAX_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CIF_BASE_BURST_LENGTH_MAX_0'] = {
    'addr'            : 0x1c,
    'size'            : 0x1b,
    'reset_val'       : 0x80,
    'reset_mask'      : 0x1fe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0x0,
    'BASE_BURST_LENGTH_MAX' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x4,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BASE_BURST_LENGTH_MAX',
    ],
} # End of register: CFGROM_CIF_BASE_BURST_LENGTH_MAX_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CIF_BASE_BURST_LENGTH_MAX_0')



# Register NVDLA_CFGROM_CFGROM_CIF_BASE_MEM_ADDR_WIDTH_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CIF_BASE_MEM_ADDR_WIDTH_0'] = {
    'addr'            : 0x20,
    'size'            : 0x1b,
    'reset_val'       : 0x400,
    'reset_mask'      : 0x1fe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0x0,
    'CIF_BASE_MEM_ADDR_WIDTH' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x20,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CIF_BASE_MEM_ADDR_WIDTH',
    ],
} # End of register: CFGROM_CIF_BASE_MEM_ADDR_WIDTH_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CIF_BASE_MEM_ADDR_WIDTH_0')



# Register NVDLA_CFGROM_CFGROM_CDMA_DESC_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDMA_DESC_0'] = {
    'addr'            : 0x24,
    'size'            : 0x20,
    'reset_val'       : 0x340003,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDMA_DESC' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x340003,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDMA_DESC',
    ],
} # End of register: CFGROM_CDMA_DESC_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDMA_DESC_0')



# Register NVDLA_CFGROM_CFGROM_CDMA_CAP_INCOMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDMA_CAP_INCOMPAT_0'] = {
    'addr'            : 0x28,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDMA_CAP_INCOMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDMA_CAP_INCOMPAT',
    ],
} # End of register: CFGROM_CDMA_CAP_INCOMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDMA_CAP_INCOMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CDMA_CAP_COMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDMA_CAP_COMPAT_0'] = {
    'addr'            : 0x2c,
    'size'            : 0x20,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDMA_CAP_COMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDMA_CAP_COMPAT',
    ],
} # End of register: CFGROM_CDMA_CAP_COMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDMA_CAP_COMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CDMA_BASE_FEATURE_TYPES_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDMA_BASE_FEATURE_TYPES_0'] = {
    'addr'            : 0x30,
    'size'            : 0xc,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xfff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfff,
    'write_mask'      : 0x0,
    'CDMA_BASE_FEATURE_TYPES' : {
        'lsb'               : 0,
        'msb'               : 11,
        'size'              : 12,
        'field'             : (0xfff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDMA_BASE_FEATURE_TYPES',
    ],
} # End of register: CFGROM_CDMA_BASE_FEATURE_TYPES_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDMA_BASE_FEATURE_TYPES_0')



# Register NVDLA_CFGROM_CFGROM_CDMA_BASE_WEIGHT_TYPES_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDMA_BASE_WEIGHT_TYPES_0'] = {
    'addr'            : 0x34,
    'size'            : 0xc,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xfff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfff,
    'write_mask'      : 0x0,
    'CDMA_BASE_WEIGHT_TYPES' : {
        'lsb'               : 0,
        'msb'               : 11,
        'size'              : 12,
        'field'             : (0xfff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rwt',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDMA_BASE_WEIGHT_TYPES',
    ],
} # End of register: CFGROM_CDMA_BASE_WEIGHT_TYPES_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDMA_BASE_WEIGHT_TYPES_0')



# Register NVDLA_CFGROM_CFGROM_CDMA_BASE_ATOMIC_C_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDMA_BASE_ATOMIC_C_0'] = {
    'addr'            : 0x38,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDMA_BASE_ATOMIC_C' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'rwt',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDMA_BASE_ATOMIC_C',
    ],
} # End of register: CFGROM_CDMA_BASE_ATOMIC_C_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDMA_BASE_ATOMIC_C_0')



# Register NVDLA_CFGROM_CFGROM_CDMA_BASE_ATOMIC_K_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDMA_BASE_ATOMIC_K_0'] = {
    'addr'            : 0x3c,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDMA_BASE_ATOMIC_K' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDMA_BASE_ATOMIC_K',
    ],
} # End of register: CFGROM_CDMA_BASE_ATOMIC_K_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDMA_BASE_ATOMIC_K_0')



# Register NVDLA_CFGROM_CFGROM_CDMA_BASE_ATOMIC_M_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDMA_BASE_ATOMIC_M_0'] = {
    'addr'            : 0x40,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDMA_BASE_ATOMIC_M' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDMA_BASE_ATOMIC_M',
    ],
} # End of register: CFGROM_CDMA_BASE_ATOMIC_M_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDMA_BASE_ATOMIC_M_0')



# Register NVDLA_CFGROM_CFGROM_CDMA_BASE_CBUF_BANK_NUM_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDMA_BASE_CBUF_BANK_NUM_0'] = {
    'addr'            : 0x44,
    'size'            : 0x20,
    'reset_val'       : 0x20,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDMA_BASE_CBUF_BANK_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x20,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDMA_BASE_CBUF_BANK_NUM',
    ],
} # End of register: CFGROM_CDMA_BASE_CBUF_BANK_NUM_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDMA_BASE_CBUF_BANK_NUM_0')



# Register NVDLA_CFGROM_CFGROM_CDMA_BASE_CBUF_BANK_WIDTH_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDMA_BASE_CBUF_BANK_WIDTH_0'] = {
    'addr'            : 0x48,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDMA_BASE_CBUF_BANK_WIDTH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDMA_BASE_CBUF_BANK_WIDTH',
    ],
} # End of register: CFGROM_CDMA_BASE_CBUF_BANK_WIDTH_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDMA_BASE_CBUF_BANK_WIDTH_0')



# Register NVDLA_CFGROM_CFGROM_CDMA_BASE_CBUF_BANK_DEPTH_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDMA_BASE_CBUF_BANK_DEPTH_0'] = {
    'addr'            : 0x4c,
    'size'            : 0x20,
    'reset_val'       : 0x200,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDMA_BASE_CBUF_BANK_DEPTH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x200,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDMA_BASE_CBUF_BANK_DEPTH',
    ],
} # End of register: CFGROM_CDMA_BASE_CBUF_BANK_DEPTH_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDMA_BASE_CBUF_BANK_DEPTH_0')



# Register NVDLA_CFGROM_CFGROM_CDMA_MULTI_BATCH_MAX_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDMA_MULTI_BATCH_MAX_0'] = {
    'addr'            : 0x50,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDMA_MULTI_BATCH_MAX' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDMA_MULTI_BATCH_MAX',
    ],
} # End of register: CFGROM_CDMA_MULTI_BATCH_MAX_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDMA_MULTI_BATCH_MAX_0')



# Register NVDLA_CFGROM_CFGROM_CDMA_IMAGE_IN_FORMATS_PACKED_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDMA_IMAGE_IN_FORMATS_PACKED_0'] = {
    'addr'            : 0x54,
    'size'            : 0x20,
    'reset_val'       : 0xcfff001,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDMA_IMAGE_IN_FORMATS_PACKED' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0xcfff001,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDMA_IMAGE_IN_FORMATS_PACKED',
    ],
} # End of register: CFGROM_CDMA_IMAGE_IN_FORMATS_PACKED_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDMA_IMAGE_IN_FORMATS_PACKED_0')



# Register NVDLA_CFGROM_CFGROM_CDMA_IMAGE_IN_FORMATS_SEMI_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDMA_IMAGE_IN_FORMATS_SEMI_0'] = {
    'addr'            : 0x58,
    'size'            : 0x20,
    'reset_val'       : 0x3,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDMA_IMAGE_IN_FORMATS_SEMI' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x3,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDMA_IMAGE_IN_FORMATS_SEMI',
    ],
} # End of register: CFGROM_CDMA_IMAGE_IN_FORMATS_SEMI_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDMA_IMAGE_IN_FORMATS_SEMI_0')



# Register NVDLA_CFGROM_CFGROM_CBUF_DESC_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CBUF_DESC_0'] = {
    'addr'            : 0x5c,
    'size'            : 0x20,
    'reset_val'       : 0x180004,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CBUF_DESC' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x180004,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CBUF_DESC',
    ],
} # End of register: CFGROM_CBUF_DESC_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CBUF_DESC_0')



# Register NVDLA_CFGROM_CFGROM_CBUF_CAP_INCOMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CBUF_CAP_INCOMPAT_0'] = {
    'addr'            : 0x60,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CBUF_CAP_INCOMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CBUF_CAP_INCOMPAT',
    ],
} # End of register: CFGROM_CBUF_CAP_INCOMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CBUF_CAP_INCOMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CBUF_CAP_COMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CBUF_CAP_COMPAT_0'] = {
    'addr'            : 0x64,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CBUF_CAP_COMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CBUF_CAP_COMPAT',
    ],
} # End of register: CFGROM_CBUF_CAP_COMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CBUF_CAP_COMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CBUF_BASE_CBUF_BANK_NUM_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CBUF_BASE_CBUF_BANK_NUM_0'] = {
    'addr'            : 0x68,
    'size'            : 0x20,
    'reset_val'       : 0x20,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CBUF_BASE_CBUF_BANK_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x20,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CBUF_BASE_CBUF_BANK_NUM',
    ],
} # End of register: CFGROM_CBUF_BASE_CBUF_BANK_NUM_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CBUF_BASE_CBUF_BANK_NUM_0')



# Register NVDLA_CFGROM_CFGROM_CBUF_BASE_CBUF_BANK_WIDTH_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CBUF_BASE_CBUF_BANK_WIDTH_0'] = {
    'addr'            : 0x6c,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CBUF_BASE_CBUF_BANK_WIDTH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CBUF_BASE_CBUF_BANK_WIDTH',
    ],
} # End of register: CFGROM_CBUF_BASE_CBUF_BANK_WIDTH_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CBUF_BASE_CBUF_BANK_WIDTH_0')



# Register NVDLA_CFGROM_CFGROM_CBUF_BASE_CBUF_BANK_DEPTH_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CBUF_BASE_CBUF_BANK_DEPTH_0'] = {
    'addr'            : 0x70,
    'size'            : 0x20,
    'reset_val'       : 0x200,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CBUF_BASE_CBUF_BANK_DEPTH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x200,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CBUF_BASE_CBUF_BANK_DEPTH',
    ],
} # End of register: CFGROM_CBUF_BASE_CBUF_BANK_DEPTH_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CBUF_BASE_CBUF_BANK_DEPTH_0')



# Register NVDLA_CFGROM_CFGROM_CBUF_BASE_CDMA_ID_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CBUF_BASE_CDMA_ID_0'] = {
    'addr'            : 0x74,
    'size'            : 0x20,
    'reset_val'       : 0x3,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CBUF_BASE_CDMA_ID' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x3,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CBUF_BASE_CDMA_ID',
    ],
} # End of register: CFGROM_CBUF_BASE_CDMA_ID_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CBUF_BASE_CDMA_ID_0')



# Register NVDLA_CFGROM_CFGROM_CSC_DESC_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CSC_DESC_0'] = {
    'addr'            : 0x78,
    'size'            : 0x20,
    'reset_val'       : 0x300005,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CSC_DESC' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x300005,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CSC_DESC',
    ],
} # End of register: CFGROM_CSC_DESC_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CSC_DESC_0')



# Register NVDLA_CFGROM_CFGROM_CSC_CAP_INCOMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CSC_CAP_INCOMPAT_0'] = {
    'addr'            : 0x7c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CSC_CAP_INCOMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CSC_CAP_INCOMPAT',
    ],
} # End of register: CFGROM_CSC_CAP_INCOMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CSC_CAP_INCOMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CSC_CAP_COMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CSC_CAP_COMPAT_0'] = {
    'addr'            : 0x80,
    'size'            : 0x20,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CSC_CAP_COMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CSC_CAP_COMPAT',
    ],
} # End of register: CFGROM_CSC_CAP_COMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CSC_CAP_COMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CSC_BASE_FEATURE_TYPES_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CSC_BASE_FEATURE_TYPES_0'] = {
    'addr'            : 0x84,
    'size'            : 0xc,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xfff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfff,
    'write_mask'      : 0x0,
    'CSC_BASE_FEATURE_TYPES' : {
        'lsb'               : 0,
        'msb'               : 11,
        'size'              : 12,
        'field'             : (0xfff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CSC_BASE_FEATURE_TYPES',
    ],
} # End of register: CFGROM_CSC_BASE_FEATURE_TYPES_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CSC_BASE_FEATURE_TYPES_0')



# Register NVDLA_CFGROM_CFGROM_CSC_BASE_WEIGHT_TYPES_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CSC_BASE_WEIGHT_TYPES_0'] = {
    'addr'            : 0x88,
    'size'            : 0xc,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xfff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfff,
    'write_mask'      : 0x0,
    'CSC_BASE_WEIGHT_TYPES' : {
        'lsb'               : 0,
        'msb'               : 11,
        'size'              : 12,
        'field'             : (0xfff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rwt',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CSC_BASE_WEIGHT_TYPES',
    ],
} # End of register: CFGROM_CSC_BASE_WEIGHT_TYPES_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CSC_BASE_WEIGHT_TYPES_0')



# Register NVDLA_CFGROM_CFGROM_CSC_BASE_ATOMIC_C_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CSC_BASE_ATOMIC_C_0'] = {
    'addr'            : 0x8c,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CSC_BASE_ATOMIC_C' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'rwt',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CSC_BASE_ATOMIC_C',
    ],
} # End of register: CFGROM_CSC_BASE_ATOMIC_C_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CSC_BASE_ATOMIC_C_0')



# Register NVDLA_CFGROM_CFGROM_CSC_BASE_ATOMIC_K_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CSC_BASE_ATOMIC_K_0'] = {
    'addr'            : 0x90,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CSC_BASE_ATOMIC_K' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CSC_BASE_ATOMIC_K',
    ],
} # End of register: CFGROM_CSC_BASE_ATOMIC_K_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CSC_BASE_ATOMIC_K_0')



# Register NVDLA_CFGROM_CFGROM_CSC_BASE_ATOMIC_M_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CSC_BASE_ATOMIC_M_0'] = {
    'addr'            : 0x94,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CSC_BASE_ATOMIC_M' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CSC_BASE_ATOMIC_M',
    ],
} # End of register: CFGROM_CSC_BASE_ATOMIC_M_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CSC_BASE_ATOMIC_M_0')



# Register NVDLA_CFGROM_CFGROM_CSC_BASE_CBUF_BANK_NUM_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CSC_BASE_CBUF_BANK_NUM_0'] = {
    'addr'            : 0x98,
    'size'            : 0x20,
    'reset_val'       : 0x20,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CSC_BASE_CBUF_BANK_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x20,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CSC_BASE_CBUF_BANK_NUM',
    ],
} # End of register: CFGROM_CSC_BASE_CBUF_BANK_NUM_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CSC_BASE_CBUF_BANK_NUM_0')



# Register NVDLA_CFGROM_CFGROM_CSC_BASE_CBUF_BANK_WIDTH_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CSC_BASE_CBUF_BANK_WIDTH_0'] = {
    'addr'            : 0x9c,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CSC_BASE_CBUF_BANK_WIDTH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CSC_BASE_CBUF_BANK_WIDTH',
    ],
} # End of register: CFGROM_CSC_BASE_CBUF_BANK_WIDTH_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CSC_BASE_CBUF_BANK_WIDTH_0')



# Register NVDLA_CFGROM_CFGROM_CSC_BASE_CBUF_BANK_DEPTH_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CSC_BASE_CBUF_BANK_DEPTH_0'] = {
    'addr'            : 0xa0,
    'size'            : 0x20,
    'reset_val'       : 0x200,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CSC_BASE_CBUF_BANK_DEPTH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x200,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CSC_BASE_CBUF_BANK_DEPTH',
    ],
} # End of register: CFGROM_CSC_BASE_CBUF_BANK_DEPTH_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CSC_BASE_CBUF_BANK_DEPTH_0')



# Register NVDLA_CFGROM_CFGROM_CSC_BASE_CDMA_ID_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CSC_BASE_CDMA_ID_0'] = {
    'addr'            : 0xa4,
    'size'            : 0x20,
    'reset_val'       : 0x3,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CSC_BASE_CDMA_ID' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x3,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CSC_BASE_CDMA_ID',
    ],
} # End of register: CFGROM_CSC_BASE_CDMA_ID_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CSC_BASE_CDMA_ID_0')



# Register NVDLA_CFGROM_CFGROM_CSC_MULTI_BATCH_MAX_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CSC_MULTI_BATCH_MAX_0'] = {
    'addr'            : 0xa8,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CSC_MULTI_BATCH_MAX' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CSC_MULTI_BATCH_MAX',
    ],
} # End of register: CFGROM_CSC_MULTI_BATCH_MAX_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CSC_MULTI_BATCH_MAX_0')



# Register NVDLA_CFGROM_CFGROM_CMAC_A_DESC_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CMAC_A_DESC_0'] = {
    'addr'            : 0xac,
    'size'            : 0x20,
    'reset_val'       : 0x1c0006,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CMAC_A_DESC' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x1c0006,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CMAC_A_DESC',
    ],
} # End of register: CFGROM_CMAC_A_DESC_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CMAC_A_DESC_0')



# Register NVDLA_CFGROM_CFGROM_CMAC_A_CAP_INCOMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CMAC_A_CAP_INCOMPAT_0'] = {
    'addr'            : 0xb0,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CMAC_A_CAP_INCOMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CMAC_A_CAP_INCOMPAT',
    ],
} # End of register: CFGROM_CMAC_A_CAP_INCOMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CMAC_A_CAP_INCOMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CMAC_A_CAP_COMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CMAC_A_CAP_COMPAT_0'] = {
    'addr'            : 0xb4,
    'size'            : 0x20,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CMAC_A_CAP_COMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CMAC_A_CAP_COMPAT',
    ],
} # End of register: CFGROM_CMAC_A_CAP_COMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CMAC_A_CAP_COMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CMAC_A_BASE_FEATURE_TYPES_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CMAC_A_BASE_FEATURE_TYPES_0'] = {
    'addr'            : 0xb8,
    'size'            : 0xc,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xfff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfff,
    'write_mask'      : 0x0,
    'CMAC_A_BASE_FEATURE_TYPES' : {
        'lsb'               : 0,
        'msb'               : 11,
        'size'              : 12,
        'field'             : (0xfff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CMAC_A_BASE_FEATURE_TYPES',
    ],
} # End of register: CFGROM_CMAC_A_BASE_FEATURE_TYPES_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CMAC_A_BASE_FEATURE_TYPES_0')



# Register NVDLA_CFGROM_CFGROM_CMAC_A_BASE_WEIGHT_TYPES_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CMAC_A_BASE_WEIGHT_TYPES_0'] = {
    'addr'            : 0xbc,
    'size'            : 0xc,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xfff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfff,
    'write_mask'      : 0x0,
    'CMAC_A_BASE_WEIGHT_TYPES' : {
        'lsb'               : 0,
        'msb'               : 11,
        'size'              : 12,
        'field'             : (0xfff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rwt',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CMAC_A_BASE_WEIGHT_TYPES',
    ],
} # End of register: CFGROM_CMAC_A_BASE_WEIGHT_TYPES_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CMAC_A_BASE_WEIGHT_TYPES_0')



# Register NVDLA_CFGROM_CFGROM_CMAC_A_BASE_ATOMIC_C_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CMAC_A_BASE_ATOMIC_C_0'] = {
    'addr'            : 0xc0,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CMAC_A_BASE_ATOMIC_C' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'rwt',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CMAC_A_BASE_ATOMIC_C',
    ],
} # End of register: CFGROM_CMAC_A_BASE_ATOMIC_C_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CMAC_A_BASE_ATOMIC_C_0')



# Register NVDLA_CFGROM_CFGROM_CMAC_A_BASE_ATOMIC_K_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CMAC_A_BASE_ATOMIC_K_0'] = {
    'addr'            : 0xc4,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CMAC_A_BASE_ATOMIC_K' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CMAC_A_BASE_ATOMIC_K',
    ],
} # End of register: CFGROM_CMAC_A_BASE_ATOMIC_K_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CMAC_A_BASE_ATOMIC_K_0')



# Register NVDLA_CFGROM_CFGROM_CMAC_A_BASE_CDMA_ID_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CMAC_A_BASE_CDMA_ID_0'] = {
    'addr'            : 0xc8,
    'size'            : 0x20,
    'reset_val'       : 0x3,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CMAC_A_BASE_CDMA_ID' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x3,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CMAC_A_BASE_CDMA_ID',
    ],
} # End of register: CFGROM_CMAC_A_BASE_CDMA_ID_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CMAC_A_BASE_CDMA_ID_0')



# Register NVDLA_CFGROM_CFGROM_CMAC_B_DESC_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CMAC_B_DESC_0'] = {
    'addr'            : 0xcc,
    'size'            : 0x20,
    'reset_val'       : 0x1c0006,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CMAC_B_DESC' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x1c0006,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CMAC_B_DESC',
    ],
} # End of register: CFGROM_CMAC_B_DESC_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CMAC_B_DESC_0')



# Register NVDLA_CFGROM_CFGROM_CMAC_B_CAP_INCOMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CMAC_B_CAP_INCOMPAT_0'] = {
    'addr'            : 0xd0,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CMAC_B_CAP_INCOMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CMAC_B_CAP_INCOMPAT',
    ],
} # End of register: CFGROM_CMAC_B_CAP_INCOMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CMAC_B_CAP_INCOMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CMAC_B_CAP_COMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CMAC_B_CAP_COMPAT_0'] = {
    'addr'            : 0xd4,
    'size'            : 0x20,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CMAC_B_CAP_COMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CMAC_B_CAP_COMPAT',
    ],
} # End of register: CFGROM_CMAC_B_CAP_COMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CMAC_B_CAP_COMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CMAC_B_BASE_FEATURE_TYPES_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CMAC_B_BASE_FEATURE_TYPES_0'] = {
    'addr'            : 0xd8,
    'size'            : 0xc,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xfff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfff,
    'write_mask'      : 0x0,
    'CMAC_B_BASE_FEATURE_TYPES' : {
        'lsb'               : 0,
        'msb'               : 11,
        'size'              : 12,
        'field'             : (0xfff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CMAC_B_BASE_FEATURE_TYPES',
    ],
} # End of register: CFGROM_CMAC_B_BASE_FEATURE_TYPES_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CMAC_B_BASE_FEATURE_TYPES_0')



# Register NVDLA_CFGROM_CFGROM_CMAC_B_BASE_WEIGHT_TYPES_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CMAC_B_BASE_WEIGHT_TYPES_0'] = {
    'addr'            : 0xdc,
    'size'            : 0xc,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xfff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfff,
    'write_mask'      : 0x0,
    'CMAC_B_BASE_WEIGHT_TYPES' : {
        'lsb'               : 0,
        'msb'               : 11,
        'size'              : 12,
        'field'             : (0xfff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rwt',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CMAC_B_BASE_WEIGHT_TYPES',
    ],
} # End of register: CFGROM_CMAC_B_BASE_WEIGHT_TYPES_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CMAC_B_BASE_WEIGHT_TYPES_0')



# Register NVDLA_CFGROM_CFGROM_CMAC_B_BASE_ATOMIC_C_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CMAC_B_BASE_ATOMIC_C_0'] = {
    'addr'            : 0xe0,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CMAC_B_BASE_ATOMIC_C' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'rwt',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CMAC_B_BASE_ATOMIC_C',
    ],
} # End of register: CFGROM_CMAC_B_BASE_ATOMIC_C_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CMAC_B_BASE_ATOMIC_C_0')



# Register NVDLA_CFGROM_CFGROM_CMAC_B_BASE_ATOMIC_K_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CMAC_B_BASE_ATOMIC_K_0'] = {
    'addr'            : 0xe4,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CMAC_B_BASE_ATOMIC_K' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CMAC_B_BASE_ATOMIC_K',
    ],
} # End of register: CFGROM_CMAC_B_BASE_ATOMIC_K_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CMAC_B_BASE_ATOMIC_K_0')



# Register NVDLA_CFGROM_CFGROM_CMAC_B_BASE_CDMA_ID_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CMAC_B_BASE_CDMA_ID_0'] = {
    'addr'            : 0xe8,
    'size'            : 0x20,
    'reset_val'       : 0x3,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CMAC_B_BASE_CDMA_ID' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x3,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CMAC_B_BASE_CDMA_ID',
    ],
} # End of register: CFGROM_CMAC_B_BASE_CDMA_ID_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CMAC_B_BASE_CDMA_ID_0')



# Register NVDLA_CFGROM_CFGROM_CACC_DESC_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CACC_DESC_0'] = {
    'addr'            : 0xec,
    'size'            : 0x20,
    'reset_val'       : 0x200007,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CACC_DESC' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x200007,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CACC_DESC',
    ],
} # End of register: CFGROM_CACC_DESC_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CACC_DESC_0')



# Register NVDLA_CFGROM_CFGROM_CACC_CAP_INCOMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CACC_CAP_INCOMPAT_0'] = {
    'addr'            : 0xf0,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CACC_CAP_INCOMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CACC_CAP_INCOMPAT',
    ],
} # End of register: CFGROM_CACC_CAP_INCOMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CACC_CAP_INCOMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CACC_CAP_COMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CACC_CAP_COMPAT_0'] = {
    'addr'            : 0xf4,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CACC_CAP_COMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CACC_CAP_COMPAT',
    ],
} # End of register: CFGROM_CACC_CAP_COMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CACC_CAP_COMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CACC_BASE_FEATURE_TYPES_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CACC_BASE_FEATURE_TYPES_0'] = {
    'addr'            : 0xf8,
    'size'            : 0xc,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xfff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfff,
    'write_mask'      : 0x0,
    'CACC_BASE_FEATURE_TYPES' : {
        'lsb'               : 0,
        'msb'               : 11,
        'size'              : 12,
        'field'             : (0xfff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CACC_BASE_FEATURE_TYPES',
    ],
} # End of register: CFGROM_CACC_BASE_FEATURE_TYPES_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CACC_BASE_FEATURE_TYPES_0')



# Register NVDLA_CFGROM_CFGROM_CACC_BASE_WEIGHT_TYPES_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CACC_BASE_WEIGHT_TYPES_0'] = {
    'addr'            : 0xfc,
    'size'            : 0xc,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xfff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfff,
    'write_mask'      : 0x0,
    'CACC_BASE_WEIGHT_TYPES' : {
        'lsb'               : 0,
        'msb'               : 11,
        'size'              : 12,
        'field'             : (0xfff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rwt',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CACC_BASE_WEIGHT_TYPES',
    ],
} # End of register: CFGROM_CACC_BASE_WEIGHT_TYPES_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CACC_BASE_WEIGHT_TYPES_0')



# Register NVDLA_CFGROM_CFGROM_CACC_BASE_ATOMIC_C_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CACC_BASE_ATOMIC_C_0'] = {
    'addr'            : 0x100,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CACC_BASE_ATOMIC_C' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'rwt',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CACC_BASE_ATOMIC_C',
    ],
} # End of register: CFGROM_CACC_BASE_ATOMIC_C_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CACC_BASE_ATOMIC_C_0')



# Register NVDLA_CFGROM_CFGROM_CACC_BASE_ATOMIC_K_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CACC_BASE_ATOMIC_K_0'] = {
    'addr'            : 0x104,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CACC_BASE_ATOMIC_K' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CACC_BASE_ATOMIC_K',
    ],
} # End of register: CFGROM_CACC_BASE_ATOMIC_K_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CACC_BASE_ATOMIC_K_0')



# Register NVDLA_CFGROM_CFGROM_CACC_BASE_CDMA_ID_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CACC_BASE_CDMA_ID_0'] = {
    'addr'            : 0x108,
    'size'            : 0x20,
    'reset_val'       : 0x3,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CACC_BASE_CDMA_ID' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x3,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CACC_BASE_CDMA_ID',
    ],
} # End of register: CFGROM_CACC_BASE_CDMA_ID_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CACC_BASE_CDMA_ID_0')



# Register NVDLA_CFGROM_CFGROM_CACC_MULTI_BATCH_MAX_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CACC_MULTI_BATCH_MAX_0'] = {
    'addr'            : 0x10c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CACC_MULTI_BATCH_MAX' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CACC_MULTI_BATCH_MAX',
    ],
} # End of register: CFGROM_CACC_MULTI_BATCH_MAX_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CACC_MULTI_BATCH_MAX_0')



# Register NVDLA_CFGROM_CFGROM_SDP_RDMA_DESC_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_SDP_RDMA_DESC_0'] = {
    'addr'            : 0x110,
    'size'            : 0x20,
    'reset_val'       : 0xe0008,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'SDP_RDMA_DESC' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0xe0008,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_RDMA_DESC',
    ],
} # End of register: CFGROM_SDP_RDMA_DESC_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_SDP_RDMA_DESC_0')



# Register NVDLA_CFGROM_CFGROM_SDP_RDMA_CAP_INCOMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_SDP_RDMA_CAP_INCOMPAT_0'] = {
    'addr'            : 0x114,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'SDP_RDMA_CAP_INCOMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_RDMA_CAP_INCOMPAT',
    ],
} # End of register: CFGROM_SDP_RDMA_CAP_INCOMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_SDP_RDMA_CAP_INCOMPAT_0')



# Register NVDLA_CFGROM_CFGROM_SDP_RDMA_CAP_COMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_SDP_RDMA_CAP_COMPAT_0'] = {
    'addr'            : 0x118,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'SDP_RDMA_CAP_COMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_RDMA_CAP_COMPAT',
    ],
} # End of register: CFGROM_SDP_RDMA_CAP_COMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_SDP_RDMA_CAP_COMPAT_0')



# Register NVDLA_CFGROM_CFGROM_SDP_RDMA_BASE_ATOMIC_M_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_SDP_RDMA_BASE_ATOMIC_M_0'] = {
    'addr'            : 0x11c,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'SDP_RDMA_BASE_ATOMIC_M' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_RDMA_BASE_ATOMIC_M',
    ],
} # End of register: CFGROM_SDP_RDMA_BASE_ATOMIC_M_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_SDP_RDMA_BASE_ATOMIC_M_0')



# Register NVDLA_CFGROM_CFGROM_SDP_RDMA_BASE_SDP_ID_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_SDP_RDMA_BASE_SDP_ID_0'] = {
    'addr'            : 0x120,
    'size'            : 0x20,
    'reset_val'       : 0x9,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'SDP_RDMA_BASE_SDP_ID' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x9,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_RDMA_BASE_SDP_ID',
    ],
} # End of register: CFGROM_SDP_RDMA_BASE_SDP_ID_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_SDP_RDMA_BASE_SDP_ID_0')



# Register NVDLA_CFGROM_CFGROM_SDP_DESC_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_SDP_DESC_0'] = {
    'addr'            : 0x124,
    'size'            : 0x20,
    'reset_val'       : 0x200009,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'SDP_DESC' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x200009,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_DESC',
    ],
} # End of register: CFGROM_SDP_DESC_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_SDP_DESC_0')



# Register NVDLA_CFGROM_CFGROM_SDP_CAP_INCOMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_SDP_CAP_INCOMPAT_0'] = {
    'addr'            : 0x128,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'SDP_CAP_INCOMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_CAP_INCOMPAT',
    ],
} # End of register: CFGROM_SDP_CAP_INCOMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_SDP_CAP_INCOMPAT_0')



# Register NVDLA_CFGROM_CFGROM_SDP_CAP_COMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_SDP_CAP_COMPAT_0'] = {
    'addr'            : 0x12c,
    'size'            : 0x20,
    'reset_val'       : 0x18,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'SDP_CAP_COMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x18,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_CAP_COMPAT',
    ],
} # End of register: CFGROM_SDP_CAP_COMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_SDP_CAP_COMPAT_0')



# Register NVDLA_CFGROM_CFGROM_SDP_BASE_FEATURE_TYPES_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_SDP_BASE_FEATURE_TYPES_0'] = {
    'addr'            : 0x130,
    'size'            : 0xc,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xfff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfff,
    'write_mask'      : 0x0,
    'SDP_BASE_FEATURE_TYPES' : {
        'lsb'               : 0,
        'msb'               : 11,
        'size'              : 12,
        'field'             : (0xfff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_BASE_FEATURE_TYPES',
    ],
} # End of register: CFGROM_SDP_BASE_FEATURE_TYPES_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_SDP_BASE_FEATURE_TYPES_0')



# Register NVDLA_CFGROM_CFGROM_SDP_BASE_WEIGHT_TYPES_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_SDP_BASE_WEIGHT_TYPES_0'] = {
    'addr'            : 0x134,
    'size'            : 0xc,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xfff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfff,
    'write_mask'      : 0x0,
    'SDP_BASE_WEIGHT_TYPES' : {
        'lsb'               : 0,
        'msb'               : 11,
        'size'              : 12,
        'field'             : (0xfff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rwt',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_BASE_WEIGHT_TYPES',
    ],
} # End of register: CFGROM_SDP_BASE_WEIGHT_TYPES_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_SDP_BASE_WEIGHT_TYPES_0')



# Register NVDLA_CFGROM_CFGROM_SDP_BASE_CDMA_ID_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_SDP_BASE_CDMA_ID_0'] = {
    'addr'            : 0x138,
    'size'            : 0x20,
    'reset_val'       : 0x3,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'SDP_BASE_CDMA_ID' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x3,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_BASE_CDMA_ID',
    ],
} # End of register: CFGROM_SDP_BASE_CDMA_ID_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_SDP_BASE_CDMA_ID_0')



# Register NVDLA_CFGROM_CFGROM_SDP_MULTI_BATCH_MAX_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_SDP_MULTI_BATCH_MAX_0'] = {
    'addr'            : 0x13c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'SDP_MULTI_BATCH_MAX' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_MULTI_BATCH_MAX',
    ],
} # End of register: CFGROM_SDP_MULTI_BATCH_MAX_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_SDP_MULTI_BATCH_MAX_0')



# Register NVDLA_CFGROM_CFGROM_SDP_BS_THROUGHPUT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_SDP_BS_THROUGHPUT_0'] = {
    'addr'            : 0x140,
    'size'            : 0x20,
    'reset_val'       : 0x1,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'SDP_BS_THROUGHPUT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_BS_THROUGHPUT',
    ],
} # End of register: CFGROM_SDP_BS_THROUGHPUT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_SDP_BS_THROUGHPUT_0')



# Register NVDLA_CFGROM_CFGROM_SDP_BN_THROUGHPUT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_SDP_BN_THROUGHPUT_0'] = {
    'addr'            : 0x144,
    'size'            : 0x20,
    'reset_val'       : 0x1,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'SDP_BN_THROUGHPUT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_BN_THROUGHPUT',
    ],
} # End of register: CFGROM_SDP_BN_THROUGHPUT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_SDP_BN_THROUGHPUT_0')



# Register NVDLA_CFGROM_CFGROM_SDP_EW_THROUGHPUT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_SDP_EW_THROUGHPUT_0'] = {
    'addr'            : 0x148,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'SDP_EW_THROUGHPUT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_EW_THROUGHPUT',
    ],
} # End of register: CFGROM_SDP_EW_THROUGHPUT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_SDP_EW_THROUGHPUT_0')



# Register NVDLA_CFGROM_CFGROM_PDP_RDMA_DESC_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_PDP_RDMA_DESC_0'] = {
    'addr'            : 0x14c,
    'size'            : 0x20,
    'reset_val'       : 0xe000a,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PDP_RDMA_DESC' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0xe000a,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PDP_RDMA_DESC',
    ],
} # End of register: CFGROM_PDP_RDMA_DESC_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_PDP_RDMA_DESC_0')



# Register NVDLA_CFGROM_CFGROM_PDP_RDMA_CAP_INCOMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_PDP_RDMA_CAP_INCOMPAT_0'] = {
    'addr'            : 0x150,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PDP_RDMA_CAP_INCOMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PDP_RDMA_CAP_INCOMPAT',
    ],
} # End of register: CFGROM_PDP_RDMA_CAP_INCOMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_PDP_RDMA_CAP_INCOMPAT_0')



# Register NVDLA_CFGROM_CFGROM_PDP_RDMA_CAP_COMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_PDP_RDMA_CAP_COMPAT_0'] = {
    'addr'            : 0x154,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PDP_RDMA_CAP_COMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PDP_RDMA_CAP_COMPAT',
    ],
} # End of register: CFGROM_PDP_RDMA_CAP_COMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_PDP_RDMA_CAP_COMPAT_0')



# Register NVDLA_CFGROM_CFGROM_PDP_RDMA_BASE_ATOMIC_M_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_PDP_RDMA_BASE_ATOMIC_M_0'] = {
    'addr'            : 0x158,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PDP_RDMA_BASE_ATOMIC_M' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PDP_RDMA_BASE_ATOMIC_M',
    ],
} # End of register: CFGROM_PDP_RDMA_BASE_ATOMIC_M_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_PDP_RDMA_BASE_ATOMIC_M_0')



# Register NVDLA_CFGROM_CFGROM_PDP_RDMA_BASE_PDP_ID_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_PDP_RDMA_BASE_PDP_ID_0'] = {
    'addr'            : 0x15c,
    'size'            : 0x20,
    'reset_val'       : 0xb,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PDP_RDMA_BASE_PDP_ID' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0xb,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PDP_RDMA_BASE_PDP_ID',
    ],
} # End of register: CFGROM_PDP_RDMA_BASE_PDP_ID_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_PDP_RDMA_BASE_PDP_ID_0')



# Register NVDLA_CFGROM_CFGROM_PDP_DESC_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_PDP_DESC_0'] = {
    'addr'            : 0x160,
    'size'            : 0x20,
    'reset_val'       : 0x10000b,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PDP_DESC' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x10000b,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PDP_DESC',
    ],
} # End of register: CFGROM_PDP_DESC_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_PDP_DESC_0')



# Register NVDLA_CFGROM_CFGROM_PDP_CAP_INCOMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_PDP_CAP_INCOMPAT_0'] = {
    'addr'            : 0x164,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PDP_CAP_INCOMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PDP_CAP_INCOMPAT',
    ],
} # End of register: CFGROM_PDP_CAP_INCOMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_PDP_CAP_INCOMPAT_0')



# Register NVDLA_CFGROM_CFGROM_PDP_CAP_COMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_PDP_CAP_COMPAT_0'] = {
    'addr'            : 0x168,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PDP_CAP_COMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PDP_CAP_COMPAT',
    ],
} # End of register: CFGROM_PDP_CAP_COMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_PDP_CAP_COMPAT_0')



# Register NVDLA_CFGROM_CFGROM_PDP_BASE_FEATURE_TYPES_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_PDP_BASE_FEATURE_TYPES_0'] = {
    'addr'            : 0x16c,
    'size'            : 0xc,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xfff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfff,
    'write_mask'      : 0x0,
    'PDP_BASE_FEATURE_TYPES' : {
        'lsb'               : 0,
        'msb'               : 11,
        'size'              : 12,
        'field'             : (0xfff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PDP_BASE_FEATURE_TYPES',
    ],
} # End of register: CFGROM_PDP_BASE_FEATURE_TYPES_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_PDP_BASE_FEATURE_TYPES_0')



# Register NVDLA_CFGROM_CFGROM_PDP_BASE_THROUGHPUT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_PDP_BASE_THROUGHPUT_0'] = {
    'addr'            : 0x170,
    'size'            : 0x20,
    'reset_val'       : 0x1,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PDP_BASE_THROUGHPUT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PDP_BASE_THROUGHPUT',
    ],
} # End of register: CFGROM_PDP_BASE_THROUGHPUT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_PDP_BASE_THROUGHPUT_0')



# Register NVDLA_CFGROM_CFGROM_CDP_RDMA_DESC_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDP_RDMA_DESC_0'] = {
    'addr'            : 0x174,
    'size'            : 0x20,
    'reset_val'       : 0xe000c,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDP_RDMA_DESC' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0xe000c,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDP_RDMA_DESC',
    ],
} # End of register: CFGROM_CDP_RDMA_DESC_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDP_RDMA_DESC_0')



# Register NVDLA_CFGROM_CFGROM_CDP_RDMA_CAP_INCOMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDP_RDMA_CAP_INCOMPAT_0'] = {
    'addr'            : 0x178,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDP_RDMA_CAP_INCOMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDP_RDMA_CAP_INCOMPAT',
    ],
} # End of register: CFGROM_CDP_RDMA_CAP_INCOMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDP_RDMA_CAP_INCOMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CDP_RDMA_CAP_COMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDP_RDMA_CAP_COMPAT_0'] = {
    'addr'            : 0x17c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDP_RDMA_CAP_COMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDP_RDMA_CAP_COMPAT',
    ],
} # End of register: CFGROM_CDP_RDMA_CAP_COMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDP_RDMA_CAP_COMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CDP_RDMA_BASE_ATOMIC_M_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDP_RDMA_BASE_ATOMIC_M_0'] = {
    'addr'            : 0x180,
    'size'            : 0x20,
    'reset_val'       : 0x8,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDP_RDMA_BASE_ATOMIC_M' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x8,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDP_RDMA_BASE_ATOMIC_M',
    ],
} # End of register: CFGROM_CDP_RDMA_BASE_ATOMIC_M_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDP_RDMA_BASE_ATOMIC_M_0')



# Register NVDLA_CFGROM_CFGROM_CDP_RDMA_BASE_CDP_ID_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDP_RDMA_BASE_CDP_ID_0'] = {
    'addr'            : 0x184,
    'size'            : 0x20,
    'reset_val'       : 0xd,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDP_RDMA_BASE_CDP_ID' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0xd,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDP_RDMA_BASE_CDP_ID',
    ],
} # End of register: CFGROM_CDP_RDMA_BASE_CDP_ID_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDP_RDMA_BASE_CDP_ID_0')



# Register NVDLA_CFGROM_CFGROM_CDP_DESC_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDP_DESC_0'] = {
    'addr'            : 0x188,
    'size'            : 0x20,
    'reset_val'       : 0x10000d,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDP_DESC' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x10000d,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDP_DESC',
    ],
} # End of register: CFGROM_CDP_DESC_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDP_DESC_0')



# Register NVDLA_CFGROM_CFGROM_CDP_CAP_INCOMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDP_CAP_INCOMPAT_0'] = {
    'addr'            : 0x18c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDP_CAP_INCOMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDP_CAP_INCOMPAT',
    ],
} # End of register: CFGROM_CDP_CAP_INCOMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDP_CAP_INCOMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CDP_CAP_COMPAT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDP_CAP_COMPAT_0'] = {
    'addr'            : 0x190,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDP_CAP_COMPAT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDP_CAP_COMPAT',
    ],
} # End of register: CFGROM_CDP_CAP_COMPAT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDP_CAP_COMPAT_0')



# Register NVDLA_CFGROM_CFGROM_CDP_BASE_FEATURE_TYPES_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDP_BASE_FEATURE_TYPES_0'] = {
    'addr'            : 0x194,
    'size'            : 0xc,
    'reset_val'       : 0x10,
    'reset_mask'      : 0xfff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfff,
    'write_mask'      : 0x0,
    'CDP_BASE_FEATURE_TYPES' : {
        'lsb'               : 0,
        'msb'               : 11,
        'size'              : 12,
        'field'             : (0xfff << 0),
        'default'           : 0x10,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDP_BASE_FEATURE_TYPES',
    ],
} # End of register: CFGROM_CDP_BASE_FEATURE_TYPES_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDP_BASE_FEATURE_TYPES_0')



# Register NVDLA_CFGROM_CFGROM_CDP_BASE_THROUGHPUT_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_CDP_BASE_THROUGHPUT_0'] = {
    'addr'            : 0x198,
    'size'            : 0x20,
    'reset_val'       : 0x1,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'CDP_BASE_THROUGHPUT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CDP_BASE_THROUGHPUT',
    ],
} # End of register: CFGROM_CDP_BASE_THROUGHPUT_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_CDP_BASE_THROUGHPUT_0')



# Register NVDLA_CFGROM_CFGROM_END_OF_LIST_0
if 'NVDLA_CFGROM' not in registers:
    registers['NVDLA_CFGROM'] = {}
    registers['NVDLA_CFGROM']['register_list']  = []

registers['NVDLA_CFGROM']['CFGROM_END_OF_LIST_0'] = {
    'addr'            : 0x19c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'END_OF_LIST' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'END_OF_LIST',
    ],
} # End of register: CFGROM_END_OF_LIST_0

registers['NVDLA_CFGROM']['register_list'].append('CFGROM_END_OF_LIST_0')



# Register NVDLA_GLB_S_NVDLA_HW_VERSION_0
if 'NVDLA_GLB' not in registers:
    registers['NVDLA_GLB'] = {}
    registers['NVDLA_GLB']['register_list']  = []

registers['NVDLA_GLB']['S_NVDLA_HW_VERSION_0'] = {
    'addr'            : 0x1000,
    'size'            : 0x18,
    'reset_val'       : 0x303031,
    'reset_mask'      : 0xffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffff,
    'write_mask'      : 0x0,
    'MAJOR' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0x31,
        'sw_default'        : 0x0,
        'action'            : 'c',
        'enums' : {
        },
    },
    'MINOR' : {
        'lsb'               : 8,
        'msb'               : 23,
        'size'              : 16,
        'field'             : (0xffff << 8),
        'default'           : 0x3030,
        'sw_default'        : 0x0,
        'action'            : 'c',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'MAJOR',
        'MINOR',
    ],
} # End of register: S_NVDLA_HW_VERSION_0

registers['NVDLA_GLB']['register_list'].append('S_NVDLA_HW_VERSION_0')



# Register NVDLA_GLB_S_INTR_MASK_0
if 'NVDLA_GLB' not in registers:
    registers['NVDLA_GLB'] = {}
    registers['NVDLA_GLB']['register_list']  = []

registers['NVDLA_GLB']['S_INTR_MASK_0'] = {
    'addr'            : 0x1004,
    'size'            : 0x16,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3f03ff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f03ff,
    'write_mask'      : 0x3f03ff,
    'SDP_DONE_MASK0' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'SDP_DONE_MASK1' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'CDP_DONE_MASK0' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'CDP_DONE_MASK1' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'PDP_DONE_MASK0' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'PDP_DONE_MASK1' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'BDMA_DONE_MASK0' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'BDMA_DONE_MASK1' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RUBIK_DONE_MASK0' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RUBIK_DONE_MASK1' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'CDMA_DAT_DONE_MASK0' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'CDMA_DAT_DONE_MASK1' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'CDMA_WT_DONE_MASK0' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'CDMA_WT_DONE_MASK1' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'CACC_DONE_MASK0' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'CACC_DONE_MASK1' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_DONE_MASK0',
        'SDP_DONE_MASK1',
        'CDP_DONE_MASK0',
        'CDP_DONE_MASK1',
        'PDP_DONE_MASK0',
        'PDP_DONE_MASK1',
        'BDMA_DONE_MASK0',
        'BDMA_DONE_MASK1',
        'RUBIK_DONE_MASK0',
        'RUBIK_DONE_MASK1',
        'CDMA_DAT_DONE_MASK0',
        'CDMA_DAT_DONE_MASK1',
        'CDMA_WT_DONE_MASK0',
        'CDMA_WT_DONE_MASK1',
        'CACC_DONE_MASK0',
        'CACC_DONE_MASK1',
    ],
} # End of register: S_INTR_MASK_0

registers['NVDLA_GLB']['register_list'].append('S_INTR_MASK_0')



# Register NVDLA_GLB_S_INTR_SET_0
if 'NVDLA_GLB' not in registers:
    registers['NVDLA_GLB'] = {}
    registers['NVDLA_GLB']['register_list']  = []

registers['NVDLA_GLB']['S_INTR_SET_0'] = {
    'addr'            : 0x1008,
    'size'            : 0x16,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3f03ff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x0,
    'write_mask'      : 0x3f03ff,
    'SDP_DONE_SET0' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'wto',
        'enums' : {
        },
    },
    'SDP_DONE_SET1' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'wo',
        'enums' : {
        },
    },
    'CDP_DONE_SET0' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'wo',
        'enums' : {
        },
    },
    'CDP_DONE_SET1' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'wo',
        'enums' : {
        },
    },
    'PDP_DONE_SET0' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'wo',
        'enums' : {
        },
    },
    'PDP_DONE_SET1' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'wo',
        'enums' : {
        },
    },
    'BDMA_DONE_SET0' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'wo',
        'enums' : {
        },
    },
    'BDMA_DONE_SET1' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'wo',
        'enums' : {
        },
    },
    'RUBIK_DONE_SET0' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'wo',
        'enums' : {
        },
    },
    'RUBIK_DONE_SET1' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'wo',
        'enums' : {
        },
    },
    'CDMA_DAT_DONE_SET0' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'wo',
        'enums' : {
        },
    },
    'CDMA_DAT_DONE_SET1' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'wo',
        'enums' : {
        },
    },
    'CDMA_WT_DONE_SET0' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'wo',
        'enums' : {
        },
    },
    'CDMA_WT_DONE_SET1' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'wo',
        'enums' : {
        },
    },
    'CACC_DONE_SET0' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'wo',
        'enums' : {
        },
    },
    'CACC_DONE_SET1' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'wo',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_DONE_SET0',
        'SDP_DONE_SET1',
        'CDP_DONE_SET0',
        'CDP_DONE_SET1',
        'PDP_DONE_SET0',
        'PDP_DONE_SET1',
        'BDMA_DONE_SET0',
        'BDMA_DONE_SET1',
        'RUBIK_DONE_SET0',
        'RUBIK_DONE_SET1',
        'CDMA_DAT_DONE_SET0',
        'CDMA_DAT_DONE_SET1',
        'CDMA_WT_DONE_SET0',
        'CDMA_WT_DONE_SET1',
        'CACC_DONE_SET0',
        'CACC_DONE_SET1',
    ],
} # End of register: S_INTR_SET_0

registers['NVDLA_GLB']['register_list'].append('S_INTR_SET_0')



# Register NVDLA_GLB_S_INTR_STATUS_0
if 'NVDLA_GLB' not in registers:
    registers['NVDLA_GLB'] = {}
    registers['NVDLA_GLB']['register_list']  = []

registers['NVDLA_GLB']['S_INTR_STATUS_0'] = {
    'addr'            : 0x100c,
    'size'            : 0x16,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3f03ff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f03ff,
    'write_mask'      : 0x3f03ff,
    'SDP_DONE_STATUS0' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwto',
        'enums' : {
        },
    },
    'SDP_DONE_STATUS1' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwo',
        'enums' : {
        },
    },
    'CDP_DONE_STATUS0' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwo',
        'enums' : {
        },
    },
    'CDP_DONE_STATUS1' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwo',
        'enums' : {
        },
    },
    'PDP_DONE_STATUS0' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwo',
        'enums' : {
        },
    },
    'PDP_DONE_STATUS1' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwo',
        'enums' : {
        },
    },
    'BDMA_DONE_STATUS0' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwo',
        'enums' : {
        },
    },
    'BDMA_DONE_STATUS1' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwo',
        'enums' : {
        },
    },
    'RUBIK_DONE_STATUS0' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwo',
        'enums' : {
        },
    },
    'RUBIK_DONE_STATUS1' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwo',
        'enums' : {
        },
    },
    'CDMA_DAT_DONE_STATUS0' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwo',
        'enums' : {
        },
    },
    'CDMA_DAT_DONE_STATUS1' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwo',
        'enums' : {
        },
    },
    'CDMA_WT_DONE_STATUS0' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwo',
        'enums' : {
        },
    },
    'CDMA_WT_DONE_STATUS1' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwo',
        'enums' : {
        },
    },
    'CACC_DONE_STATUS0' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwo',
        'enums' : {
        },
    },
    'CACC_DONE_STATUS1' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwo',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SDP_DONE_STATUS0',
        'SDP_DONE_STATUS1',
        'CDP_DONE_STATUS0',
        'CDP_DONE_STATUS1',
        'PDP_DONE_STATUS0',
        'PDP_DONE_STATUS1',
        'BDMA_DONE_STATUS0',
        'BDMA_DONE_STATUS1',
        'RUBIK_DONE_STATUS0',
        'RUBIK_DONE_STATUS1',
        'CDMA_DAT_DONE_STATUS0',
        'CDMA_DAT_DONE_STATUS1',
        'CDMA_WT_DONE_STATUS0',
        'CDMA_WT_DONE_STATUS1',
        'CACC_DONE_STATUS0',
        'CACC_DONE_STATUS1',
    ],
} # End of register: S_INTR_STATUS_0

registers['NVDLA_GLB']['register_list'].append('S_INTR_STATUS_0')



# Register NVDLA_MCIF_CFG_RD_WEIGHT_0_0
if 'NVDLA_MCIF' not in registers:
    registers['NVDLA_MCIF'] = {}
    registers['NVDLA_MCIF']['register_list']  = []

registers['NVDLA_MCIF']['CFG_RD_WEIGHT_0_0'] = {
    'addr'            : 0x2000,
    'size'            : 0x20,
    'reset_val'       : 0x1010101,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'RD_WEIGHT_BDMA' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_SDP' : {
        'lsb'               : 8,
        'msb'               : 15,
        'size'              : 8,
        'field'             : (0xff << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_PDP' : {
        'lsb'               : 16,
        'msb'               : 23,
        'size'              : 8,
        'field'             : (0xff << 16),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_CDP' : {
        'lsb'               : 24,
        'msb'               : 31,
        'size'              : 8,
        'field'             : (0xff << 24),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'RD_WEIGHT_BDMA',
        'RD_WEIGHT_SDP',
        'RD_WEIGHT_PDP',
        'RD_WEIGHT_CDP',
    ],
} # End of register: CFG_RD_WEIGHT_0_0

registers['NVDLA_MCIF']['register_list'].append('CFG_RD_WEIGHT_0_0')



# Register NVDLA_MCIF_CFG_RD_WEIGHT_1_0
if 'NVDLA_MCIF' not in registers:
    registers['NVDLA_MCIF'] = {}
    registers['NVDLA_MCIF']['register_list']  = []

registers['NVDLA_MCIF']['CFG_RD_WEIGHT_1_0'] = {
    'addr'            : 0x2004,
    'size'            : 0x20,
    'reset_val'       : 0x1010101,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'RD_WEIGHT_SDP_B' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_SDP_N' : {
        'lsb'               : 8,
        'msb'               : 15,
        'size'              : 8,
        'field'             : (0xff << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_SDP_E' : {
        'lsb'               : 16,
        'msb'               : 23,
        'size'              : 8,
        'field'             : (0xff << 16),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_CDMA_DAT' : {
        'lsb'               : 24,
        'msb'               : 31,
        'size'              : 8,
        'field'             : (0xff << 24),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'RD_WEIGHT_SDP_B',
        'RD_WEIGHT_SDP_N',
        'RD_WEIGHT_SDP_E',
        'RD_WEIGHT_CDMA_DAT',
    ],
} # End of register: CFG_RD_WEIGHT_1_0

registers['NVDLA_MCIF']['register_list'].append('CFG_RD_WEIGHT_1_0')



# Register NVDLA_MCIF_CFG_RD_WEIGHT_2_0
if 'NVDLA_MCIF' not in registers:
    registers['NVDLA_MCIF'] = {}
    registers['NVDLA_MCIF']['register_list']  = []

registers['NVDLA_MCIF']['CFG_RD_WEIGHT_2_0'] = {
    'addr'            : 0x2008,
    'size'            : 0x20,
    'reset_val'       : 0x1010101,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'RD_WEIGHT_CDMA_WT' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_RBK' : {
        'lsb'               : 8,
        'msb'               : 15,
        'size'              : 8,
        'field'             : (0xff << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_RSV_1' : {
        'lsb'               : 16,
        'msb'               : 23,
        'size'              : 8,
        'field'             : (0xff << 16),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_RSV_0' : {
        'lsb'               : 24,
        'msb'               : 31,
        'size'              : 8,
        'field'             : (0xff << 24),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'RD_WEIGHT_CDMA_WT',
        'RD_WEIGHT_RBK',
        'RD_WEIGHT_RSV_1',
        'RD_WEIGHT_RSV_0',
    ],
} # End of register: CFG_RD_WEIGHT_2_0

registers['NVDLA_MCIF']['register_list'].append('CFG_RD_WEIGHT_2_0')



# Register NVDLA_MCIF_CFG_WR_WEIGHT_0_0
if 'NVDLA_MCIF' not in registers:
    registers['NVDLA_MCIF'] = {}
    registers['NVDLA_MCIF']['register_list']  = []

registers['NVDLA_MCIF']['CFG_WR_WEIGHT_0_0'] = {
    'addr'            : 0x200c,
    'size'            : 0x20,
    'reset_val'       : 0x1010101,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'WR_WEIGHT_BDMA' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WR_WEIGHT_SDP' : {
        'lsb'               : 8,
        'msb'               : 15,
        'size'              : 8,
        'field'             : (0xff << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WR_WEIGHT_PDP' : {
        'lsb'               : 16,
        'msb'               : 23,
        'size'              : 8,
        'field'             : (0xff << 16),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WR_WEIGHT_CDP' : {
        'lsb'               : 24,
        'msb'               : 31,
        'size'              : 8,
        'field'             : (0xff << 24),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WR_WEIGHT_BDMA',
        'WR_WEIGHT_SDP',
        'WR_WEIGHT_PDP',
        'WR_WEIGHT_CDP',
    ],
} # End of register: CFG_WR_WEIGHT_0_0

registers['NVDLA_MCIF']['register_list'].append('CFG_WR_WEIGHT_0_0')



# Register NVDLA_MCIF_CFG_WR_WEIGHT_1_0
if 'NVDLA_MCIF' not in registers:
    registers['NVDLA_MCIF'] = {}
    registers['NVDLA_MCIF']['register_list']  = []

registers['NVDLA_MCIF']['CFG_WR_WEIGHT_1_0'] = {
    'addr'            : 0x2010,
    'size'            : 0x20,
    'reset_val'       : 0x1010101,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'WR_WEIGHT_RBK' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WR_WEIGHT_RSV_2' : {
        'lsb'               : 8,
        'msb'               : 15,
        'size'              : 8,
        'field'             : (0xff << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WR_WEIGHT_RSV_1' : {
        'lsb'               : 16,
        'msb'               : 23,
        'size'              : 8,
        'field'             : (0xff << 16),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WR_WEIGHT_RSV_0' : {
        'lsb'               : 24,
        'msb'               : 31,
        'size'              : 8,
        'field'             : (0xff << 24),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WR_WEIGHT_RBK',
        'WR_WEIGHT_RSV_2',
        'WR_WEIGHT_RSV_1',
        'WR_WEIGHT_RSV_0',
    ],
} # End of register: CFG_WR_WEIGHT_1_0

registers['NVDLA_MCIF']['register_list'].append('CFG_WR_WEIGHT_1_0')



# Register NVDLA_MCIF_CFG_OUTSTANDING_CNT_0
if 'NVDLA_MCIF' not in registers:
    registers['NVDLA_MCIF'] = {}
    registers['NVDLA_MCIF']['register_list']  = []

registers['NVDLA_MCIF']['CFG_OUTSTANDING_CNT_0'] = {
    'addr'            : 0x2014,
    'size'            : 0x10,
    'reset_val'       : 0xffff,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'RD_OS_CNT' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0xff,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WR_OS_CNT' : {
        'lsb'               : 8,
        'msb'               : 15,
        'size'              : 8,
        'field'             : (0xff << 8),
        'default'           : 0xff,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'RD_OS_CNT',
        'WR_OS_CNT',
    ],
} # End of register: CFG_OUTSTANDING_CNT_0

registers['NVDLA_MCIF']['register_list'].append('CFG_OUTSTANDING_CNT_0')



# Register NVDLA_MCIF_STATUS_0
if 'NVDLA_MCIF' not in registers:
    registers['NVDLA_MCIF'] = {}
    registers['NVDLA_MCIF']['register_list']  = []

registers['NVDLA_MCIF']['STATUS_0'] = {
    'addr'            : 0x2018,
    'size'            : 0x1,
    'reset_val'       : 0x100,
    'reset_mask'      : 0x100,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x100,
    'write_mask'      : 0x0,
    'IDLE' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'IDLE',
    ],
} # End of register: STATUS_0

registers['NVDLA_MCIF']['register_list'].append('STATUS_0')



# Register NVDLA_CDMA_S_STATUS_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['S_STATUS_0'] = {
    'addr'            : 0x3000,
    'size'            : 0x12,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x30003,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x30003,
    'write_mask'      : 0x0,
    'STATUS_0' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    'STATUS_1' : {
        'lsb'               : 16,
        'msb'               : 17,
        'size'              : 2,
        'field'             : (0x3 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_0',
        'STATUS_1',
    ],
} # End of register: S_STATUS_0

registers['NVDLA_CDMA']['register_list'].append('S_STATUS_0')



# Register NVDLA_CDMA_S_POINTER_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['S_POINTER_0'] = {
    'addr'            : 0x3004,
    'size'            : 0x11,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x10001,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x10001,
    'write_mask'      : 0x1,
    'PRODUCER' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    'CONSUMER' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PRODUCER',
        'CONSUMER',
    ],
} # End of register: S_POINTER_0

registers['NVDLA_CDMA']['register_list'].append('S_POINTER_0')



# Register NVDLA_CDMA_S_ARBITER_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['S_ARBITER_0'] = {
    'addr'            : 0x3008,
    'size'            : 0x14,
    'reset_val'       : 0x3000f,
    'reset_mask'      : 0xf000f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xf000f,
    'write_mask'      : 0xf000f,
    'ARB_WEIGHT' : {
        'lsb'               : 0,
        'msb'               : 3,
        'size'              : 4,
        'field'             : (0xf << 0),
        'default'           : 0xf,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ARB_WMB' : {
        'lsb'               : 16,
        'msb'               : 19,
        'size'              : 4,
        'field'             : (0xf << 16),
        'default'           : 0x3,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ARB_WEIGHT',
        'ARB_WMB',
    ],
} # End of register: S_ARBITER_0

registers['NVDLA_CDMA']['register_list'].append('S_ARBITER_0')



# Register NVDLA_CDMA_S_CBUF_FLUSH_STATUS_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['S_CBUF_FLUSH_STATUS_0'] = {
    'addr'            : 0x300c,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x0,
    'FLUSH_DONE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'FLUSH_DONE',
    ],
} # End of register: S_CBUF_FLUSH_STATUS_0

registers['NVDLA_CDMA']['register_list'].append('S_CBUF_FLUSH_STATUS_0')



# Register NVDLA_CDMA_D_OP_ENABLE_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_OP_ENABLE_0'] = {
    'addr'            : 0x3010,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'OP_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwto',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'OP_EN',
    ],
} # End of register: D_OP_ENABLE_0

registers['NVDLA_CDMA']['register_list'].append('D_OP_ENABLE_0')



# Register NVDLA_CDMA_D_MISC_CFG_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_MISC_CFG_0'] = {
    'addr'            : 0x3014,
    'size'            : 0x1d,
    'reset_val'       : 0x1100,
    'reset_mask'      : 0x11113301,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x11113301,
    'write_mask'      : 0x11113301,
    'CONV_MODE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DIRECT' : 0x0,
            'WINOGRAD' : 0x1,
        },
    },
    'IN_PRECISION' : {
        'lsb'               : 8,
        'msb'               : 9,
        'size'              : 2,
        'field'             : (0x3 << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'INT8' : 0x0,
            'INT16' : 0x1,
            'FP16' : 0x2,
        },
    },
    'PROC_PRECISION' : {
        'lsb'               : 12,
        'msb'               : 13,
        'size'              : 2,
        'field'             : (0x3 << 12),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'INT8' : 0x0,
            'INT16' : 0x1,
            'FP16' : 0x2,
        },
    },
    'DATA_REUSE' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'WEIGHT_REUSE' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'SKIP_DATA_RLS' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'SKIP_WEIGHT_RLS' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CONV_MODE',
        'IN_PRECISION',
        'PROC_PRECISION',
        'DATA_REUSE',
        'WEIGHT_REUSE',
        'SKIP_DATA_RLS',
        'SKIP_WEIGHT_RLS',
    ],
} # End of register: D_MISC_CFG_0

registers['NVDLA_CDMA']['register_list'].append('D_MISC_CFG_0')



# Register NVDLA_CDMA_D_DATAIN_FORMAT_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_DATAIN_FORMAT_0'] = {
    'addr'            : 0x3018,
    'size'            : 0x15,
    'reset_val'       : 0xc00,
    'reset_mask'      : 0x113f01,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x113f01,
    'write_mask'      : 0x113f01,
    'DATAIN_FORMAT' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'FEATURE' : 0x0,
            'PIXEL' : 0x1,
        },
    },
    'PIXEL_FORMAT' : {
        'lsb'               : 8,
        'msb'               : 13,
        'size'              : 6,
        'field'             : (0x3f << 8),
        'default'           : 0xc,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'T_R8' : 0x0,
            'T_R10' : 0x1,
            'T_R12' : 0x2,
            'T_R16' : 0x3,
            'T_R16_I' : 0x4,
            'T_R16_F' : 0x5,
            'T_A16B16G16R16' : 0x6,
            'T_X16B16G16R16' : 0x7,
            'T_A16B16G16R16_F' : 0x8,
            'T_A16Y16U16V16' : 0x9,
            'T_V16U16Y16A16' : 0xa,
            'T_A16Y16U16V16_F' : 0xb,
            'T_A8B8G8R8' : 0xc,
            'T_A8R8G8B8' : 0xd,
            'T_B8G8R8A8' : 0xe,
            'T_R8G8B8A8' : 0xf,
            'T_X8B8G8R8' : 0x10,
            'T_X8R8G8B8' : 0x11,
            'T_B8G8R8X8' : 0x12,
            'T_R8G8B8X8' : 0x13,
            'T_A2B10G10R10' : 0x14,
            'T_A2R10G10B10' : 0x15,
            'T_B10G10R10A2' : 0x16,
            'T_R10G10B10A2' : 0x17,
            'T_A2Y10U10V10' : 0x18,
            'T_V10U10Y10A2' : 0x19,
            'T_A8Y8U8V8' : 0x1a,
            'T_V8U8Y8A8' : 0x1b,
            'T_Y8___U8V8_N444' : 0x1c,
            'T_Y8___V8U8_N444' : 0x1d,
            'T_Y10___U10V10_N444' : 0x1e,
            'T_Y10___V10U10_N444' : 0x1f,
            'T_Y12___U12V12_N444' : 0x20,
            'T_Y12___V12U12_N444' : 0x21,
            'T_Y16___U16V16_N444' : 0x22,
            'T_Y16___V16U16_N444' : 0x23,
        },
    },
    'PIXEL_MAPPING' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'PITCH_LINEAR' : 0x0,
            'RESERVED_LINEAR' : 0x1,
        },
    },
    'PIXEL_SIGN_OVERRIDE' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'UNSIGNED_INT' : 0x0,
            'SIGNED_INT' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAIN_FORMAT',
        'PIXEL_FORMAT',
        'PIXEL_MAPPING',
        'PIXEL_SIGN_OVERRIDE',
    ],
} # End of register: D_DATAIN_FORMAT_0

registers['NVDLA_CDMA']['register_list'].append('D_DATAIN_FORMAT_0')



# Register NVDLA_CDMA_D_DATAIN_SIZE_0_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_DATAIN_SIZE_0_0'] = {
    'addr'            : 0x301c,
    'size'            : 0x1d,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff1fff,
    'write_mask'      : 0x1fff1fff,
    'DATAIN_WIDTH' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'DATAIN_HEIGHT' : {
        'lsb'               : 16,
        'msb'               : 28,
        'size'              : 13,
        'field'             : (0x1fff << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAIN_WIDTH',
        'DATAIN_HEIGHT',
    ],
} # End of register: D_DATAIN_SIZE_0_0

registers['NVDLA_CDMA']['register_list'].append('D_DATAIN_SIZE_0_0')



# Register NVDLA_CDMA_D_DATAIN_SIZE_1_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_DATAIN_SIZE_1_0'] = {
    'addr'            : 0x3020,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'DATAIN_CHANNEL' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAIN_CHANNEL',
    ],
} # End of register: D_DATAIN_SIZE_1_0

registers['NVDLA_CDMA']['register_list'].append('D_DATAIN_SIZE_1_0')



# Register NVDLA_CDMA_D_DATAIN_SIZE_EXT_0_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_DATAIN_SIZE_EXT_0_0'] = {
    'addr'            : 0x3024,
    'size'            : 0x1d,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff1fff,
    'write_mask'      : 0x1fff1fff,
    'DATAIN_WIDTH_EXT' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'DATAIN_HEIGHT_EXT' : {
        'lsb'               : 16,
        'msb'               : 28,
        'size'              : 13,
        'field'             : (0x1fff << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAIN_WIDTH_EXT',
        'DATAIN_HEIGHT_EXT',
    ],
} # End of register: D_DATAIN_SIZE_EXT_0_0

registers['NVDLA_CDMA']['register_list'].append('D_DATAIN_SIZE_EXT_0_0')



# Register NVDLA_CDMA_D_PIXEL_OFFSET_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_PIXEL_OFFSET_0'] = {
    'addr'            : 0x3028,
    'size'            : 0x13,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x7001f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x7001f,
    'write_mask'      : 0x7001f,
    'PIXEL_X_OFFSET' : {
        'lsb'               : 0,
        'msb'               : 4,
        'size'              : 5,
        'field'             : (0x1f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'PIXEL_Y_OFFSET' : {
        'lsb'               : 16,
        'msb'               : 18,
        'size'              : 3,
        'field'             : (0x7 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PIXEL_X_OFFSET',
        'PIXEL_Y_OFFSET',
    ],
} # End of register: D_PIXEL_OFFSET_0

registers['NVDLA_CDMA']['register_list'].append('D_PIXEL_OFFSET_0')



# Register NVDLA_CDMA_D_DAIN_RAM_TYPE_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_DAIN_RAM_TYPE_0'] = {
    'addr'            : 0x302c,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'DATAIN_RAM_TYPE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'CVIF' : 0x0,
            'MCIF' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAIN_RAM_TYPE',
    ],
} # End of register: D_DAIN_RAM_TYPE_0

registers['NVDLA_CDMA']['register_list'].append('D_DAIN_RAM_TYPE_0')



# Register NVDLA_CDMA_D_DAIN_ADDR_HIGH_0_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_DAIN_ADDR_HIGH_0_0'] = {
    'addr'            : 0x3030,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DATAIN_ADDR_HIGH_0' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAIN_ADDR_HIGH_0',
    ],
} # End of register: D_DAIN_ADDR_HIGH_0_0

registers['NVDLA_CDMA']['register_list'].append('D_DAIN_ADDR_HIGH_0_0')



# Register NVDLA_CDMA_D_DAIN_ADDR_LOW_0_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_DAIN_ADDR_LOW_0_0'] = {
    'addr'            : 0x3034,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DATAIN_ADDR_LOW_0' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAIN_ADDR_LOW_0',
    ],
} # End of register: D_DAIN_ADDR_LOW_0_0

registers['NVDLA_CDMA']['register_list'].append('D_DAIN_ADDR_LOW_0_0')



# Register NVDLA_CDMA_D_DAIN_ADDR_HIGH_1_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_DAIN_ADDR_HIGH_1_0'] = {
    'addr'            : 0x3038,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DATAIN_ADDR_HIGH_1' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAIN_ADDR_HIGH_1',
    ],
} # End of register: D_DAIN_ADDR_HIGH_1_0

registers['NVDLA_CDMA']['register_list'].append('D_DAIN_ADDR_HIGH_1_0')



# Register NVDLA_CDMA_D_DAIN_ADDR_LOW_1_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_DAIN_ADDR_LOW_1_0'] = {
    'addr'            : 0x303c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DATAIN_ADDR_LOW_1' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAIN_ADDR_LOW_1',
    ],
} # End of register: D_DAIN_ADDR_LOW_1_0

registers['NVDLA_CDMA']['register_list'].append('D_DAIN_ADDR_LOW_1_0')



# Register NVDLA_CDMA_D_LINE_STRIDE_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_LINE_STRIDE_0'] = {
    'addr'            : 0x3040,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'LINE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LINE_STRIDE',
    ],
} # End of register: D_LINE_STRIDE_0

registers['NVDLA_CDMA']['register_list'].append('D_LINE_STRIDE_0')



# Register NVDLA_CDMA_D_LINE_UV_STRIDE_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_LINE_UV_STRIDE_0'] = {
    'addr'            : 0x3044,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'UV_LINE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'UV_LINE_STRIDE',
    ],
} # End of register: D_LINE_UV_STRIDE_0

registers['NVDLA_CDMA']['register_list'].append('D_LINE_UV_STRIDE_0')



# Register NVDLA_CDMA_D_SURF_STRIDE_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_SURF_STRIDE_0'] = {
    'addr'            : 0x3048,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'SURF_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SURF_STRIDE',
    ],
} # End of register: D_SURF_STRIDE_0

registers['NVDLA_CDMA']['register_list'].append('D_SURF_STRIDE_0')



# Register NVDLA_CDMA_D_DAIN_MAP_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_DAIN_MAP_0'] = {
    'addr'            : 0x304c,
    'size'            : 0x11,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x10001,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x10001,
    'write_mask'      : 0x10001,
    'LINE_PACKED' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'FALSE' : 0x0,
            'TRUE' : 0x1,
        },
    },
    'SURF_PACKED' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'FALSE' : 0x0,
            'TRUE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LINE_PACKED',
        'SURF_PACKED',
    ],
} # End of register: D_DAIN_MAP_0

registers['NVDLA_CDMA']['register_list'].append('D_DAIN_MAP_0')



# Register NVDLA_CDMA_D_RESERVED_X_CFG_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_RESERVED_X_CFG_0'] = {
    'addr'            : 0x3050,
    'size'            : 0x1a,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3ff03ff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3ff03ff,
    'write_mask'      : 0x3ff03ff,
    'RSV_PER_LINE' : {
        'lsb'               : 0,
        'msb'               : 9,
        'size'              : 10,
        'field'             : (0x3ff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RSV_PER_UV_LINE' : {
        'lsb'               : 16,
        'msb'               : 25,
        'size'              : 10,
        'field'             : (0x3ff << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'RSV_PER_LINE',
        'RSV_PER_UV_LINE',
    ],
} # End of register: D_RESERVED_X_CFG_0

registers['NVDLA_CDMA']['register_list'].append('D_RESERVED_X_CFG_0')



# Register NVDLA_CDMA_D_RESERVED_Y_CFG_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_RESERVED_Y_CFG_0'] = {
    'addr'            : 0x3054,
    'size'            : 0x15,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1f0007,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1f0007,
    'write_mask'      : 0x1f0007,
    'RSV_HEIGHT' : {
        'lsb'               : 0,
        'msb'               : 2,
        'size'              : 3,
        'field'             : (0x7 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RSV_Y_INDEX' : {
        'lsb'               : 16,
        'msb'               : 20,
        'size'              : 5,
        'field'             : (0x1f << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'RSV_HEIGHT',
        'RSV_Y_INDEX',
    ],
} # End of register: D_RESERVED_Y_CFG_0

registers['NVDLA_CDMA']['register_list'].append('D_RESERVED_Y_CFG_0')



# Register NVDLA_CDMA_D_BATCH_NUMBER_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_BATCH_NUMBER_0'] = {
    'addr'            : 0x3058,
    'size'            : 0x5,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1f,
    'write_mask'      : 0x1f,
    'BATCHES' : {
        'lsb'               : 0,
        'msb'               : 4,
        'size'              : 5,
        'field'             : (0x1f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BATCHES',
    ],
} # End of register: D_BATCH_NUMBER_0

registers['NVDLA_CDMA']['register_list'].append('D_BATCH_NUMBER_0')



# Register NVDLA_CDMA_D_BATCH_STRIDE_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_BATCH_STRIDE_0'] = {
    'addr'            : 0x305c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'BATCH_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BATCH_STRIDE',
    ],
} # End of register: D_BATCH_STRIDE_0

registers['NVDLA_CDMA']['register_list'].append('D_BATCH_STRIDE_0')



# Register NVDLA_CDMA_D_ENTRY_PER_SLICE_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_ENTRY_PER_SLICE_0'] = {
    'addr'            : 0x3060,
    'size'            : 0xe,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3fff,
    'write_mask'      : 0x3fff,
    'ENTRIES' : {
        'lsb'               : 0,
        'msb'               : 13,
        'size'              : 14,
        'field'             : (0x3fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ENTRIES',
    ],
} # End of register: D_ENTRY_PER_SLICE_0

registers['NVDLA_CDMA']['register_list'].append('D_ENTRY_PER_SLICE_0')



# Register NVDLA_CDMA_D_FETCH_GRAIN_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_FETCH_GRAIN_0'] = {
    'addr'            : 0x3064,
    'size'            : 0xc,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xfff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfff,
    'write_mask'      : 0xfff,
    'GRAINS' : {
        'lsb'               : 0,
        'msb'               : 11,
        'size'              : 12,
        'field'             : (0xfff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'GRAINS',
    ],
} # End of register: D_FETCH_GRAIN_0

registers['NVDLA_CDMA']['register_list'].append('D_FETCH_GRAIN_0')



# Register NVDLA_CDMA_D_WEIGHT_FORMAT_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_WEIGHT_FORMAT_0'] = {
    'addr'            : 0x3068,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'WEIGHT_FORMAT' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'UNCOMPRESSED' : 0x0,
            'COMPRESSED' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WEIGHT_FORMAT',
    ],
} # End of register: D_WEIGHT_FORMAT_0

registers['NVDLA_CDMA']['register_list'].append('D_WEIGHT_FORMAT_0')



# Register NVDLA_CDMA_D_WEIGHT_SIZE_0_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_WEIGHT_SIZE_0_0'] = {
    'addr'            : 0x306c,
    'size'            : 0x12,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3ffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3ffff,
    'write_mask'      : 0x3ffff,
    'BYTE_PER_KERNEL' : {
        'lsb'               : 0,
        'msb'               : 17,
        'size'              : 18,
        'field'             : (0x3ffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BYTE_PER_KERNEL',
    ],
} # End of register: D_WEIGHT_SIZE_0_0

registers['NVDLA_CDMA']['register_list'].append('D_WEIGHT_SIZE_0_0')



# Register NVDLA_CDMA_D_WEIGHT_SIZE_1_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_WEIGHT_SIZE_1_0'] = {
    'addr'            : 0x3070,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'WEIGHT_KERNEL' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WEIGHT_KERNEL',
    ],
} # End of register: D_WEIGHT_SIZE_1_0

registers['NVDLA_CDMA']['register_list'].append('D_WEIGHT_SIZE_1_0')



# Register NVDLA_CDMA_D_WEIGHT_RAM_TYPE_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_WEIGHT_RAM_TYPE_0'] = {
    'addr'            : 0x3074,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'WEIGHT_RAM_TYPE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'CVIF' : 0x0,
            'MCIF' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WEIGHT_RAM_TYPE',
    ],
} # End of register: D_WEIGHT_RAM_TYPE_0

registers['NVDLA_CDMA']['register_list'].append('D_WEIGHT_RAM_TYPE_0')



# Register NVDLA_CDMA_D_WEIGHT_ADDR_HIGH_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_WEIGHT_ADDR_HIGH_0'] = {
    'addr'            : 0x3078,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'WEIGHT_ADDR_HIGH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WEIGHT_ADDR_HIGH',
    ],
} # End of register: D_WEIGHT_ADDR_HIGH_0

registers['NVDLA_CDMA']['register_list'].append('D_WEIGHT_ADDR_HIGH_0')



# Register NVDLA_CDMA_D_WEIGHT_ADDR_LOW_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_WEIGHT_ADDR_LOW_0'] = {
    'addr'            : 0x307c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'WEIGHT_ADDR_LOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WEIGHT_ADDR_LOW',
    ],
} # End of register: D_WEIGHT_ADDR_LOW_0

registers['NVDLA_CDMA']['register_list'].append('D_WEIGHT_ADDR_LOW_0')



# Register NVDLA_CDMA_D_WEIGHT_BYTES_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_WEIGHT_BYTES_0'] = {
    'addr'            : 0x3080,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1ffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'WEIGHT_BYTES' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WEIGHT_BYTES',
    ],
} # End of register: D_WEIGHT_BYTES_0

registers['NVDLA_CDMA']['register_list'].append('D_WEIGHT_BYTES_0')



# Register NVDLA_CDMA_D_WGS_ADDR_HIGH_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_WGS_ADDR_HIGH_0'] = {
    'addr'            : 0x3084,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'WGS_ADDR_HIGH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WGS_ADDR_HIGH',
    ],
} # End of register: D_WGS_ADDR_HIGH_0

registers['NVDLA_CDMA']['register_list'].append('D_WGS_ADDR_HIGH_0')



# Register NVDLA_CDMA_D_WGS_ADDR_LOW_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_WGS_ADDR_LOW_0'] = {
    'addr'            : 0x3088,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'WGS_ADDR_LOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WGS_ADDR_LOW',
    ],
} # End of register: D_WGS_ADDR_LOW_0

registers['NVDLA_CDMA']['register_list'].append('D_WGS_ADDR_LOW_0')



# Register NVDLA_CDMA_D_WMB_ADDR_HIGH_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_WMB_ADDR_HIGH_0'] = {
    'addr'            : 0x308c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'WMB_ADDR_HIGH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WMB_ADDR_HIGH',
    ],
} # End of register: D_WMB_ADDR_HIGH_0

registers['NVDLA_CDMA']['register_list'].append('D_WMB_ADDR_HIGH_0')



# Register NVDLA_CDMA_D_WMB_ADDR_LOW_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_WMB_ADDR_LOW_0'] = {
    'addr'            : 0x3090,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'WMB_ADDR_LOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WMB_ADDR_LOW',
    ],
} # End of register: D_WMB_ADDR_LOW_0

registers['NVDLA_CDMA']['register_list'].append('D_WMB_ADDR_LOW_0')



# Register NVDLA_CDMA_D_WMB_BYTES_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_WMB_BYTES_0'] = {
    'addr'            : 0x3094,
    'size'            : 0x1c,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfffffff,
    'write_mask'      : 0xfffffff,
    'WMB_BYTES' : {
        'lsb'               : 0,
        'msb'               : 27,
        'size'              : 28,
        'field'             : (0xfffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WMB_BYTES',
    ],
} # End of register: D_WMB_BYTES_0

registers['NVDLA_CDMA']['register_list'].append('D_WMB_BYTES_0')



# Register NVDLA_CDMA_D_MEAN_FORMAT_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_MEAN_FORMAT_0'] = {
    'addr'            : 0x3098,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'MEAN_FORMAT' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'MEAN_FORMAT',
    ],
} # End of register: D_MEAN_FORMAT_0

registers['NVDLA_CDMA']['register_list'].append('D_MEAN_FORMAT_0')



# Register NVDLA_CDMA_D_MEAN_GLOBAL_0_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_MEAN_GLOBAL_0_0'] = {
    'addr'            : 0x309c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'MEAN_RY' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'MEAN_GU' : {
        'lsb'               : 16,
        'msb'               : 31,
        'size'              : 16,
        'field'             : (0xffff << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'MEAN_RY',
        'MEAN_GU',
    ],
} # End of register: D_MEAN_GLOBAL_0_0

registers['NVDLA_CDMA']['register_list'].append('D_MEAN_GLOBAL_0_0')



# Register NVDLA_CDMA_D_MEAN_GLOBAL_1_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_MEAN_GLOBAL_1_0'] = {
    'addr'            : 0x30a0,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'MEAN_BV' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'MEAN_AX' : {
        'lsb'               : 16,
        'msb'               : 31,
        'size'              : 16,
        'field'             : (0xffff << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'MEAN_BV',
        'MEAN_AX',
    ],
} # End of register: D_MEAN_GLOBAL_1_0

registers['NVDLA_CDMA']['register_list'].append('D_MEAN_GLOBAL_1_0')



# Register NVDLA_CDMA_D_CVT_CFG_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_CVT_CFG_0'] = {
    'addr'            : 0x30a4,
    'size'            : 0xa,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3f1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f1,
    'write_mask'      : 0x3f1,
    'CVT_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'CVT_TRUNCATE' : {
        'lsb'               : 4,
        'msb'               : 9,
        'size'              : 6,
        'field'             : (0x3f << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CVT_EN',
        'CVT_TRUNCATE',
    ],
} # End of register: D_CVT_CFG_0

registers['NVDLA_CDMA']['register_list'].append('D_CVT_CFG_0')



# Register NVDLA_CDMA_D_CVT_OFFSET_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_CVT_OFFSET_0'] = {
    'addr'            : 0x30a8,
    'size'            : 0x10,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'CVT_OFFSET' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CVT_OFFSET',
    ],
} # End of register: D_CVT_OFFSET_0

registers['NVDLA_CDMA']['register_list'].append('D_CVT_OFFSET_0')



# Register NVDLA_CDMA_D_CVT_SCALE_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_CVT_SCALE_0'] = {
    'addr'            : 0x30ac,
    'size'            : 0x10,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'CVT_SCALE' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CVT_SCALE',
    ],
} # End of register: D_CVT_SCALE_0

registers['NVDLA_CDMA']['register_list'].append('D_CVT_SCALE_0')



# Register NVDLA_CDMA_D_CONV_STRIDE_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_CONV_STRIDE_0'] = {
    'addr'            : 0x30b0,
    'size'            : 0x13,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x70007,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x70007,
    'write_mask'      : 0x70007,
    'CONV_X_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 2,
        'size'              : 3,
        'field'             : (0x7 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'CONV_Y_STRIDE' : {
        'lsb'               : 16,
        'msb'               : 18,
        'size'              : 3,
        'field'             : (0x7 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CONV_X_STRIDE',
        'CONV_Y_STRIDE',
    ],
} # End of register: D_CONV_STRIDE_0

registers['NVDLA_CDMA']['register_list'].append('D_CONV_STRIDE_0')



# Register NVDLA_CDMA_D_ZERO_PADDING_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_ZERO_PADDING_0'] = {
    'addr'            : 0x30b4,
    'size'            : 0x1e,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3f1f3f1f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f1f3f1f,
    'write_mask'      : 0x3f1f3f1f,
    'PAD_LEFT' : {
        'lsb'               : 0,
        'msb'               : 4,
        'size'              : 5,
        'field'             : (0x1f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'PAD_RIGHT' : {
        'lsb'               : 8,
        'msb'               : 13,
        'size'              : 6,
        'field'             : (0x3f << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'PAD_TOP' : {
        'lsb'               : 16,
        'msb'               : 20,
        'size'              : 5,
        'field'             : (0x1f << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'PAD_BOTTOM' : {
        'lsb'               : 24,
        'msb'               : 29,
        'size'              : 6,
        'field'             : (0x3f << 24),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PAD_LEFT',
        'PAD_RIGHT',
        'PAD_TOP',
        'PAD_BOTTOM',
    ],
} # End of register: D_ZERO_PADDING_0

registers['NVDLA_CDMA']['register_list'].append('D_ZERO_PADDING_0')



# Register NVDLA_CDMA_D_ZERO_PADDING_VALUE_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_ZERO_PADDING_VALUE_0'] = {
    'addr'            : 0x30b8,
    'size'            : 0x10,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'PAD_VALUE' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PAD_VALUE',
    ],
} # End of register: D_ZERO_PADDING_VALUE_0

registers['NVDLA_CDMA']['register_list'].append('D_ZERO_PADDING_VALUE_0')



# Register NVDLA_CDMA_D_BANK_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_BANK_0'] = {
    'addr'            : 0x30bc,
    'size'            : 0x15,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1f001f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1f001f,
    'write_mask'      : 0x1f001f,
    'DATA_BANK' : {
        'lsb'               : 0,
        'msb'               : 4,
        'size'              : 5,
        'field'             : (0x1f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WEIGHT_BANK' : {
        'lsb'               : 16,
        'msb'               : 20,
        'size'              : 5,
        'field'             : (0x1f << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATA_BANK',
        'WEIGHT_BANK',
    ],
} # End of register: D_BANK_0

registers['NVDLA_CDMA']['register_list'].append('D_BANK_0')



# Register NVDLA_CDMA_D_NAN_FLUSH_TO_ZERO_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_NAN_FLUSH_TO_ZERO_0'] = {
    'addr'            : 0x30c0,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'NAN_TO_ZERO' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'NAN_TO_ZERO',
    ],
} # End of register: D_NAN_FLUSH_TO_ZERO_0

registers['NVDLA_CDMA']['register_list'].append('D_NAN_FLUSH_TO_ZERO_0')



# Register NVDLA_CDMA_D_NAN_INPUT_DATA_NUM_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_NAN_INPUT_DATA_NUM_0'] = {
    'addr'            : 0x30c4,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'NAN_DATA_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'NAN_DATA_NUM',
    ],
} # End of register: D_NAN_INPUT_DATA_NUM_0

registers['NVDLA_CDMA']['register_list'].append('D_NAN_INPUT_DATA_NUM_0')



# Register NVDLA_CDMA_D_NAN_INPUT_WEIGHT_NUM_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_NAN_INPUT_WEIGHT_NUM_0'] = {
    'addr'            : 0x30c8,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'NAN_WEIGHT_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'NAN_WEIGHT_NUM',
    ],
} # End of register: D_NAN_INPUT_WEIGHT_NUM_0

registers['NVDLA_CDMA']['register_list'].append('D_NAN_INPUT_WEIGHT_NUM_0')



# Register NVDLA_CDMA_D_INF_INPUT_DATA_NUM_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_INF_INPUT_DATA_NUM_0'] = {
    'addr'            : 0x30cc,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'INF_DATA_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'INF_DATA_NUM',
    ],
} # End of register: D_INF_INPUT_DATA_NUM_0

registers['NVDLA_CDMA']['register_list'].append('D_INF_INPUT_DATA_NUM_0')



# Register NVDLA_CDMA_D_INF_INPUT_WEIGHT_NUM_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_INF_INPUT_WEIGHT_NUM_0'] = {
    'addr'            : 0x30d0,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'INF_WEIGHT_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'INF_WEIGHT_NUM',
    ],
} # End of register: D_INF_INPUT_WEIGHT_NUM_0

registers['NVDLA_CDMA']['register_list'].append('D_INF_INPUT_WEIGHT_NUM_0')



# Register NVDLA_CDMA_D_PERF_ENABLE_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_PERF_ENABLE_0'] = {
    'addr'            : 0x30d4,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'DMA_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DMA_EN',
    ],
} # End of register: D_PERF_ENABLE_0

registers['NVDLA_CDMA']['register_list'].append('D_PERF_ENABLE_0')



# Register NVDLA_CDMA_D_PERF_DAT_READ_STALL_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_PERF_DAT_READ_STALL_0'] = {
    'addr'            : 0x30d8,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'DAT_RD_STALL' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DAT_RD_STALL',
    ],
} # End of register: D_PERF_DAT_READ_STALL_0

registers['NVDLA_CDMA']['register_list'].append('D_PERF_DAT_READ_STALL_0')



# Register NVDLA_CDMA_D_PERF_WT_READ_STALL_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_PERF_WT_READ_STALL_0'] = {
    'addr'            : 0x30dc,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'WT_RD_STALL' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WT_RD_STALL',
    ],
} # End of register: D_PERF_WT_READ_STALL_0

registers['NVDLA_CDMA']['register_list'].append('D_PERF_WT_READ_STALL_0')



# Register NVDLA_CDMA_D_PERF_DAT_READ_LATENCY_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_PERF_DAT_READ_LATENCY_0'] = {
    'addr'            : 0x30e0,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'DAT_RD_LATENCY' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DAT_RD_LATENCY',
    ],
} # End of register: D_PERF_DAT_READ_LATENCY_0

registers['NVDLA_CDMA']['register_list'].append('D_PERF_DAT_READ_LATENCY_0')



# Register NVDLA_CDMA_D_PERF_WT_READ_LATENCY_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_PERF_WT_READ_LATENCY_0'] = {
    'addr'            : 0x30e4,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'WT_RD_LATENCY' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WT_RD_LATENCY',
    ],
} # End of register: D_PERF_WT_READ_LATENCY_0

registers['NVDLA_CDMA']['register_list'].append('D_PERF_WT_READ_LATENCY_0')



# Register NVDLA_CDMA_D_CYA_0
if 'NVDLA_CDMA' not in registers:
    registers['NVDLA_CDMA'] = {}
    registers['NVDLA_CDMA']['register_list']  = []

registers['NVDLA_CDMA']['D_CYA_0'] = {
    'addr'            : 0x30e8,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'CYA' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CYA',
    ],
} # End of register: D_CYA_0

registers['NVDLA_CDMA']['register_list'].append('D_CYA_0')



# Register NVDLA_CSC_S_STATUS_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['S_STATUS_0'] = {
    'addr'            : 0x4000,
    'size'            : 0x12,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x30003,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x30003,
    'write_mask'      : 0x0,
    'STATUS_0' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    'STATUS_1' : {
        'lsb'               : 16,
        'msb'               : 17,
        'size'              : 2,
        'field'             : (0x3 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_0',
        'STATUS_1',
    ],
} # End of register: S_STATUS_0

registers['NVDLA_CSC']['register_list'].append('S_STATUS_0')



# Register NVDLA_CSC_S_POINTER_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['S_POINTER_0'] = {
    'addr'            : 0x4004,
    'size'            : 0x11,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x10001,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x10001,
    'write_mask'      : 0x1,
    'PRODUCER' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    'CONSUMER' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PRODUCER',
        'CONSUMER',
    ],
} # End of register: S_POINTER_0

registers['NVDLA_CSC']['register_list'].append('S_POINTER_0')



# Register NVDLA_CSC_D_OP_ENABLE_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_OP_ENABLE_0'] = {
    'addr'            : 0x4008,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'OP_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwto',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'OP_EN',
    ],
} # End of register: D_OP_ENABLE_0

registers['NVDLA_CSC']['register_list'].append('D_OP_ENABLE_0')



# Register NVDLA_CSC_D_MISC_CFG_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_MISC_CFG_0'] = {
    'addr'            : 0x400c,
    'size'            : 0x1d,
    'reset_val'       : 0x1100,
    'reset_mask'      : 0x11113301,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x11113301,
    'write_mask'      : 0x11113301,
    'CONV_MODE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DIRECT' : 0x0,
            'WINOGRAD' : 0x1,
        },
    },
    'IN_PRECISION' : {
        'lsb'               : 8,
        'msb'               : 9,
        'size'              : 2,
        'field'             : (0x3 << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'INT8' : 0x0,
            'INT16' : 0x1,
            'FP16' : 0x2,
        },
    },
    'PROC_PRECISION' : {
        'lsb'               : 12,
        'msb'               : 13,
        'size'              : 2,
        'field'             : (0x3 << 12),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'INT8' : 0x0,
            'INT16' : 0x1,
            'FP16' : 0x2,
        },
    },
    'DATA_REUSE' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'WEIGHT_REUSE' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'SKIP_DATA_RLS' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'SKIP_WEIGHT_RLS' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CONV_MODE',
        'IN_PRECISION',
        'PROC_PRECISION',
        'DATA_REUSE',
        'WEIGHT_REUSE',
        'SKIP_DATA_RLS',
        'SKIP_WEIGHT_RLS',
    ],
} # End of register: D_MISC_CFG_0

registers['NVDLA_CSC']['register_list'].append('D_MISC_CFG_0')



# Register NVDLA_CSC_D_DATAIN_FORMAT_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_DATAIN_FORMAT_0'] = {
    'addr'            : 0x4010,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'DATAIN_FORMAT' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'FEATURE' : 0x0,
            'PIXEL' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAIN_FORMAT',
    ],
} # End of register: D_DATAIN_FORMAT_0

registers['NVDLA_CSC']['register_list'].append('D_DATAIN_FORMAT_0')



# Register NVDLA_CSC_D_DATAIN_SIZE_EXT_0_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_DATAIN_SIZE_EXT_0_0'] = {
    'addr'            : 0x4014,
    'size'            : 0x1d,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff1fff,
    'write_mask'      : 0x1fff1fff,
    'DATAIN_WIDTH_EXT' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'DATAIN_HEIGHT_EXT' : {
        'lsb'               : 16,
        'msb'               : 28,
        'size'              : 13,
        'field'             : (0x1fff << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAIN_WIDTH_EXT',
        'DATAIN_HEIGHT_EXT',
    ],
} # End of register: D_DATAIN_SIZE_EXT_0_0

registers['NVDLA_CSC']['register_list'].append('D_DATAIN_SIZE_EXT_0_0')



# Register NVDLA_CSC_D_DATAIN_SIZE_EXT_1_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_DATAIN_SIZE_EXT_1_0'] = {
    'addr'            : 0x4018,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'DATAIN_CHANNEL_EXT' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAIN_CHANNEL_EXT',
    ],
} # End of register: D_DATAIN_SIZE_EXT_1_0

registers['NVDLA_CSC']['register_list'].append('D_DATAIN_SIZE_EXT_1_0')



# Register NVDLA_CSC_D_BATCH_NUMBER_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_BATCH_NUMBER_0'] = {
    'addr'            : 0x401c,
    'size'            : 0x5,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1f,
    'write_mask'      : 0x1f,
    'BATCHES' : {
        'lsb'               : 0,
        'msb'               : 4,
        'size'              : 5,
        'field'             : (0x1f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BATCHES',
    ],
} # End of register: D_BATCH_NUMBER_0

registers['NVDLA_CSC']['register_list'].append('D_BATCH_NUMBER_0')



# Register NVDLA_CSC_D_POST_Y_EXTENSION_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_POST_Y_EXTENSION_0'] = {
    'addr'            : 0x4020,
    'size'            : 0x2,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3,
    'write_mask'      : 0x3,
    'Y_EXTENSION' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'Y_EXTENSION',
    ],
} # End of register: D_POST_Y_EXTENSION_0

registers['NVDLA_CSC']['register_list'].append('D_POST_Y_EXTENSION_0')



# Register NVDLA_CSC_D_ENTRY_PER_SLICE_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_ENTRY_PER_SLICE_0'] = {
    'addr'            : 0x4024,
    'size'            : 0xe,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3fff,
    'write_mask'      : 0x3fff,
    'ENTRIES' : {
        'lsb'               : 0,
        'msb'               : 13,
        'size'              : 14,
        'field'             : (0x3fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ENTRIES',
    ],
} # End of register: D_ENTRY_PER_SLICE_0

registers['NVDLA_CSC']['register_list'].append('D_ENTRY_PER_SLICE_0')



# Register NVDLA_CSC_D_WEIGHT_FORMAT_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_WEIGHT_FORMAT_0'] = {
    'addr'            : 0x4028,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'WEIGHT_FORMAT' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'UNCOMPRESSED' : 0x0,
            'COMPRESSED' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WEIGHT_FORMAT',
    ],
} # End of register: D_WEIGHT_FORMAT_0

registers['NVDLA_CSC']['register_list'].append('D_WEIGHT_FORMAT_0')



# Register NVDLA_CSC_D_WEIGHT_SIZE_EXT_0_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_WEIGHT_SIZE_EXT_0_0'] = {
    'addr'            : 0x402c,
    'size'            : 0x15,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1f001f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1f001f,
    'write_mask'      : 0x1f001f,
    'WEIGHT_WIDTH_EXT' : {
        'lsb'               : 0,
        'msb'               : 4,
        'size'              : 5,
        'field'             : (0x1f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WEIGHT_HEIGHT_EXT' : {
        'lsb'               : 16,
        'msb'               : 20,
        'size'              : 5,
        'field'             : (0x1f << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WEIGHT_WIDTH_EXT',
        'WEIGHT_HEIGHT_EXT',
    ],
} # End of register: D_WEIGHT_SIZE_EXT_0_0

registers['NVDLA_CSC']['register_list'].append('D_WEIGHT_SIZE_EXT_0_0')



# Register NVDLA_CSC_D_WEIGHT_SIZE_EXT_1_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_WEIGHT_SIZE_EXT_1_0'] = {
    'addr'            : 0x4030,
    'size'            : 0x1d,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff1fff,
    'write_mask'      : 0x1fff1fff,
    'WEIGHT_CHANNEL_EXT' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WEIGHT_KERNEL' : {
        'lsb'               : 16,
        'msb'               : 28,
        'size'              : 13,
        'field'             : (0x1fff << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WEIGHT_CHANNEL_EXT',
        'WEIGHT_KERNEL',
    ],
} # End of register: D_WEIGHT_SIZE_EXT_1_0

registers['NVDLA_CSC']['register_list'].append('D_WEIGHT_SIZE_EXT_1_0')



# Register NVDLA_CSC_D_WEIGHT_BYTES_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_WEIGHT_BYTES_0'] = {
    'addr'            : 0x4034,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1ffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'WEIGHT_BYTES' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WEIGHT_BYTES',
    ],
} # End of register: D_WEIGHT_BYTES_0

registers['NVDLA_CSC']['register_list'].append('D_WEIGHT_BYTES_0')



# Register NVDLA_CSC_D_WMB_BYTES_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_WMB_BYTES_0'] = {
    'addr'            : 0x4038,
    'size'            : 0x1c,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfffffff,
    'write_mask'      : 0xfffffff,
    'WMB_BYTES' : {
        'lsb'               : 0,
        'msb'               : 27,
        'size'              : 28,
        'field'             : (0xfffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WMB_BYTES',
    ],
} # End of register: D_WMB_BYTES_0

registers['NVDLA_CSC']['register_list'].append('D_WMB_BYTES_0')



# Register NVDLA_CSC_D_DATAOUT_SIZE_0_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_DATAOUT_SIZE_0_0'] = {
    'addr'            : 0x403c,
    'size'            : 0x1d,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff1fff,
    'write_mask'      : 0x1fff1fff,
    'DATAOUT_WIDTH' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'DATAOUT_HEIGHT' : {
        'lsb'               : 16,
        'msb'               : 28,
        'size'              : 13,
        'field'             : (0x1fff << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAOUT_WIDTH',
        'DATAOUT_HEIGHT',
    ],
} # End of register: D_DATAOUT_SIZE_0_0

registers['NVDLA_CSC']['register_list'].append('D_DATAOUT_SIZE_0_0')



# Register NVDLA_CSC_D_DATAOUT_SIZE_1_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_DATAOUT_SIZE_1_0'] = {
    'addr'            : 0x4040,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'DATAOUT_CHANNEL' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAOUT_CHANNEL',
    ],
} # End of register: D_DATAOUT_SIZE_1_0

registers['NVDLA_CSC']['register_list'].append('D_DATAOUT_SIZE_1_0')



# Register NVDLA_CSC_D_ATOMICS_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_ATOMICS_0'] = {
    'addr'            : 0x4044,
    'size'            : 0x15,
    'reset_val'       : 0x1,
    'reset_mask'      : 0x1fffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fffff,
    'write_mask'      : 0x1fffff,
    'ATOMICS' : {
        'lsb'               : 0,
        'msb'               : 20,
        'size'              : 21,
        'field'             : (0x1fffff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ATOMICS',
    ],
} # End of register: D_ATOMICS_0

registers['NVDLA_CSC']['register_list'].append('D_ATOMICS_0')



# Register NVDLA_CSC_D_RELEASE_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_RELEASE_0'] = {
    'addr'            : 0x4048,
    'size'            : 0xc,
    'reset_val'       : 0x1,
    'reset_mask'      : 0xfff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xfff,
    'write_mask'      : 0xfff,
    'RLS_SLICES' : {
        'lsb'               : 0,
        'msb'               : 11,
        'size'              : 12,
        'field'             : (0xfff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'RLS_SLICES',
    ],
} # End of register: D_RELEASE_0

registers['NVDLA_CSC']['register_list'].append('D_RELEASE_0')



# Register NVDLA_CSC_D_CONV_STRIDE_EXT_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_CONV_STRIDE_EXT_0'] = {
    'addr'            : 0x404c,
    'size'            : 0x13,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x70007,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x70007,
    'write_mask'      : 0x70007,
    'CONV_X_STRIDE_EXT' : {
        'lsb'               : 0,
        'msb'               : 2,
        'size'              : 3,
        'field'             : (0x7 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'CONV_Y_STRIDE_EXT' : {
        'lsb'               : 16,
        'msb'               : 18,
        'size'              : 3,
        'field'             : (0x7 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CONV_X_STRIDE_EXT',
        'CONV_Y_STRIDE_EXT',
    ],
} # End of register: D_CONV_STRIDE_EXT_0

registers['NVDLA_CSC']['register_list'].append('D_CONV_STRIDE_EXT_0')



# Register NVDLA_CSC_D_DILATION_EXT_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_DILATION_EXT_0'] = {
    'addr'            : 0x4050,
    'size'            : 0x15,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1f001f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1f001f,
    'write_mask'      : 0x1f001f,
    'X_DILATION_EXT' : {
        'lsb'               : 0,
        'msb'               : 4,
        'size'              : 5,
        'field'             : (0x1f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'Y_DILATION_EXT' : {
        'lsb'               : 16,
        'msb'               : 20,
        'size'              : 5,
        'field'             : (0x1f << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'X_DILATION_EXT',
        'Y_DILATION_EXT',
    ],
} # End of register: D_DILATION_EXT_0

registers['NVDLA_CSC']['register_list'].append('D_DILATION_EXT_0')



# Register NVDLA_CSC_D_ZERO_PADDING_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_ZERO_PADDING_0'] = {
    'addr'            : 0x4054,
    'size'            : 0x15,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1f001f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1f001f,
    'write_mask'      : 0x1f001f,
    'PAD_LEFT' : {
        'lsb'               : 0,
        'msb'               : 4,
        'size'              : 5,
        'field'             : (0x1f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'PAD_TOP' : {
        'lsb'               : 16,
        'msb'               : 20,
        'size'              : 5,
        'field'             : (0x1f << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PAD_LEFT',
        'PAD_TOP',
    ],
} # End of register: D_ZERO_PADDING_0

registers['NVDLA_CSC']['register_list'].append('D_ZERO_PADDING_0')



# Register NVDLA_CSC_D_ZERO_PADDING_VALUE_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_ZERO_PADDING_VALUE_0'] = {
    'addr'            : 0x4058,
    'size'            : 0x10,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'PAD_VALUE' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PAD_VALUE',
    ],
} # End of register: D_ZERO_PADDING_VALUE_0

registers['NVDLA_CSC']['register_list'].append('D_ZERO_PADDING_VALUE_0')



# Register NVDLA_CSC_D_BANK_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_BANK_0'] = {
    'addr'            : 0x405c,
    'size'            : 0x15,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1f001f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1f001f,
    'write_mask'      : 0x1f001f,
    'DATA_BANK' : {
        'lsb'               : 0,
        'msb'               : 4,
        'size'              : 5,
        'field'             : (0x1f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WEIGHT_BANK' : {
        'lsb'               : 16,
        'msb'               : 20,
        'size'              : 5,
        'field'             : (0x1f << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATA_BANK',
        'WEIGHT_BANK',
    ],
} # End of register: D_BANK_0

registers['NVDLA_CSC']['register_list'].append('D_BANK_0')



# Register NVDLA_CSC_D_PRA_CFG_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_PRA_CFG_0'] = {
    'addr'            : 0x4060,
    'size'            : 0x2,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3,
    'write_mask'      : 0x3,
    'PRA_TRUNCATE' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PRA_TRUNCATE',
    ],
} # End of register: D_PRA_CFG_0

registers['NVDLA_CSC']['register_list'].append('D_PRA_CFG_0')



# Register NVDLA_CSC_D_CYA_0
if 'NVDLA_CSC' not in registers:
    registers['NVDLA_CSC'] = {}
    registers['NVDLA_CSC']['register_list']  = []

registers['NVDLA_CSC']['D_CYA_0'] = {
    'addr'            : 0x4064,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'CYA' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CYA',
    ],
} # End of register: D_CYA_0

registers['NVDLA_CSC']['register_list'].append('D_CYA_0')



# Register NVDLA_CMAC_A_S_STATUS_0
if 'NVDLA_CMAC_A' not in registers:
    registers['NVDLA_CMAC_A'] = {}
    registers['NVDLA_CMAC_A']['register_list']  = []

registers['NVDLA_CMAC_A']['S_STATUS_0'] = {
    'addr'            : 0x5000,
    'size'            : 0x12,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x30003,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x30003,
    'write_mask'      : 0x0,
    'STATUS_0' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    'STATUS_1' : {
        'lsb'               : 16,
        'msb'               : 17,
        'size'              : 2,
        'field'             : (0x3 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_0',
        'STATUS_1',
    ],
} # End of register: S_STATUS_0

registers['NVDLA_CMAC_A']['register_list'].append('S_STATUS_0')



# Register NVDLA_CMAC_A_S_POINTER_0
if 'NVDLA_CMAC_A' not in registers:
    registers['NVDLA_CMAC_A'] = {}
    registers['NVDLA_CMAC_A']['register_list']  = []

registers['NVDLA_CMAC_A']['S_POINTER_0'] = {
    'addr'            : 0x5004,
    'size'            : 0x11,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x10001,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x10001,
    'write_mask'      : 0x1,
    'PRODUCER' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    'CONSUMER' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PRODUCER',
        'CONSUMER',
    ],
} # End of register: S_POINTER_0

registers['NVDLA_CMAC_A']['register_list'].append('S_POINTER_0')



# Register NVDLA_CMAC_A_D_OP_ENABLE_0
if 'NVDLA_CMAC_A' not in registers:
    registers['NVDLA_CMAC_A'] = {}
    registers['NVDLA_CMAC_A']['register_list']  = []

registers['NVDLA_CMAC_A']['D_OP_ENABLE_0'] = {
    'addr'            : 0x5008,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'OP_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwto',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'OP_EN',
    ],
} # End of register: D_OP_ENABLE_0

registers['NVDLA_CMAC_A']['register_list'].append('D_OP_ENABLE_0')



# Register NVDLA_CMAC_A_D_MISC_CFG_0
if 'NVDLA_CMAC_A' not in registers:
    registers['NVDLA_CMAC_A'] = {}
    registers['NVDLA_CMAC_A']['register_list']  = []

registers['NVDLA_CMAC_A']['D_MISC_CFG_0'] = {
    'addr'            : 0x500c,
    'size'            : 0xe,
    'reset_val'       : 0x1000,
    'reset_mask'      : 0x3001,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3001,
    'write_mask'      : 0x3001,
    'CONV_MODE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DIRECT' : 0x0,
            'WINOGRAD' : 0x1,
        },
    },
    'PROC_PRECISION' : {
        'lsb'               : 12,
        'msb'               : 13,
        'size'              : 2,
        'field'             : (0x3 << 12),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'INT8' : 0x0,
            'INT16' : 0x1,
            'FP16' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CONV_MODE',
        'PROC_PRECISION',
    ],
} # End of register: D_MISC_CFG_0

registers['NVDLA_CMAC_A']['register_list'].append('D_MISC_CFG_0')



# Register NVDLA_CMAC_B_S_STATUS_0
if 'NVDLA_CMAC_B' not in registers:
    registers['NVDLA_CMAC_B'] = {}
    registers['NVDLA_CMAC_B']['register_list']  = []

registers['NVDLA_CMAC_B']['S_STATUS_0'] = {
    'addr'            : 0x6000,
    'size'            : 0x12,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x30003,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x30003,
    'write_mask'      : 0x0,
    'STATUS_0' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    'STATUS_1' : {
        'lsb'               : 16,
        'msb'               : 17,
        'size'              : 2,
        'field'             : (0x3 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_0',
        'STATUS_1',
    ],
} # End of register: S_STATUS_0

registers['NVDLA_CMAC_B']['register_list'].append('S_STATUS_0')



# Register NVDLA_CMAC_B_S_POINTER_0
if 'NVDLA_CMAC_B' not in registers:
    registers['NVDLA_CMAC_B'] = {}
    registers['NVDLA_CMAC_B']['register_list']  = []

registers['NVDLA_CMAC_B']['S_POINTER_0'] = {
    'addr'            : 0x6004,
    'size'            : 0x11,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x10001,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x10001,
    'write_mask'      : 0x1,
    'PRODUCER' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    'CONSUMER' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PRODUCER',
        'CONSUMER',
    ],
} # End of register: S_POINTER_0

registers['NVDLA_CMAC_B']['register_list'].append('S_POINTER_0')



# Register NVDLA_CMAC_B_D_OP_ENABLE_0
if 'NVDLA_CMAC_B' not in registers:
    registers['NVDLA_CMAC_B'] = {}
    registers['NVDLA_CMAC_B']['register_list']  = []

registers['NVDLA_CMAC_B']['D_OP_ENABLE_0'] = {
    'addr'            : 0x6008,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'OP_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwto',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'OP_EN',
    ],
} # End of register: D_OP_ENABLE_0

registers['NVDLA_CMAC_B']['register_list'].append('D_OP_ENABLE_0')



# Register NVDLA_CMAC_B_D_MISC_CFG_0
if 'NVDLA_CMAC_B' not in registers:
    registers['NVDLA_CMAC_B'] = {}
    registers['NVDLA_CMAC_B']['register_list']  = []

registers['NVDLA_CMAC_B']['D_MISC_CFG_0'] = {
    'addr'            : 0x600c,
    'size'            : 0xe,
    'reset_val'       : 0x1000,
    'reset_mask'      : 0x3001,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3001,
    'write_mask'      : 0x3001,
    'CONV_MODE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DIRECT' : 0x0,
            'WINOGRAD' : 0x1,
        },
    },
    'PROC_PRECISION' : {
        'lsb'               : 12,
        'msb'               : 13,
        'size'              : 2,
        'field'             : (0x3 << 12),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'INT8' : 0x0,
            'INT16' : 0x1,
            'FP16' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CONV_MODE',
        'PROC_PRECISION',
    ],
} # End of register: D_MISC_CFG_0

registers['NVDLA_CMAC_B']['register_list'].append('D_MISC_CFG_0')



# Register NVDLA_CACC_S_STATUS_0
if 'NVDLA_CACC' not in registers:
    registers['NVDLA_CACC'] = {}
    registers['NVDLA_CACC']['register_list']  = []

registers['NVDLA_CACC']['S_STATUS_0'] = {
    'addr'            : 0x7000,
    'size'            : 0x12,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x30003,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x30003,
    'write_mask'      : 0x0,
    'STATUS_0' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    'STATUS_1' : {
        'lsb'               : 16,
        'msb'               : 17,
        'size'              : 2,
        'field'             : (0x3 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_0',
        'STATUS_1',
    ],
} # End of register: S_STATUS_0

registers['NVDLA_CACC']['register_list'].append('S_STATUS_0')



# Register NVDLA_CACC_S_POINTER_0
if 'NVDLA_CACC' not in registers:
    registers['NVDLA_CACC'] = {}
    registers['NVDLA_CACC']['register_list']  = []

registers['NVDLA_CACC']['S_POINTER_0'] = {
    'addr'            : 0x7004,
    'size'            : 0x11,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x10001,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x10001,
    'write_mask'      : 0x1,
    'PRODUCER' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    'CONSUMER' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PRODUCER',
        'CONSUMER',
    ],
} # End of register: S_POINTER_0

registers['NVDLA_CACC']['register_list'].append('S_POINTER_0')



# Register NVDLA_CACC_D_OP_ENABLE_0
if 'NVDLA_CACC' not in registers:
    registers['NVDLA_CACC'] = {}
    registers['NVDLA_CACC']['register_list']  = []

registers['NVDLA_CACC']['D_OP_ENABLE_0'] = {
    'addr'            : 0x7008,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'OP_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwto',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'OP_EN',
    ],
} # End of register: D_OP_ENABLE_0

registers['NVDLA_CACC']['register_list'].append('D_OP_ENABLE_0')



# Register NVDLA_CACC_D_MISC_CFG_0
if 'NVDLA_CACC' not in registers:
    registers['NVDLA_CACC'] = {}
    registers['NVDLA_CACC']['register_list']  = []

registers['NVDLA_CACC']['D_MISC_CFG_0'] = {
    'addr'            : 0x700c,
    'size'            : 0xe,
    'reset_val'       : 0x1000,
    'reset_mask'      : 0x3001,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3001,
    'write_mask'      : 0x3001,
    'CONV_MODE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DIRECT' : 0x0,
            'WINOGRAD' : 0x1,
        },
    },
    'PROC_PRECISION' : {
        'lsb'               : 12,
        'msb'               : 13,
        'size'              : 2,
        'field'             : (0x3 << 12),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'INT8' : 0x0,
            'INT16' : 0x1,
            'FP16' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CONV_MODE',
        'PROC_PRECISION',
    ],
} # End of register: D_MISC_CFG_0

registers['NVDLA_CACC']['register_list'].append('D_MISC_CFG_0')



# Register NVDLA_CACC_D_DATAOUT_SIZE_0_0
if 'NVDLA_CACC' not in registers:
    registers['NVDLA_CACC'] = {}
    registers['NVDLA_CACC']['register_list']  = []

registers['NVDLA_CACC']['D_DATAOUT_SIZE_0_0'] = {
    'addr'            : 0x7010,
    'size'            : 0x1d,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff1fff,
    'write_mask'      : 0x1fff1fff,
    'DATAOUT_WIDTH' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'DATAOUT_HEIGHT' : {
        'lsb'               : 16,
        'msb'               : 28,
        'size'              : 13,
        'field'             : (0x1fff << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAOUT_WIDTH',
        'DATAOUT_HEIGHT',
    ],
} # End of register: D_DATAOUT_SIZE_0_0

registers['NVDLA_CACC']['register_list'].append('D_DATAOUT_SIZE_0_0')



# Register NVDLA_CACC_D_DATAOUT_SIZE_1_0
if 'NVDLA_CACC' not in registers:
    registers['NVDLA_CACC'] = {}
    registers['NVDLA_CACC']['register_list']  = []

registers['NVDLA_CACC']['D_DATAOUT_SIZE_1_0'] = {
    'addr'            : 0x7014,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'DATAOUT_CHANNEL' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAOUT_CHANNEL',
    ],
} # End of register: D_DATAOUT_SIZE_1_0

registers['NVDLA_CACC']['register_list'].append('D_DATAOUT_SIZE_1_0')



# Register NVDLA_CACC_D_DATAOUT_ADDR_0
if 'NVDLA_CACC' not in registers:
    registers['NVDLA_CACC'] = {}
    registers['NVDLA_CACC']['register_list']  = []

registers['NVDLA_CACC']['D_DATAOUT_ADDR_0'] = {
    'addr'            : 0x7018,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DATAOUT_ADDR' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAOUT_ADDR',
    ],
} # End of register: D_DATAOUT_ADDR_0

registers['NVDLA_CACC']['register_list'].append('D_DATAOUT_ADDR_0')



# Register NVDLA_CACC_D_BATCH_NUMBER_0
if 'NVDLA_CACC' not in registers:
    registers['NVDLA_CACC'] = {}
    registers['NVDLA_CACC']['register_list']  = []

registers['NVDLA_CACC']['D_BATCH_NUMBER_0'] = {
    'addr'            : 0x701c,
    'size'            : 0x5,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1f,
    'write_mask'      : 0x1f,
    'BATCHES' : {
        'lsb'               : 0,
        'msb'               : 4,
        'size'              : 5,
        'field'             : (0x1f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BATCHES',
    ],
} # End of register: D_BATCH_NUMBER_0

registers['NVDLA_CACC']['register_list'].append('D_BATCH_NUMBER_0')



# Register NVDLA_CACC_D_LINE_STRIDE_0
if 'NVDLA_CACC' not in registers:
    registers['NVDLA_CACC'] = {}
    registers['NVDLA_CACC']['register_list']  = []

registers['NVDLA_CACC']['D_LINE_STRIDE_0'] = {
    'addr'            : 0x7020,
    'size'            : 0x18,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffff,
    'write_mask'      : 0xffffff,
    'LINE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 23,
        'size'              : 24,
        'field'             : (0xffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LINE_STRIDE',
    ],
} # End of register: D_LINE_STRIDE_0

registers['NVDLA_CACC']['register_list'].append('D_LINE_STRIDE_0')



# Register NVDLA_CACC_D_SURF_STRIDE_0
if 'NVDLA_CACC' not in registers:
    registers['NVDLA_CACC'] = {}
    registers['NVDLA_CACC']['register_list']  = []

registers['NVDLA_CACC']['D_SURF_STRIDE_0'] = {
    'addr'            : 0x7024,
    'size'            : 0x18,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffff,
    'write_mask'      : 0xffffff,
    'SURF_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 23,
        'size'              : 24,
        'field'             : (0xffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SURF_STRIDE',
    ],
} # End of register: D_SURF_STRIDE_0

registers['NVDLA_CACC']['register_list'].append('D_SURF_STRIDE_0')



# Register NVDLA_CACC_D_DATAOUT_MAP_0
if 'NVDLA_CACC' not in registers:
    registers['NVDLA_CACC'] = {}
    registers['NVDLA_CACC']['register_list']  = []

registers['NVDLA_CACC']['D_DATAOUT_MAP_0'] = {
    'addr'            : 0x7028,
    'size'            : 0x11,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x10001,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x10001,
    'write_mask'      : 0x10001,
    'LINE_PACKED' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'FALSE' : 0x0,
            'TRUE' : 0x1,
        },
    },
    'SURF_PACKED' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'FALSE' : 0x0,
            'TRUE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LINE_PACKED',
        'SURF_PACKED',
    ],
} # End of register: D_DATAOUT_MAP_0

registers['NVDLA_CACC']['register_list'].append('D_DATAOUT_MAP_0')



# Register NVDLA_CACC_D_CLIP_CFG_0
if 'NVDLA_CACC' not in registers:
    registers['NVDLA_CACC'] = {}
    registers['NVDLA_CACC']['register_list']  = []

registers['NVDLA_CACC']['D_CLIP_CFG_0'] = {
    'addr'            : 0x702c,
    'size'            : 0x5,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1f,
    'write_mask'      : 0x1f,
    'CLIP_TRUNCATE' : {
        'lsb'               : 0,
        'msb'               : 4,
        'size'              : 5,
        'field'             : (0x1f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CLIP_TRUNCATE',
    ],
} # End of register: D_CLIP_CFG_0

registers['NVDLA_CACC']['register_list'].append('D_CLIP_CFG_0')



# Register NVDLA_CACC_D_OUT_SATURATION_0
if 'NVDLA_CACC' not in registers:
    registers['NVDLA_CACC'] = {}
    registers['NVDLA_CACC']['register_list']  = []

registers['NVDLA_CACC']['D_OUT_SATURATION_0'] = {
    'addr'            : 0x7030,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'SAT_COUNT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SAT_COUNT',
    ],
} # End of register: D_OUT_SATURATION_0

registers['NVDLA_CACC']['register_list'].append('D_OUT_SATURATION_0')



# Register NVDLA_CACC_D_CYA_0
if 'NVDLA_CACC' not in registers:
    registers['NVDLA_CACC'] = {}
    registers['NVDLA_CACC']['register_list']  = []

registers['NVDLA_CACC']['D_CYA_0'] = {
    'addr'            : 0x7034,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'CYA' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CYA',
    ],
} # End of register: D_CYA_0

registers['NVDLA_CACC']['register_list'].append('D_CYA_0')



# Register NVDLA_SDP_RDMA_S_STATUS_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['S_STATUS_0'] = {
    'addr'            : 0x8000,
    'size'            : 0x12,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x30003,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x30003,
    'write_mask'      : 0x0,
    'STATUS_0' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    'STATUS_1' : {
        'lsb'               : 16,
        'msb'               : 17,
        'size'              : 2,
        'field'             : (0x3 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_0',
        'STATUS_1',
    ],
} # End of register: S_STATUS_0

registers['NVDLA_SDP_RDMA']['register_list'].append('S_STATUS_0')



# Register NVDLA_SDP_RDMA_S_POINTER_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['S_POINTER_0'] = {
    'addr'            : 0x8004,
    'size'            : 0x11,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x10001,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x10001,
    'write_mask'      : 0x1,
    'PRODUCER' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    'CONSUMER' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PRODUCER',
        'CONSUMER',
    ],
} # End of register: S_POINTER_0

registers['NVDLA_SDP_RDMA']['register_list'].append('S_POINTER_0')



# Register NVDLA_SDP_RDMA_D_OP_ENABLE_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_OP_ENABLE_0'] = {
    'addr'            : 0x8008,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'OP_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwto',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'OP_EN',
    ],
} # End of register: D_OP_ENABLE_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_OP_ENABLE_0')



# Register NVDLA_SDP_RDMA_D_DATA_CUBE_WIDTH_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_DATA_CUBE_WIDTH_0'] = {
    'addr'            : 0x800c,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'WIDTH' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WIDTH',
    ],
} # End of register: D_DATA_CUBE_WIDTH_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_DATA_CUBE_WIDTH_0')



# Register NVDLA_SDP_RDMA_D_DATA_CUBE_HEIGHT_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_DATA_CUBE_HEIGHT_0'] = {
    'addr'            : 0x8010,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'HEIGHT' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'HEIGHT',
    ],
} # End of register: D_DATA_CUBE_HEIGHT_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_DATA_CUBE_HEIGHT_0')



# Register NVDLA_SDP_RDMA_D_DATA_CUBE_CHANNEL_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_DATA_CUBE_CHANNEL_0'] = {
    'addr'            : 0x8014,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'CHANNEL' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CHANNEL',
    ],
} # End of register: D_DATA_CUBE_CHANNEL_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_DATA_CUBE_CHANNEL_0')



# Register NVDLA_SDP_RDMA_D_SRC_BASE_ADDR_LOW_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_SRC_BASE_ADDR_LOW_0'] = {
    'addr'            : 0x8018,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'SRC_BASE_ADDR_LOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_BASE_ADDR_LOW',
    ],
} # End of register: D_SRC_BASE_ADDR_LOW_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_SRC_BASE_ADDR_LOW_0')



# Register NVDLA_SDP_RDMA_D_SRC_BASE_ADDR_HIGH_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_SRC_BASE_ADDR_HIGH_0'] = {
    'addr'            : 0x801c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'SRC_BASE_ADDR_HIGH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_BASE_ADDR_HIGH',
    ],
} # End of register: D_SRC_BASE_ADDR_HIGH_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_SRC_BASE_ADDR_HIGH_0')



# Register NVDLA_SDP_RDMA_D_SRC_LINE_STRIDE_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_SRC_LINE_STRIDE_0'] = {
    'addr'            : 0x8020,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'SRC_LINE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_LINE_STRIDE',
    ],
} # End of register: D_SRC_LINE_STRIDE_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_SRC_LINE_STRIDE_0')



# Register NVDLA_SDP_RDMA_D_SRC_SURFACE_STRIDE_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_SRC_SURFACE_STRIDE_0'] = {
    'addr'            : 0x8024,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'SRC_SURFACE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_SURFACE_STRIDE',
    ],
} # End of register: D_SRC_SURFACE_STRIDE_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_SRC_SURFACE_STRIDE_0')



# Register NVDLA_SDP_RDMA_D_BRDMA_CFG_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_BRDMA_CFG_0'] = {
    'addr'            : 0x8028,
    'size'            : 0x6,
    'reset_val'       : 0x1,
    'reset_mask'      : 0x3f,
    'sw_default_val'  : 0x1,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f,
    'write_mask'      : 0x3f,
    'BRDMA_DISABLE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x1,
        'sw_default'        : 0x1,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'BRDMA_DATA_USE' : {
        'lsb'               : 1,
        'msb'               : 2,
        'size'              : 2,
        'field'             : (0x3 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'MUL' : 0x0,
            'ALU' : 0x1,
            'BOTH' : 0x2,
        },
    },
    'BRDMA_DATA_SIZE' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'ONE_BYTE' : 0x0,
            'TWO_BYTE' : 0x1,
        },
    },
    'BRDMA_DATA_MODE' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'PER_KERNEL' : 0x0,
            'PER_ELEMENT' : 0x1,
        },
    },
    'BRDMA_RAM_TYPE' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'CV' : 0x0,
            'MC' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BRDMA_DISABLE',
        'BRDMA_DATA_USE',
        'BRDMA_DATA_SIZE',
        'BRDMA_DATA_MODE',
        'BRDMA_RAM_TYPE',
    ],
} # End of register: D_BRDMA_CFG_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_BRDMA_CFG_0')



# Register NVDLA_SDP_RDMA_D_BS_BASE_ADDR_LOW_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_BS_BASE_ADDR_LOW_0'] = {
    'addr'            : 0x802c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'BS_BASE_ADDR_LOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BS_BASE_ADDR_LOW',
    ],
} # End of register: D_BS_BASE_ADDR_LOW_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_BS_BASE_ADDR_LOW_0')



# Register NVDLA_SDP_RDMA_D_BS_BASE_ADDR_HIGH_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_BS_BASE_ADDR_HIGH_0'] = {
    'addr'            : 0x8030,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'BS_BASE_ADDR_HIGH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BS_BASE_ADDR_HIGH',
    ],
} # End of register: D_BS_BASE_ADDR_HIGH_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_BS_BASE_ADDR_HIGH_0')



# Register NVDLA_SDP_RDMA_D_BS_LINE_STRIDE_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_BS_LINE_STRIDE_0'] = {
    'addr'            : 0x8034,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'BS_LINE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BS_LINE_STRIDE',
    ],
} # End of register: D_BS_LINE_STRIDE_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_BS_LINE_STRIDE_0')



# Register NVDLA_SDP_RDMA_D_BS_SURFACE_STRIDE_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_BS_SURFACE_STRIDE_0'] = {
    'addr'            : 0x8038,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'BS_SURFACE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BS_SURFACE_STRIDE',
    ],
} # End of register: D_BS_SURFACE_STRIDE_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_BS_SURFACE_STRIDE_0')



# Register NVDLA_SDP_RDMA_D_BS_BATCH_STRIDE_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_BS_BATCH_STRIDE_0'] = {
    'addr'            : 0x803c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'BS_BATCH_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BS_BATCH_STRIDE',
    ],
} # End of register: D_BS_BATCH_STRIDE_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_BS_BATCH_STRIDE_0')



# Register NVDLA_SDP_RDMA_D_NRDMA_CFG_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_NRDMA_CFG_0'] = {
    'addr'            : 0x8040,
    'size'            : 0x6,
    'reset_val'       : 0x1,
    'reset_mask'      : 0x3f,
    'sw_default_val'  : 0x1,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f,
    'write_mask'      : 0x3f,
    'NRDMA_DISABLE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x1,
        'sw_default'        : 0x1,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'NRDMA_DATA_USE' : {
        'lsb'               : 1,
        'msb'               : 2,
        'size'              : 2,
        'field'             : (0x3 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'MUL' : 0x0,
            'ALU' : 0x1,
            'BOTH' : 0x2,
        },
    },
    'NRDMA_DATA_SIZE' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'ONE_BYTE' : 0x0,
            'TWO_BYTE' : 0x1,
        },
    },
    'NRDMA_DATA_MODE' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'PER_KERNEL' : 0x0,
            'PER_ELEMENT' : 0x1,
        },
    },
    'NRDMA_RAM_TYPE' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'CV' : 0x0,
            'MC' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'NRDMA_DISABLE',
        'NRDMA_DATA_USE',
        'NRDMA_DATA_SIZE',
        'NRDMA_DATA_MODE',
        'NRDMA_RAM_TYPE',
    ],
} # End of register: D_NRDMA_CFG_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_NRDMA_CFG_0')



# Register NVDLA_SDP_RDMA_D_BN_BASE_ADDR_LOW_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_BN_BASE_ADDR_LOW_0'] = {
    'addr'            : 0x8044,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'BN_BASE_ADDR_LOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BN_BASE_ADDR_LOW',
    ],
} # End of register: D_BN_BASE_ADDR_LOW_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_BN_BASE_ADDR_LOW_0')



# Register NVDLA_SDP_RDMA_D_BN_BASE_ADDR_HIGH_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_BN_BASE_ADDR_HIGH_0'] = {
    'addr'            : 0x8048,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'BN_BASE_ADDR_HIGH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BN_BASE_ADDR_HIGH',
    ],
} # End of register: D_BN_BASE_ADDR_HIGH_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_BN_BASE_ADDR_HIGH_0')



# Register NVDLA_SDP_RDMA_D_BN_LINE_STRIDE_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_BN_LINE_STRIDE_0'] = {
    'addr'            : 0x804c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'BN_LINE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BN_LINE_STRIDE',
    ],
} # End of register: D_BN_LINE_STRIDE_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_BN_LINE_STRIDE_0')



# Register NVDLA_SDP_RDMA_D_BN_SURFACE_STRIDE_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_BN_SURFACE_STRIDE_0'] = {
    'addr'            : 0x8050,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'BN_SURFACE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BN_SURFACE_STRIDE',
    ],
} # End of register: D_BN_SURFACE_STRIDE_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_BN_SURFACE_STRIDE_0')



# Register NVDLA_SDP_RDMA_D_BN_BATCH_STRIDE_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_BN_BATCH_STRIDE_0'] = {
    'addr'            : 0x8054,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'BN_BATCH_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BN_BATCH_STRIDE',
    ],
} # End of register: D_BN_BATCH_STRIDE_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_BN_BATCH_STRIDE_0')



# Register NVDLA_SDP_RDMA_D_ERDMA_CFG_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_ERDMA_CFG_0'] = {
    'addr'            : 0x8058,
    'size'            : 0x6,
    'reset_val'       : 0x1,
    'reset_mask'      : 0x3f,
    'sw_default_val'  : 0x1,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f,
    'write_mask'      : 0x3f,
    'ERDMA_DISABLE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x1,
        'sw_default'        : 0x1,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'ERDMA_DATA_USE' : {
        'lsb'               : 1,
        'msb'               : 2,
        'size'              : 2,
        'field'             : (0x3 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'MUL' : 0x0,
            'ALU' : 0x1,
            'BOTH' : 0x2,
        },
    },
    'ERDMA_DATA_SIZE' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'ONE_BYTE' : 0x0,
            'TWO_BYTE' : 0x1,
        },
    },
    'ERDMA_DATA_MODE' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'PER_KERNEL' : 0x0,
            'PER_ELEMENT' : 0x1,
        },
    },
    'ERDMA_RAM_TYPE' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'CV' : 0x0,
            'MC' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERDMA_DISABLE',
        'ERDMA_DATA_USE',
        'ERDMA_DATA_SIZE',
        'ERDMA_DATA_MODE',
        'ERDMA_RAM_TYPE',
    ],
} # End of register: D_ERDMA_CFG_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_ERDMA_CFG_0')



# Register NVDLA_SDP_RDMA_D_EW_BASE_ADDR_LOW_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_EW_BASE_ADDR_LOW_0'] = {
    'addr'            : 0x805c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'EW_BASE_ADDR_LOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EW_BASE_ADDR_LOW',
    ],
} # End of register: D_EW_BASE_ADDR_LOW_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_EW_BASE_ADDR_LOW_0')



# Register NVDLA_SDP_RDMA_D_EW_BASE_ADDR_HIGH_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_EW_BASE_ADDR_HIGH_0'] = {
    'addr'            : 0x8060,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'EW_BASE_ADDR_HIGH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EW_BASE_ADDR_HIGH',
    ],
} # End of register: D_EW_BASE_ADDR_HIGH_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_EW_BASE_ADDR_HIGH_0')



# Register NVDLA_SDP_RDMA_D_EW_LINE_STRIDE_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_EW_LINE_STRIDE_0'] = {
    'addr'            : 0x8064,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'EW_LINE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EW_LINE_STRIDE',
    ],
} # End of register: D_EW_LINE_STRIDE_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_EW_LINE_STRIDE_0')



# Register NVDLA_SDP_RDMA_D_EW_SURFACE_STRIDE_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_EW_SURFACE_STRIDE_0'] = {
    'addr'            : 0x8068,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'EW_SURFACE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EW_SURFACE_STRIDE',
    ],
} # End of register: D_EW_SURFACE_STRIDE_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_EW_SURFACE_STRIDE_0')



# Register NVDLA_SDP_RDMA_D_EW_BATCH_STRIDE_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_EW_BATCH_STRIDE_0'] = {
    'addr'            : 0x806c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'EW_BATCH_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EW_BATCH_STRIDE',
    ],
} # End of register: D_EW_BATCH_STRIDE_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_EW_BATCH_STRIDE_0')



# Register NVDLA_SDP_RDMA_D_FEATURE_MODE_CFG_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_FEATURE_MODE_CFG_0'] = {
    'addr'            : 0x8070,
    'size'            : 0xd,
    'reset_val'       : 0x14,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'FLYING_MODE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'OFF' : 0x0,
            'ON' : 0x1,
        },
    },
    'WINOGRAD' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'OFF' : 0x0,
            'ON' : 0x1,
        },
    },
    'IN_PRECISION' : {
        'lsb'               : 2,
        'msb'               : 3,
        'size'              : 2,
        'field'             : (0x3 << 2),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'INT8' : 0x0,
            'INT16' : 0x1,
            'FP16' : 0x2,
        },
    },
    'PROC_PRECISION' : {
        'lsb'               : 4,
        'msb'               : 5,
        'size'              : 2,
        'field'             : (0x3 << 4),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'INT8' : 0x0,
            'INT16' : 0x1,
            'FP16' : 0x2,
        },
    },
    'OUT_PRECISION' : {
        'lsb'               : 6,
        'msb'               : 7,
        'size'              : 2,
        'field'             : (0x3 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'INT8' : 0x0,
            'INT16' : 0x1,
            'FP16' : 0x2,
        },
    },
    'BATCH_NUMBER' : {
        'lsb'               : 8,
        'msb'               : 12,
        'size'              : 5,
        'field'             : (0x1f << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'FLYING_MODE',
        'WINOGRAD',
        'IN_PRECISION',
        'PROC_PRECISION',
        'OUT_PRECISION',
        'BATCH_NUMBER',
    ],
} # End of register: D_FEATURE_MODE_CFG_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_FEATURE_MODE_CFG_0')



# Register NVDLA_SDP_RDMA_D_SRC_DMA_CFG_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_SRC_DMA_CFG_0'] = {
    'addr'            : 0x8074,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'SRC_RAM_TYPE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'CV' : 0x0,
            'MC' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_RAM_TYPE',
    ],
} # End of register: D_SRC_DMA_CFG_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_SRC_DMA_CFG_0')



# Register NVDLA_SDP_RDMA_D_STATUS_NAN_INPUT_NUM_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_STATUS_NAN_INPUT_NUM_0'] = {
    'addr'            : 0x8078,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'STATUS_NAN_INPUT_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_NAN_INPUT_NUM',
    ],
} # End of register: D_STATUS_NAN_INPUT_NUM_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_STATUS_NAN_INPUT_NUM_0')



# Register NVDLA_SDP_RDMA_D_STATUS_INF_INPUT_NUM_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_STATUS_INF_INPUT_NUM_0'] = {
    'addr'            : 0x807c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'STATUS_INF_INPUT_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_INF_INPUT_NUM',
    ],
} # End of register: D_STATUS_INF_INPUT_NUM_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_STATUS_INF_INPUT_NUM_0')



# Register NVDLA_SDP_RDMA_D_PERF_ENABLE_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_PERF_ENABLE_0'] = {
    'addr'            : 0x8080,
    'size'            : 0x2,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3,
    'write_mask'      : 0x3,
    'PERF_DMA_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'PERF_NAN_INF_COUNT_EN' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PERF_DMA_EN',
        'PERF_NAN_INF_COUNT_EN',
    ],
} # End of register: D_PERF_ENABLE_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_PERF_ENABLE_0')



# Register NVDLA_SDP_RDMA_D_PERF_MRDMA_READ_STALL_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_PERF_MRDMA_READ_STALL_0'] = {
    'addr'            : 0x8084,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'MRDMA_STALL' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'MRDMA_STALL',
    ],
} # End of register: D_PERF_MRDMA_READ_STALL_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_PERF_MRDMA_READ_STALL_0')



# Register NVDLA_SDP_RDMA_D_PERF_BRDMA_READ_STALL_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_PERF_BRDMA_READ_STALL_0'] = {
    'addr'            : 0x8088,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'BRDMA_STALL' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BRDMA_STALL',
    ],
} # End of register: D_PERF_BRDMA_READ_STALL_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_PERF_BRDMA_READ_STALL_0')



# Register NVDLA_SDP_RDMA_D_PERF_NRDMA_READ_STALL_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_PERF_NRDMA_READ_STALL_0'] = {
    'addr'            : 0x808c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'NRDMA_STALL' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'NRDMA_STALL',
    ],
} # End of register: D_PERF_NRDMA_READ_STALL_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_PERF_NRDMA_READ_STALL_0')



# Register NVDLA_SDP_RDMA_D_PERF_ERDMA_READ_STALL_0
if 'NVDLA_SDP_RDMA' not in registers:
    registers['NVDLA_SDP_RDMA'] = {}
    registers['NVDLA_SDP_RDMA']['register_list']  = []

registers['NVDLA_SDP_RDMA']['D_PERF_ERDMA_READ_STALL_0'] = {
    'addr'            : 0x8090,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'ERDMA_STALL' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERDMA_STALL',
    ],
} # End of register: D_PERF_ERDMA_READ_STALL_0

registers['NVDLA_SDP_RDMA']['register_list'].append('D_PERF_ERDMA_READ_STALL_0')



# Register NVDLA_SDP_S_STATUS_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['S_STATUS_0'] = {
    'addr'            : 0x9000,
    'size'            : 0x12,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x30003,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x30003,
    'write_mask'      : 0x0,
    'STATUS_0' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    'STATUS_1' : {
        'lsb'               : 16,
        'msb'               : 17,
        'size'              : 2,
        'field'             : (0x3 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_0',
        'STATUS_1',
    ],
} # End of register: S_STATUS_0

registers['NVDLA_SDP']['register_list'].append('S_STATUS_0')



# Register NVDLA_SDP_S_POINTER_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['S_POINTER_0'] = {
    'addr'            : 0x9004,
    'size'            : 0x11,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x10001,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x10001,
    'write_mask'      : 0x1,
    'PRODUCER' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    'CONSUMER' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PRODUCER',
        'CONSUMER',
    ],
} # End of register: S_POINTER_0

registers['NVDLA_SDP']['register_list'].append('S_POINTER_0')



# Register NVDLA_SDP_S_LUT_ACCESS_CFG_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['S_LUT_ACCESS_CFG_0'] = {
    'addr'            : 0x9008,
    'size'            : 0x12,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x303ff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x303ff,
    'write_mask'      : 0x303ff,
    'LUT_ADDR' : {
        'lsb'               : 0,
        'msb'               : 9,
        'size'              : 10,
        'field'             : (0x3ff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwt',
        'enums' : {
        },
    },
    'LUT_TABLE_ID' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'LE' : 0x0,
            'LO' : 0x1,
        },
    },
    'LUT_ACCESS_TYPE' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'READ' : 0x0,
            'WRITE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_ADDR',
        'LUT_TABLE_ID',
        'LUT_ACCESS_TYPE',
    ],
} # End of register: S_LUT_ACCESS_CFG_0

registers['NVDLA_SDP']['register_list'].append('S_LUT_ACCESS_CFG_0')



# Register NVDLA_SDP_S_LUT_ACCESS_DATA_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['S_LUT_ACCESS_DATA_0'] = {
    'addr'            : 0x900c,
    'size'            : 0x10,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'LUT_DATA' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwto',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_DATA',
    ],
} # End of register: S_LUT_ACCESS_DATA_0

registers['NVDLA_SDP']['register_list'].append('S_LUT_ACCESS_DATA_0')



# Register NVDLA_SDP_S_LUT_CFG_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['S_LUT_CFG_0'] = {
    'addr'            : 0x9010,
    'size'            : 0x7,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x71,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x71,
    'write_mask'      : 0x71,
    'LUT_LE_FUNCTION' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'EXPONENT' : 0x0,
            'LINEAR' : 0x1,
        },
    },
    'LUT_UFLOW_PRIORITY' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'LE' : 0x0,
            'LO' : 0x1,
        },
    },
    'LUT_OFLOW_PRIORITY' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'LE' : 0x0,
            'LO' : 0x1,
        },
    },
    'LUT_HYBRID_PRIORITY' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'LE' : 0x0,
            'LO' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LE_FUNCTION',
        'LUT_UFLOW_PRIORITY',
        'LUT_OFLOW_PRIORITY',
        'LUT_HYBRID_PRIORITY',
    ],
} # End of register: S_LUT_CFG_0

registers['NVDLA_SDP']['register_list'].append('S_LUT_CFG_0')



# Register NVDLA_SDP_S_LUT_INFO_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['S_LUT_INFO_0'] = {
    'addr'            : 0x9014,
    'size'            : 0x18,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffff,
    'write_mask'      : 0xffffff,
    'LUT_LE_INDEX_OFFSET' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'LUT_LE_INDEX_SELECT' : {
        'lsb'               : 8,
        'msb'               : 15,
        'size'              : 8,
        'field'             : (0xff << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'LUT_LO_INDEX_SELECT' : {
        'lsb'               : 16,
        'msb'               : 23,
        'size'              : 8,
        'field'             : (0xff << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LE_INDEX_OFFSET',
        'LUT_LE_INDEX_SELECT',
        'LUT_LO_INDEX_SELECT',
    ],
} # End of register: S_LUT_INFO_0

registers['NVDLA_SDP']['register_list'].append('S_LUT_INFO_0')



# Register NVDLA_SDP_S_LUT_LE_START_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['S_LUT_LE_START_0'] = {
    'addr'            : 0x9018,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'LUT_LE_START' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LE_START',
    ],
} # End of register: S_LUT_LE_START_0

registers['NVDLA_SDP']['register_list'].append('S_LUT_LE_START_0')



# Register NVDLA_SDP_S_LUT_LE_END_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['S_LUT_LE_END_0'] = {
    'addr'            : 0x901c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'LUT_LE_END' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LE_END',
    ],
} # End of register: S_LUT_LE_END_0

registers['NVDLA_SDP']['register_list'].append('S_LUT_LE_END_0')



# Register NVDLA_SDP_S_LUT_LO_START_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['S_LUT_LO_START_0'] = {
    'addr'            : 0x9020,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'LUT_LO_START' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LO_START',
    ],
} # End of register: S_LUT_LO_START_0

registers['NVDLA_SDP']['register_list'].append('S_LUT_LO_START_0')



# Register NVDLA_SDP_S_LUT_LO_END_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['S_LUT_LO_END_0'] = {
    'addr'            : 0x9024,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'LUT_LO_END' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LO_END',
    ],
} # End of register: S_LUT_LO_END_0

registers['NVDLA_SDP']['register_list'].append('S_LUT_LO_END_0')



# Register NVDLA_SDP_S_LUT_LE_SLOPE_SCALE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['S_LUT_LE_SLOPE_SCALE_0'] = {
    'addr'            : 0x9028,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'LUT_LE_SLOPE_UFLOW_SCALE' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'LUT_LE_SLOPE_OFLOW_SCALE' : {
        'lsb'               : 16,
        'msb'               : 31,
        'size'              : 16,
        'field'             : (0xffff << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LE_SLOPE_UFLOW_SCALE',
        'LUT_LE_SLOPE_OFLOW_SCALE',
    ],
} # End of register: S_LUT_LE_SLOPE_SCALE_0

registers['NVDLA_SDP']['register_list'].append('S_LUT_LE_SLOPE_SCALE_0')



# Register NVDLA_SDP_S_LUT_LE_SLOPE_SHIFT_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['S_LUT_LE_SLOPE_SHIFT_0'] = {
    'addr'            : 0x902c,
    'size'            : 0xa,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3ff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3ff,
    'write_mask'      : 0x3ff,
    'LUT_LE_SLOPE_UFLOW_SHIFT' : {
        'lsb'               : 0,
        'msb'               : 4,
        'size'              : 5,
        'field'             : (0x1f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'LUT_LE_SLOPE_OFLOW_SHIFT' : {
        'lsb'               : 5,
        'msb'               : 9,
        'size'              : 5,
        'field'             : (0x1f << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LE_SLOPE_UFLOW_SHIFT',
        'LUT_LE_SLOPE_OFLOW_SHIFT',
    ],
} # End of register: S_LUT_LE_SLOPE_SHIFT_0

registers['NVDLA_SDP']['register_list'].append('S_LUT_LE_SLOPE_SHIFT_0')



# Register NVDLA_SDP_S_LUT_LO_SLOPE_SCALE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['S_LUT_LO_SLOPE_SCALE_0'] = {
    'addr'            : 0x9030,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'LUT_LO_SLOPE_UFLOW_SCALE' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'LUT_LO_SLOPE_OFLOW_SCALE' : {
        'lsb'               : 16,
        'msb'               : 31,
        'size'              : 16,
        'field'             : (0xffff << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LO_SLOPE_UFLOW_SCALE',
        'LUT_LO_SLOPE_OFLOW_SCALE',
    ],
} # End of register: S_LUT_LO_SLOPE_SCALE_0

registers['NVDLA_SDP']['register_list'].append('S_LUT_LO_SLOPE_SCALE_0')



# Register NVDLA_SDP_S_LUT_LO_SLOPE_SHIFT_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['S_LUT_LO_SLOPE_SHIFT_0'] = {
    'addr'            : 0x9034,
    'size'            : 0xa,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3ff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3ff,
    'write_mask'      : 0x3ff,
    'LUT_LO_SLOPE_UFLOW_SHIFT' : {
        'lsb'               : 0,
        'msb'               : 4,
        'size'              : 5,
        'field'             : (0x1f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'LUT_LO_SLOPE_OFLOW_SHIFT' : {
        'lsb'               : 5,
        'msb'               : 9,
        'size'              : 5,
        'field'             : (0x1f << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LO_SLOPE_UFLOW_SHIFT',
        'LUT_LO_SLOPE_OFLOW_SHIFT',
    ],
} # End of register: S_LUT_LO_SLOPE_SHIFT_0

registers['NVDLA_SDP']['register_list'].append('S_LUT_LO_SLOPE_SHIFT_0')



# Register NVDLA_SDP_D_OP_ENABLE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_OP_ENABLE_0'] = {
    'addr'            : 0x9038,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'OP_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwto',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'OP_EN',
    ],
} # End of register: D_OP_ENABLE_0

registers['NVDLA_SDP']['register_list'].append('D_OP_ENABLE_0')



# Register NVDLA_SDP_D_DATA_CUBE_WIDTH_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DATA_CUBE_WIDTH_0'] = {
    'addr'            : 0x903c,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'WIDTH' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WIDTH',
    ],
} # End of register: D_DATA_CUBE_WIDTH_0

registers['NVDLA_SDP']['register_list'].append('D_DATA_CUBE_WIDTH_0')



# Register NVDLA_SDP_D_DATA_CUBE_HEIGHT_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DATA_CUBE_HEIGHT_0'] = {
    'addr'            : 0x9040,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'HEIGHT' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'HEIGHT',
    ],
} # End of register: D_DATA_CUBE_HEIGHT_0

registers['NVDLA_SDP']['register_list'].append('D_DATA_CUBE_HEIGHT_0')



# Register NVDLA_SDP_D_DATA_CUBE_CHANNEL_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DATA_CUBE_CHANNEL_0'] = {
    'addr'            : 0x9044,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'CHANNEL' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CHANNEL',
    ],
} # End of register: D_DATA_CUBE_CHANNEL_0

registers['NVDLA_SDP']['register_list'].append('D_DATA_CUBE_CHANNEL_0')



# Register NVDLA_SDP_D_DST_BASE_ADDR_LOW_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DST_BASE_ADDR_LOW_0'] = {
    'addr'            : 0x9048,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DST_BASE_ADDR_LOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DST_BASE_ADDR_LOW',
    ],
} # End of register: D_DST_BASE_ADDR_LOW_0

registers['NVDLA_SDP']['register_list'].append('D_DST_BASE_ADDR_LOW_0')



# Register NVDLA_SDP_D_DST_BASE_ADDR_HIGH_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DST_BASE_ADDR_HIGH_0'] = {
    'addr'            : 0x904c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DST_BASE_ADDR_HIGH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DST_BASE_ADDR_HIGH',
    ],
} # End of register: D_DST_BASE_ADDR_HIGH_0

registers['NVDLA_SDP']['register_list'].append('D_DST_BASE_ADDR_HIGH_0')



# Register NVDLA_SDP_D_DST_LINE_STRIDE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DST_LINE_STRIDE_0'] = {
    'addr'            : 0x9050,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DST_LINE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DST_LINE_STRIDE',
    ],
} # End of register: D_DST_LINE_STRIDE_0

registers['NVDLA_SDP']['register_list'].append('D_DST_LINE_STRIDE_0')



# Register NVDLA_SDP_D_DST_SURFACE_STRIDE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DST_SURFACE_STRIDE_0'] = {
    'addr'            : 0x9054,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DST_SURFACE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DST_SURFACE_STRIDE',
    ],
} # End of register: D_DST_SURFACE_STRIDE_0

registers['NVDLA_SDP']['register_list'].append('D_DST_SURFACE_STRIDE_0')



# Register NVDLA_SDP_D_DP_BS_CFG_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_BS_CFG_0'] = {
    'addr'            : 0x9058,
    'size'            : 0x7,
    'reset_val'       : 0x73,
    'reset_mask'      : 0x7f,
    'sw_default_val'  : 0x53,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x7f,
    'write_mask'      : 0x7f,
    'BS_BYPASS' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x1,
        'sw_default'        : 0x1,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'BS_ALU_BYPASS' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x1,
        'sw_default'        : 0x1,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'BS_ALU_ALGO' : {
        'lsb'               : 2,
        'msb'               : 3,
        'size'              : 2,
        'field'             : (0x3 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'MAX' : 0x0,
            'MIN' : 0x1,
            'SUM' : 0x2,
        },
    },
    'BS_MUL_BYPASS' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x1,
        'sw_default'        : 0x1,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'BS_MUL_PRELU' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'BS_RELU_BYPASS' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x1,
        'sw_default'        : 0x1,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BS_BYPASS',
        'BS_ALU_BYPASS',
        'BS_ALU_ALGO',
        'BS_MUL_BYPASS',
        'BS_MUL_PRELU',
        'BS_RELU_BYPASS',
    ],
} # End of register: D_DP_BS_CFG_0

registers['NVDLA_SDP']['register_list'].append('D_DP_BS_CFG_0')



# Register NVDLA_SDP_D_DP_BS_ALU_CFG_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_BS_ALU_CFG_0'] = {
    'addr'            : 0x905c,
    'size'            : 0xe,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3f01,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f01,
    'write_mask'      : 0x3f01,
    'BS_ALU_SRC' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'REG' : 0x0,
            'MEM' : 0x1,
        },
    },
    'BS_ALU_SHIFT_VALUE' : {
        'lsb'               : 8,
        'msb'               : 13,
        'size'              : 6,
        'field'             : (0x3f << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BS_ALU_SRC',
        'BS_ALU_SHIFT_VALUE',
    ],
} # End of register: D_DP_BS_ALU_CFG_0

registers['NVDLA_SDP']['register_list'].append('D_DP_BS_ALU_CFG_0')



# Register NVDLA_SDP_D_DP_BS_ALU_SRC_VALUE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_BS_ALU_SRC_VALUE_0'] = {
    'addr'            : 0x9060,
    'size'            : 0x10,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'BS_ALU_OPERAND' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BS_ALU_OPERAND',
    ],
} # End of register: D_DP_BS_ALU_SRC_VALUE_0

registers['NVDLA_SDP']['register_list'].append('D_DP_BS_ALU_SRC_VALUE_0')



# Register NVDLA_SDP_D_DP_BS_MUL_CFG_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_BS_MUL_CFG_0'] = {
    'addr'            : 0x9064,
    'size'            : 0x10,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xff01,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xff01,
    'write_mask'      : 0xff01,
    'BS_MUL_SRC' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'REG' : 0x0,
            'MEM' : 0x1,
        },
    },
    'BS_MUL_SHIFT_VALUE' : {
        'lsb'               : 8,
        'msb'               : 15,
        'size'              : 8,
        'field'             : (0xff << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BS_MUL_SRC',
        'BS_MUL_SHIFT_VALUE',
    ],
} # End of register: D_DP_BS_MUL_CFG_0

registers['NVDLA_SDP']['register_list'].append('D_DP_BS_MUL_CFG_0')



# Register NVDLA_SDP_D_DP_BS_MUL_SRC_VALUE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_BS_MUL_SRC_VALUE_0'] = {
    'addr'            : 0x9068,
    'size'            : 0x10,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'BS_MUL_OPERAND' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BS_MUL_OPERAND',
    ],
} # End of register: D_DP_BS_MUL_SRC_VALUE_0

registers['NVDLA_SDP']['register_list'].append('D_DP_BS_MUL_SRC_VALUE_0')



# Register NVDLA_SDP_D_DP_BN_CFG_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_BN_CFG_0'] = {
    'addr'            : 0x906c,
    'size'            : 0x7,
    'reset_val'       : 0x53,
    'reset_mask'      : 0x7f,
    'sw_default_val'  : 0x53,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x7f,
    'write_mask'      : 0x7f,
    'BN_BYPASS' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x1,
        'sw_default'        : 0x1,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'BN_ALU_BYPASS' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x1,
        'sw_default'        : 0x1,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'BN_ALU_ALGO' : {
        'lsb'               : 2,
        'msb'               : 3,
        'size'              : 2,
        'field'             : (0x3 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'MAX' : 0x0,
            'MIN' : 0x1,
            'SUM' : 0x2,
        },
    },
    'BN_MUL_BYPASS' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x1,
        'sw_default'        : 0x1,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'BN_MUL_PRELU' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'BN_RELU_BYPASS' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x1,
        'sw_default'        : 0x1,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BN_BYPASS',
        'BN_ALU_BYPASS',
        'BN_ALU_ALGO',
        'BN_MUL_BYPASS',
        'BN_MUL_PRELU',
        'BN_RELU_BYPASS',
    ],
} # End of register: D_DP_BN_CFG_0

registers['NVDLA_SDP']['register_list'].append('D_DP_BN_CFG_0')



# Register NVDLA_SDP_D_DP_BN_ALU_CFG_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_BN_ALU_CFG_0'] = {
    'addr'            : 0x9070,
    'size'            : 0xe,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3f01,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f01,
    'write_mask'      : 0x3f01,
    'BN_ALU_SRC' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'REG' : 0x0,
            'MEM' : 0x1,
        },
    },
    'BN_ALU_SHIFT_VALUE' : {
        'lsb'               : 8,
        'msb'               : 13,
        'size'              : 6,
        'field'             : (0x3f << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BN_ALU_SRC',
        'BN_ALU_SHIFT_VALUE',
    ],
} # End of register: D_DP_BN_ALU_CFG_0

registers['NVDLA_SDP']['register_list'].append('D_DP_BN_ALU_CFG_0')



# Register NVDLA_SDP_D_DP_BN_ALU_SRC_VALUE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_BN_ALU_SRC_VALUE_0'] = {
    'addr'            : 0x9074,
    'size'            : 0x10,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'BN_ALU_OPERAND' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BN_ALU_OPERAND',
    ],
} # End of register: D_DP_BN_ALU_SRC_VALUE_0

registers['NVDLA_SDP']['register_list'].append('D_DP_BN_ALU_SRC_VALUE_0')



# Register NVDLA_SDP_D_DP_BN_MUL_CFG_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_BN_MUL_CFG_0'] = {
    'addr'            : 0x9078,
    'size'            : 0x10,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xff01,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xff01,
    'write_mask'      : 0xff01,
    'BN_MUL_SRC' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'REG' : 0x0,
            'MEM' : 0x1,
        },
    },
    'BN_MUL_SHIFT_VALUE' : {
        'lsb'               : 8,
        'msb'               : 15,
        'size'              : 8,
        'field'             : (0xff << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BN_MUL_SRC',
        'BN_MUL_SHIFT_VALUE',
    ],
} # End of register: D_DP_BN_MUL_CFG_0

registers['NVDLA_SDP']['register_list'].append('D_DP_BN_MUL_CFG_0')



# Register NVDLA_SDP_D_DP_BN_MUL_SRC_VALUE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_BN_MUL_SRC_VALUE_0'] = {
    'addr'            : 0x907c,
    'size'            : 0x10,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'BN_MUL_OPERAND' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'BN_MUL_OPERAND',
    ],
} # End of register: D_DP_BN_MUL_SRC_VALUE_0

registers['NVDLA_SDP']['register_list'].append('D_DP_BN_MUL_SRC_VALUE_0')



# Register NVDLA_SDP_D_DP_EW_CFG_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_EW_CFG_0'] = {
    'addr'            : 0x9080,
    'size'            : 0x7,
    'reset_val'       : 0x53,
    'reset_mask'      : 0x7f,
    'sw_default_val'  : 0x53,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x7f,
    'write_mask'      : 0x7f,
    'EW_BYPASS' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x1,
        'sw_default'        : 0x1,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'EW_ALU_BYPASS' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x1,
        'sw_default'        : 0x1,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'EW_ALU_ALGO' : {
        'lsb'               : 2,
        'msb'               : 3,
        'size'              : 2,
        'field'             : (0x3 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'MAX' : 0x0,
            'MIN' : 0x1,
            'SUM' : 0x2,
            'EQL' : 0x3,
        },
    },
    'EW_MUL_BYPASS' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x1,
        'sw_default'        : 0x1,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'EW_MUL_PRELU' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'EW_LUT_BYPASS' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x1,
        'sw_default'        : 0x1,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EW_BYPASS',
        'EW_ALU_BYPASS',
        'EW_ALU_ALGO',
        'EW_MUL_BYPASS',
        'EW_MUL_PRELU',
        'EW_LUT_BYPASS',
    ],
} # End of register: D_DP_EW_CFG_0

registers['NVDLA_SDP']['register_list'].append('D_DP_EW_CFG_0')



# Register NVDLA_SDP_D_DP_EW_ALU_CFG_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_EW_ALU_CFG_0'] = {
    'addr'            : 0x9084,
    'size'            : 0x2,
    'reset_val'       : 0x2,
    'reset_mask'      : 0x3,
    'sw_default_val'  : 0x2,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3,
    'write_mask'      : 0x3,
    'EW_ALU_SRC' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'REG' : 0x0,
            'MEM' : 0x1,
        },
    },
    'EW_ALU_CVT_BYPASS' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x1,
        'sw_default'        : 0x1,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EW_ALU_SRC',
        'EW_ALU_CVT_BYPASS',
    ],
} # End of register: D_DP_EW_ALU_CFG_0

registers['NVDLA_SDP']['register_list'].append('D_DP_EW_ALU_CFG_0')



# Register NVDLA_SDP_D_DP_EW_ALU_SRC_VALUE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_EW_ALU_SRC_VALUE_0'] = {
    'addr'            : 0x9088,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'EW_ALU_OPERAND' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EW_ALU_OPERAND',
    ],
} # End of register: D_DP_EW_ALU_SRC_VALUE_0

registers['NVDLA_SDP']['register_list'].append('D_DP_EW_ALU_SRC_VALUE_0')



# Register NVDLA_SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_EW_ALU_CVT_OFFSET_VALUE_0'] = {
    'addr'            : 0x908c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'EW_ALU_CVT_OFFSET' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EW_ALU_CVT_OFFSET',
    ],
} # End of register: D_DP_EW_ALU_CVT_OFFSET_VALUE_0

registers['NVDLA_SDP']['register_list'].append('D_DP_EW_ALU_CVT_OFFSET_VALUE_0')



# Register NVDLA_SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_EW_ALU_CVT_SCALE_VALUE_0'] = {
    'addr'            : 0x9090,
    'size'            : 0x10,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'EW_ALU_CVT_SCALE' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EW_ALU_CVT_SCALE',
    ],
} # End of register: D_DP_EW_ALU_CVT_SCALE_VALUE_0

registers['NVDLA_SDP']['register_list'].append('D_DP_EW_ALU_CVT_SCALE_VALUE_0')



# Register NVDLA_SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0'] = {
    'addr'            : 0x9094,
    'size'            : 0x6,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f,
    'write_mask'      : 0x3f,
    'EW_ALU_CVT_TRUNCATE' : {
        'lsb'               : 0,
        'msb'               : 5,
        'size'              : 6,
        'field'             : (0x3f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EW_ALU_CVT_TRUNCATE',
    ],
} # End of register: D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0

registers['NVDLA_SDP']['register_list'].append('D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0')



# Register NVDLA_SDP_D_DP_EW_MUL_CFG_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_EW_MUL_CFG_0'] = {
    'addr'            : 0x9098,
    'size'            : 0x2,
    'reset_val'       : 0x2,
    'reset_mask'      : 0x3,
    'sw_default_val'  : 0x2,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3,
    'write_mask'      : 0x3,
    'EW_MUL_SRC' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'REG' : 0x0,
            'MEM' : 0x1,
        },
    },
    'EW_MUL_CVT_BYPASS' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x1,
        'sw_default'        : 0x1,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EW_MUL_SRC',
        'EW_MUL_CVT_BYPASS',
    ],
} # End of register: D_DP_EW_MUL_CFG_0

registers['NVDLA_SDP']['register_list'].append('D_DP_EW_MUL_CFG_0')



# Register NVDLA_SDP_D_DP_EW_MUL_SRC_VALUE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_EW_MUL_SRC_VALUE_0'] = {
    'addr'            : 0x909c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'EW_MUL_OPERAND' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EW_MUL_OPERAND',
    ],
} # End of register: D_DP_EW_MUL_SRC_VALUE_0

registers['NVDLA_SDP']['register_list'].append('D_DP_EW_MUL_SRC_VALUE_0')



# Register NVDLA_SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_EW_MUL_CVT_OFFSET_VALUE_0'] = {
    'addr'            : 0x90a0,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'EW_MUL_CVT_OFFSET' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EW_MUL_CVT_OFFSET',
    ],
} # End of register: D_DP_EW_MUL_CVT_OFFSET_VALUE_0

registers['NVDLA_SDP']['register_list'].append('D_DP_EW_MUL_CVT_OFFSET_VALUE_0')



# Register NVDLA_SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_EW_MUL_CVT_SCALE_VALUE_0'] = {
    'addr'            : 0x90a4,
    'size'            : 0x10,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'EW_MUL_CVT_SCALE' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EW_MUL_CVT_SCALE',
    ],
} # End of register: D_DP_EW_MUL_CVT_SCALE_VALUE_0

registers['NVDLA_SDP']['register_list'].append('D_DP_EW_MUL_CVT_SCALE_VALUE_0')



# Register NVDLA_SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0'] = {
    'addr'            : 0x90a8,
    'size'            : 0x6,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f,
    'write_mask'      : 0x3f,
    'EW_MUL_CVT_TRUNCATE' : {
        'lsb'               : 0,
        'msb'               : 5,
        'size'              : 6,
        'field'             : (0x3f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EW_MUL_CVT_TRUNCATE',
    ],
} # End of register: D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0

registers['NVDLA_SDP']['register_list'].append('D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0')



# Register NVDLA_SDP_D_DP_EW_TRUNCATE_VALUE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DP_EW_TRUNCATE_VALUE_0'] = {
    'addr'            : 0x90ac,
    'size'            : 0xa,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3ff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3ff,
    'write_mask'      : 0x3ff,
    'EW_TRUNCATE' : {
        'lsb'               : 0,
        'msb'               : 9,
        'size'              : 10,
        'field'             : (0x3ff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EW_TRUNCATE',
    ],
} # End of register: D_DP_EW_TRUNCATE_VALUE_0

registers['NVDLA_SDP']['register_list'].append('D_DP_EW_TRUNCATE_VALUE_0')



# Register NVDLA_SDP_D_FEATURE_MODE_CFG_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_FEATURE_MODE_CFG_0'] = {
    'addr'            : 0x90b0,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1f0f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1f0f,
    'write_mask'      : 0x1f0f,
    'FLYING_MODE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'OFF' : 0x0,
            'ON' : 0x1,
        },
    },
    'OUTPUT_DST' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'MEM' : 0x0,
            'PDP' : 0x1,
        },
    },
    'WINOGRAD' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'OFF' : 0x0,
            'ON' : 0x1,
        },
    },
    'NAN_TO_ZERO' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'BATCH_NUMBER' : {
        'lsb'               : 8,
        'msb'               : 12,
        'size'              : 5,
        'field'             : (0x1f << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'FLYING_MODE',
        'OUTPUT_DST',
        'WINOGRAD',
        'NAN_TO_ZERO',
        'BATCH_NUMBER',
    ],
} # End of register: D_FEATURE_MODE_CFG_0

registers['NVDLA_SDP']['register_list'].append('D_FEATURE_MODE_CFG_0')



# Register NVDLA_SDP_D_DST_DMA_CFG_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DST_DMA_CFG_0'] = {
    'addr'            : 0x90b4,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'DST_RAM_TYPE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'CV' : 0x0,
            'MC' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DST_RAM_TYPE',
    ],
} # End of register: D_DST_DMA_CFG_0

registers['NVDLA_SDP']['register_list'].append('D_DST_DMA_CFG_0')



# Register NVDLA_SDP_D_DST_BATCH_STRIDE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DST_BATCH_STRIDE_0'] = {
    'addr'            : 0x90b8,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DST_BATCH_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DST_BATCH_STRIDE',
    ],
} # End of register: D_DST_BATCH_STRIDE_0

registers['NVDLA_SDP']['register_list'].append('D_DST_BATCH_STRIDE_0')



# Register NVDLA_SDP_D_DATA_FORMAT_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_DATA_FORMAT_0'] = {
    'addr'            : 0x90bc,
    'size'            : 0x4,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xf,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xf,
    'write_mask'      : 0xf,
    'PROC_PRECISION' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'INT8' : 0x0,
            'INT16' : 0x1,
            'FP16' : 0x2,
        },
    },
    'OUT_PRECISION' : {
        'lsb'               : 2,
        'msb'               : 3,
        'size'              : 2,
        'field'             : (0x3 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'INT8' : 0x0,
            'INT16' : 0x1,
            'FP16' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PROC_PRECISION',
        'OUT_PRECISION',
    ],
} # End of register: D_DATA_FORMAT_0

registers['NVDLA_SDP']['register_list'].append('D_DATA_FORMAT_0')



# Register NVDLA_SDP_D_CVT_OFFSET_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_CVT_OFFSET_0'] = {
    'addr'            : 0x90c0,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'CVT_OFFSET' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CVT_OFFSET',
    ],
} # End of register: D_CVT_OFFSET_0

registers['NVDLA_SDP']['register_list'].append('D_CVT_OFFSET_0')



# Register NVDLA_SDP_D_CVT_SCALE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_CVT_SCALE_0'] = {
    'addr'            : 0x90c4,
    'size'            : 0x10,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'CVT_SCALE' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CVT_SCALE',
    ],
} # End of register: D_CVT_SCALE_0

registers['NVDLA_SDP']['register_list'].append('D_CVT_SCALE_0')



# Register NVDLA_SDP_D_CVT_SHIFT_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_CVT_SHIFT_0'] = {
    'addr'            : 0x90c8,
    'size'            : 0x6,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f,
    'write_mask'      : 0x3f,
    'CVT_SHIFT' : {
        'lsb'               : 0,
        'msb'               : 5,
        'size'              : 6,
        'field'             : (0x3f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CVT_SHIFT',
    ],
} # End of register: D_CVT_SHIFT_0

registers['NVDLA_SDP']['register_list'].append('D_CVT_SHIFT_0')



# Register NVDLA_SDP_D_STATUS_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_STATUS_0'] = {
    'addr'            : 0x90cc,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x0,
    'STATUS_UNEQUAL' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_UNEQUAL',
    ],
} # End of register: D_STATUS_0

registers['NVDLA_SDP']['register_list'].append('D_STATUS_0')



# Register NVDLA_SDP_D_STATUS_NAN_INPUT_NUM_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_STATUS_NAN_INPUT_NUM_0'] = {
    'addr'            : 0x90d0,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'STATUS_NAN_INPUT_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_NAN_INPUT_NUM',
    ],
} # End of register: D_STATUS_NAN_INPUT_NUM_0

registers['NVDLA_SDP']['register_list'].append('D_STATUS_NAN_INPUT_NUM_0')



# Register NVDLA_SDP_D_STATUS_INF_INPUT_NUM_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_STATUS_INF_INPUT_NUM_0'] = {
    'addr'            : 0x90d4,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'STATUS_INF_INPUT_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_INF_INPUT_NUM',
    ],
} # End of register: D_STATUS_INF_INPUT_NUM_0

registers['NVDLA_SDP']['register_list'].append('D_STATUS_INF_INPUT_NUM_0')



# Register NVDLA_SDP_D_STATUS_NAN_OUTPUT_NUM_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_STATUS_NAN_OUTPUT_NUM_0'] = {
    'addr'            : 0x90d8,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'STATUS_NAN_OUTPUT_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_NAN_OUTPUT_NUM',
    ],
} # End of register: D_STATUS_NAN_OUTPUT_NUM_0

registers['NVDLA_SDP']['register_list'].append('D_STATUS_NAN_OUTPUT_NUM_0')



# Register NVDLA_SDP_D_PERF_ENABLE_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_PERF_ENABLE_0'] = {
    'addr'            : 0x90dc,
    'size'            : 0x4,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xf,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xf,
    'write_mask'      : 0xf,
    'PERF_DMA_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'PERF_LUT_EN' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'PERF_SAT_EN' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'PERF_NAN_INF_COUNT_EN' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PERF_DMA_EN',
        'PERF_LUT_EN',
        'PERF_SAT_EN',
        'PERF_NAN_INF_COUNT_EN',
    ],
} # End of register: D_PERF_ENABLE_0

registers['NVDLA_SDP']['register_list'].append('D_PERF_ENABLE_0')



# Register NVDLA_SDP_D_PERF_WDMA_WRITE_STALL_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_PERF_WDMA_WRITE_STALL_0'] = {
    'addr'            : 0x90e0,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'WDMA_STALL' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WDMA_STALL',
    ],
} # End of register: D_PERF_WDMA_WRITE_STALL_0

registers['NVDLA_SDP']['register_list'].append('D_PERF_WDMA_WRITE_STALL_0')



# Register NVDLA_SDP_D_PERF_LUT_UFLOW_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_PERF_LUT_UFLOW_0'] = {
    'addr'            : 0x90e4,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'LUT_UFLOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_UFLOW',
    ],
} # End of register: D_PERF_LUT_UFLOW_0

registers['NVDLA_SDP']['register_list'].append('D_PERF_LUT_UFLOW_0')



# Register NVDLA_SDP_D_PERF_LUT_OFLOW_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_PERF_LUT_OFLOW_0'] = {
    'addr'            : 0x90e8,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'LUT_OFLOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_OFLOW',
    ],
} # End of register: D_PERF_LUT_OFLOW_0

registers['NVDLA_SDP']['register_list'].append('D_PERF_LUT_OFLOW_0')



# Register NVDLA_SDP_D_PERF_OUT_SATURATION_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_PERF_OUT_SATURATION_0'] = {
    'addr'            : 0x90ec,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'OUT_SATURATION' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'OUT_SATURATION',
    ],
} # End of register: D_PERF_OUT_SATURATION_0

registers['NVDLA_SDP']['register_list'].append('D_PERF_OUT_SATURATION_0')



# Register NVDLA_SDP_D_PERF_LUT_HYBRID_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_PERF_LUT_HYBRID_0'] = {
    'addr'            : 0x90f0,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'LUT_HYBRID' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_HYBRID',
    ],
} # End of register: D_PERF_LUT_HYBRID_0

registers['NVDLA_SDP']['register_list'].append('D_PERF_LUT_HYBRID_0')



# Register NVDLA_SDP_D_PERF_LUT_LE_HIT_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_PERF_LUT_LE_HIT_0'] = {
    'addr'            : 0x90f4,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'LUT_LE_HIT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LE_HIT',
    ],
} # End of register: D_PERF_LUT_LE_HIT_0

registers['NVDLA_SDP']['register_list'].append('D_PERF_LUT_LE_HIT_0')



# Register NVDLA_SDP_D_PERF_LUT_LO_HIT_0
if 'NVDLA_SDP' not in registers:
    registers['NVDLA_SDP'] = {}
    registers['NVDLA_SDP']['register_list']  = []

registers['NVDLA_SDP']['D_PERF_LUT_LO_HIT_0'] = {
    'addr'            : 0x90f8,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'LUT_LO_HIT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LO_HIT',
    ],
} # End of register: D_PERF_LUT_LO_HIT_0

registers['NVDLA_SDP']['register_list'].append('D_PERF_LUT_LO_HIT_0')



# Register NVDLA_PDP_RDMA_S_STATUS_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['S_STATUS_0'] = {
    'addr'            : 0xa000,
    'size'            : 0x12,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x30003,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x30003,
    'write_mask'      : 0x0,
    'STATUS_0' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    'STATUS_1' : {
        'lsb'               : 16,
        'msb'               : 17,
        'size'              : 2,
        'field'             : (0x3 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_0',
        'STATUS_1',
    ],
} # End of register: S_STATUS_0

registers['NVDLA_PDP_RDMA']['register_list'].append('S_STATUS_0')



# Register NVDLA_PDP_RDMA_S_POINTER_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['S_POINTER_0'] = {
    'addr'            : 0xa004,
    'size'            : 0x11,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x10001,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x10001,
    'write_mask'      : 0x1,
    'PRODUCER' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    'CONSUMER' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PRODUCER',
        'CONSUMER',
    ],
} # End of register: S_POINTER_0

registers['NVDLA_PDP_RDMA']['register_list'].append('S_POINTER_0')



# Register NVDLA_PDP_RDMA_D_OP_ENABLE_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_OP_ENABLE_0'] = {
    'addr'            : 0xa008,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'OP_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwto',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'OP_EN',
    ],
} # End of register: D_OP_ENABLE_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_OP_ENABLE_0')



# Register NVDLA_PDP_RDMA_D_DATA_CUBE_IN_WIDTH_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_DATA_CUBE_IN_WIDTH_0'] = {
    'addr'            : 0xa00c,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'CUBE_IN_WIDTH' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CUBE_IN_WIDTH',
    ],
} # End of register: D_DATA_CUBE_IN_WIDTH_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_DATA_CUBE_IN_WIDTH_0')



# Register NVDLA_PDP_RDMA_D_DATA_CUBE_IN_HEIGHT_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_DATA_CUBE_IN_HEIGHT_0'] = {
    'addr'            : 0xa010,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'CUBE_IN_HEIGHT' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CUBE_IN_HEIGHT',
    ],
} # End of register: D_DATA_CUBE_IN_HEIGHT_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_DATA_CUBE_IN_HEIGHT_0')



# Register NVDLA_PDP_RDMA_D_DATA_CUBE_IN_CHANNEL_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_DATA_CUBE_IN_CHANNEL_0'] = {
    'addr'            : 0xa014,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'CUBE_IN_CHANNEL' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CUBE_IN_CHANNEL',
    ],
} # End of register: D_DATA_CUBE_IN_CHANNEL_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_DATA_CUBE_IN_CHANNEL_0')



# Register NVDLA_PDP_RDMA_D_FLYING_MODE_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_FLYING_MODE_0'] = {
    'addr'            : 0xa018,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'FLYING_MODE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'ON_FLYING' : 0x0,
            'OFF_FLYING' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'FLYING_MODE',
    ],
} # End of register: D_FLYING_MODE_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_FLYING_MODE_0')



# Register NVDLA_PDP_RDMA_D_SRC_BASE_ADDR_LOW_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_SRC_BASE_ADDR_LOW_0'] = {
    'addr'            : 0xa01c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'SRC_BASE_ADDR_LOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_BASE_ADDR_LOW',
    ],
} # End of register: D_SRC_BASE_ADDR_LOW_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_SRC_BASE_ADDR_LOW_0')



# Register NVDLA_PDP_RDMA_D_SRC_BASE_ADDR_HIGH_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_SRC_BASE_ADDR_HIGH_0'] = {
    'addr'            : 0xa020,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'SRC_BASE_ADDR_HIGH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_BASE_ADDR_HIGH',
    ],
} # End of register: D_SRC_BASE_ADDR_HIGH_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_SRC_BASE_ADDR_HIGH_0')



# Register NVDLA_PDP_RDMA_D_SRC_LINE_STRIDE_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_SRC_LINE_STRIDE_0'] = {
    'addr'            : 0xa024,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'SRC_LINE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_LINE_STRIDE',
    ],
} # End of register: D_SRC_LINE_STRIDE_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_SRC_LINE_STRIDE_0')



# Register NVDLA_PDP_RDMA_D_SRC_SURFACE_STRIDE_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_SRC_SURFACE_STRIDE_0'] = {
    'addr'            : 0xa028,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'SRC_SURFACE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_SURFACE_STRIDE',
    ],
} # End of register: D_SRC_SURFACE_STRIDE_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_SRC_SURFACE_STRIDE_0')



# Register NVDLA_PDP_RDMA_D_SRC_RAM_CFG_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_SRC_RAM_CFG_0'] = {
    'addr'            : 0xa02c,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'SRC_RAM_TYPE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'CV' : 0x0,
            'MC' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_RAM_TYPE',
    ],
} # End of register: D_SRC_RAM_CFG_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_SRC_RAM_CFG_0')



# Register NVDLA_PDP_RDMA_D_DATA_FORMAT_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_DATA_FORMAT_0'] = {
    'addr'            : 0xa030,
    'size'            : 0x2,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3,
    'write_mask'      : 0x3,
    'INPUT_DATA' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'INT8' : 0x0,
            'INT16' : 0x1,
            'FP16' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'INPUT_DATA',
    ],
} # End of register: D_DATA_FORMAT_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_DATA_FORMAT_0')



# Register NVDLA_PDP_RDMA_D_OPERATION_MODE_CFG_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_OPERATION_MODE_CFG_0'] = {
    'addr'            : 0xa034,
    'size'            : 0x8,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xff,
    'write_mask'      : 0xff,
    'SPLIT_NUM' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SPLIT_NUM',
    ],
} # End of register: D_OPERATION_MODE_CFG_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_OPERATION_MODE_CFG_0')



# Register NVDLA_PDP_RDMA_D_POOLING_KERNEL_CFG_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_POOLING_KERNEL_CFG_0'] = {
    'addr'            : 0xa038,
    'size'            : 0x8,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xff,
    'write_mask'      : 0xff,
    'KERNEL_WIDTH' : {
        'lsb'               : 0,
        'msb'               : 3,
        'size'              : 4,
        'field'             : (0xf << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'KERNEL_WIDTH_1' : 0x0,
            'KERNEL_WIDTH_2' : 0x1,
            'KERNEL_WIDTH_3' : 0x2,
            'KERNEL_WIDTH_4' : 0x3,
            'KERNEL_WIDTH_5' : 0x4,
            'KERNEL_WIDTH_6' : 0x5,
            'KERNEL_WIDTH_7' : 0x6,
            'KERNEL_WIDTH_8' : 0x7,
        },
    },
    'KERNEL_STRIDE_WIDTH' : {
        'lsb'               : 4,
        'msb'               : 7,
        'size'              : 4,
        'field'             : (0xf << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'KERNEL_WIDTH',
        'KERNEL_STRIDE_WIDTH',
    ],
} # End of register: D_POOLING_KERNEL_CFG_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_POOLING_KERNEL_CFG_0')



# Register NVDLA_PDP_RDMA_D_POOLING_PADDING_CFG_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_POOLING_PADDING_CFG_0'] = {
    'addr'            : 0xa03c,
    'size'            : 0x4,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xf,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xf,
    'write_mask'      : 0xf,
    'PAD_WIDTH' : {
        'lsb'               : 0,
        'msb'               : 3,
        'size'              : 4,
        'field'             : (0xf << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PAD_WIDTH',
    ],
} # End of register: D_POOLING_PADDING_CFG_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_POOLING_PADDING_CFG_0')



# Register NVDLA_PDP_RDMA_D_PARTIAL_WIDTH_IN_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_PARTIAL_WIDTH_IN_0'] = {
    'addr'            : 0xa040,
    'size'            : 0x1e,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3fffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3fffffff,
    'write_mask'      : 0x3fffffff,
    'PARTIAL_WIDTH_IN_FIRST' : {
        'lsb'               : 0,
        'msb'               : 9,
        'size'              : 10,
        'field'             : (0x3ff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'PARTIAL_WIDTH_IN_LAST' : {
        'lsb'               : 10,
        'msb'               : 19,
        'size'              : 10,
        'field'             : (0x3ff << 10),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'PARTIAL_WIDTH_IN_MID' : {
        'lsb'               : 20,
        'msb'               : 29,
        'size'              : 10,
        'field'             : (0x3ff << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PARTIAL_WIDTH_IN_FIRST',
        'PARTIAL_WIDTH_IN_LAST',
        'PARTIAL_WIDTH_IN_MID',
    ],
} # End of register: D_PARTIAL_WIDTH_IN_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_PARTIAL_WIDTH_IN_0')



# Register NVDLA_PDP_RDMA_D_PERF_ENABLE_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_PERF_ENABLE_0'] = {
    'addr'            : 0xa044,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'DMA_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DMA_EN',
    ],
} # End of register: D_PERF_ENABLE_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_PERF_ENABLE_0')



# Register NVDLA_PDP_RDMA_D_PERF_READ_STALL_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_PERF_READ_STALL_0'] = {
    'addr'            : 0xa048,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PERF_READ_STALL' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PERF_READ_STALL',
    ],
} # End of register: D_PERF_READ_STALL_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_PERF_READ_STALL_0')



# Register NVDLA_PDP_RDMA_D_CYA_0
if 'NVDLA_PDP_RDMA' not in registers:
    registers['NVDLA_PDP_RDMA'] = {}
    registers['NVDLA_PDP_RDMA']['register_list']  = []

registers['NVDLA_PDP_RDMA']['D_CYA_0'] = {
    'addr'            : 0xa04c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'CYA' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CYA',
    ],
} # End of register: D_CYA_0

registers['NVDLA_PDP_RDMA']['register_list'].append('D_CYA_0')



# Register NVDLA_PDP_S_STATUS_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['S_STATUS_0'] = {
    'addr'            : 0xb000,
    'size'            : 0x12,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x30003,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x30003,
    'write_mask'      : 0x0,
    'STATUS_0' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    'STATUS_1' : {
        'lsb'               : 16,
        'msb'               : 17,
        'size'              : 2,
        'field'             : (0x3 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_0',
        'STATUS_1',
    ],
} # End of register: S_STATUS_0

registers['NVDLA_PDP']['register_list'].append('S_STATUS_0')



# Register NVDLA_PDP_S_POINTER_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['S_POINTER_0'] = {
    'addr'            : 0xb004,
    'size'            : 0x11,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x10001,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x10001,
    'write_mask'      : 0x1,
    'PRODUCER' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    'CONSUMER' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PRODUCER',
        'CONSUMER',
    ],
} # End of register: S_POINTER_0

registers['NVDLA_PDP']['register_list'].append('S_POINTER_0')



# Register NVDLA_PDP_D_OP_ENABLE_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_OP_ENABLE_0'] = {
    'addr'            : 0xb008,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'OP_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwto',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'OP_EN',
    ],
} # End of register: D_OP_ENABLE_0

registers['NVDLA_PDP']['register_list'].append('D_OP_ENABLE_0')



# Register NVDLA_PDP_D_DATA_CUBE_IN_WIDTH_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_DATA_CUBE_IN_WIDTH_0'] = {
    'addr'            : 0xb00c,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'CUBE_IN_WIDTH' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CUBE_IN_WIDTH',
    ],
} # End of register: D_DATA_CUBE_IN_WIDTH_0

registers['NVDLA_PDP']['register_list'].append('D_DATA_CUBE_IN_WIDTH_0')



# Register NVDLA_PDP_D_DATA_CUBE_IN_HEIGHT_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_DATA_CUBE_IN_HEIGHT_0'] = {
    'addr'            : 0xb010,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'CUBE_IN_HEIGHT' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CUBE_IN_HEIGHT',
    ],
} # End of register: D_DATA_CUBE_IN_HEIGHT_0

registers['NVDLA_PDP']['register_list'].append('D_DATA_CUBE_IN_HEIGHT_0')



# Register NVDLA_PDP_D_DATA_CUBE_IN_CHANNEL_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_DATA_CUBE_IN_CHANNEL_0'] = {
    'addr'            : 0xb014,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'CUBE_IN_CHANNEL' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CUBE_IN_CHANNEL',
    ],
} # End of register: D_DATA_CUBE_IN_CHANNEL_0

registers['NVDLA_PDP']['register_list'].append('D_DATA_CUBE_IN_CHANNEL_0')



# Register NVDLA_PDP_D_DATA_CUBE_OUT_WIDTH_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_DATA_CUBE_OUT_WIDTH_0'] = {
    'addr'            : 0xb018,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'CUBE_OUT_WIDTH' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CUBE_OUT_WIDTH',
    ],
} # End of register: D_DATA_CUBE_OUT_WIDTH_0

registers['NVDLA_PDP']['register_list'].append('D_DATA_CUBE_OUT_WIDTH_0')



# Register NVDLA_PDP_D_DATA_CUBE_OUT_HEIGHT_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_DATA_CUBE_OUT_HEIGHT_0'] = {
    'addr'            : 0xb01c,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'CUBE_OUT_HEIGHT' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CUBE_OUT_HEIGHT',
    ],
} # End of register: D_DATA_CUBE_OUT_HEIGHT_0

registers['NVDLA_PDP']['register_list'].append('D_DATA_CUBE_OUT_HEIGHT_0')



# Register NVDLA_PDP_D_DATA_CUBE_OUT_CHANNEL_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_DATA_CUBE_OUT_CHANNEL_0'] = {
    'addr'            : 0xb020,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'CUBE_OUT_CHANNEL' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CUBE_OUT_CHANNEL',
    ],
} # End of register: D_DATA_CUBE_OUT_CHANNEL_0

registers['NVDLA_PDP']['register_list'].append('D_DATA_CUBE_OUT_CHANNEL_0')



# Register NVDLA_PDP_D_OPERATION_MODE_CFG_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_OPERATION_MODE_CFG_0'] = {
    'addr'            : 0xb024,
    'size'            : 0x10,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xff13,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xff13,
    'write_mask'      : 0xff13,
    'POOLING_METHOD' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'POOLING_METHOD_AVERAGE' : 0x0,
            'POOLING_METHOD_MAX' : 0x1,
            'POOLING_METHOD_MIN' : 0x2,
        },
    },
    'FLYING_MODE' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'ON_FLYING' : 0x0,
            'OFF_FLYING' : 0x1,
        },
    },
    'SPLIT_NUM' : {
        'lsb'               : 8,
        'msb'               : 15,
        'size'              : 8,
        'field'             : (0xff << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'POOLING_METHOD',
        'FLYING_MODE',
        'SPLIT_NUM',
    ],
} # End of register: D_OPERATION_MODE_CFG_0

registers['NVDLA_PDP']['register_list'].append('D_OPERATION_MODE_CFG_0')



# Register NVDLA_PDP_D_NAN_FLUSH_TO_ZERO_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_NAN_FLUSH_TO_ZERO_0'] = {
    'addr'            : 0xb028,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'NAN_TO_ZERO' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'NAN_TO_ZERO',
    ],
} # End of register: D_NAN_FLUSH_TO_ZERO_0

registers['NVDLA_PDP']['register_list'].append('D_NAN_FLUSH_TO_ZERO_0')



# Register NVDLA_PDP_D_PARTIAL_WIDTH_IN_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_PARTIAL_WIDTH_IN_0'] = {
    'addr'            : 0xb02c,
    'size'            : 0x1e,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3fffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3fffffff,
    'write_mask'      : 0x3fffffff,
    'PARTIAL_WIDTH_IN_FIRST' : {
        'lsb'               : 0,
        'msb'               : 9,
        'size'              : 10,
        'field'             : (0x3ff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'PARTIAL_WIDTH_IN_LAST' : {
        'lsb'               : 10,
        'msb'               : 19,
        'size'              : 10,
        'field'             : (0x3ff << 10),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'PARTIAL_WIDTH_IN_MID' : {
        'lsb'               : 20,
        'msb'               : 29,
        'size'              : 10,
        'field'             : (0x3ff << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PARTIAL_WIDTH_IN_FIRST',
        'PARTIAL_WIDTH_IN_LAST',
        'PARTIAL_WIDTH_IN_MID',
    ],
} # End of register: D_PARTIAL_WIDTH_IN_0

registers['NVDLA_PDP']['register_list'].append('D_PARTIAL_WIDTH_IN_0')



# Register NVDLA_PDP_D_PARTIAL_WIDTH_OUT_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_PARTIAL_WIDTH_OUT_0'] = {
    'addr'            : 0xb030,
    'size'            : 0x1e,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3fffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3fffffff,
    'write_mask'      : 0x3fffffff,
    'PARTIAL_WIDTH_OUT_FIRST' : {
        'lsb'               : 0,
        'msb'               : 9,
        'size'              : 10,
        'field'             : (0x3ff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'PARTIAL_WIDTH_OUT_LAST' : {
        'lsb'               : 10,
        'msb'               : 19,
        'size'              : 10,
        'field'             : (0x3ff << 10),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'PARTIAL_WIDTH_OUT_MID' : {
        'lsb'               : 20,
        'msb'               : 29,
        'size'              : 10,
        'field'             : (0x3ff << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PARTIAL_WIDTH_OUT_FIRST',
        'PARTIAL_WIDTH_OUT_LAST',
        'PARTIAL_WIDTH_OUT_MID',
    ],
} # End of register: D_PARTIAL_WIDTH_OUT_0

registers['NVDLA_PDP']['register_list'].append('D_PARTIAL_WIDTH_OUT_0')



# Register NVDLA_PDP_D_POOLING_KERNEL_CFG_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_POOLING_KERNEL_CFG_0'] = {
    'addr'            : 0xb034,
    'size'            : 0x18,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xff0f0f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xff0f0f,
    'write_mask'      : 0xff0f0f,
    'KERNEL_WIDTH' : {
        'lsb'               : 0,
        'msb'               : 3,
        'size'              : 4,
        'field'             : (0xf << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'KERNEL_WIDTH_1' : 0x0,
            'KERNEL_WIDTH_2' : 0x1,
            'KERNEL_WIDTH_3' : 0x2,
            'KERNEL_WIDTH_4' : 0x3,
            'KERNEL_WIDTH_5' : 0x4,
            'KERNEL_WIDTH_6' : 0x5,
            'KERNEL_WIDTH_7' : 0x6,
            'KERNEL_WIDTH_8' : 0x7,
        },
    },
    'KERNEL_HEIGHT' : {
        'lsb'               : 8,
        'msb'               : 11,
        'size'              : 4,
        'field'             : (0xf << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'KERNEL_HEIGHT_1' : 0x0,
            'KERNEL_HEIGHT_2' : 0x1,
            'KERNEL_HEIGHT_3' : 0x2,
            'KERNEL_HEIGHT_4' : 0x3,
            'KERNEL_HEIGHT_5' : 0x4,
            'KERNEL_HEIGHT_6' : 0x5,
            'KERNEL_HEIGHT_7' : 0x6,
            'KERNEL_HEIGHT_8' : 0x7,
        },
    },
    'KERNEL_STRIDE_WIDTH' : {
        'lsb'               : 16,
        'msb'               : 19,
        'size'              : 4,
        'field'             : (0xf << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'KERNEL_STRIDE_HEIGHT' : {
        'lsb'               : 20,
        'msb'               : 23,
        'size'              : 4,
        'field'             : (0xf << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'KERNEL_WIDTH',
        'KERNEL_HEIGHT',
        'KERNEL_STRIDE_WIDTH',
        'KERNEL_STRIDE_HEIGHT',
    ],
} # End of register: D_POOLING_KERNEL_CFG_0

registers['NVDLA_PDP']['register_list'].append('D_POOLING_KERNEL_CFG_0')



# Register NVDLA_PDP_D_RECIP_KERNEL_WIDTH_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_RECIP_KERNEL_WIDTH_0'] = {
    'addr'            : 0xb038,
    'size'            : 0x11,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1ffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1ffff,
    'write_mask'      : 0x1ffff,
    'RECIP_KERNEL_WIDTH' : {
        'lsb'               : 0,
        'msb'               : 16,
        'size'              : 17,
        'field'             : (0x1ffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'RECIP_KERNEL_WIDTH',
    ],
} # End of register: D_RECIP_KERNEL_WIDTH_0

registers['NVDLA_PDP']['register_list'].append('D_RECIP_KERNEL_WIDTH_0')



# Register NVDLA_PDP_D_RECIP_KERNEL_HEIGHT_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_RECIP_KERNEL_HEIGHT_0'] = {
    'addr'            : 0xb03c,
    'size'            : 0x11,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1ffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1ffff,
    'write_mask'      : 0x1ffff,
    'RECIP_KERNEL_HEIGHT' : {
        'lsb'               : 0,
        'msb'               : 16,
        'size'              : 17,
        'field'             : (0x1ffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'RECIP_KERNEL_HEIGHT',
    ],
} # End of register: D_RECIP_KERNEL_HEIGHT_0

registers['NVDLA_PDP']['register_list'].append('D_RECIP_KERNEL_HEIGHT_0')



# Register NVDLA_PDP_D_POOLING_PADDING_CFG_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_POOLING_PADDING_CFG_0'] = {
    'addr'            : 0xb040,
    'size'            : 0xf,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x7777,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x7777,
    'write_mask'      : 0x7777,
    'PAD_LEFT' : {
        'lsb'               : 0,
        'msb'               : 2,
        'size'              : 3,
        'field'             : (0x7 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'PAD_TOP' : {
        'lsb'               : 4,
        'msb'               : 6,
        'size'              : 3,
        'field'             : (0x7 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'PAD_RIGHT' : {
        'lsb'               : 8,
        'msb'               : 10,
        'size'              : 3,
        'field'             : (0x7 << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'PAD_BOTTOM' : {
        'lsb'               : 12,
        'msb'               : 14,
        'size'              : 3,
        'field'             : (0x7 << 12),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PAD_LEFT',
        'PAD_TOP',
        'PAD_RIGHT',
        'PAD_BOTTOM',
    ],
} # End of register: D_POOLING_PADDING_CFG_0

registers['NVDLA_PDP']['register_list'].append('D_POOLING_PADDING_CFG_0')



# Register NVDLA_PDP_D_POOLING_PADDING_VALUE_1_CFG_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_POOLING_PADDING_VALUE_1_CFG_0'] = {
    'addr'            : 0xb044,
    'size'            : 0x13,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x7ffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x7ffff,
    'write_mask'      : 0x7ffff,
    'PAD_VALUE_1X' : {
        'lsb'               : 0,
        'msb'               : 18,
        'size'              : 19,
        'field'             : (0x7ffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PAD_VALUE_1X',
    ],
} # End of register: D_POOLING_PADDING_VALUE_1_CFG_0

registers['NVDLA_PDP']['register_list'].append('D_POOLING_PADDING_VALUE_1_CFG_0')



# Register NVDLA_PDP_D_POOLING_PADDING_VALUE_2_CFG_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_POOLING_PADDING_VALUE_2_CFG_0'] = {
    'addr'            : 0xb048,
    'size'            : 0x13,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x7ffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x7ffff,
    'write_mask'      : 0x7ffff,
    'PAD_VALUE_2X' : {
        'lsb'               : 0,
        'msb'               : 18,
        'size'              : 19,
        'field'             : (0x7ffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PAD_VALUE_2X',
    ],
} # End of register: D_POOLING_PADDING_VALUE_2_CFG_0

registers['NVDLA_PDP']['register_list'].append('D_POOLING_PADDING_VALUE_2_CFG_0')



# Register NVDLA_PDP_D_POOLING_PADDING_VALUE_3_CFG_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_POOLING_PADDING_VALUE_3_CFG_0'] = {
    'addr'            : 0xb04c,
    'size'            : 0x13,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x7ffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x7ffff,
    'write_mask'      : 0x7ffff,
    'PAD_VALUE_3X' : {
        'lsb'               : 0,
        'msb'               : 18,
        'size'              : 19,
        'field'             : (0x7ffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PAD_VALUE_3X',
    ],
} # End of register: D_POOLING_PADDING_VALUE_3_CFG_0

registers['NVDLA_PDP']['register_list'].append('D_POOLING_PADDING_VALUE_3_CFG_0')



# Register NVDLA_PDP_D_POOLING_PADDING_VALUE_4_CFG_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_POOLING_PADDING_VALUE_4_CFG_0'] = {
    'addr'            : 0xb050,
    'size'            : 0x13,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x7ffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x7ffff,
    'write_mask'      : 0x7ffff,
    'PAD_VALUE_4X' : {
        'lsb'               : 0,
        'msb'               : 18,
        'size'              : 19,
        'field'             : (0x7ffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PAD_VALUE_4X',
    ],
} # End of register: D_POOLING_PADDING_VALUE_4_CFG_0

registers['NVDLA_PDP']['register_list'].append('D_POOLING_PADDING_VALUE_4_CFG_0')



# Register NVDLA_PDP_D_POOLING_PADDING_VALUE_5_CFG_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_POOLING_PADDING_VALUE_5_CFG_0'] = {
    'addr'            : 0xb054,
    'size'            : 0x13,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x7ffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x7ffff,
    'write_mask'      : 0x7ffff,
    'PAD_VALUE_5X' : {
        'lsb'               : 0,
        'msb'               : 18,
        'size'              : 19,
        'field'             : (0x7ffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PAD_VALUE_5X',
    ],
} # End of register: D_POOLING_PADDING_VALUE_5_CFG_0

registers['NVDLA_PDP']['register_list'].append('D_POOLING_PADDING_VALUE_5_CFG_0')



# Register NVDLA_PDP_D_POOLING_PADDING_VALUE_6_CFG_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_POOLING_PADDING_VALUE_6_CFG_0'] = {
    'addr'            : 0xb058,
    'size'            : 0x13,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x7ffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x7ffff,
    'write_mask'      : 0x7ffff,
    'PAD_VALUE_6X' : {
        'lsb'               : 0,
        'msb'               : 18,
        'size'              : 19,
        'field'             : (0x7ffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PAD_VALUE_6X',
    ],
} # End of register: D_POOLING_PADDING_VALUE_6_CFG_0

registers['NVDLA_PDP']['register_list'].append('D_POOLING_PADDING_VALUE_6_CFG_0')



# Register NVDLA_PDP_D_POOLING_PADDING_VALUE_7_CFG_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_POOLING_PADDING_VALUE_7_CFG_0'] = {
    'addr'            : 0xb05c,
    'size'            : 0x13,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x7ffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x7ffff,
    'write_mask'      : 0x7ffff,
    'PAD_VALUE_7X' : {
        'lsb'               : 0,
        'msb'               : 18,
        'size'              : 19,
        'field'             : (0x7ffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PAD_VALUE_7X',
    ],
} # End of register: D_POOLING_PADDING_VALUE_7_CFG_0

registers['NVDLA_PDP']['register_list'].append('D_POOLING_PADDING_VALUE_7_CFG_0')



# Register NVDLA_PDP_D_SRC_BASE_ADDR_LOW_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_SRC_BASE_ADDR_LOW_0'] = {
    'addr'            : 0xb060,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'SRC_BASE_ADDR_LOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_BASE_ADDR_LOW',
    ],
} # End of register: D_SRC_BASE_ADDR_LOW_0

registers['NVDLA_PDP']['register_list'].append('D_SRC_BASE_ADDR_LOW_0')



# Register NVDLA_PDP_D_SRC_BASE_ADDR_HIGH_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_SRC_BASE_ADDR_HIGH_0'] = {
    'addr'            : 0xb064,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'SRC_BASE_ADDR_HIGH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_BASE_ADDR_HIGH',
    ],
} # End of register: D_SRC_BASE_ADDR_HIGH_0

registers['NVDLA_PDP']['register_list'].append('D_SRC_BASE_ADDR_HIGH_0')



# Register NVDLA_PDP_D_SRC_LINE_STRIDE_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_SRC_LINE_STRIDE_0'] = {
    'addr'            : 0xb068,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'SRC_LINE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_LINE_STRIDE',
    ],
} # End of register: D_SRC_LINE_STRIDE_0

registers['NVDLA_PDP']['register_list'].append('D_SRC_LINE_STRIDE_0')



# Register NVDLA_PDP_D_SRC_SURFACE_STRIDE_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_SRC_SURFACE_STRIDE_0'] = {
    'addr'            : 0xb06c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'SRC_SURFACE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_SURFACE_STRIDE',
    ],
} # End of register: D_SRC_SURFACE_STRIDE_0

registers['NVDLA_PDP']['register_list'].append('D_SRC_SURFACE_STRIDE_0')



# Register NVDLA_PDP_D_DST_BASE_ADDR_LOW_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_DST_BASE_ADDR_LOW_0'] = {
    'addr'            : 0xb070,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DST_BASE_ADDR_LOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DST_BASE_ADDR_LOW',
    ],
} # End of register: D_DST_BASE_ADDR_LOW_0

registers['NVDLA_PDP']['register_list'].append('D_DST_BASE_ADDR_LOW_0')



# Register NVDLA_PDP_D_DST_BASE_ADDR_HIGH_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_DST_BASE_ADDR_HIGH_0'] = {
    'addr'            : 0xb074,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DST_BASE_ADDR_HIGH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DST_BASE_ADDR_HIGH',
    ],
} # End of register: D_DST_BASE_ADDR_HIGH_0

registers['NVDLA_PDP']['register_list'].append('D_DST_BASE_ADDR_HIGH_0')



# Register NVDLA_PDP_D_DST_LINE_STRIDE_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_DST_LINE_STRIDE_0'] = {
    'addr'            : 0xb078,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DST_LINE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DST_LINE_STRIDE',
    ],
} # End of register: D_DST_LINE_STRIDE_0

registers['NVDLA_PDP']['register_list'].append('D_DST_LINE_STRIDE_0')



# Register NVDLA_PDP_D_DST_SURFACE_STRIDE_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_DST_SURFACE_STRIDE_0'] = {
    'addr'            : 0xb07c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DST_SURFACE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DST_SURFACE_STRIDE',
    ],
} # End of register: D_DST_SURFACE_STRIDE_0

registers['NVDLA_PDP']['register_list'].append('D_DST_SURFACE_STRIDE_0')



# Register NVDLA_PDP_D_DST_RAM_CFG_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_DST_RAM_CFG_0'] = {
    'addr'            : 0xb080,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'DST_RAM_TYPE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'CV' : 0x0,
            'MC' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DST_RAM_TYPE',
    ],
} # End of register: D_DST_RAM_CFG_0

registers['NVDLA_PDP']['register_list'].append('D_DST_RAM_CFG_0')



# Register NVDLA_PDP_D_DATA_FORMAT_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_DATA_FORMAT_0'] = {
    'addr'            : 0xb084,
    'size'            : 0x2,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3,
    'write_mask'      : 0x3,
    'INPUT_DATA' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'INT8' : 0x0,
            'INT16' : 0x1,
            'FP16' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'INPUT_DATA',
    ],
} # End of register: D_DATA_FORMAT_0

registers['NVDLA_PDP']['register_list'].append('D_DATA_FORMAT_0')



# Register NVDLA_PDP_D_INF_INPUT_NUM_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_INF_INPUT_NUM_0'] = {
    'addr'            : 0xb088,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'INF_INPUT_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'INF_INPUT_NUM',
    ],
} # End of register: D_INF_INPUT_NUM_0

registers['NVDLA_PDP']['register_list'].append('D_INF_INPUT_NUM_0')



# Register NVDLA_PDP_D_NAN_INPUT_NUM_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_NAN_INPUT_NUM_0'] = {
    'addr'            : 0xb08c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'NAN_INPUT_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'NAN_INPUT_NUM',
    ],
} # End of register: D_NAN_INPUT_NUM_0

registers['NVDLA_PDP']['register_list'].append('D_NAN_INPUT_NUM_0')



# Register NVDLA_PDP_D_NAN_OUTPUT_NUM_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_NAN_OUTPUT_NUM_0'] = {
    'addr'            : 0xb090,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'NAN_OUTPUT_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'NAN_OUTPUT_NUM',
    ],
} # End of register: D_NAN_OUTPUT_NUM_0

registers['NVDLA_PDP']['register_list'].append('D_NAN_OUTPUT_NUM_0')



# Register NVDLA_PDP_D_PERF_ENABLE_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_PERF_ENABLE_0'] = {
    'addr'            : 0xb094,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'DMA_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DMA_EN',
    ],
} # End of register: D_PERF_ENABLE_0

registers['NVDLA_PDP']['register_list'].append('D_PERF_ENABLE_0')



# Register NVDLA_PDP_D_PERF_WRITE_STALL_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_PERF_WRITE_STALL_0'] = {
    'addr'            : 0xb098,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PERF_WRITE_STALL' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PERF_WRITE_STALL',
    ],
} # End of register: D_PERF_WRITE_STALL_0

registers['NVDLA_PDP']['register_list'].append('D_PERF_WRITE_STALL_0')



# Register NVDLA_PDP_D_CYA_0
if 'NVDLA_PDP' not in registers:
    registers['NVDLA_PDP'] = {}
    registers['NVDLA_PDP']['register_list']  = []

registers['NVDLA_PDP']['D_CYA_0'] = {
    'addr'            : 0xb09c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'CYA' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CYA',
    ],
} # End of register: D_CYA_0

registers['NVDLA_PDP']['register_list'].append('D_CYA_0')



# Register NVDLA_CDP_RDMA_S_STATUS_0
if 'NVDLA_CDP_RDMA' not in registers:
    registers['NVDLA_CDP_RDMA'] = {}
    registers['NVDLA_CDP_RDMA']['register_list']  = []

registers['NVDLA_CDP_RDMA']['S_STATUS_0'] = {
    'addr'            : 0xc000,
    'size'            : 0x12,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x30003,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x30003,
    'write_mask'      : 0x0,
    'STATUS_0' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    'STATUS_1' : {
        'lsb'               : 16,
        'msb'               : 17,
        'size'              : 2,
        'field'             : (0x3 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_0',
        'STATUS_1',
    ],
} # End of register: S_STATUS_0

registers['NVDLA_CDP_RDMA']['register_list'].append('S_STATUS_0')



# Register NVDLA_CDP_RDMA_S_POINTER_0
if 'NVDLA_CDP_RDMA' not in registers:
    registers['NVDLA_CDP_RDMA'] = {}
    registers['NVDLA_CDP_RDMA']['register_list']  = []

registers['NVDLA_CDP_RDMA']['S_POINTER_0'] = {
    'addr'            : 0xc004,
    'size'            : 0x11,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x10001,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x10001,
    'write_mask'      : 0x1,
    'PRODUCER' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    'CONSUMER' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PRODUCER',
        'CONSUMER',
    ],
} # End of register: S_POINTER_0

registers['NVDLA_CDP_RDMA']['register_list'].append('S_POINTER_0')



# Register NVDLA_CDP_RDMA_D_OP_ENABLE_0
if 'NVDLA_CDP_RDMA' not in registers:
    registers['NVDLA_CDP_RDMA'] = {}
    registers['NVDLA_CDP_RDMA']['register_list']  = []

registers['NVDLA_CDP_RDMA']['D_OP_ENABLE_0'] = {
    'addr'            : 0xc008,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'OP_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwto',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'OP_EN',
    ],
} # End of register: D_OP_ENABLE_0

registers['NVDLA_CDP_RDMA']['register_list'].append('D_OP_ENABLE_0')



# Register NVDLA_CDP_RDMA_D_DATA_CUBE_WIDTH_0
if 'NVDLA_CDP_RDMA' not in registers:
    registers['NVDLA_CDP_RDMA'] = {}
    registers['NVDLA_CDP_RDMA']['register_list']  = []

registers['NVDLA_CDP_RDMA']['D_DATA_CUBE_WIDTH_0'] = {
    'addr'            : 0xc00c,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'WIDTH' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WIDTH',
    ],
} # End of register: D_DATA_CUBE_WIDTH_0

registers['NVDLA_CDP_RDMA']['register_list'].append('D_DATA_CUBE_WIDTH_0')



# Register NVDLA_CDP_RDMA_D_DATA_CUBE_HEIGHT_0
if 'NVDLA_CDP_RDMA' not in registers:
    registers['NVDLA_CDP_RDMA'] = {}
    registers['NVDLA_CDP_RDMA']['register_list']  = []

registers['NVDLA_CDP_RDMA']['D_DATA_CUBE_HEIGHT_0'] = {
    'addr'            : 0xc010,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'HEIGHT' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'HEIGHT',
    ],
} # End of register: D_DATA_CUBE_HEIGHT_0

registers['NVDLA_CDP_RDMA']['register_list'].append('D_DATA_CUBE_HEIGHT_0')



# Register NVDLA_CDP_RDMA_D_DATA_CUBE_CHANNEL_0
if 'NVDLA_CDP_RDMA' not in registers:
    registers['NVDLA_CDP_RDMA'] = {}
    registers['NVDLA_CDP_RDMA']['register_list']  = []

registers['NVDLA_CDP_RDMA']['D_DATA_CUBE_CHANNEL_0'] = {
    'addr'            : 0xc014,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'CHANNEL' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CHANNEL',
    ],
} # End of register: D_DATA_CUBE_CHANNEL_0

registers['NVDLA_CDP_RDMA']['register_list'].append('D_DATA_CUBE_CHANNEL_0')



# Register NVDLA_CDP_RDMA_D_SRC_BASE_ADDR_LOW_0
if 'NVDLA_CDP_RDMA' not in registers:
    registers['NVDLA_CDP_RDMA'] = {}
    registers['NVDLA_CDP_RDMA']['register_list']  = []

registers['NVDLA_CDP_RDMA']['D_SRC_BASE_ADDR_LOW_0'] = {
    'addr'            : 0xc018,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'SRC_BASE_ADDR_LOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_BASE_ADDR_LOW',
    ],
} # End of register: D_SRC_BASE_ADDR_LOW_0

registers['NVDLA_CDP_RDMA']['register_list'].append('D_SRC_BASE_ADDR_LOW_0')



# Register NVDLA_CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0
if 'NVDLA_CDP_RDMA' not in registers:
    registers['NVDLA_CDP_RDMA'] = {}
    registers['NVDLA_CDP_RDMA']['register_list']  = []

registers['NVDLA_CDP_RDMA']['D_SRC_BASE_ADDR_HIGH_0'] = {
    'addr'            : 0xc01c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'SRC_BASE_ADDR_HIGH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_BASE_ADDR_HIGH',
    ],
} # End of register: D_SRC_BASE_ADDR_HIGH_0

registers['NVDLA_CDP_RDMA']['register_list'].append('D_SRC_BASE_ADDR_HIGH_0')



# Register NVDLA_CDP_RDMA_D_SRC_LINE_STRIDE_0
if 'NVDLA_CDP_RDMA' not in registers:
    registers['NVDLA_CDP_RDMA'] = {}
    registers['NVDLA_CDP_RDMA']['register_list']  = []

registers['NVDLA_CDP_RDMA']['D_SRC_LINE_STRIDE_0'] = {
    'addr'            : 0xc020,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'SRC_LINE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_LINE_STRIDE',
    ],
} # End of register: D_SRC_LINE_STRIDE_0

registers['NVDLA_CDP_RDMA']['register_list'].append('D_SRC_LINE_STRIDE_0')



# Register NVDLA_CDP_RDMA_D_SRC_SURFACE_STRIDE_0
if 'NVDLA_CDP_RDMA' not in registers:
    registers['NVDLA_CDP_RDMA'] = {}
    registers['NVDLA_CDP_RDMA']['register_list']  = []

registers['NVDLA_CDP_RDMA']['D_SRC_SURFACE_STRIDE_0'] = {
    'addr'            : 0xc024,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'SRC_SURFACE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_SURFACE_STRIDE',
    ],
} # End of register: D_SRC_SURFACE_STRIDE_0

registers['NVDLA_CDP_RDMA']['register_list'].append('D_SRC_SURFACE_STRIDE_0')



# Register NVDLA_CDP_RDMA_D_SRC_DMA_CFG_0
if 'NVDLA_CDP_RDMA' not in registers:
    registers['NVDLA_CDP_RDMA'] = {}
    registers['NVDLA_CDP_RDMA']['register_list']  = []

registers['NVDLA_CDP_RDMA']['D_SRC_DMA_CFG_0'] = {
    'addr'            : 0xc028,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'SRC_RAM_TYPE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'CV' : 0x0,
            'MC' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_RAM_TYPE',
    ],
} # End of register: D_SRC_DMA_CFG_0

registers['NVDLA_CDP_RDMA']['register_list'].append('D_SRC_DMA_CFG_0')



# Register NVDLA_CDP_RDMA_D_SRC_COMPRESSION_EN_0
if 'NVDLA_CDP_RDMA' not in registers:
    registers['NVDLA_CDP_RDMA'] = {}
    registers['NVDLA_CDP_RDMA']['register_list']  = []

registers['NVDLA_CDP_RDMA']['D_SRC_COMPRESSION_EN_0'] = {
    'addr'            : 0xc02c,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x0,
    'SRC_COMPRESSION_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'c',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_COMPRESSION_EN',
    ],
} # End of register: D_SRC_COMPRESSION_EN_0

registers['NVDLA_CDP_RDMA']['register_list'].append('D_SRC_COMPRESSION_EN_0')



# Register NVDLA_CDP_RDMA_D_OPERATION_MODE_0
if 'NVDLA_CDP_RDMA' not in registers:
    registers['NVDLA_CDP_RDMA'] = {}
    registers['NVDLA_CDP_RDMA']['register_list']  = []

registers['NVDLA_CDP_RDMA']['D_OPERATION_MODE_0'] = {
    'addr'            : 0xc030,
    'size'            : 0x2,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3,
    'write_mask'      : 0x0,
    'OPERATION_MODE' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'c',
        'enums' : {
            'READPHILE' : 0x0,
            'WRITEPHILE' : 0x1,
            'ORDINARY' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'OPERATION_MODE',
    ],
} # End of register: D_OPERATION_MODE_0

registers['NVDLA_CDP_RDMA']['register_list'].append('D_OPERATION_MODE_0')



# Register NVDLA_CDP_RDMA_D_DATA_FORMAT_0
if 'NVDLA_CDP_RDMA' not in registers:
    registers['NVDLA_CDP_RDMA'] = {}
    registers['NVDLA_CDP_RDMA']['register_list']  = []

registers['NVDLA_CDP_RDMA']['D_DATA_FORMAT_0'] = {
    'addr'            : 0xc034,
    'size'            : 0x2,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3,
    'write_mask'      : 0x3,
    'INPUT_DATA' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'INT8' : 0x0,
            'INT16' : 0x1,
            'FP16' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'INPUT_DATA',
    ],
} # End of register: D_DATA_FORMAT_0

registers['NVDLA_CDP_RDMA']['register_list'].append('D_DATA_FORMAT_0')



# Register NVDLA_CDP_RDMA_D_PERF_ENABLE_0
if 'NVDLA_CDP_RDMA' not in registers:
    registers['NVDLA_CDP_RDMA'] = {}
    registers['NVDLA_CDP_RDMA']['register_list']  = []

registers['NVDLA_CDP_RDMA']['D_PERF_ENABLE_0'] = {
    'addr'            : 0xc038,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'DMA_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DMA_EN',
    ],
} # End of register: D_PERF_ENABLE_0

registers['NVDLA_CDP_RDMA']['register_list'].append('D_PERF_ENABLE_0')



# Register NVDLA_CDP_RDMA_D_PERF_READ_STALL_0
if 'NVDLA_CDP_RDMA' not in registers:
    registers['NVDLA_CDP_RDMA'] = {}
    registers['NVDLA_CDP_RDMA']['register_list']  = []

registers['NVDLA_CDP_RDMA']['D_PERF_READ_STALL_0'] = {
    'addr'            : 0xc03c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PERF_READ_STALL' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PERF_READ_STALL',
    ],
} # End of register: D_PERF_READ_STALL_0

registers['NVDLA_CDP_RDMA']['register_list'].append('D_PERF_READ_STALL_0')



# Register NVDLA_CDP_RDMA_D_CYA_0
if 'NVDLA_CDP_RDMA' not in registers:
    registers['NVDLA_CDP_RDMA'] = {}
    registers['NVDLA_CDP_RDMA']['register_list']  = []

registers['NVDLA_CDP_RDMA']['D_CYA_0'] = {
    'addr'            : 0xc040,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'CYA' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CYA',
    ],
} # End of register: D_CYA_0

registers['NVDLA_CDP_RDMA']['register_list'].append('D_CYA_0')



# Register NVDLA_CDP_S_STATUS_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_STATUS_0'] = {
    'addr'            : 0xd000,
    'size'            : 0x12,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x30003,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x30003,
    'write_mask'      : 0x0,
    'STATUS_0' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    'STATUS_1' : {
        'lsb'               : 16,
        'msb'               : 17,
        'size'              : 2,
        'field'             : (0x3 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_0',
        'STATUS_1',
    ],
} # End of register: S_STATUS_0

registers['NVDLA_CDP']['register_list'].append('S_STATUS_0')



# Register NVDLA_CDP_S_POINTER_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_POINTER_0'] = {
    'addr'            : 0xd004,
    'size'            : 0x11,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x10001,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x10001,
    'write_mask'      : 0x1,
    'PRODUCER' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    'CONSUMER' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PRODUCER',
        'CONSUMER',
    ],
} # End of register: S_POINTER_0

registers['NVDLA_CDP']['register_list'].append('S_POINTER_0')



# Register NVDLA_CDP_S_LUT_ACCESS_CFG_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_LUT_ACCESS_CFG_0'] = {
    'addr'            : 0xd008,
    'size'            : 0x12,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x303ff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x303ff,
    'write_mask'      : 0x303ff,
    'LUT_ADDR' : {
        'lsb'               : 0,
        'msb'               : 9,
        'size'              : 10,
        'field'             : (0x3ff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwto',
        'enums' : {
        },
    },
    'LUT_TABLE_ID' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'LE' : 0x0,
            'LO' : 0x1,
        },
    },
    'LUT_ACCESS_TYPE' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'READ' : 0x0,
            'WRITE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_ADDR',
        'LUT_TABLE_ID',
        'LUT_ACCESS_TYPE',
    ],
} # End of register: S_LUT_ACCESS_CFG_0

registers['NVDLA_CDP']['register_list'].append('S_LUT_ACCESS_CFG_0')



# Register NVDLA_CDP_S_LUT_ACCESS_DATA_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_LUT_ACCESS_DATA_0'] = {
    'addr'            : 0xd00c,
    'size'            : 0x10,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'LUT_DATA' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwto',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_DATA',
    ],
} # End of register: S_LUT_ACCESS_DATA_0

registers['NVDLA_CDP']['register_list'].append('S_LUT_ACCESS_DATA_0')



# Register NVDLA_CDP_S_LUT_CFG_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_LUT_CFG_0'] = {
    'addr'            : 0xd010,
    'size'            : 0x7,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x71,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x71,
    'write_mask'      : 0x71,
    'LUT_LE_FUNCTION' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'EXPONENT' : 0x0,
            'LINEAR' : 0x1,
        },
    },
    'LUT_UFLOW_PRIORITY' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'LE' : 0x0,
            'LO' : 0x1,
        },
    },
    'LUT_OFLOW_PRIORITY' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'LE' : 0x0,
            'LO' : 0x1,
        },
    },
    'LUT_HYBRID_PRIORITY' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'LE' : 0x0,
            'LO' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LE_FUNCTION',
        'LUT_UFLOW_PRIORITY',
        'LUT_OFLOW_PRIORITY',
        'LUT_HYBRID_PRIORITY',
    ],
} # End of register: S_LUT_CFG_0

registers['NVDLA_CDP']['register_list'].append('S_LUT_CFG_0')



# Register NVDLA_CDP_S_LUT_INFO_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_LUT_INFO_0'] = {
    'addr'            : 0xd014,
    'size'            : 0x18,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffff,
    'write_mask'      : 0xffffff,
    'LUT_LE_INDEX_OFFSET' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'LUT_LE_INDEX_SELECT' : {
        'lsb'               : 8,
        'msb'               : 15,
        'size'              : 8,
        'field'             : (0xff << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'LUT_LO_INDEX_SELECT' : {
        'lsb'               : 16,
        'msb'               : 23,
        'size'              : 8,
        'field'             : (0xff << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LE_INDEX_OFFSET',
        'LUT_LE_INDEX_SELECT',
        'LUT_LO_INDEX_SELECT',
    ],
} # End of register: S_LUT_INFO_0

registers['NVDLA_CDP']['register_list'].append('S_LUT_INFO_0')



# Register NVDLA_CDP_S_LUT_LE_START_LOW_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_LUT_LE_START_LOW_0'] = {
    'addr'            : 0xd018,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'LUT_LE_START_LOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LE_START_LOW',
    ],
} # End of register: S_LUT_LE_START_LOW_0

registers['NVDLA_CDP']['register_list'].append('S_LUT_LE_START_LOW_0')



# Register NVDLA_CDP_S_LUT_LE_START_HIGH_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_LUT_LE_START_HIGH_0'] = {
    'addr'            : 0xd01c,
    'size'            : 0x6,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f,
    'write_mask'      : 0x3f,
    'LUT_LE_START_HIGH' : {
        'lsb'               : 0,
        'msb'               : 5,
        'size'              : 6,
        'field'             : (0x3f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LE_START_HIGH',
    ],
} # End of register: S_LUT_LE_START_HIGH_0

registers['NVDLA_CDP']['register_list'].append('S_LUT_LE_START_HIGH_0')



# Register NVDLA_CDP_S_LUT_LE_END_LOW_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_LUT_LE_END_LOW_0'] = {
    'addr'            : 0xd020,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'LUT_LE_END_LOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LE_END_LOW',
    ],
} # End of register: S_LUT_LE_END_LOW_0

registers['NVDLA_CDP']['register_list'].append('S_LUT_LE_END_LOW_0')



# Register NVDLA_CDP_S_LUT_LE_END_HIGH_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_LUT_LE_END_HIGH_0'] = {
    'addr'            : 0xd024,
    'size'            : 0x6,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f,
    'write_mask'      : 0x3f,
    'LUT_LE_END_HIGH' : {
        'lsb'               : 0,
        'msb'               : 5,
        'size'              : 6,
        'field'             : (0x3f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LE_END_HIGH',
    ],
} # End of register: S_LUT_LE_END_HIGH_0

registers['NVDLA_CDP']['register_list'].append('S_LUT_LE_END_HIGH_0')



# Register NVDLA_CDP_S_LUT_LO_START_LOW_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_LUT_LO_START_LOW_0'] = {
    'addr'            : 0xd028,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'LUT_LO_START_LOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LO_START_LOW',
    ],
} # End of register: S_LUT_LO_START_LOW_0

registers['NVDLA_CDP']['register_list'].append('S_LUT_LO_START_LOW_0')



# Register NVDLA_CDP_S_LUT_LO_START_HIGH_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_LUT_LO_START_HIGH_0'] = {
    'addr'            : 0xd02c,
    'size'            : 0x6,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f,
    'write_mask'      : 0x3f,
    'LUT_LO_START_HIGH' : {
        'lsb'               : 0,
        'msb'               : 5,
        'size'              : 6,
        'field'             : (0x3f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LO_START_HIGH',
    ],
} # End of register: S_LUT_LO_START_HIGH_0

registers['NVDLA_CDP']['register_list'].append('S_LUT_LO_START_HIGH_0')



# Register NVDLA_CDP_S_LUT_LO_END_LOW_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_LUT_LO_END_LOW_0'] = {
    'addr'            : 0xd030,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'LUT_LO_END_LOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LO_END_LOW',
    ],
} # End of register: S_LUT_LO_END_LOW_0

registers['NVDLA_CDP']['register_list'].append('S_LUT_LO_END_LOW_0')



# Register NVDLA_CDP_S_LUT_LO_END_HIGH_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_LUT_LO_END_HIGH_0'] = {
    'addr'            : 0xd034,
    'size'            : 0x6,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f,
    'write_mask'      : 0x3f,
    'LUT_LO_END_HIGH' : {
        'lsb'               : 0,
        'msb'               : 5,
        'size'              : 6,
        'field'             : (0x3f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LO_END_HIGH',
    ],
} # End of register: S_LUT_LO_END_HIGH_0

registers['NVDLA_CDP']['register_list'].append('S_LUT_LO_END_HIGH_0')



# Register NVDLA_CDP_S_LUT_LE_SLOPE_SCALE_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_LUT_LE_SLOPE_SCALE_0'] = {
    'addr'            : 0xd038,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'LUT_LE_SLOPE_UFLOW_SCALE' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'LUT_LE_SLOPE_OFLOW_SCALE' : {
        'lsb'               : 16,
        'msb'               : 31,
        'size'              : 16,
        'field'             : (0xffff << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LE_SLOPE_UFLOW_SCALE',
        'LUT_LE_SLOPE_OFLOW_SCALE',
    ],
} # End of register: S_LUT_LE_SLOPE_SCALE_0

registers['NVDLA_CDP']['register_list'].append('S_LUT_LE_SLOPE_SCALE_0')



# Register NVDLA_CDP_S_LUT_LE_SLOPE_SHIFT_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_LUT_LE_SLOPE_SHIFT_0'] = {
    'addr'            : 0xd03c,
    'size'            : 0xa,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3ff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3ff,
    'write_mask'      : 0x3ff,
    'LUT_LE_SLOPE_UFLOW_SHIFT' : {
        'lsb'               : 0,
        'msb'               : 4,
        'size'              : 5,
        'field'             : (0x1f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'LUT_LE_SLOPE_OFLOW_SHIFT' : {
        'lsb'               : 5,
        'msb'               : 9,
        'size'              : 5,
        'field'             : (0x1f << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LE_SLOPE_UFLOW_SHIFT',
        'LUT_LE_SLOPE_OFLOW_SHIFT',
    ],
} # End of register: S_LUT_LE_SLOPE_SHIFT_0

registers['NVDLA_CDP']['register_list'].append('S_LUT_LE_SLOPE_SHIFT_0')



# Register NVDLA_CDP_S_LUT_LO_SLOPE_SCALE_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_LUT_LO_SLOPE_SCALE_0'] = {
    'addr'            : 0xd040,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'LUT_LO_SLOPE_UFLOW_SCALE' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'LUT_LO_SLOPE_OFLOW_SCALE' : {
        'lsb'               : 16,
        'msb'               : 31,
        'size'              : 16,
        'field'             : (0xffff << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LO_SLOPE_UFLOW_SCALE',
        'LUT_LO_SLOPE_OFLOW_SCALE',
    ],
} # End of register: S_LUT_LO_SLOPE_SCALE_0

registers['NVDLA_CDP']['register_list'].append('S_LUT_LO_SLOPE_SCALE_0')



# Register NVDLA_CDP_S_LUT_LO_SLOPE_SHIFT_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['S_LUT_LO_SLOPE_SHIFT_0'] = {
    'addr'            : 0xd044,
    'size'            : 0xa,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3ff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3ff,
    'write_mask'      : 0x3ff,
    'LUT_LO_SLOPE_UFLOW_SHIFT' : {
        'lsb'               : 0,
        'msb'               : 4,
        'size'              : 5,
        'field'             : (0x1f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'LUT_LO_SLOPE_OFLOW_SHIFT' : {
        'lsb'               : 5,
        'msb'               : 9,
        'size'              : 5,
        'field'             : (0x1f << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'LUT_LO_SLOPE_UFLOW_SHIFT',
        'LUT_LO_SLOPE_OFLOW_SHIFT',
    ],
} # End of register: S_LUT_LO_SLOPE_SHIFT_0

registers['NVDLA_CDP']['register_list'].append('S_LUT_LO_SLOPE_SHIFT_0')



# Register NVDLA_CDP_D_OP_ENABLE_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_OP_ENABLE_0'] = {
    'addr'            : 0xd048,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'OP_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwto',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'OP_EN',
    ],
} # End of register: D_OP_ENABLE_0

registers['NVDLA_CDP']['register_list'].append('D_OP_ENABLE_0')



# Register NVDLA_CDP_D_FUNC_BYPASS_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_FUNC_BYPASS_0'] = {
    'addr'            : 0xd04c,
    'size'            : 0x2,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3,
    'write_mask'      : 0x3,
    'SQSUM_BYPASS' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'MUL_BYPASS' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SQSUM_BYPASS',
        'MUL_BYPASS',
    ],
} # End of register: D_FUNC_BYPASS_0

registers['NVDLA_CDP']['register_list'].append('D_FUNC_BYPASS_0')



# Register NVDLA_CDP_D_DST_BASE_ADDR_LOW_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_DST_BASE_ADDR_LOW_0'] = {
    'addr'            : 0xd050,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DST_BASE_ADDR_LOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DST_BASE_ADDR_LOW',
    ],
} # End of register: D_DST_BASE_ADDR_LOW_0

registers['NVDLA_CDP']['register_list'].append('D_DST_BASE_ADDR_LOW_0')



# Register NVDLA_CDP_D_DST_BASE_ADDR_HIGH_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_DST_BASE_ADDR_HIGH_0'] = {
    'addr'            : 0xd054,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DST_BASE_ADDR_HIGH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DST_BASE_ADDR_HIGH',
    ],
} # End of register: D_DST_BASE_ADDR_HIGH_0

registers['NVDLA_CDP']['register_list'].append('D_DST_BASE_ADDR_HIGH_0')



# Register NVDLA_CDP_D_DST_LINE_STRIDE_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_DST_LINE_STRIDE_0'] = {
    'addr'            : 0xd058,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DST_LINE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DST_LINE_STRIDE',
    ],
} # End of register: D_DST_LINE_STRIDE_0

registers['NVDLA_CDP']['register_list'].append('D_DST_LINE_STRIDE_0')



# Register NVDLA_CDP_D_DST_SURFACE_STRIDE_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_DST_SURFACE_STRIDE_0'] = {
    'addr'            : 0xd05c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DST_SURFACE_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DST_SURFACE_STRIDE',
    ],
} # End of register: D_DST_SURFACE_STRIDE_0

registers['NVDLA_CDP']['register_list'].append('D_DST_SURFACE_STRIDE_0')



# Register NVDLA_CDP_D_DST_DMA_CFG_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_DST_DMA_CFG_0'] = {
    'addr'            : 0xd060,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'DST_RAM_TYPE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'CV' : 0x0,
            'MC' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DST_RAM_TYPE',
    ],
} # End of register: D_DST_DMA_CFG_0

registers['NVDLA_CDP']['register_list'].append('D_DST_DMA_CFG_0')



# Register NVDLA_CDP_D_DST_COMPRESSION_EN_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_DST_COMPRESSION_EN_0'] = {
    'addr'            : 0xd064,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x0,
    'DST_COMPRESSION_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'c',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DST_COMPRESSION_EN',
    ],
} # End of register: D_DST_COMPRESSION_EN_0

registers['NVDLA_CDP']['register_list'].append('D_DST_COMPRESSION_EN_0')



# Register NVDLA_CDP_D_DATA_FORMAT_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_DATA_FORMAT_0'] = {
    'addr'            : 0xd068,
    'size'            : 0x2,
    'reset_val'       : 0x1,
    'reset_mask'      : 0x3,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3,
    'write_mask'      : 0x3,
    'INPUT_DATA_TYPE' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'INT8' : 0x0,
            'INT16' : 0x1,
            'FP16' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'INPUT_DATA_TYPE',
    ],
} # End of register: D_DATA_FORMAT_0

registers['NVDLA_CDP']['register_list'].append('D_DATA_FORMAT_0')



# Register NVDLA_CDP_D_NAN_FLUSH_TO_ZERO_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_NAN_FLUSH_TO_ZERO_0'] = {
    'addr'            : 0xd06c,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'NAN_TO_ZERO' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'NAN_TO_ZERO',
    ],
} # End of register: D_NAN_FLUSH_TO_ZERO_0

registers['NVDLA_CDP']['register_list'].append('D_NAN_FLUSH_TO_ZERO_0')



# Register NVDLA_CDP_D_LRN_CFG_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_LRN_CFG_0'] = {
    'addr'            : 0xd070,
    'size'            : 0x2,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3,
    'write_mask'      : 0x3,
    'NORMALZ_LEN' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'LEN3' : 0x0,
            'LEN5' : 0x1,
            'LEN7' : 0x2,
            'LEN9' : 0x3,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'NORMALZ_LEN',
    ],
} # End of register: D_LRN_CFG_0

registers['NVDLA_CDP']['register_list'].append('D_LRN_CFG_0')



# Register NVDLA_CDP_D_DATIN_OFFSET_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_DATIN_OFFSET_0'] = {
    'addr'            : 0xd074,
    'size'            : 0x10,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'DATIN_OFFSET' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATIN_OFFSET',
    ],
} # End of register: D_DATIN_OFFSET_0

registers['NVDLA_CDP']['register_list'].append('D_DATIN_OFFSET_0')



# Register NVDLA_CDP_D_DATIN_SCALE_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_DATIN_SCALE_0'] = {
    'addr'            : 0xd078,
    'size'            : 0x10,
    'reset_val'       : 0x1,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'DATIN_SCALE' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATIN_SCALE',
    ],
} # End of register: D_DATIN_SCALE_0

registers['NVDLA_CDP']['register_list'].append('D_DATIN_SCALE_0')



# Register NVDLA_CDP_D_DATIN_SHIFTER_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_DATIN_SHIFTER_0'] = {
    'addr'            : 0xd07c,
    'size'            : 0x5,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1f,
    'write_mask'      : 0x1f,
    'DATIN_SHIFTER' : {
        'lsb'               : 0,
        'msb'               : 4,
        'size'              : 5,
        'field'             : (0x1f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATIN_SHIFTER',
    ],
} # End of register: D_DATIN_SHIFTER_0

registers['NVDLA_CDP']['register_list'].append('D_DATIN_SHIFTER_0')



# Register NVDLA_CDP_D_DATOUT_OFFSET_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_DATOUT_OFFSET_0'] = {
    'addr'            : 0xd080,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DATOUT_OFFSET' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATOUT_OFFSET',
    ],
} # End of register: D_DATOUT_OFFSET_0

registers['NVDLA_CDP']['register_list'].append('D_DATOUT_OFFSET_0')



# Register NVDLA_CDP_D_DATOUT_SCALE_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_DATOUT_SCALE_0'] = {
    'addr'            : 0xd084,
    'size'            : 0x10,
    'reset_val'       : 0x1,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'DATOUT_SCALE' : {
        'lsb'               : 0,
        'msb'               : 15,
        'size'              : 16,
        'field'             : (0xffff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATOUT_SCALE',
    ],
} # End of register: D_DATOUT_SCALE_0

registers['NVDLA_CDP']['register_list'].append('D_DATOUT_SCALE_0')



# Register NVDLA_CDP_D_DATOUT_SHIFTER_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_DATOUT_SHIFTER_0'] = {
    'addr'            : 0xd088,
    'size'            : 0x6,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f,
    'write_mask'      : 0x3f,
    'DATOUT_SHIFTER' : {
        'lsb'               : 0,
        'msb'               : 5,
        'size'              : 6,
        'field'             : (0x3f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATOUT_SHIFTER',
    ],
} # End of register: D_DATOUT_SHIFTER_0

registers['NVDLA_CDP']['register_list'].append('D_DATOUT_SHIFTER_0')



# Register NVDLA_CDP_D_NAN_INPUT_NUM_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_NAN_INPUT_NUM_0'] = {
    'addr'            : 0xd08c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'NAN_INPUT_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'NAN_INPUT_NUM',
    ],
} # End of register: D_NAN_INPUT_NUM_0

registers['NVDLA_CDP']['register_list'].append('D_NAN_INPUT_NUM_0')



# Register NVDLA_CDP_D_INF_INPUT_NUM_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_INF_INPUT_NUM_0'] = {
    'addr'            : 0xd090,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'INF_INPUT_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'INF_INPUT_NUM',
    ],
} # End of register: D_INF_INPUT_NUM_0

registers['NVDLA_CDP']['register_list'].append('D_INF_INPUT_NUM_0')



# Register NVDLA_CDP_D_NAN_OUTPUT_NUM_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_NAN_OUTPUT_NUM_0'] = {
    'addr'            : 0xd094,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'NAN_OUTPUT_NUM' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'NAN_OUTPUT_NUM',
    ],
} # End of register: D_NAN_OUTPUT_NUM_0

registers['NVDLA_CDP']['register_list'].append('D_NAN_OUTPUT_NUM_0')



# Register NVDLA_CDP_D_OUT_SATURATION_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_OUT_SATURATION_0'] = {
    'addr'            : 0xd098,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'OUT_SATURATION' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'OUT_SATURATION',
    ],
} # End of register: D_OUT_SATURATION_0

registers['NVDLA_CDP']['register_list'].append('D_OUT_SATURATION_0')



# Register NVDLA_CDP_D_PERF_ENABLE_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_PERF_ENABLE_0'] = {
    'addr'            : 0xd09c,
    'size'            : 0x2,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3,
    'write_mask'      : 0x3,
    'DMA_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'LUT_EN' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DMA_EN',
        'LUT_EN',
    ],
} # End of register: D_PERF_ENABLE_0

registers['NVDLA_CDP']['register_list'].append('D_PERF_ENABLE_0')



# Register NVDLA_CDP_D_PERF_WRITE_STALL_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_PERF_WRITE_STALL_0'] = {
    'addr'            : 0xd0a0,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PERF_WRITE_STALL' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PERF_WRITE_STALL',
    ],
} # End of register: D_PERF_WRITE_STALL_0

registers['NVDLA_CDP']['register_list'].append('D_PERF_WRITE_STALL_0')



# Register NVDLA_CDP_D_PERF_LUT_UFLOW_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_PERF_LUT_UFLOW_0'] = {
    'addr'            : 0xd0a4,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PERF_LUT_UFLOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PERF_LUT_UFLOW',
    ],
} # End of register: D_PERF_LUT_UFLOW_0

registers['NVDLA_CDP']['register_list'].append('D_PERF_LUT_UFLOW_0')



# Register NVDLA_CDP_D_PERF_LUT_OFLOW_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_PERF_LUT_OFLOW_0'] = {
    'addr'            : 0xd0a8,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PERF_LUT_OFLOW' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PERF_LUT_OFLOW',
    ],
} # End of register: D_PERF_LUT_OFLOW_0

registers['NVDLA_CDP']['register_list'].append('D_PERF_LUT_OFLOW_0')



# Register NVDLA_CDP_D_PERF_LUT_HYBRID_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_PERF_LUT_HYBRID_0'] = {
    'addr'            : 0xd0ac,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PERF_LUT_HYBRID' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PERF_LUT_HYBRID',
    ],
} # End of register: D_PERF_LUT_HYBRID_0

registers['NVDLA_CDP']['register_list'].append('D_PERF_LUT_HYBRID_0')



# Register NVDLA_CDP_D_PERF_LUT_LE_HIT_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_PERF_LUT_LE_HIT_0'] = {
    'addr'            : 0xd0b0,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PERF_LUT_LE_HIT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PERF_LUT_LE_HIT',
    ],
} # End of register: D_PERF_LUT_LE_HIT_0

registers['NVDLA_CDP']['register_list'].append('D_PERF_LUT_LE_HIT_0')



# Register NVDLA_CDP_D_PERF_LUT_LO_HIT_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_PERF_LUT_LO_HIT_0'] = {
    'addr'            : 0xd0b4,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'PERF_LUT_LO_HIT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PERF_LUT_LO_HIT',
    ],
} # End of register: D_PERF_LUT_LO_HIT_0

registers['NVDLA_CDP']['register_list'].append('D_PERF_LUT_LO_HIT_0')



# Register NVDLA_CDP_D_CYA_0
if 'NVDLA_CDP' not in registers:
    registers['NVDLA_CDP'] = {}
    registers['NVDLA_CDP']['register_list']  = []

registers['NVDLA_CDP']['D_CYA_0'] = {
    'addr'            : 0xd0b8,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'CYA' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CYA',
    ],
} # End of register: D_CYA_0

registers['NVDLA_CDP']['register_list'].append('D_CYA_0')



# Register NVDLA_GEC_FEATURE_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['FEATURE_0'] = {
    'addr'            : 0xe000,
    'size'            : 0x20,
    'reset_val'       : 0x430003,
    'reset_mask'      : 0xffff003f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff003f,
    'write_mask'      : 0x0,
    'NUM_ERR_SLICES' : {
        'lsb'               : 0,
        'msb'               : 5,
        'size'              : 6,
        'field'             : (0x3f << 0),
        'default'           : 0x3,
        'sw_default'        : 0x0,
        'action'            : 'c',
        'enums' : {
        },
    },
    'NUM_ERR' : {
        'lsb'               : 16,
        'msb'               : 31,
        'size'              : 16,
        'field'             : (0xffff << 16),
        'default'           : 0x43,
        'sw_default'        : 0x0,
        'action'            : 'c',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'NUM_ERR_SLICES',
        'NUM_ERR',
    ],
} # End of register: FEATURE_0

registers['NVDLA_GEC']['register_list'].append('FEATURE_0')



# Register NVDLA_GEC_SWRESET_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['SWRESET_0'] = {
    'addr'            : 0xe004,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x0,
    'write_mask'      : 0x1,
    'SWRST' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SWRST',
    ],
} # End of register: SWRESET_0

registers['NVDLA_GEC']['register_list'].append('SWRESET_0')



# Register NVDLA_GEC_MISSIONERR_TYPE_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['MISSIONERR_TYPE_0'] = {
    'addr'            : 0xe008,
    'size'            : 0x6,
    'reset_val'       : 0x5,
    'reset_mask'      : 0x3f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3f,
    'write_mask'      : 0x0,
    'CODE' : {
        'lsb'               : 0,
        'msb'               : 5,
        'size'              : 6,
        'field'             : (0x3f << 0),
        'default'           : 0x5,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CODE',
    ],
} # End of register: MISSIONERR_TYPE_0

registers['NVDLA_GEC']['register_list'].append('MISSIONERR_TYPE_0')



# Register NVDLA_GEC_CURRENT_COUNTER_VALUE_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['CURRENT_COUNTER_VALUE_0'] = {
    'addr'            : 0xe00c,
    'size'            : 0x9,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1ff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1ff,
    'write_mask'      : 0x0,
    'VALUE' : {
        'lsb'               : 0,
        'msb'               : 8,
        'size'              : 9,
        'field'             : (0x1ff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'VALUE',
    ],
} # End of register: CURRENT_COUNTER_VALUE_0

registers['NVDLA_GEC']['register_list'].append('CURRENT_COUNTER_VALUE_0')



# Register NVDLA_GEC_MISSIONERR_INDEX_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['MISSIONERR_INDEX_0'] = {
    'addr'            : 0xe014,
    'size'            : 0x7,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x7f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x7f,
    'write_mask'      : 0x7f,
    'IDX' : {
        'lsb'               : 0,
        'msb'               : 6,
        'size'              : 7,
        'field'             : (0x7f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'IDX',
    ],
} # End of register: MISSIONERR_INDEX_0

registers['NVDLA_GEC']['register_list'].append('MISSIONERR_INDEX_0')



# Register NVDLA_GEC_CORRECTABLE_THRESHOLD_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['CORRECTABLE_THRESHOLD_0'] = {
    'addr'            : 0xe018,
    'size'            : 0x8,
    'reset_val'       : 0xff,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xff,
    'write_mask'      : 0xff,
    'COUNT' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0xff,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'COUNT',
    ],
} # End of register: CORRECTABLE_THRESHOLD_0

registers['NVDLA_GEC']['register_list'].append('CORRECTABLE_THRESHOLD_0')



# Register NVDLA_GEC_MISSIONERR_INJECT_UNLOCK_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['MISSIONERR_INJECT_UNLOCK_0'] = {
    'addr'            : 0xe01c,
    'size'            : 0x8,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xff,
    'write_mask'      : 0xff,
    'VALUE' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'LOCK' : 0x0,
            'UNLOCK' : 0xe1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'VALUE',
    ],
} # End of register: MISSIONERR_INJECT_UNLOCK_0

registers['NVDLA_GEC']['register_list'].append('MISSIONERR_INJECT_UNLOCK_0')



# Register NVDLA_GEC_ERRSLICE0_MISSIONERR_ENABLE_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE0_MISSIONERR_ENABLE_0'] = {
    'addr'            : 0xe030,
    'size'            : 0x20,
    'reset_val'       : 0xffffffff,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'ERR0' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR1' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR2' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR3' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR4' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR5' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR6' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR7' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR8' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR9' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR10' : {
        'lsb'               : 10,
        'msb'               : 10,
        'size'              : 1,
        'field'             : (0x1 << 10),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR11' : {
        'lsb'               : 11,
        'msb'               : 11,
        'size'              : 1,
        'field'             : (0x1 << 11),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR12' : {
        'lsb'               : 12,
        'msb'               : 12,
        'size'              : 1,
        'field'             : (0x1 << 12),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR13' : {
        'lsb'               : 13,
        'msb'               : 13,
        'size'              : 1,
        'field'             : (0x1 << 13),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR14' : {
        'lsb'               : 14,
        'msb'               : 14,
        'size'              : 1,
        'field'             : (0x1 << 14),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR15' : {
        'lsb'               : 15,
        'msb'               : 15,
        'size'              : 1,
        'field'             : (0x1 << 15),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR16' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR17' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR18' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR19' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR20' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR21' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR22' : {
        'lsb'               : 22,
        'msb'               : 22,
        'size'              : 1,
        'field'             : (0x1 << 22),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR23' : {
        'lsb'               : 23,
        'msb'               : 23,
        'size'              : 1,
        'field'             : (0x1 << 23),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR24' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR25' : {
        'lsb'               : 25,
        'msb'               : 25,
        'size'              : 1,
        'field'             : (0x1 << 25),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR26' : {
        'lsb'               : 26,
        'msb'               : 26,
        'size'              : 1,
        'field'             : (0x1 << 26),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR27' : {
        'lsb'               : 27,
        'msb'               : 27,
        'size'              : 1,
        'field'             : (0x1 << 27),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR28' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR29' : {
        'lsb'               : 29,
        'msb'               : 29,
        'size'              : 1,
        'field'             : (0x1 << 29),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR30' : {
        'lsb'               : 30,
        'msb'               : 30,
        'size'              : 1,
        'field'             : (0x1 << 30),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR31' : {
        'lsb'               : 31,
        'msb'               : 31,
        'size'              : 1,
        'field'             : (0x1 << 31),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR0',
        'ERR1',
        'ERR2',
        'ERR3',
        'ERR4',
        'ERR5',
        'ERR6',
        'ERR7',
        'ERR8',
        'ERR9',
        'ERR10',
        'ERR11',
        'ERR12',
        'ERR13',
        'ERR14',
        'ERR15',
        'ERR16',
        'ERR17',
        'ERR18',
        'ERR19',
        'ERR20',
        'ERR21',
        'ERR22',
        'ERR23',
        'ERR24',
        'ERR25',
        'ERR26',
        'ERR27',
        'ERR28',
        'ERR29',
        'ERR30',
        'ERR31',
    ],
} # End of register: ERRSLICE0_MISSIONERR_ENABLE_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE0_MISSIONERR_ENABLE_0')



# Register NVDLA_GEC_ERRSLICE0_MISSIONERR_FORCE_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE0_MISSIONERR_FORCE_0'] = {
    'addr'            : 0xe034,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x0,
    'write_mask'      : 0xffffffff,
    'ERR0' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR1' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR2' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR3' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR4' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR5' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR6' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR7' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR8' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR9' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR10' : {
        'lsb'               : 10,
        'msb'               : 10,
        'size'              : 1,
        'field'             : (0x1 << 10),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR11' : {
        'lsb'               : 11,
        'msb'               : 11,
        'size'              : 1,
        'field'             : (0x1 << 11),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR12' : {
        'lsb'               : 12,
        'msb'               : 12,
        'size'              : 1,
        'field'             : (0x1 << 12),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR13' : {
        'lsb'               : 13,
        'msb'               : 13,
        'size'              : 1,
        'field'             : (0x1 << 13),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR14' : {
        'lsb'               : 14,
        'msb'               : 14,
        'size'              : 1,
        'field'             : (0x1 << 14),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR15' : {
        'lsb'               : 15,
        'msb'               : 15,
        'size'              : 1,
        'field'             : (0x1 << 15),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR16' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR17' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR18' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR19' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR20' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR21' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR22' : {
        'lsb'               : 22,
        'msb'               : 22,
        'size'              : 1,
        'field'             : (0x1 << 22),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR23' : {
        'lsb'               : 23,
        'msb'               : 23,
        'size'              : 1,
        'field'             : (0x1 << 23),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR24' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR25' : {
        'lsb'               : 25,
        'msb'               : 25,
        'size'              : 1,
        'field'             : (0x1 << 25),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR26' : {
        'lsb'               : 26,
        'msb'               : 26,
        'size'              : 1,
        'field'             : (0x1 << 26),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR27' : {
        'lsb'               : 27,
        'msb'               : 27,
        'size'              : 1,
        'field'             : (0x1 << 27),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR28' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR29' : {
        'lsb'               : 29,
        'msb'               : 29,
        'size'              : 1,
        'field'             : (0x1 << 29),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR30' : {
        'lsb'               : 30,
        'msb'               : 30,
        'size'              : 1,
        'field'             : (0x1 << 30),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR31' : {
        'lsb'               : 31,
        'msb'               : 31,
        'size'              : 1,
        'field'             : (0x1 << 31),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR0',
        'ERR1',
        'ERR2',
        'ERR3',
        'ERR4',
        'ERR5',
        'ERR6',
        'ERR7',
        'ERR8',
        'ERR9',
        'ERR10',
        'ERR11',
        'ERR12',
        'ERR13',
        'ERR14',
        'ERR15',
        'ERR16',
        'ERR17',
        'ERR18',
        'ERR19',
        'ERR20',
        'ERR21',
        'ERR22',
        'ERR23',
        'ERR24',
        'ERR25',
        'ERR26',
        'ERR27',
        'ERR28',
        'ERR29',
        'ERR30',
        'ERR31',
    ],
} # End of register: ERRSLICE0_MISSIONERR_FORCE_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE0_MISSIONERR_FORCE_0')



# Register NVDLA_GEC_ERRSLICE0_MISSIONERR_STATUS_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE0_MISSIONERR_STATUS_0'] = {
    'addr'            : 0xe038,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'ERR0' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR1' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR2' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR3' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR4' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR5' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR6' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR7' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR8' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR9' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR10' : {
        'lsb'               : 10,
        'msb'               : 10,
        'size'              : 1,
        'field'             : (0x1 << 10),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR11' : {
        'lsb'               : 11,
        'msb'               : 11,
        'size'              : 1,
        'field'             : (0x1 << 11),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR12' : {
        'lsb'               : 12,
        'msb'               : 12,
        'size'              : 1,
        'field'             : (0x1 << 12),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR13' : {
        'lsb'               : 13,
        'msb'               : 13,
        'size'              : 1,
        'field'             : (0x1 << 13),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR14' : {
        'lsb'               : 14,
        'msb'               : 14,
        'size'              : 1,
        'field'             : (0x1 << 14),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR15' : {
        'lsb'               : 15,
        'msb'               : 15,
        'size'              : 1,
        'field'             : (0x1 << 15),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR16' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR17' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR18' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR19' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR20' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR21' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR22' : {
        'lsb'               : 22,
        'msb'               : 22,
        'size'              : 1,
        'field'             : (0x1 << 22),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR23' : {
        'lsb'               : 23,
        'msb'               : 23,
        'size'              : 1,
        'field'             : (0x1 << 23),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR24' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR25' : {
        'lsb'               : 25,
        'msb'               : 25,
        'size'              : 1,
        'field'             : (0x1 << 25),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR26' : {
        'lsb'               : 26,
        'msb'               : 26,
        'size'              : 1,
        'field'             : (0x1 << 26),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR27' : {
        'lsb'               : 27,
        'msb'               : 27,
        'size'              : 1,
        'field'             : (0x1 << 27),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR28' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR29' : {
        'lsb'               : 29,
        'msb'               : 29,
        'size'              : 1,
        'field'             : (0x1 << 29),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR30' : {
        'lsb'               : 30,
        'msb'               : 30,
        'size'              : 1,
        'field'             : (0x1 << 30),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR31' : {
        'lsb'               : 31,
        'msb'               : 31,
        'size'              : 1,
        'field'             : (0x1 << 31),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR0',
        'ERR1',
        'ERR2',
        'ERR3',
        'ERR4',
        'ERR5',
        'ERR6',
        'ERR7',
        'ERR8',
        'ERR9',
        'ERR10',
        'ERR11',
        'ERR12',
        'ERR13',
        'ERR14',
        'ERR15',
        'ERR16',
        'ERR17',
        'ERR18',
        'ERR19',
        'ERR20',
        'ERR21',
        'ERR22',
        'ERR23',
        'ERR24',
        'ERR25',
        'ERR26',
        'ERR27',
        'ERR28',
        'ERR29',
        'ERR30',
        'ERR31',
    ],
} # End of register: ERRSLICE0_MISSIONERR_STATUS_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE0_MISSIONERR_STATUS_0')



# Register NVDLA_GEC_ERRSLICE0_MISSIONERR_INJECT_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE0_MISSIONERR_INJECT_0'] = {
    'addr'            : 0xe03c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffff81ff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff81ff,
    'write_mask'      : 0xffff81ff,
    'ERR0' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR1' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR2' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR3' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR4' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR5' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR6' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR7' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR8' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR15' : {
        'lsb'               : 15,
        'msb'               : 15,
        'size'              : 1,
        'field'             : (0x1 << 15),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR16' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR17' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR18' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR19' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR20' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR21' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR22' : {
        'lsb'               : 22,
        'msb'               : 22,
        'size'              : 1,
        'field'             : (0x1 << 22),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR23' : {
        'lsb'               : 23,
        'msb'               : 23,
        'size'              : 1,
        'field'             : (0x1 << 23),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR24' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR25' : {
        'lsb'               : 25,
        'msb'               : 25,
        'size'              : 1,
        'field'             : (0x1 << 25),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR26' : {
        'lsb'               : 26,
        'msb'               : 26,
        'size'              : 1,
        'field'             : (0x1 << 26),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR27' : {
        'lsb'               : 27,
        'msb'               : 27,
        'size'              : 1,
        'field'             : (0x1 << 27),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR28' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR29' : {
        'lsb'               : 29,
        'msb'               : 29,
        'size'              : 1,
        'field'             : (0x1 << 29),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR30' : {
        'lsb'               : 30,
        'msb'               : 30,
        'size'              : 1,
        'field'             : (0x1 << 30),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR31' : {
        'lsb'               : 31,
        'msb'               : 31,
        'size'              : 1,
        'field'             : (0x1 << 31),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR0',
        'ERR1',
        'ERR2',
        'ERR3',
        'ERR4',
        'ERR5',
        'ERR6',
        'ERR7',
        'ERR8',
        'ERR15',
        'ERR16',
        'ERR17',
        'ERR18',
        'ERR19',
        'ERR20',
        'ERR21',
        'ERR22',
        'ERR23',
        'ERR24',
        'ERR25',
        'ERR26',
        'ERR27',
        'ERR28',
        'ERR29',
        'ERR30',
        'ERR31',
    ],
} # End of register: ERRSLICE0_MISSIONERR_INJECT_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE0_MISSIONERR_INJECT_0')



# Register NVDLA_GEC_ERRSLICE0_LATENTERR_ENABLE_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE0_LATENTERR_ENABLE_0'] = {
    'addr'            : 0xe040,
    'size'            : 0x20,
    'reset_val'       : 0xffffffff,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'ERR0' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR1' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR2' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR3' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR4' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR5' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR6' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR7' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR8' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR9' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR10' : {
        'lsb'               : 10,
        'msb'               : 10,
        'size'              : 1,
        'field'             : (0x1 << 10),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR11' : {
        'lsb'               : 11,
        'msb'               : 11,
        'size'              : 1,
        'field'             : (0x1 << 11),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR12' : {
        'lsb'               : 12,
        'msb'               : 12,
        'size'              : 1,
        'field'             : (0x1 << 12),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR13' : {
        'lsb'               : 13,
        'msb'               : 13,
        'size'              : 1,
        'field'             : (0x1 << 13),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR14' : {
        'lsb'               : 14,
        'msb'               : 14,
        'size'              : 1,
        'field'             : (0x1 << 14),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR15' : {
        'lsb'               : 15,
        'msb'               : 15,
        'size'              : 1,
        'field'             : (0x1 << 15),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR16' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR17' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR18' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR19' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR20' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR21' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR22' : {
        'lsb'               : 22,
        'msb'               : 22,
        'size'              : 1,
        'field'             : (0x1 << 22),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR23' : {
        'lsb'               : 23,
        'msb'               : 23,
        'size'              : 1,
        'field'             : (0x1 << 23),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR24' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR25' : {
        'lsb'               : 25,
        'msb'               : 25,
        'size'              : 1,
        'field'             : (0x1 << 25),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR26' : {
        'lsb'               : 26,
        'msb'               : 26,
        'size'              : 1,
        'field'             : (0x1 << 26),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR27' : {
        'lsb'               : 27,
        'msb'               : 27,
        'size'              : 1,
        'field'             : (0x1 << 27),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR28' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR29' : {
        'lsb'               : 29,
        'msb'               : 29,
        'size'              : 1,
        'field'             : (0x1 << 29),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR30' : {
        'lsb'               : 30,
        'msb'               : 30,
        'size'              : 1,
        'field'             : (0x1 << 30),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR31' : {
        'lsb'               : 31,
        'msb'               : 31,
        'size'              : 1,
        'field'             : (0x1 << 31),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR0',
        'ERR1',
        'ERR2',
        'ERR3',
        'ERR4',
        'ERR5',
        'ERR6',
        'ERR7',
        'ERR8',
        'ERR9',
        'ERR10',
        'ERR11',
        'ERR12',
        'ERR13',
        'ERR14',
        'ERR15',
        'ERR16',
        'ERR17',
        'ERR18',
        'ERR19',
        'ERR20',
        'ERR21',
        'ERR22',
        'ERR23',
        'ERR24',
        'ERR25',
        'ERR26',
        'ERR27',
        'ERR28',
        'ERR29',
        'ERR30',
        'ERR31',
    ],
} # End of register: ERRSLICE0_LATENTERR_ENABLE_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE0_LATENTERR_ENABLE_0')



# Register NVDLA_GEC_ERRSLICE0_LATENTERR_FORCE_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE0_LATENTERR_FORCE_0'] = {
    'addr'            : 0xe044,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x0,
    'write_mask'      : 0xffffffff,
    'ERR0' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR1' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR2' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR3' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR4' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR5' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR6' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR7' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR8' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR9' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR10' : {
        'lsb'               : 10,
        'msb'               : 10,
        'size'              : 1,
        'field'             : (0x1 << 10),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR11' : {
        'lsb'               : 11,
        'msb'               : 11,
        'size'              : 1,
        'field'             : (0x1 << 11),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR12' : {
        'lsb'               : 12,
        'msb'               : 12,
        'size'              : 1,
        'field'             : (0x1 << 12),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR13' : {
        'lsb'               : 13,
        'msb'               : 13,
        'size'              : 1,
        'field'             : (0x1 << 13),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR14' : {
        'lsb'               : 14,
        'msb'               : 14,
        'size'              : 1,
        'field'             : (0x1 << 14),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR15' : {
        'lsb'               : 15,
        'msb'               : 15,
        'size'              : 1,
        'field'             : (0x1 << 15),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR16' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR17' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR18' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR19' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR20' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR21' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR22' : {
        'lsb'               : 22,
        'msb'               : 22,
        'size'              : 1,
        'field'             : (0x1 << 22),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR23' : {
        'lsb'               : 23,
        'msb'               : 23,
        'size'              : 1,
        'field'             : (0x1 << 23),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR24' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR25' : {
        'lsb'               : 25,
        'msb'               : 25,
        'size'              : 1,
        'field'             : (0x1 << 25),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR26' : {
        'lsb'               : 26,
        'msb'               : 26,
        'size'              : 1,
        'field'             : (0x1 << 26),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR27' : {
        'lsb'               : 27,
        'msb'               : 27,
        'size'              : 1,
        'field'             : (0x1 << 27),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR28' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR29' : {
        'lsb'               : 29,
        'msb'               : 29,
        'size'              : 1,
        'field'             : (0x1 << 29),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR30' : {
        'lsb'               : 30,
        'msb'               : 30,
        'size'              : 1,
        'field'             : (0x1 << 30),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR31' : {
        'lsb'               : 31,
        'msb'               : 31,
        'size'              : 1,
        'field'             : (0x1 << 31),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR0',
        'ERR1',
        'ERR2',
        'ERR3',
        'ERR4',
        'ERR5',
        'ERR6',
        'ERR7',
        'ERR8',
        'ERR9',
        'ERR10',
        'ERR11',
        'ERR12',
        'ERR13',
        'ERR14',
        'ERR15',
        'ERR16',
        'ERR17',
        'ERR18',
        'ERR19',
        'ERR20',
        'ERR21',
        'ERR22',
        'ERR23',
        'ERR24',
        'ERR25',
        'ERR26',
        'ERR27',
        'ERR28',
        'ERR29',
        'ERR30',
        'ERR31',
    ],
} # End of register: ERRSLICE0_LATENTERR_FORCE_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE0_LATENTERR_FORCE_0')



# Register NVDLA_GEC_ERRSLICE0_LATENTERR_STATUS_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE0_LATENTERR_STATUS_0'] = {
    'addr'            : 0xe048,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'ERR0' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR1' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR2' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR3' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR4' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR5' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR6' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR7' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR8' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR9' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR10' : {
        'lsb'               : 10,
        'msb'               : 10,
        'size'              : 1,
        'field'             : (0x1 << 10),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR11' : {
        'lsb'               : 11,
        'msb'               : 11,
        'size'              : 1,
        'field'             : (0x1 << 11),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR12' : {
        'lsb'               : 12,
        'msb'               : 12,
        'size'              : 1,
        'field'             : (0x1 << 12),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR13' : {
        'lsb'               : 13,
        'msb'               : 13,
        'size'              : 1,
        'field'             : (0x1 << 13),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR14' : {
        'lsb'               : 14,
        'msb'               : 14,
        'size'              : 1,
        'field'             : (0x1 << 14),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR15' : {
        'lsb'               : 15,
        'msb'               : 15,
        'size'              : 1,
        'field'             : (0x1 << 15),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR16' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR17' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR18' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR19' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR20' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR21' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR22' : {
        'lsb'               : 22,
        'msb'               : 22,
        'size'              : 1,
        'field'             : (0x1 << 22),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR23' : {
        'lsb'               : 23,
        'msb'               : 23,
        'size'              : 1,
        'field'             : (0x1 << 23),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR24' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR25' : {
        'lsb'               : 25,
        'msb'               : 25,
        'size'              : 1,
        'field'             : (0x1 << 25),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR26' : {
        'lsb'               : 26,
        'msb'               : 26,
        'size'              : 1,
        'field'             : (0x1 << 26),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR27' : {
        'lsb'               : 27,
        'msb'               : 27,
        'size'              : 1,
        'field'             : (0x1 << 27),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR28' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR29' : {
        'lsb'               : 29,
        'msb'               : 29,
        'size'              : 1,
        'field'             : (0x1 << 29),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR30' : {
        'lsb'               : 30,
        'msb'               : 30,
        'size'              : 1,
        'field'             : (0x1 << 30),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR31' : {
        'lsb'               : 31,
        'msb'               : 31,
        'size'              : 1,
        'field'             : (0x1 << 31),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR0',
        'ERR1',
        'ERR2',
        'ERR3',
        'ERR4',
        'ERR5',
        'ERR6',
        'ERR7',
        'ERR8',
        'ERR9',
        'ERR10',
        'ERR11',
        'ERR12',
        'ERR13',
        'ERR14',
        'ERR15',
        'ERR16',
        'ERR17',
        'ERR18',
        'ERR19',
        'ERR20',
        'ERR21',
        'ERR22',
        'ERR23',
        'ERR24',
        'ERR25',
        'ERR26',
        'ERR27',
        'ERR28',
        'ERR29',
        'ERR30',
        'ERR31',
    ],
} # End of register: ERRSLICE0_LATENTERR_STATUS_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE0_LATENTERR_STATUS_0')



# Register NVDLA_GEC_ERRSLICE0_COUNTER_RELOAD_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE0_COUNTER_RELOAD_0'] = {
    'addr'            : 0xe050,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x0,
    'write_mask'      : 0xffffffff,
    'ERR0' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR1' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR2' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR3' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR4' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR5' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR6' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR7' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR8' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR9' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR10' : {
        'lsb'               : 10,
        'msb'               : 10,
        'size'              : 1,
        'field'             : (0x1 << 10),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR11' : {
        'lsb'               : 11,
        'msb'               : 11,
        'size'              : 1,
        'field'             : (0x1 << 11),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR12' : {
        'lsb'               : 12,
        'msb'               : 12,
        'size'              : 1,
        'field'             : (0x1 << 12),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR13' : {
        'lsb'               : 13,
        'msb'               : 13,
        'size'              : 1,
        'field'             : (0x1 << 13),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR14' : {
        'lsb'               : 14,
        'msb'               : 14,
        'size'              : 1,
        'field'             : (0x1 << 14),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR15' : {
        'lsb'               : 15,
        'msb'               : 15,
        'size'              : 1,
        'field'             : (0x1 << 15),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR16' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR17' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR18' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR19' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR20' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR21' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR22' : {
        'lsb'               : 22,
        'msb'               : 22,
        'size'              : 1,
        'field'             : (0x1 << 22),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR23' : {
        'lsb'               : 23,
        'msb'               : 23,
        'size'              : 1,
        'field'             : (0x1 << 23),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR24' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR25' : {
        'lsb'               : 25,
        'msb'               : 25,
        'size'              : 1,
        'field'             : (0x1 << 25),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR26' : {
        'lsb'               : 26,
        'msb'               : 26,
        'size'              : 1,
        'field'             : (0x1 << 26),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR27' : {
        'lsb'               : 27,
        'msb'               : 27,
        'size'              : 1,
        'field'             : (0x1 << 27),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR28' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR29' : {
        'lsb'               : 29,
        'msb'               : 29,
        'size'              : 1,
        'field'             : (0x1 << 29),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR30' : {
        'lsb'               : 30,
        'msb'               : 30,
        'size'              : 1,
        'field'             : (0x1 << 30),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR31' : {
        'lsb'               : 31,
        'msb'               : 31,
        'size'              : 1,
        'field'             : (0x1 << 31),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR0',
        'ERR1',
        'ERR2',
        'ERR3',
        'ERR4',
        'ERR5',
        'ERR6',
        'ERR7',
        'ERR8',
        'ERR9',
        'ERR10',
        'ERR11',
        'ERR12',
        'ERR13',
        'ERR14',
        'ERR15',
        'ERR16',
        'ERR17',
        'ERR18',
        'ERR19',
        'ERR20',
        'ERR21',
        'ERR22',
        'ERR23',
        'ERR24',
        'ERR25',
        'ERR26',
        'ERR27',
        'ERR28',
        'ERR29',
        'ERR30',
        'ERR31',
    ],
} # End of register: ERRSLICE0_COUNTER_RELOAD_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE0_COUNTER_RELOAD_0')



# Register NVDLA_GEC_ERRSLICE1_MISSIONERR_ENABLE_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE1_MISSIONERR_ENABLE_0'] = {
    'addr'            : 0xe060,
    'size'            : 0x20,
    'reset_val'       : 0xffffffff,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'ERR32' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR33' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR34' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR35' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR36' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR37' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR38' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR39' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR40' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR41' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR42' : {
        'lsb'               : 10,
        'msb'               : 10,
        'size'              : 1,
        'field'             : (0x1 << 10),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR43' : {
        'lsb'               : 11,
        'msb'               : 11,
        'size'              : 1,
        'field'             : (0x1 << 11),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR44' : {
        'lsb'               : 12,
        'msb'               : 12,
        'size'              : 1,
        'field'             : (0x1 << 12),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR45' : {
        'lsb'               : 13,
        'msb'               : 13,
        'size'              : 1,
        'field'             : (0x1 << 13),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR46' : {
        'lsb'               : 14,
        'msb'               : 14,
        'size'              : 1,
        'field'             : (0x1 << 14),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR47' : {
        'lsb'               : 15,
        'msb'               : 15,
        'size'              : 1,
        'field'             : (0x1 << 15),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR48' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR49' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR50' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR51' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR52' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR53' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR54' : {
        'lsb'               : 22,
        'msb'               : 22,
        'size'              : 1,
        'field'             : (0x1 << 22),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR55' : {
        'lsb'               : 23,
        'msb'               : 23,
        'size'              : 1,
        'field'             : (0x1 << 23),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR56' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR57' : {
        'lsb'               : 25,
        'msb'               : 25,
        'size'              : 1,
        'field'             : (0x1 << 25),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR58' : {
        'lsb'               : 26,
        'msb'               : 26,
        'size'              : 1,
        'field'             : (0x1 << 26),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR59' : {
        'lsb'               : 27,
        'msb'               : 27,
        'size'              : 1,
        'field'             : (0x1 << 27),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR60' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR61' : {
        'lsb'               : 29,
        'msb'               : 29,
        'size'              : 1,
        'field'             : (0x1 << 29),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR62' : {
        'lsb'               : 30,
        'msb'               : 30,
        'size'              : 1,
        'field'             : (0x1 << 30),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR63' : {
        'lsb'               : 31,
        'msb'               : 31,
        'size'              : 1,
        'field'             : (0x1 << 31),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR32',
        'ERR33',
        'ERR34',
        'ERR35',
        'ERR36',
        'ERR37',
        'ERR38',
        'ERR39',
        'ERR40',
        'ERR41',
        'ERR42',
        'ERR43',
        'ERR44',
        'ERR45',
        'ERR46',
        'ERR47',
        'ERR48',
        'ERR49',
        'ERR50',
        'ERR51',
        'ERR52',
        'ERR53',
        'ERR54',
        'ERR55',
        'ERR56',
        'ERR57',
        'ERR58',
        'ERR59',
        'ERR60',
        'ERR61',
        'ERR62',
        'ERR63',
    ],
} # End of register: ERRSLICE1_MISSIONERR_ENABLE_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE1_MISSIONERR_ENABLE_0')



# Register NVDLA_GEC_ERRSLICE1_MISSIONERR_FORCE_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE1_MISSIONERR_FORCE_0'] = {
    'addr'            : 0xe064,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x0,
    'write_mask'      : 0xffffffff,
    'ERR32' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR33' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR34' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR35' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR36' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR37' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR38' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR39' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR40' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR41' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR42' : {
        'lsb'               : 10,
        'msb'               : 10,
        'size'              : 1,
        'field'             : (0x1 << 10),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR43' : {
        'lsb'               : 11,
        'msb'               : 11,
        'size'              : 1,
        'field'             : (0x1 << 11),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR44' : {
        'lsb'               : 12,
        'msb'               : 12,
        'size'              : 1,
        'field'             : (0x1 << 12),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR45' : {
        'lsb'               : 13,
        'msb'               : 13,
        'size'              : 1,
        'field'             : (0x1 << 13),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR46' : {
        'lsb'               : 14,
        'msb'               : 14,
        'size'              : 1,
        'field'             : (0x1 << 14),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR47' : {
        'lsb'               : 15,
        'msb'               : 15,
        'size'              : 1,
        'field'             : (0x1 << 15),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR48' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR49' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR50' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR51' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR52' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR53' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR54' : {
        'lsb'               : 22,
        'msb'               : 22,
        'size'              : 1,
        'field'             : (0x1 << 22),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR55' : {
        'lsb'               : 23,
        'msb'               : 23,
        'size'              : 1,
        'field'             : (0x1 << 23),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR56' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR57' : {
        'lsb'               : 25,
        'msb'               : 25,
        'size'              : 1,
        'field'             : (0x1 << 25),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR58' : {
        'lsb'               : 26,
        'msb'               : 26,
        'size'              : 1,
        'field'             : (0x1 << 26),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR59' : {
        'lsb'               : 27,
        'msb'               : 27,
        'size'              : 1,
        'field'             : (0x1 << 27),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR60' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR61' : {
        'lsb'               : 29,
        'msb'               : 29,
        'size'              : 1,
        'field'             : (0x1 << 29),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR62' : {
        'lsb'               : 30,
        'msb'               : 30,
        'size'              : 1,
        'field'             : (0x1 << 30),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR63' : {
        'lsb'               : 31,
        'msb'               : 31,
        'size'              : 1,
        'field'             : (0x1 << 31),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR32',
        'ERR33',
        'ERR34',
        'ERR35',
        'ERR36',
        'ERR37',
        'ERR38',
        'ERR39',
        'ERR40',
        'ERR41',
        'ERR42',
        'ERR43',
        'ERR44',
        'ERR45',
        'ERR46',
        'ERR47',
        'ERR48',
        'ERR49',
        'ERR50',
        'ERR51',
        'ERR52',
        'ERR53',
        'ERR54',
        'ERR55',
        'ERR56',
        'ERR57',
        'ERR58',
        'ERR59',
        'ERR60',
        'ERR61',
        'ERR62',
        'ERR63',
    ],
} # End of register: ERRSLICE1_MISSIONERR_FORCE_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE1_MISSIONERR_FORCE_0')



# Register NVDLA_GEC_ERRSLICE1_MISSIONERR_STATUS_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE1_MISSIONERR_STATUS_0'] = {
    'addr'            : 0xe068,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'ERR32' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR33' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR34' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR35' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR36' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR37' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR38' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR39' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR40' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR41' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR42' : {
        'lsb'               : 10,
        'msb'               : 10,
        'size'              : 1,
        'field'             : (0x1 << 10),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR43' : {
        'lsb'               : 11,
        'msb'               : 11,
        'size'              : 1,
        'field'             : (0x1 << 11),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR44' : {
        'lsb'               : 12,
        'msb'               : 12,
        'size'              : 1,
        'field'             : (0x1 << 12),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR45' : {
        'lsb'               : 13,
        'msb'               : 13,
        'size'              : 1,
        'field'             : (0x1 << 13),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR46' : {
        'lsb'               : 14,
        'msb'               : 14,
        'size'              : 1,
        'field'             : (0x1 << 14),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR47' : {
        'lsb'               : 15,
        'msb'               : 15,
        'size'              : 1,
        'field'             : (0x1 << 15),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR48' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR49' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR50' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR51' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR52' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR53' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR54' : {
        'lsb'               : 22,
        'msb'               : 22,
        'size'              : 1,
        'field'             : (0x1 << 22),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR55' : {
        'lsb'               : 23,
        'msb'               : 23,
        'size'              : 1,
        'field'             : (0x1 << 23),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR56' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR57' : {
        'lsb'               : 25,
        'msb'               : 25,
        'size'              : 1,
        'field'             : (0x1 << 25),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR58' : {
        'lsb'               : 26,
        'msb'               : 26,
        'size'              : 1,
        'field'             : (0x1 << 26),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR59' : {
        'lsb'               : 27,
        'msb'               : 27,
        'size'              : 1,
        'field'             : (0x1 << 27),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR60' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR61' : {
        'lsb'               : 29,
        'msb'               : 29,
        'size'              : 1,
        'field'             : (0x1 << 29),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR62' : {
        'lsb'               : 30,
        'msb'               : 30,
        'size'              : 1,
        'field'             : (0x1 << 30),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR63' : {
        'lsb'               : 31,
        'msb'               : 31,
        'size'              : 1,
        'field'             : (0x1 << 31),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR32',
        'ERR33',
        'ERR34',
        'ERR35',
        'ERR36',
        'ERR37',
        'ERR38',
        'ERR39',
        'ERR40',
        'ERR41',
        'ERR42',
        'ERR43',
        'ERR44',
        'ERR45',
        'ERR46',
        'ERR47',
        'ERR48',
        'ERR49',
        'ERR50',
        'ERR51',
        'ERR52',
        'ERR53',
        'ERR54',
        'ERR55',
        'ERR56',
        'ERR57',
        'ERR58',
        'ERR59',
        'ERR60',
        'ERR61',
        'ERR62',
        'ERR63',
    ],
} # End of register: ERRSLICE1_MISSIONERR_STATUS_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE1_MISSIONERR_STATUS_0')



# Register NVDLA_GEC_ERRSLICE1_MISSIONERR_INJECT_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE1_MISSIONERR_INJECT_0'] = {
    'addr'            : 0xe06c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'ERR32' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR33' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR34' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR35' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR36' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR37' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR38' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR39' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR40' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR41' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR42' : {
        'lsb'               : 10,
        'msb'               : 10,
        'size'              : 1,
        'field'             : (0x1 << 10),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR43' : {
        'lsb'               : 11,
        'msb'               : 11,
        'size'              : 1,
        'field'             : (0x1 << 11),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR44' : {
        'lsb'               : 12,
        'msb'               : 12,
        'size'              : 1,
        'field'             : (0x1 << 12),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR45' : {
        'lsb'               : 13,
        'msb'               : 13,
        'size'              : 1,
        'field'             : (0x1 << 13),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR46' : {
        'lsb'               : 14,
        'msb'               : 14,
        'size'              : 1,
        'field'             : (0x1 << 14),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR47' : {
        'lsb'               : 15,
        'msb'               : 15,
        'size'              : 1,
        'field'             : (0x1 << 15),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR48' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR49' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR50' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR51' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR52' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR53' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR54' : {
        'lsb'               : 22,
        'msb'               : 22,
        'size'              : 1,
        'field'             : (0x1 << 22),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR55' : {
        'lsb'               : 23,
        'msb'               : 23,
        'size'              : 1,
        'field'             : (0x1 << 23),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR56' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR57' : {
        'lsb'               : 25,
        'msb'               : 25,
        'size'              : 1,
        'field'             : (0x1 << 25),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR58' : {
        'lsb'               : 26,
        'msb'               : 26,
        'size'              : 1,
        'field'             : (0x1 << 26),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR59' : {
        'lsb'               : 27,
        'msb'               : 27,
        'size'              : 1,
        'field'             : (0x1 << 27),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR60' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR61' : {
        'lsb'               : 29,
        'msb'               : 29,
        'size'              : 1,
        'field'             : (0x1 << 29),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR62' : {
        'lsb'               : 30,
        'msb'               : 30,
        'size'              : 1,
        'field'             : (0x1 << 30),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR63' : {
        'lsb'               : 31,
        'msb'               : 31,
        'size'              : 1,
        'field'             : (0x1 << 31),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR32',
        'ERR33',
        'ERR34',
        'ERR35',
        'ERR36',
        'ERR37',
        'ERR38',
        'ERR39',
        'ERR40',
        'ERR41',
        'ERR42',
        'ERR43',
        'ERR44',
        'ERR45',
        'ERR46',
        'ERR47',
        'ERR48',
        'ERR49',
        'ERR50',
        'ERR51',
        'ERR52',
        'ERR53',
        'ERR54',
        'ERR55',
        'ERR56',
        'ERR57',
        'ERR58',
        'ERR59',
        'ERR60',
        'ERR61',
        'ERR62',
        'ERR63',
    ],
} # End of register: ERRSLICE1_MISSIONERR_INJECT_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE1_MISSIONERR_INJECT_0')



# Register NVDLA_GEC_ERRSLICE1_LATENTERR_ENABLE_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE1_LATENTERR_ENABLE_0'] = {
    'addr'            : 0xe070,
    'size'            : 0x20,
    'reset_val'       : 0xffffffff,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'ERR32' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR33' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR34' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR35' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR36' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR37' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR38' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR39' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR40' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR41' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR42' : {
        'lsb'               : 10,
        'msb'               : 10,
        'size'              : 1,
        'field'             : (0x1 << 10),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR43' : {
        'lsb'               : 11,
        'msb'               : 11,
        'size'              : 1,
        'field'             : (0x1 << 11),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR44' : {
        'lsb'               : 12,
        'msb'               : 12,
        'size'              : 1,
        'field'             : (0x1 << 12),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR45' : {
        'lsb'               : 13,
        'msb'               : 13,
        'size'              : 1,
        'field'             : (0x1 << 13),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR46' : {
        'lsb'               : 14,
        'msb'               : 14,
        'size'              : 1,
        'field'             : (0x1 << 14),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR47' : {
        'lsb'               : 15,
        'msb'               : 15,
        'size'              : 1,
        'field'             : (0x1 << 15),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR48' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR49' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR50' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR51' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR52' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR53' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR54' : {
        'lsb'               : 22,
        'msb'               : 22,
        'size'              : 1,
        'field'             : (0x1 << 22),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR55' : {
        'lsb'               : 23,
        'msb'               : 23,
        'size'              : 1,
        'field'             : (0x1 << 23),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR56' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR57' : {
        'lsb'               : 25,
        'msb'               : 25,
        'size'              : 1,
        'field'             : (0x1 << 25),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR58' : {
        'lsb'               : 26,
        'msb'               : 26,
        'size'              : 1,
        'field'             : (0x1 << 26),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR59' : {
        'lsb'               : 27,
        'msb'               : 27,
        'size'              : 1,
        'field'             : (0x1 << 27),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR60' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR61' : {
        'lsb'               : 29,
        'msb'               : 29,
        'size'              : 1,
        'field'             : (0x1 << 29),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR62' : {
        'lsb'               : 30,
        'msb'               : 30,
        'size'              : 1,
        'field'             : (0x1 << 30),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR63' : {
        'lsb'               : 31,
        'msb'               : 31,
        'size'              : 1,
        'field'             : (0x1 << 31),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR32',
        'ERR33',
        'ERR34',
        'ERR35',
        'ERR36',
        'ERR37',
        'ERR38',
        'ERR39',
        'ERR40',
        'ERR41',
        'ERR42',
        'ERR43',
        'ERR44',
        'ERR45',
        'ERR46',
        'ERR47',
        'ERR48',
        'ERR49',
        'ERR50',
        'ERR51',
        'ERR52',
        'ERR53',
        'ERR54',
        'ERR55',
        'ERR56',
        'ERR57',
        'ERR58',
        'ERR59',
        'ERR60',
        'ERR61',
        'ERR62',
        'ERR63',
    ],
} # End of register: ERRSLICE1_LATENTERR_ENABLE_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE1_LATENTERR_ENABLE_0')



# Register NVDLA_GEC_ERRSLICE1_LATENTERR_FORCE_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE1_LATENTERR_FORCE_0'] = {
    'addr'            : 0xe074,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x0,
    'write_mask'      : 0xffffffff,
    'ERR32' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR33' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR34' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR35' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR36' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR37' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR38' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR39' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR40' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR41' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR42' : {
        'lsb'               : 10,
        'msb'               : 10,
        'size'              : 1,
        'field'             : (0x1 << 10),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR43' : {
        'lsb'               : 11,
        'msb'               : 11,
        'size'              : 1,
        'field'             : (0x1 << 11),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR44' : {
        'lsb'               : 12,
        'msb'               : 12,
        'size'              : 1,
        'field'             : (0x1 << 12),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR45' : {
        'lsb'               : 13,
        'msb'               : 13,
        'size'              : 1,
        'field'             : (0x1 << 13),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR46' : {
        'lsb'               : 14,
        'msb'               : 14,
        'size'              : 1,
        'field'             : (0x1 << 14),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR47' : {
        'lsb'               : 15,
        'msb'               : 15,
        'size'              : 1,
        'field'             : (0x1 << 15),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR48' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR49' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR50' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR51' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR52' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR53' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR54' : {
        'lsb'               : 22,
        'msb'               : 22,
        'size'              : 1,
        'field'             : (0x1 << 22),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR55' : {
        'lsb'               : 23,
        'msb'               : 23,
        'size'              : 1,
        'field'             : (0x1 << 23),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR56' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR57' : {
        'lsb'               : 25,
        'msb'               : 25,
        'size'              : 1,
        'field'             : (0x1 << 25),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR58' : {
        'lsb'               : 26,
        'msb'               : 26,
        'size'              : 1,
        'field'             : (0x1 << 26),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR59' : {
        'lsb'               : 27,
        'msb'               : 27,
        'size'              : 1,
        'field'             : (0x1 << 27),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR60' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR61' : {
        'lsb'               : 29,
        'msb'               : 29,
        'size'              : 1,
        'field'             : (0x1 << 29),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR62' : {
        'lsb'               : 30,
        'msb'               : 30,
        'size'              : 1,
        'field'             : (0x1 << 30),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR63' : {
        'lsb'               : 31,
        'msb'               : 31,
        'size'              : 1,
        'field'             : (0x1 << 31),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR32',
        'ERR33',
        'ERR34',
        'ERR35',
        'ERR36',
        'ERR37',
        'ERR38',
        'ERR39',
        'ERR40',
        'ERR41',
        'ERR42',
        'ERR43',
        'ERR44',
        'ERR45',
        'ERR46',
        'ERR47',
        'ERR48',
        'ERR49',
        'ERR50',
        'ERR51',
        'ERR52',
        'ERR53',
        'ERR54',
        'ERR55',
        'ERR56',
        'ERR57',
        'ERR58',
        'ERR59',
        'ERR60',
        'ERR61',
        'ERR62',
        'ERR63',
    ],
} # End of register: ERRSLICE1_LATENTERR_FORCE_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE1_LATENTERR_FORCE_0')



# Register NVDLA_GEC_ERRSLICE1_LATENTERR_STATUS_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE1_LATENTERR_STATUS_0'] = {
    'addr'            : 0xe078,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'ERR32' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR33' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR34' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR35' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR36' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR37' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR38' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR39' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR40' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR41' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR42' : {
        'lsb'               : 10,
        'msb'               : 10,
        'size'              : 1,
        'field'             : (0x1 << 10),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR43' : {
        'lsb'               : 11,
        'msb'               : 11,
        'size'              : 1,
        'field'             : (0x1 << 11),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR44' : {
        'lsb'               : 12,
        'msb'               : 12,
        'size'              : 1,
        'field'             : (0x1 << 12),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR45' : {
        'lsb'               : 13,
        'msb'               : 13,
        'size'              : 1,
        'field'             : (0x1 << 13),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR46' : {
        'lsb'               : 14,
        'msb'               : 14,
        'size'              : 1,
        'field'             : (0x1 << 14),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR47' : {
        'lsb'               : 15,
        'msb'               : 15,
        'size'              : 1,
        'field'             : (0x1 << 15),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR48' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR49' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR50' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR51' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR52' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR53' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR54' : {
        'lsb'               : 22,
        'msb'               : 22,
        'size'              : 1,
        'field'             : (0x1 << 22),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR55' : {
        'lsb'               : 23,
        'msb'               : 23,
        'size'              : 1,
        'field'             : (0x1 << 23),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR56' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR57' : {
        'lsb'               : 25,
        'msb'               : 25,
        'size'              : 1,
        'field'             : (0x1 << 25),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR58' : {
        'lsb'               : 26,
        'msb'               : 26,
        'size'              : 1,
        'field'             : (0x1 << 26),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR59' : {
        'lsb'               : 27,
        'msb'               : 27,
        'size'              : 1,
        'field'             : (0x1 << 27),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR60' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR61' : {
        'lsb'               : 29,
        'msb'               : 29,
        'size'              : 1,
        'field'             : (0x1 << 29),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR62' : {
        'lsb'               : 30,
        'msb'               : 30,
        'size'              : 1,
        'field'             : (0x1 << 30),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR63' : {
        'lsb'               : 31,
        'msb'               : 31,
        'size'              : 1,
        'field'             : (0x1 << 31),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR32',
        'ERR33',
        'ERR34',
        'ERR35',
        'ERR36',
        'ERR37',
        'ERR38',
        'ERR39',
        'ERR40',
        'ERR41',
        'ERR42',
        'ERR43',
        'ERR44',
        'ERR45',
        'ERR46',
        'ERR47',
        'ERR48',
        'ERR49',
        'ERR50',
        'ERR51',
        'ERR52',
        'ERR53',
        'ERR54',
        'ERR55',
        'ERR56',
        'ERR57',
        'ERR58',
        'ERR59',
        'ERR60',
        'ERR61',
        'ERR62',
        'ERR63',
    ],
} # End of register: ERRSLICE1_LATENTERR_STATUS_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE1_LATENTERR_STATUS_0')



# Register NVDLA_GEC_ERRSLICE1_COUNTER_RELOAD_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE1_COUNTER_RELOAD_0'] = {
    'addr'            : 0xe080,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x0,
    'write_mask'      : 0xffffffff,
    'ERR32' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR33' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR34' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR35' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR36' : {
        'lsb'               : 4,
        'msb'               : 4,
        'size'              : 1,
        'field'             : (0x1 << 4),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR37' : {
        'lsb'               : 5,
        'msb'               : 5,
        'size'              : 1,
        'field'             : (0x1 << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR38' : {
        'lsb'               : 6,
        'msb'               : 6,
        'size'              : 1,
        'field'             : (0x1 << 6),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR39' : {
        'lsb'               : 7,
        'msb'               : 7,
        'size'              : 1,
        'field'             : (0x1 << 7),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR40' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR41' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR42' : {
        'lsb'               : 10,
        'msb'               : 10,
        'size'              : 1,
        'field'             : (0x1 << 10),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR43' : {
        'lsb'               : 11,
        'msb'               : 11,
        'size'              : 1,
        'field'             : (0x1 << 11),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR44' : {
        'lsb'               : 12,
        'msb'               : 12,
        'size'              : 1,
        'field'             : (0x1 << 12),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR45' : {
        'lsb'               : 13,
        'msb'               : 13,
        'size'              : 1,
        'field'             : (0x1 << 13),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR46' : {
        'lsb'               : 14,
        'msb'               : 14,
        'size'              : 1,
        'field'             : (0x1 << 14),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR47' : {
        'lsb'               : 15,
        'msb'               : 15,
        'size'              : 1,
        'field'             : (0x1 << 15),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR48' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR49' : {
        'lsb'               : 17,
        'msb'               : 17,
        'size'              : 1,
        'field'             : (0x1 << 17),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR50' : {
        'lsb'               : 18,
        'msb'               : 18,
        'size'              : 1,
        'field'             : (0x1 << 18),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR51' : {
        'lsb'               : 19,
        'msb'               : 19,
        'size'              : 1,
        'field'             : (0x1 << 19),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR52' : {
        'lsb'               : 20,
        'msb'               : 20,
        'size'              : 1,
        'field'             : (0x1 << 20),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR53' : {
        'lsb'               : 21,
        'msb'               : 21,
        'size'              : 1,
        'field'             : (0x1 << 21),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR54' : {
        'lsb'               : 22,
        'msb'               : 22,
        'size'              : 1,
        'field'             : (0x1 << 22),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR55' : {
        'lsb'               : 23,
        'msb'               : 23,
        'size'              : 1,
        'field'             : (0x1 << 23),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR56' : {
        'lsb'               : 24,
        'msb'               : 24,
        'size'              : 1,
        'field'             : (0x1 << 24),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR57' : {
        'lsb'               : 25,
        'msb'               : 25,
        'size'              : 1,
        'field'             : (0x1 << 25),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR58' : {
        'lsb'               : 26,
        'msb'               : 26,
        'size'              : 1,
        'field'             : (0x1 << 26),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR59' : {
        'lsb'               : 27,
        'msb'               : 27,
        'size'              : 1,
        'field'             : (0x1 << 27),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR60' : {
        'lsb'               : 28,
        'msb'               : 28,
        'size'              : 1,
        'field'             : (0x1 << 28),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR61' : {
        'lsb'               : 29,
        'msb'               : 29,
        'size'              : 1,
        'field'             : (0x1 << 29),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR62' : {
        'lsb'               : 30,
        'msb'               : 30,
        'size'              : 1,
        'field'             : (0x1 << 30),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR63' : {
        'lsb'               : 31,
        'msb'               : 31,
        'size'              : 1,
        'field'             : (0x1 << 31),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR32',
        'ERR33',
        'ERR34',
        'ERR35',
        'ERR36',
        'ERR37',
        'ERR38',
        'ERR39',
        'ERR40',
        'ERR41',
        'ERR42',
        'ERR43',
        'ERR44',
        'ERR45',
        'ERR46',
        'ERR47',
        'ERR48',
        'ERR49',
        'ERR50',
        'ERR51',
        'ERR52',
        'ERR53',
        'ERR54',
        'ERR55',
        'ERR56',
        'ERR57',
        'ERR58',
        'ERR59',
        'ERR60',
        'ERR61',
        'ERR62',
        'ERR63',
    ],
} # End of register: ERRSLICE1_COUNTER_RELOAD_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE1_COUNTER_RELOAD_0')



# Register NVDLA_GEC_ERRSLICE1_MISSIONERR_ECC_CORRECTION_DIS_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE1_MISSIONERR_ECC_CORRECTION_DIS_0'] = {
    'addr'            : 0xe084,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x80000000,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x80000000,
    'write_mask'      : 0x80000000,
    'ERR63' : {
        'lsb'               : 31,
        'msb'               : 31,
        'size'              : 1,
        'field'             : (0x1 << 31),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR63',
    ],
} # End of register: ERRSLICE1_MISSIONERR_ECC_CORRECTION_DIS_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE1_MISSIONERR_ECC_CORRECTION_DIS_0')



# Register NVDLA_GEC_ERRSLICE2_MISSIONERR_ENABLE_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE2_MISSIONERR_ENABLE_0'] = {
    'addr'            : 0xe090,
    'size'            : 0x4,
    'reset_val'       : 0xf,
    'reset_mask'      : 0xf,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xf,
    'write_mask'      : 0xf,
    'ERR64' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR65' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR66' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR67' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR64',
        'ERR65',
        'ERR66',
        'ERR67',
    ],
} # End of register: ERRSLICE2_MISSIONERR_ENABLE_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE2_MISSIONERR_ENABLE_0')



# Register NVDLA_GEC_ERRSLICE2_MISSIONERR_FORCE_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE2_MISSIONERR_FORCE_0'] = {
    'addr'            : 0xe094,
    'size'            : 0x4,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xf,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x0,
    'write_mask'      : 0xf,
    'ERR64' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR65' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR66' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR67' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR64',
        'ERR65',
        'ERR66',
        'ERR67',
    ],
} # End of register: ERRSLICE2_MISSIONERR_FORCE_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE2_MISSIONERR_FORCE_0')



# Register NVDLA_GEC_ERRSLICE2_MISSIONERR_STATUS_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE2_MISSIONERR_STATUS_0'] = {
    'addr'            : 0xe098,
    'size'            : 0x4,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xf,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xf,
    'write_mask'      : 0xf,
    'ERR64' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR65' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR66' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR67' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR64',
        'ERR65',
        'ERR66',
        'ERR67',
    ],
} # End of register: ERRSLICE2_MISSIONERR_STATUS_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE2_MISSIONERR_STATUS_0')



# Register NVDLA_GEC_ERRSLICE2_MISSIONERR_INJECT_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE2_MISSIONERR_INJECT_0'] = {
    'addr'            : 0xe09c,
    'size'            : 0x2,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3,
    'write_mask'      : 0x3,
    'ERR64' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR65' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR64',
        'ERR65',
    ],
} # End of register: ERRSLICE2_MISSIONERR_INJECT_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE2_MISSIONERR_INJECT_0')



# Register NVDLA_GEC_ERRSLICE2_LATENTERR_ENABLE_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE2_LATENTERR_ENABLE_0'] = {
    'addr'            : 0xe0a0,
    'size'            : 0x4,
    'reset_val'       : 0xf,
    'reset_mask'      : 0xf,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xf,
    'write_mask'      : 0xf,
    'ERR64' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR65' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR66' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    'ERR67' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR64',
        'ERR65',
        'ERR66',
        'ERR67',
    ],
} # End of register: ERRSLICE2_LATENTERR_ENABLE_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE2_LATENTERR_ENABLE_0')



# Register NVDLA_GEC_ERRSLICE2_LATENTERR_FORCE_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE2_LATENTERR_FORCE_0'] = {
    'addr'            : 0xe0a4,
    'size'            : 0x4,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xf,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x0,
    'write_mask'      : 0xf,
    'ERR64' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR65' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR66' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    'ERR67' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NOFORCE' : 0x0,
            'FORCE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR64',
        'ERR65',
        'ERR66',
        'ERR67',
    ],
} # End of register: ERRSLICE2_LATENTERR_FORCE_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE2_LATENTERR_FORCE_0')



# Register NVDLA_GEC_ERRSLICE2_LATENTERR_STATUS_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE2_LATENTERR_STATUS_0'] = {
    'addr'            : 0xe0a8,
    'size'            : 0x4,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xf,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xf,
    'write_mask'      : 0xf,
    'ERR64' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR65' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR66' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'ERR67' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR64',
        'ERR65',
        'ERR66',
        'ERR67',
    ],
} # End of register: ERRSLICE2_LATENTERR_STATUS_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE2_LATENTERR_STATUS_0')



# Register NVDLA_GEC_ERRSLICE2_COUNTER_RELOAD_0
if 'NVDLA_GEC' not in registers:
    registers['NVDLA_GEC'] = {}
    registers['NVDLA_GEC']['register_list']  = []

registers['NVDLA_GEC']['ERRSLICE2_COUNTER_RELOAD_0'] = {
    'addr'            : 0xe0b0,
    'size'            : 0x4,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xf,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x0,
    'write_mask'      : 0xf,
    'ERR64' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR65' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR66' : {
        'lsb'               : 2,
        'msb'               : 2,
        'size'              : 1,
        'field'             : (0x1 << 2),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    'ERR67' : {
        'lsb'               : 3,
        'msb'               : 3,
        'size'              : 1,
        'field'             : (0x1 << 3),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'w',
        'enums' : {
            'NORELOAD' : 0x0,
            'RELOAD' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'ERR64',
        'ERR65',
        'ERR66',
        'ERR67',
    ],
} # End of register: ERRSLICE2_COUNTER_RELOAD_0

registers['NVDLA_GEC']['register_list'].append('ERRSLICE2_COUNTER_RELOAD_0')



# Register NVDLA_CVIF_CFG_RD_WEIGHT_0_0
if 'NVDLA_CVIF' not in registers:
    registers['NVDLA_CVIF'] = {}
    registers['NVDLA_CVIF']['register_list']  = []

registers['NVDLA_CVIF']['CFG_RD_WEIGHT_0_0'] = {
    'addr'            : 0xf000,
    'size'            : 0x20,
    'reset_val'       : 0x1010101,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'RD_WEIGHT_BDMA' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_SDP' : {
        'lsb'               : 8,
        'msb'               : 15,
        'size'              : 8,
        'field'             : (0xff << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_PDP' : {
        'lsb'               : 16,
        'msb'               : 23,
        'size'              : 8,
        'field'             : (0xff << 16),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_CDP' : {
        'lsb'               : 24,
        'msb'               : 31,
        'size'              : 8,
        'field'             : (0xff << 24),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'RD_WEIGHT_BDMA',
        'RD_WEIGHT_SDP',
        'RD_WEIGHT_PDP',
        'RD_WEIGHT_CDP',
    ],
} # End of register: CFG_RD_WEIGHT_0_0

registers['NVDLA_CVIF']['register_list'].append('CFG_RD_WEIGHT_0_0')



# Register NVDLA_CVIF_CFG_RD_WEIGHT_1_0
if 'NVDLA_CVIF' not in registers:
    registers['NVDLA_CVIF'] = {}
    registers['NVDLA_CVIF']['register_list']  = []

registers['NVDLA_CVIF']['CFG_RD_WEIGHT_1_0'] = {
    'addr'            : 0xf004,
    'size'            : 0x20,
    'reset_val'       : 0x1010101,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'RD_WEIGHT_SDP_B' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_SDP_N' : {
        'lsb'               : 8,
        'msb'               : 15,
        'size'              : 8,
        'field'             : (0xff << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_SDP_E' : {
        'lsb'               : 16,
        'msb'               : 23,
        'size'              : 8,
        'field'             : (0xff << 16),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_CDMA_DAT' : {
        'lsb'               : 24,
        'msb'               : 31,
        'size'              : 8,
        'field'             : (0xff << 24),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'RD_WEIGHT_SDP_B',
        'RD_WEIGHT_SDP_N',
        'RD_WEIGHT_SDP_E',
        'RD_WEIGHT_CDMA_DAT',
    ],
} # End of register: CFG_RD_WEIGHT_1_0

registers['NVDLA_CVIF']['register_list'].append('CFG_RD_WEIGHT_1_0')



# Register NVDLA_CVIF_CFG_RD_WEIGHT_2_0
if 'NVDLA_CVIF' not in registers:
    registers['NVDLA_CVIF'] = {}
    registers['NVDLA_CVIF']['register_list']  = []

registers['NVDLA_CVIF']['CFG_RD_WEIGHT_2_0'] = {
    'addr'            : 0xf008,
    'size'            : 0x20,
    'reset_val'       : 0x1010101,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'RD_WEIGHT_CDMA_WT' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_RBK' : {
        'lsb'               : 8,
        'msb'               : 15,
        'size'              : 8,
        'field'             : (0xff << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_RSV_1' : {
        'lsb'               : 16,
        'msb'               : 23,
        'size'              : 8,
        'field'             : (0xff << 16),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'RD_WEIGHT_RSV_0' : {
        'lsb'               : 24,
        'msb'               : 31,
        'size'              : 8,
        'field'             : (0xff << 24),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'RD_WEIGHT_CDMA_WT',
        'RD_WEIGHT_RBK',
        'RD_WEIGHT_RSV_1',
        'RD_WEIGHT_RSV_0',
    ],
} # End of register: CFG_RD_WEIGHT_2_0

registers['NVDLA_CVIF']['register_list'].append('CFG_RD_WEIGHT_2_0')



# Register NVDLA_CVIF_CFG_WR_WEIGHT_0_0
if 'NVDLA_CVIF' not in registers:
    registers['NVDLA_CVIF'] = {}
    registers['NVDLA_CVIF']['register_list']  = []

registers['NVDLA_CVIF']['CFG_WR_WEIGHT_0_0'] = {
    'addr'            : 0xf00c,
    'size'            : 0x20,
    'reset_val'       : 0x1010101,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'WR_WEIGHT_BDMA' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WR_WEIGHT_SDP' : {
        'lsb'               : 8,
        'msb'               : 15,
        'size'              : 8,
        'field'             : (0xff << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WR_WEIGHT_PDP' : {
        'lsb'               : 16,
        'msb'               : 23,
        'size'              : 8,
        'field'             : (0xff << 16),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WR_WEIGHT_CDP' : {
        'lsb'               : 24,
        'msb'               : 31,
        'size'              : 8,
        'field'             : (0xff << 24),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WR_WEIGHT_BDMA',
        'WR_WEIGHT_SDP',
        'WR_WEIGHT_PDP',
        'WR_WEIGHT_CDP',
    ],
} # End of register: CFG_WR_WEIGHT_0_0

registers['NVDLA_CVIF']['register_list'].append('CFG_WR_WEIGHT_0_0')



# Register NVDLA_CVIF_CFG_WR_WEIGHT_1_0
if 'NVDLA_CVIF' not in registers:
    registers['NVDLA_CVIF'] = {}
    registers['NVDLA_CVIF']['register_list']  = []

registers['NVDLA_CVIF']['CFG_WR_WEIGHT_1_0'] = {
    'addr'            : 0xf010,
    'size'            : 0x20,
    'reset_val'       : 0x1010101,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'WR_WEIGHT_RBK' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WR_WEIGHT_RSV_2' : {
        'lsb'               : 8,
        'msb'               : 15,
        'size'              : 8,
        'field'             : (0xff << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WR_WEIGHT_RSV_1' : {
        'lsb'               : 16,
        'msb'               : 23,
        'size'              : 8,
        'field'             : (0xff << 16),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WR_WEIGHT_RSV_0' : {
        'lsb'               : 24,
        'msb'               : 31,
        'size'              : 8,
        'field'             : (0xff << 24),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WR_WEIGHT_RBK',
        'WR_WEIGHT_RSV_2',
        'WR_WEIGHT_RSV_1',
        'WR_WEIGHT_RSV_0',
    ],
} # End of register: CFG_WR_WEIGHT_1_0

registers['NVDLA_CVIF']['register_list'].append('CFG_WR_WEIGHT_1_0')



# Register NVDLA_CVIF_CFG_OUTSTANDING_CNT_0
if 'NVDLA_CVIF' not in registers:
    registers['NVDLA_CVIF'] = {}
    registers['NVDLA_CVIF']['register_list']  = []

registers['NVDLA_CVIF']['CFG_OUTSTANDING_CNT_0'] = {
    'addr'            : 0xf014,
    'size'            : 0x10,
    'reset_val'       : 0xffff,
    'reset_mask'      : 0xffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffff,
    'write_mask'      : 0xffff,
    'RD_OS_CNT' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0xff,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'WR_OS_CNT' : {
        'lsb'               : 8,
        'msb'               : 15,
        'size'              : 8,
        'field'             : (0xff << 8),
        'default'           : 0xff,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'RD_OS_CNT',
        'WR_OS_CNT',
    ],
} # End of register: CFG_OUTSTANDING_CNT_0

registers['NVDLA_CVIF']['register_list'].append('CFG_OUTSTANDING_CNT_0')



# Register NVDLA_CVIF_STATUS_0
if 'NVDLA_CVIF' not in registers:
    registers['NVDLA_CVIF'] = {}
    registers['NVDLA_CVIF']['register_list']  = []

registers['NVDLA_CVIF']['STATUS_0'] = {
    'addr'            : 0xf018,
    'size'            : 0x1,
    'reset_val'       : 0x100,
    'reset_mask'      : 0x100,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x100,
    'write_mask'      : 0x0,
    'IDLE' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'IDLE',
    ],
} # End of register: STATUS_0

registers['NVDLA_CVIF']['register_list'].append('STATUS_0')



# Register NVDLA_BDMA_CFG_SRC_ADDR_LOW_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['CFG_SRC_ADDR_LOW_0'] = {
    'addr'            : 0x10000,
    'size'            : 0x1b,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0xffffffe0,
    'V32' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'V32',
    ],
} # End of register: CFG_SRC_ADDR_LOW_0

registers['NVDLA_BDMA']['register_list'].append('CFG_SRC_ADDR_LOW_0')



# Register NVDLA_BDMA_CFG_SRC_ADDR_HIGH_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['CFG_SRC_ADDR_HIGH_0'] = {
    'addr'            : 0x10004,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'V8' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'V8',
    ],
} # End of register: CFG_SRC_ADDR_HIGH_0

registers['NVDLA_BDMA']['register_list'].append('CFG_SRC_ADDR_HIGH_0')



# Register NVDLA_BDMA_CFG_DST_ADDR_LOW_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['CFG_DST_ADDR_LOW_0'] = {
    'addr'            : 0x10008,
    'size'            : 0x1b,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0xffffffe0,
    'V32' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'V32',
    ],
} # End of register: CFG_DST_ADDR_LOW_0

registers['NVDLA_BDMA']['register_list'].append('CFG_DST_ADDR_LOW_0')



# Register NVDLA_BDMA_CFG_DST_ADDR_HIGH_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['CFG_DST_ADDR_HIGH_0'] = {
    'addr'            : 0x1000c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'V8' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'V8',
    ],
} # End of register: CFG_DST_ADDR_HIGH_0

registers['NVDLA_BDMA']['register_list'].append('CFG_DST_ADDR_HIGH_0')



# Register NVDLA_BDMA_CFG_LINE_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['CFG_LINE_0'] = {
    'addr'            : 0x10010,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'SIZE' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SIZE',
    ],
} # End of register: CFG_LINE_0

registers['NVDLA_BDMA']['register_list'].append('CFG_LINE_0')



# Register NVDLA_BDMA_CFG_CMD_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['CFG_CMD_0'] = {
    'addr'            : 0x10014,
    'size'            : 0x2,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x3,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x3,
    'write_mask'      : 0x3,
    'SRC_RAM_TYPE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'CVSRAM' : 0x0,
            'MC' : 0x1,
        },
    },
    'DST_RAM_TYPE' : {
        'lsb'               : 1,
        'msb'               : 1,
        'size'              : 1,
        'field'             : (0x1 << 1),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'CVSRAM' : 0x0,
            'MC' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'SRC_RAM_TYPE',
        'DST_RAM_TYPE',
    ],
} # End of register: CFG_CMD_0

registers['NVDLA_BDMA']['register_list'].append('CFG_CMD_0')



# Register NVDLA_BDMA_CFG_LINE_REPEAT_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['CFG_LINE_REPEAT_0'] = {
    'addr'            : 0x10018,
    'size'            : 0x18,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffff,
    'write_mask'      : 0xffffff,
    'NUMBER' : {
        'lsb'               : 0,
        'msb'               : 23,
        'size'              : 24,
        'field'             : (0xffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'NUMBER',
    ],
} # End of register: CFG_LINE_REPEAT_0

registers['NVDLA_BDMA']['register_list'].append('CFG_LINE_REPEAT_0')



# Register NVDLA_BDMA_CFG_SRC_LINE_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['CFG_SRC_LINE_0'] = {
    'addr'            : 0x1001c,
    'size'            : 0x1b,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0xffffffe0,
    'STRIDE' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STRIDE',
    ],
} # End of register: CFG_SRC_LINE_0

registers['NVDLA_BDMA']['register_list'].append('CFG_SRC_LINE_0')



# Register NVDLA_BDMA_CFG_DST_LINE_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['CFG_DST_LINE_0'] = {
    'addr'            : 0x10020,
    'size'            : 0x1b,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0xffffffe0,
    'STRIDE' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STRIDE',
    ],
} # End of register: CFG_DST_LINE_0

registers['NVDLA_BDMA']['register_list'].append('CFG_DST_LINE_0')



# Register NVDLA_BDMA_CFG_SURF_REPEAT_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['CFG_SURF_REPEAT_0'] = {
    'addr'            : 0x10024,
    'size'            : 0x18,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffff,
    'write_mask'      : 0xffffff,
    'NUMBER' : {
        'lsb'               : 0,
        'msb'               : 23,
        'size'              : 24,
        'field'             : (0xffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'NUMBER',
    ],
} # End of register: CFG_SURF_REPEAT_0

registers['NVDLA_BDMA']['register_list'].append('CFG_SURF_REPEAT_0')



# Register NVDLA_BDMA_CFG_SRC_SURF_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['CFG_SRC_SURF_0'] = {
    'addr'            : 0x10028,
    'size'            : 0x1b,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0xffffffe0,
    'STRIDE' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STRIDE',
    ],
} # End of register: CFG_SRC_SURF_0

registers['NVDLA_BDMA']['register_list'].append('CFG_SRC_SURF_0')



# Register NVDLA_BDMA_CFG_DST_SURF_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['CFG_DST_SURF_0'] = {
    'addr'            : 0x1002c,
    'size'            : 0x1b,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0xffffffe0,
    'STRIDE' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STRIDE',
    ],
} # End of register: CFG_DST_SURF_0

registers['NVDLA_BDMA']['register_list'].append('CFG_DST_SURF_0')



# Register NVDLA_BDMA_CFG_OP_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['CFG_OP_0'] = {
    'addr'            : 0x10030,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwt',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'EN',
    ],
} # End of register: CFG_OP_0

registers['NVDLA_BDMA']['register_list'].append('CFG_OP_0')



# Register NVDLA_BDMA_CFG_LAUNCH0_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['CFG_LAUNCH0_0'] = {
    'addr'            : 0x10034,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'GRP0_LAUNCH' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwt',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'GRP0_LAUNCH',
    ],
} # End of register: CFG_LAUNCH0_0

registers['NVDLA_BDMA']['register_list'].append('CFG_LAUNCH0_0')



# Register NVDLA_BDMA_CFG_LAUNCH1_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['CFG_LAUNCH1_0'] = {
    'addr'            : 0x10038,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'GRP1_LAUNCH' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwt',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'GRP1_LAUNCH',
    ],
} # End of register: CFG_LAUNCH1_0

registers['NVDLA_BDMA']['register_list'].append('CFG_LAUNCH1_0')



# Register NVDLA_BDMA_CFG_STATUS_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['CFG_STATUS_0'] = {
    'addr'            : 0x1003c,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'STALL_COUNT_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STALL_COUNT_EN',
    ],
} # End of register: CFG_STATUS_0

registers['NVDLA_BDMA']['register_list'].append('CFG_STATUS_0')



# Register NVDLA_BDMA_STATUS_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['STATUS_0'] = {
    'addr'            : 0x10040,
    'size'            : 0xb,
    'reset_val'       : 0x114,
    'reset_mask'      : 0x7ff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x7ff,
    'write_mask'      : 0x0,
    'FREE_SLOT' : {
        'lsb'               : 0,
        'msb'               : 7,
        'size'              : 8,
        'field'             : (0xff << 0),
        'default'           : 0x14,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    'IDLE' : {
        'lsb'               : 8,
        'msb'               : 8,
        'size'              : 1,
        'field'             : (0x1 << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'GRP0_BUSY' : {
        'lsb'               : 9,
        'msb'               : 9,
        'size'              : 1,
        'field'             : (0x1 << 9),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    'GRP1_BUSY' : {
        'lsb'               : 10,
        'msb'               : 10,
        'size'              : 1,
        'field'             : (0x1 << 10),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'NO' : 0x0,
            'YES' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'FREE_SLOT',
        'IDLE',
        'GRP0_BUSY',
        'GRP1_BUSY',
    ],
} # End of register: STATUS_0

registers['NVDLA_BDMA']['register_list'].append('STATUS_0')



# Register NVDLA_BDMA_STATUS_GRP0_READ_STALL_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['STATUS_GRP0_READ_STALL_0'] = {
    'addr'            : 0x10044,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'COUNT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'COUNT',
    ],
} # End of register: STATUS_GRP0_READ_STALL_0

registers['NVDLA_BDMA']['register_list'].append('STATUS_GRP0_READ_STALL_0')



# Register NVDLA_BDMA_STATUS_GRP0_WRITE_STALL_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['STATUS_GRP0_WRITE_STALL_0'] = {
    'addr'            : 0x10048,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'COUNT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'COUNT',
    ],
} # End of register: STATUS_GRP0_WRITE_STALL_0

registers['NVDLA_BDMA']['register_list'].append('STATUS_GRP0_WRITE_STALL_0')



# Register NVDLA_BDMA_STATUS_GRP1_READ_STALL_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['STATUS_GRP1_READ_STALL_0'] = {
    'addr'            : 0x1004c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'COUNT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'COUNT',
    ],
} # End of register: STATUS_GRP1_READ_STALL_0

registers['NVDLA_BDMA']['register_list'].append('STATUS_GRP1_READ_STALL_0')



# Register NVDLA_BDMA_STATUS_GRP1_WRITE_STALL_0
if 'NVDLA_BDMA' not in registers:
    registers['NVDLA_BDMA'] = {}
    registers['NVDLA_BDMA']['register_list']  = []

registers['NVDLA_BDMA']['STATUS_GRP1_WRITE_STALL_0'] = {
    'addr'            : 0x10050,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'COUNT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'COUNT',
    ],
} # End of register: STATUS_GRP1_WRITE_STALL_0

registers['NVDLA_BDMA']['register_list'].append('STATUS_GRP1_WRITE_STALL_0')



# Register NVDLA_RBK_S_STATUS_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['S_STATUS_0'] = {
    'addr'            : 0x11000,
    'size'            : 0x12,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x30003,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x30003,
    'write_mask'      : 0x0,
    'STATUS_0' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    'STATUS_1' : {
        'lsb'               : 16,
        'msb'               : 17,
        'size'              : 2,
        'field'             : (0x3 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'IDLE' : 0x0,
            'RUNNING' : 0x1,
            'PENDING' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'STATUS_0',
        'STATUS_1',
    ],
} # End of register: S_STATUS_0

registers['NVDLA_RBK']['register_list'].append('S_STATUS_0')



# Register NVDLA_RBK_S_POINTER_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['S_POINTER_0'] = {
    'addr'            : 0x11004,
    'size'            : 0x11,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x10001,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x10001,
    'write_mask'      : 0x1,
    'PRODUCER' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    'CONSUMER' : {
        'lsb'               : 16,
        'msb'               : 16,
        'size'              : 1,
        'field'             : (0x1 << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
            'GROUP_0' : 0x0,
            'GROUP_1' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PRODUCER',
        'CONSUMER',
    ],
} # End of register: S_POINTER_0

registers['NVDLA_RBK']['register_list'].append('S_POINTER_0')



# Register NVDLA_RBK_D_OP_ENABLE_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_OP_ENABLE_0'] = {
    'addr'            : 0x11008,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'OP_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rwto',
        'enums' : {
            'DISABLE' : 0x0,
            'ENABLE' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'OP_EN',
    ],
} # End of register: D_OP_ENABLE_0

registers['NVDLA_RBK']['register_list'].append('D_OP_ENABLE_0')



# Register NVDLA_RBK_D_MISC_CFG_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_MISC_CFG_0'] = {
    'addr'            : 0x1100c,
    'size'            : 0xa,
    'reset_val'       : 0x100,
    'reset_mask'      : 0x303,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x303,
    'write_mask'      : 0x303,
    'RUBIK_MODE' : {
        'lsb'               : 0,
        'msb'               : 1,
        'size'              : 2,
        'field'             : (0x3 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'CONTRACT' : 0x0,
            'SPLIT' : 0x1,
            'MERGE' : 0x2,
        },
    },
    'IN_PRECISION' : {
        'lsb'               : 8,
        'msb'               : 9,
        'size'              : 2,
        'field'             : (0x3 << 8),
        'default'           : 0x1,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'INT8' : 0x0,
            'INT16' : 0x1,
            'FP16' : 0x2,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'RUBIK_MODE',
        'IN_PRECISION',
    ],
} # End of register: D_MISC_CFG_0

registers['NVDLA_RBK']['register_list'].append('D_MISC_CFG_0')



# Register NVDLA_RBK_D_DAIN_RAM_TYPE_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_DAIN_RAM_TYPE_0'] = {
    'addr'            : 0x11010,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'DATAIN_RAM_TYPE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'CVIF' : 0x0,
            'MCIF' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAIN_RAM_TYPE',
    ],
} # End of register: D_DAIN_RAM_TYPE_0

registers['NVDLA_RBK']['register_list'].append('D_DAIN_RAM_TYPE_0')



# Register NVDLA_RBK_D_DATAIN_SIZE_0_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_DATAIN_SIZE_0_0'] = {
    'addr'            : 0x11014,
    'size'            : 0x1d,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff1fff,
    'write_mask'      : 0x1fff1fff,
    'DATAIN_WIDTH' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'DATAIN_HEIGHT' : {
        'lsb'               : 16,
        'msb'               : 28,
        'size'              : 13,
        'field'             : (0x1fff << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAIN_WIDTH',
        'DATAIN_HEIGHT',
    ],
} # End of register: D_DATAIN_SIZE_0_0

registers['NVDLA_RBK']['register_list'].append('D_DATAIN_SIZE_0_0')



# Register NVDLA_RBK_D_DATAIN_SIZE_1_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_DATAIN_SIZE_1_0'] = {
    'addr'            : 0x11018,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'DATAIN_CHANNEL' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAIN_CHANNEL',
    ],
} # End of register: D_DATAIN_SIZE_1_0

registers['NVDLA_RBK']['register_list'].append('D_DATAIN_SIZE_1_0')



# Register NVDLA_RBK_D_DAIN_ADDR_HIGH_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_DAIN_ADDR_HIGH_0'] = {
    'addr'            : 0x1101c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DAIN_ADDR_HIGH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DAIN_ADDR_HIGH',
    ],
} # End of register: D_DAIN_ADDR_HIGH_0

registers['NVDLA_RBK']['register_list'].append('D_DAIN_ADDR_HIGH_0')



# Register NVDLA_RBK_D_DAIN_ADDR_LOW_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_DAIN_ADDR_LOW_0'] = {
    'addr'            : 0x11020,
    'size'            : 0x1b,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0xffffffe0,
    'DAIN_ADDR_LOW' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DAIN_ADDR_LOW',
    ],
} # End of register: D_DAIN_ADDR_LOW_0

registers['NVDLA_RBK']['register_list'].append('D_DAIN_ADDR_LOW_0')



# Register NVDLA_RBK_D_DAIN_LINE_STRIDE_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_DAIN_LINE_STRIDE_0'] = {
    'addr'            : 0x11024,
    'size'            : 0x1b,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0xffffffe0,
    'DAIN_LINE_STRIDE' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DAIN_LINE_STRIDE',
    ],
} # End of register: D_DAIN_LINE_STRIDE_0

registers['NVDLA_RBK']['register_list'].append('D_DAIN_LINE_STRIDE_0')



# Register NVDLA_RBK_D_DAIN_SURF_STRIDE_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_DAIN_SURF_STRIDE_0'] = {
    'addr'            : 0x11028,
    'size'            : 0x1b,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0xffffffe0,
    'DAIN_SURF_STRIDE' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DAIN_SURF_STRIDE',
    ],
} # End of register: D_DAIN_SURF_STRIDE_0

registers['NVDLA_RBK']['register_list'].append('D_DAIN_SURF_STRIDE_0')



# Register NVDLA_RBK_D_DAIN_PLANAR_STRIDE_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_DAIN_PLANAR_STRIDE_0'] = {
    'addr'            : 0x1102c,
    'size'            : 0x1b,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0xffffffe0,
    'DAIN_PLANAR_STRIDE' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DAIN_PLANAR_STRIDE',
    ],
} # End of register: D_DAIN_PLANAR_STRIDE_0

registers['NVDLA_RBK']['register_list'].append('D_DAIN_PLANAR_STRIDE_0')



# Register NVDLA_RBK_D_DAOUT_RAM_TYPE_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_DAOUT_RAM_TYPE_0'] = {
    'addr'            : 0x11030,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'DATAOUT_RAM_TYPE' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
            'CVIF' : 0x0,
            'MCIF' : 0x1,
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAOUT_RAM_TYPE',
    ],
} # End of register: D_DAOUT_RAM_TYPE_0

registers['NVDLA_RBK']['register_list'].append('D_DAOUT_RAM_TYPE_0')



# Register NVDLA_RBK_D_DATAOUT_SIZE_1_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_DATAOUT_SIZE_1_0'] = {
    'addr'            : 0x11034,
    'size'            : 0xd,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1fff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1fff,
    'write_mask'      : 0x1fff,
    'DATAOUT_CHANNEL' : {
        'lsb'               : 0,
        'msb'               : 12,
        'size'              : 13,
        'field'             : (0x1fff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DATAOUT_CHANNEL',
    ],
} # End of register: D_DATAOUT_SIZE_1_0

registers['NVDLA_RBK']['register_list'].append('D_DATAOUT_SIZE_1_0')



# Register NVDLA_RBK_D_DAOUT_ADDR_HIGH_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_DAOUT_ADDR_HIGH_0'] = {
    'addr'            : 0x11038,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0xffffffff,
    'DAOUT_ADDR_HIGH' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DAOUT_ADDR_HIGH',
    ],
} # End of register: D_DAOUT_ADDR_HIGH_0

registers['NVDLA_RBK']['register_list'].append('D_DAOUT_ADDR_HIGH_0')



# Register NVDLA_RBK_D_DAOUT_ADDR_LOW_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_DAOUT_ADDR_LOW_0'] = {
    'addr'            : 0x1103c,
    'size'            : 0x1b,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0xffffffe0,
    'DAOUT_ADDR_LOW' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DAOUT_ADDR_LOW',
    ],
} # End of register: D_DAOUT_ADDR_LOW_0

registers['NVDLA_RBK']['register_list'].append('D_DAOUT_ADDR_LOW_0')



# Register NVDLA_RBK_D_DAOUT_LINE_STRIDE_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_DAOUT_LINE_STRIDE_0'] = {
    'addr'            : 0x11040,
    'size'            : 0x1b,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0xffffffe0,
    'DAOUT_LINE_STRIDE' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DAOUT_LINE_STRIDE',
    ],
} # End of register: D_DAOUT_LINE_STRIDE_0

registers['NVDLA_RBK']['register_list'].append('D_DAOUT_LINE_STRIDE_0')



# Register NVDLA_RBK_D_CONTRACT_STRIDE_0_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_CONTRACT_STRIDE_0_0'] = {
    'addr'            : 0x11044,
    'size'            : 0x1b,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0xffffffe0,
    'CONTRACT_STRIDE_0' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CONTRACT_STRIDE_0',
    ],
} # End of register: D_CONTRACT_STRIDE_0_0

registers['NVDLA_RBK']['register_list'].append('D_CONTRACT_STRIDE_0_0')



# Register NVDLA_RBK_D_CONTRACT_STRIDE_1_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_CONTRACT_STRIDE_1_0'] = {
    'addr'            : 0x11048,
    'size'            : 0x1b,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0xffffffe0,
    'CONTRACT_STRIDE_1' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'CONTRACT_STRIDE_1',
    ],
} # End of register: D_CONTRACT_STRIDE_1_0

registers['NVDLA_RBK']['register_list'].append('D_CONTRACT_STRIDE_1_0')



# Register NVDLA_RBK_D_DAOUT_SURF_STRIDE_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_DAOUT_SURF_STRIDE_0'] = {
    'addr'            : 0x1104c,
    'size'            : 0x1b,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0xffffffe0,
    'DAOUT_SURF_STRIDE' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DAOUT_SURF_STRIDE',
    ],
} # End of register: D_DAOUT_SURF_STRIDE_0

registers['NVDLA_RBK']['register_list'].append('D_DAOUT_SURF_STRIDE_0')



# Register NVDLA_RBK_D_DAOUT_PLANAR_STRIDE_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_DAOUT_PLANAR_STRIDE_0'] = {
    'addr'            : 0x11050,
    'size'            : 0x1b,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffe0,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffe0,
    'write_mask'      : 0xffffffe0,
    'DAOUT_PLANAR_STRIDE' : {
        'lsb'               : 5,
        'msb'               : 31,
        'size'              : 27,
        'field'             : (0x7ffffff << 5),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DAOUT_PLANAR_STRIDE',
    ],
} # End of register: D_DAOUT_PLANAR_STRIDE_0

registers['NVDLA_RBK']['register_list'].append('D_DAOUT_PLANAR_STRIDE_0')



# Register NVDLA_RBK_D_DECONV_STRIDE_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_DECONV_STRIDE_0'] = {
    'addr'            : 0x11054,
    'size'            : 0x15,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1f001f,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1f001f,
    'write_mask'      : 0x1f001f,
    'DECONV_X_STRIDE' : {
        'lsb'               : 0,
        'msb'               : 4,
        'size'              : 5,
        'field'             : (0x1f << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    'DECONV_Y_STRIDE' : {
        'lsb'               : 16,
        'msb'               : 20,
        'size'              : 5,
        'field'             : (0x1f << 16),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'DECONV_X_STRIDE',
        'DECONV_Y_STRIDE',
    ],
} # End of register: D_DECONV_STRIDE_0

registers['NVDLA_RBK']['register_list'].append('D_DECONV_STRIDE_0')



# Register NVDLA_RBK_D_PERF_ENABLE_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_PERF_ENABLE_0'] = {
    'addr'            : 0x11058,
    'size'            : 0x1,
    'reset_val'       : 0x0,
    'reset_mask'      : 0x1,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0x1,
    'write_mask'      : 0x1,
    'PERF_EN' : {
        'lsb'               : 0,
        'msb'               : 0,
        'size'              : 1,
        'field'             : (0x1 << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'rw',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'PERF_EN',
    ],
} # End of register: D_PERF_ENABLE_0

registers['NVDLA_RBK']['register_list'].append('D_PERF_ENABLE_0')



# Register NVDLA_RBK_D_PERF_READ_STALL_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_PERF_READ_STALL_0'] = {
    'addr'            : 0x1105c,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'RD_STALL_CNT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'RD_STALL_CNT',
    ],
} # End of register: D_PERF_READ_STALL_0

registers['NVDLA_RBK']['register_list'].append('D_PERF_READ_STALL_0')



# Register NVDLA_RBK_D_PERF_WRITE_STALL_0
if 'NVDLA_RBK' not in registers:
    registers['NVDLA_RBK'] = {}
    registers['NVDLA_RBK']['register_list']  = []

registers['NVDLA_RBK']['D_PERF_WRITE_STALL_0'] = {
    'addr'            : 0x11060,
    'size'            : 0x20,
    'reset_val'       : 0x0,
    'reset_mask'      : 0xffffffff,
    'sw_default_val'  : 0x0,
    'sw_default_mask' : 0x0,
    'read_mask'       : 0xffffffff,
    'write_mask'      : 0x0,
    'WR_STALL_CNT' : {
        'lsb'               : 0,
        'msb'               : 31,
        'size'              : 32,
        'field'             : (0xffffffff << 0),
        'default'           : 0x0,
        'sw_default'        : 0x0,
        'action'            : 'r',
        'enums' : {
        },
    },
    # Fields sorted in order of declaration in register
    'field_list' : [
        'WR_STALL_CNT',
    ],
} # End of register: D_PERF_WRITE_STALL_0

registers['NVDLA_RBK']['register_list'].append('D_PERF_WRITE_STALL_0')




##
## ADDRESS SPACES
##

addr_spaces['NVDLA_CFGROM'] = 0x0;
addr_spaces['NVDLA_GLB'] = 0x1000;
addr_spaces['NVDLA_MCIF'] = 0x2000;
addr_spaces['NVDLA_CDMA'] = 0x3000;
addr_spaces['NVDLA_CSC'] = 0x4000;
addr_spaces['NVDLA_CMAC_A'] = 0x5000;
addr_spaces['NVDLA_CMAC_B'] = 0x6000;
addr_spaces['NVDLA_CACC'] = 0x7000;
addr_spaces['NVDLA_SDP_RDMA'] = 0x8000;
addr_spaces['NVDLA_SDP'] = 0x9000;
addr_spaces['NVDLA_PDP_RDMA'] = 0xa000;
addr_spaces['NVDLA_PDP'] = 0xb000;
addr_spaces['NVDLA_CDP_RDMA'] = 0xc000;
addr_spaces['NVDLA_CDP'] = 0xd000;
addr_spaces['NVDLA_GEC'] = 0xe000;
addr_spaces['NVDLA_CVIF'] = 0xf000;
addr_spaces['NVDLA_BDMA'] = 0x10000;
addr_spaces['NVDLA_RBK'] = 0x11000;
