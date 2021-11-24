#!/usr/bin/env python

import argparse
import struct
import array
import re

class VerilatorTraceWriter(object):
    def __init__(self, fname):
        self.f = open(fname, 'ab')
    
    # def wfi(self):
        # self.f.write(struct.pack('=B', 1))
    
    # def write_reg(self, addr, data):
        # self.f.write(struct.pack('=BII', 2, addr, data))
    
    # def read_reg(self, addr, mask, data):
        # self.f.write(struct.pack('=BIII', 3, addr, mask, data))
    
    # def dump_mem(self, addr, expected, dumpfile):
        # self.f.write(struct.pack('=BII', 4, addr, len(expected)))
        # self.f.write(expected)
        # self.f.write(struct.pack('=I', len(dumpfile)))
        # self.f.write(dumpfile)
    
    # def load_mem(self, addr, data):
        # self.f.write(struct.pack('=BII', 5, addr, len(data)))
        # self.f.write(data)
    
    def close(self):
        self.f.write(struct.pack('=B', 0xFF))
        self.f.close()
    
    # def register_syncpt_mask(self, id, mask):
        # self.f.write(struct.pack('=BII', 6, id, mask))
    
    # def set_intr_registers(self, status, mask):
        # self.f.write(struct.pack('=BII', 7, status, mask))
    
    # def syncpt_check_crc(self, spid, base, size, crc):
        # self.f.write(struct.pack('=BIIII', 8, spid, base, size, crc))
    
    # def syncpt_check_nothing(self, spid):
        # self.f.write(struct.pack('=BI', 9, spid))

def main():
    parser = argparse.ArgumentParser(description = "Tool to convert new-style traces to Verilator blobs.")
    parser.add_argument("output", help = "Trace file to create")
    args = parser.parse_args()
    
    # Ok, here we go.
    trace = VerilatorTraceWriter(args.output)
    # Finally, registers.
    trace.close()

if __name__ == '__main__':
    main()
