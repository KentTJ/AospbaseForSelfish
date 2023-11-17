// This file is auto-generated by generate-event_table.py.

EVENT_TYPE_TABLE_ENTRY("cpu-cycles", PERF_TYPE_HARDWARE, PERF_COUNT_HW_CPU_CYCLES, "", "")
EVENT_TYPE_TABLE_ENTRY("instructions", PERF_TYPE_HARDWARE, PERF_COUNT_HW_INSTRUCTIONS, "", "")
EVENT_TYPE_TABLE_ENTRY("cache-references", PERF_TYPE_HARDWARE, PERF_COUNT_HW_CACHE_REFERENCES, "", "")
EVENT_TYPE_TABLE_ENTRY("cache-misses", PERF_TYPE_HARDWARE, PERF_COUNT_HW_CACHE_MISSES, "", "")
EVENT_TYPE_TABLE_ENTRY("branch-instructions", PERF_TYPE_HARDWARE, PERF_COUNT_HW_BRANCH_INSTRUCTIONS, "", "")
EVENT_TYPE_TABLE_ENTRY("branch-misses", PERF_TYPE_HARDWARE, PERF_COUNT_HW_BRANCH_MISSES, "", "")
EVENT_TYPE_TABLE_ENTRY("bus-cycles", PERF_TYPE_HARDWARE, PERF_COUNT_HW_BUS_CYCLES, "", "")
EVENT_TYPE_TABLE_ENTRY("stalled-cycles-frontend", PERF_TYPE_HARDWARE, PERF_COUNT_HW_STALLED_CYCLES_FRONTEND, "", "")
EVENT_TYPE_TABLE_ENTRY("stalled-cycles-backend", PERF_TYPE_HARDWARE, PERF_COUNT_HW_STALLED_CYCLES_BACKEND, "", "")

EVENT_TYPE_TABLE_ENTRY("cpu-clock", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_CPU_CLOCK, "", "")
EVENT_TYPE_TABLE_ENTRY("task-clock", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_TASK_CLOCK, "", "")
EVENT_TYPE_TABLE_ENTRY("page-faults", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_PAGE_FAULTS, "", "")
EVENT_TYPE_TABLE_ENTRY("context-switches", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_CONTEXT_SWITCHES, "", "")
EVENT_TYPE_TABLE_ENTRY("cpu-migrations", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_CPU_MIGRATIONS, "", "")
EVENT_TYPE_TABLE_ENTRY("minor-faults", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_PAGE_FAULTS_MIN, "", "")
EVENT_TYPE_TABLE_ENTRY("major-faults", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_PAGE_FAULTS_MAJ, "", "")
EVENT_TYPE_TABLE_ENTRY("alignment-faults", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_ALIGNMENT_FAULTS, "", "")
EVENT_TYPE_TABLE_ENTRY("emulation-faults", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_EMULATION_FAULTS, "", "")

EVENT_TYPE_TABLE_ENTRY("L1-dcache-loads", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_L1D) | (PERF_COUNT_HW_CACHE_OP_READ << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("L1-dcache-load-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_L1D) | (PERF_COUNT_HW_CACHE_OP_READ << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("L1-dcache-stores", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_L1D) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("L1-dcache-store-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_L1D) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("L1-dcache-prefetches", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_L1D) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("L1-dcache-prefetch-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_L1D) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("L1-icache-loads", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_L1I) | (PERF_COUNT_HW_CACHE_OP_READ << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("L1-icache-load-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_L1I) | (PERF_COUNT_HW_CACHE_OP_READ << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("L1-icache-stores", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_L1I) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("L1-icache-store-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_L1I) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("L1-icache-prefetches", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_L1I) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("L1-icache-prefetch-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_L1I) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("LLC-loads", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_LL) | (PERF_COUNT_HW_CACHE_OP_READ << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("LLC-load-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_LL) | (PERF_COUNT_HW_CACHE_OP_READ << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("LLC-stores", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_LL) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("LLC-store-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_LL) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("LLC-prefetches", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_LL) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("LLC-prefetch-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_LL) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("dTLB-loads", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_DTLB) | (PERF_COUNT_HW_CACHE_OP_READ << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("dTLB-load-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_DTLB) | (PERF_COUNT_HW_CACHE_OP_READ << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("dTLB-stores", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_DTLB) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("dTLB-store-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_DTLB) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("dTLB-prefetches", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_DTLB) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("dTLB-prefetch-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_DTLB) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("iTLB-loads", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_ITLB) | (PERF_COUNT_HW_CACHE_OP_READ << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("iTLB-load-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_ITLB) | (PERF_COUNT_HW_CACHE_OP_READ << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("iTLB-stores", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_ITLB) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("iTLB-store-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_ITLB) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("iTLB-prefetches", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_ITLB) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("iTLB-prefetch-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_ITLB) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("branch-loads", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_BPU) | (PERF_COUNT_HW_CACHE_OP_READ << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("branch-load-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_BPU) | (PERF_COUNT_HW_CACHE_OP_READ << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("branch-stores", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_BPU) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("branch-store-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_BPU) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("branch-prefetches", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_BPU) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("branch-prefetch-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_BPU) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("node-loads", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_NODE) | (PERF_COUNT_HW_CACHE_OP_READ << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("node-load-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_NODE) | (PERF_COUNT_HW_CACHE_OP_READ << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("node-stores", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_NODE) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("node-store-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_NODE) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("node-prefetches", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_NODE) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)), "", "")
EVENT_TYPE_TABLE_ENTRY("node-prefetch-misses", PERF_TYPE_HW_CACHE, ((PERF_COUNT_HW_CACHE_NODE) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) | (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)), "", "")

EVENT_TYPE_TABLE_ENTRY("inplace-sampler", SIMPLEPERF_TYPE_USER_SPACE_SAMPLERS, SIMPLEPERF_CONFIG_INPLACE_SAMPLER, "", "")

EVENT_TYPE_TABLE_ENTRY("raw-sw-incr", PERF_TYPE_RAW, 0x0, "software increment", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1-icache-refill", PERF_TYPE_RAW, 0x1, "level 1 instruction cache refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1-itlb-refill", PERF_TYPE_RAW, 0x2, "level 1 instruction TLB refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1-dcache-refill", PERF_TYPE_RAW, 0x3, "level 1 data cache refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1-dcache", PERF_TYPE_RAW, 0x4, "level 1 data cache access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1-dtlb-refill", PERF_TYPE_RAW, 0x5, "level 1 data TLB refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-load-retired", PERF_TYPE_RAW, 0x6, "load (instruction architecturally executed)", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-store-retired", PERF_TYPE_RAW, 0x7, "store (instruction architecturally executed)", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-instruction-retired", PERF_TYPE_RAW, 0x8, "instructions (instruction architecturally executed)", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-exception-taken", PERF_TYPE_RAW, 0x9, "exception taken", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-exception-return", PERF_TYPE_RAW, 0xa, "exception return (instruction architecturally executed)", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-cid-write-retired", PERF_TYPE_RAW, 0xb, "write to CONTEXIDR (instruction architecturally executed)", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-pc-write-retired", PERF_TYPE_RAW, 0xc, "software change of the PC (instruction architecturally executed)", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-br-immed-retired", PERF_TYPE_RAW, 0xd, "immediate branch (instruction architecturally executed)", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-br-return-retired", PERF_TYPE_RAW, 0xe, "procedure return (instruction architecturally executed)", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-unaligned-ldst-retired", PERF_TYPE_RAW, 0xf, "unaligned load or store (instruction architecturally executed)", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-br-mis-pred", PERF_TYPE_RAW, 0x10, "mispredicted or not predicted branch speculatively executed", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-cpu-cycles", PERF_TYPE_RAW, 0x11, "cpu cycles", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-br-pred", PERF_TYPE_RAW, 0x12, "predictable branch speculatively executed", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-mem-access", PERF_TYPE_RAW, 0x13, "data memory access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1-icache", PERF_TYPE_RAW, 0x14, "level 1 instruction cache access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1-dcache-wb", PERF_TYPE_RAW, 0x15, "level 1 data cache write-back", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2-dcache", PERF_TYPE_RAW, 0x16, "level 2 data cache access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2-dcache-refill", PERF_TYPE_RAW, 0x17, "level 2 data cache refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2-dcache-wb", PERF_TYPE_RAW, 0x18, "level 2 data cache write-back", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-bus-access", PERF_TYPE_RAW, 0x19, "bus access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-memory-error", PERF_TYPE_RAW, 0x1a, "local memory error", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-inst-spec", PERF_TYPE_RAW, 0x1b, "operation speculatively executed", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-ttbr-write-retired", PERF_TYPE_RAW, 0x1c, "write to TTBR (instruction architecturally executed)", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-bus-cycles", PERF_TYPE_RAW, 0x1d, "bus cycle", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1-dcache-allocate", PERF_TYPE_RAW, 0x1f, "level 1 data cache allocation without refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2-dcache-allocate", PERF_TYPE_RAW, 0x20, "level 2 data cache allocation without refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-br-retired", PERF_TYPE_RAW, 0x21, "branch (instruction architecturally executed)", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-br-mis-pred-retired", PERF_TYPE_RAW, 0x22, "mispredicted branch (instruction architecturally executed)", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-stall-frontend", PERF_TYPE_RAW, 0x23, "no operation issued due to the frontend", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-stall-backend", PERF_TYPE_RAW, 0x24, "no operation issued due to the backend", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1-dtlb", PERF_TYPE_RAW, 0x25, "level 1 data or unified TLB access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1-itlb", PERF_TYPE_RAW, 0x26, "level 1 instruction TLB access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2-icache", PERF_TYPE_RAW, 0x27, "level 2 instruction cache access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2-icache-refill", PERF_TYPE_RAW, 0x28, "level 2 instruction cache refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l3-dcache-allocate", PERF_TYPE_RAW, 0x29, "level 3 data or unified cache allocation without refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l3-dcache-refill", PERF_TYPE_RAW, 0x2a, "level 3 data or unified cache refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l3-dcache", PERF_TYPE_RAW, 0x2b, "level 3 data or unified cache access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l3-dcache-wb", PERF_TYPE_RAW, 0x2c, "level 3 data or unified cache write-back", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2-dtlb-refill", PERF_TYPE_RAW, 0x2d, "level 2 data or unified TLB refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2-itlb-refill", PERF_TYPE_RAW, 0x2e, "level 2 instruction TLB refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2-dtlb", PERF_TYPE_RAW, 0x2f, "level 2 data or unified TLB access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2-itlb", PERF_TYPE_RAW, 0x30, "level 2 instruction TLB access", "arm")

