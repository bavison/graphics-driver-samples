#pragma once

#pragma warning(disable : 4201)

#include <wingdi.h>

#pragma pack(push, 1)

typedef struct _VC4_REGISTER_FILE
{
    volatile UINT V3D_IDENT0;   // 0x0000   V3D Identification 0 (V3D block identity
    volatile UINT V3D_IDENT1;   // 0x0004   V3D Identification 1 (V3D Configuration A)
    volatile UINT V3D_IDENT2;   // 0x0008   V3D Identification 1 (V3D Configuration B

    volatile UINT RESERVED0;

    volatile UINT V3D_SCRATCH;  // 0x0010   Scratch Register

    volatile UINT RESERVED1[3];

    volatile UINT V3D_L2CACTL;  // 0x0020   L2 Cache Control
    volatile UINT V3D_SLCACTL;  // 0x0024   Slices Cache Control

    volatile UINT RESERVED2[2];

    volatile UINT V3D_INTCTL;   // 0x0030   Interrupt Control
    volatile UINT V3D_INTENA;   // 0x0034   Interrupt Enables
    volatile UINT V3D_INTDIS;   // 0x0038   Interrupt Disables

    volatile UINT RESERVED3[49];

    volatile UINT V3D_CT0CS;    // 0x0100   Control List Executor Thread 0 Control and Status.
    volatile UINT V3D_CT1CS;    // 0x0104   Control List Executor Thread 1 Control and Status.
    volatile UINT V3D_CT0EA;    // 0x0108   Control List Executor Thread 0 End Address.
    volatile UINT V3D_CT1EA;    // 0x010c   Control List Executor Thread 1 End Address.
    volatile UINT V3D_CT0CA;    // 0x0110   Control List Executor Thread 0 Current Address.
    volatile UINT V3D_CT1CA;    // 0x0114   Control List Executor Thread 1 Current Address.
    volatile UINT V3D_CT00RA0;  // 0x0118   Control List Executor Thread 0 Return Address.
    volatile UINT V3D_CT01RA0;  // 0x011c   Control List Executor Thread 1 Return Address.
    volatile UINT V3D_CT0LC;    // 0x0120   Control List Executor Thread 0 List Counter
    volatile UINT V3D_CT1LC;    // 0x0124   Control List Executor Thread 1 List Counter
    volatile UINT V3D_CT0PC;    // 0x0128   Control List Executor Thread 0 Primitive List Counter
    volatile UINT V3D_CT1PC;    // 0x012c   Control List Executor Thread 1 Primitive List Counter

    volatile UINT V3D_PCS;      // 0x0130   V3D Pipeline Control and Status
    volatile UINT V3D_BFC;      // 0x0134   Binning Mode Flush Count
    volatile UINT V3D_RFC;      // 0x0138   Rendering Mode Frame Count

    volatile UINT RESERVED4[113];

    volatile UINT V3D_BPCA;     // 0x0300   Current Address of Binning Memory Pool
    volatile UINT V3D_BPCS;     // 0x0304   Remaining Size of Binning Memory Pool
    volatile UINT V3D_BPOA;     // 0x0308   Address of Overspill Binning Memory Block
    volatile UINT V3D_BPOS;     // 0x030c   Size of Overspill Binning Memory Block
    volatile UINT V3D_BXCF;     // 0x0310   Binner Debug

    volatile UINT RESERVED5[63];

    volatile UINT V3D_SQRSV0;   // 0x0410   Reserve QPUs 0-7
    volatile UINT V3D_SQRSV1;   // 0x0414   Reserve QPUs 8-15
    volatile UINT V3D_SQCNTL;   // 0x0418   QPU Scheduler Control

    volatile UINT RESERVED6[5];

    volatile UINT V3D_SRQPC;    // 0x0430   QPU User Program Request Program Address
    volatile UINT V3D_SRQUA;    // 0x0434   QPU User Program Request Uniforms Address
    volatile UINT V3D_SRQUL;    // 0x0438   QPU User Program Request Uniforms Length
    volatile UINT V3D_SRQCS;    // 0x043c   QPU User Program Request Control and Status

    volatile UINT RESERVED7[48];

    volatile UINT V3D_VPACNTL;  // 0x0500   VPM Allocator Control
    volatile UINT V3D_VPMBASE;  // 0x0504   VPM base (user) memory reservation

    volatile UINT RESERVED8[90];

    volatile UINT V3D_PCTRC;    // 0x0670   Performance Counter Clear
    volatile UINT V3D_PCTRE;    // 0x0674   Performance Counter Enables

    volatile UINT RESERVED9[2];

    volatile UINT V3D_PCTR0;    // 0x0680   Performance Counter Count 0
    volatile UINT V3D_PCTRS0;   // 0x0684   Performance Counter Mapping 0
    volatile UINT V3D_PCTR1;    // 0x0688   Performance Counter Count 1
    volatile UINT V3D_PCTRS1;   // 0x068c   Performance Counter Mapping 1
    volatile UINT V3D_PCTR2;    // 0x0690   Performance Counter Count 2
    volatile UINT V3D_PCTRS2;   // 0x0694   Performance Counter Mapping 2
    volatile UINT V3D_PCTR3;    // 0x0698   Performance Counter Count 3
    volatile UINT V3D_PCTRS3;   // 0x069c   Performance Counter Mapping 3
    volatile UINT V3D_PCTR4;    // 0x06a0   Performance Counter Count 4
    volatile UINT V3D_PCTRS4;   // 0x06a4   Performance Counter Mapping 4
    volatile UINT V3D_PCTR5;    // 0x06a8   Performance Counter Count 5
    volatile UINT V3D_PCTRS5;   // 0x06ac   Performance Counter Mapping 5
    volatile UINT V3D_PCTR6;    // 0x06b0   Performance Counter Count 6
    volatile UINT V3D_PCTRS6;   // 0x06b4   Performance Counter Mapping 6
    volatile UINT V3D_PCTR7;    // 0x06b8   Performance Counter Count 7
    volatile UINT V3D_PCTRS7;   // 0x06bc   Performance Counter Mapping 7 
    volatile UINT V3D_PCTR8;    // 0x06c0   Performance Counter Count 8
    volatile UINT V3D_PCTRS8;   // 0x06c4   Performance Counter Mapping 8
    volatile UINT V3D_PCTR9;    // 0x06c8   Performance Counter Count 9
    volatile UINT V3D_PCTRS9;   // 0x06cc   Performance Counter Mapping 9
    volatile UINT V3D_PCTR10;   // 0x06d0   Performance Counter Count 10
    volatile UINT V3D_PCTRS10;  // 0x06d4   Performance Counter Mapping 10
    volatile UINT V3D_PCTR11;   // 0x06d8   Performance Counter Count 11
    volatile UINT V3D_PCTRS11;  // 0x06dc   Performance Counter Mapping 11
    volatile UINT V3D_PCTR12;   // 0x06e0   Performance Counter Count 12
    volatile UINT V3D_PCTRS12;  // 0x06e4   Performance Counter Mapping 12
    volatile UINT V3D_PCTR13;   // 0x06e8   Performance Counter Count 13
    volatile UINT V3D_PCTRS13;  // 0x06ec   Performance Counter Mapping 13
    volatile UINT V3D_PCTR14;   // 0x06f0   Performance Counter Count 14
    volatile UINT V3D_PCTRS14;  // 0x06f4   Performance Counter Mapping 14
    volatile UINT V3D_PCTR15;   // 0x06f8   Performance Counter Count 15
    volatile UINT V3D_PCTRS15;  // 0x06fc   Performance Counter Mapping 15

    volatile UINT RESERVED10[512];

    volatile UINT V3D_DBGE;     // 0x0f00   PSE Error Signals
    volatile UINT V3D_FDBGO;    // 0x0f04   FEP Overrun Error Signals
    volatile UINT V3D_FDBGB;    // 0x0f08   FEP Interface Ready and Stall Signals, FEP Busy Signals
    volatile UINT V3D_FDBGR;    // 0x0f0c   FEP Internal Ready Signals
    volatile UINT V3D_FDBGS;    // 0x0f10   FEP Internal Stall Input Signals

    volatile UINT RESERVED11[3];

    volatile UINT V3D_ERRSTAT;  // 0x0f20   Miscellaneous Error Signals (VPM, VDW, VCD, VCM, L2C)

} VC4_REGISTER_FILE;

// 0x0020   L2 Cache Control
typedef union _V3D_REG_L2CACTL
{
    struct
    {
        UINT    L2CENA      : 1;
        UINT    L2CDIS      : 1;
        UINT    L2CCLR      : 1;
    };

    UINT        Value;
} V3D_REG_L2CACTL;

// 0x0024   Slices Cache Control
typedef union _V3D_REG_SLCACTL
{
    struct
    {
        UINT    ICCS0123    : 4;
        UINT                : 4;
        UINT    UCCS0123    : 4;
        UINT                : 4;
        UINT    T0CCS0123   : 4;
        UINT                : 4;
        UINT    T1CCS0123   : 4;
    };

    UINT        Value;
} V3D_REG_SLCACTL;

// 0x0100   Control List Executor Thread 0 Control and Status
typedef union _V3D_REG_CT0CS
{
    struct
    {
        UINT    CTMODE      : 1;
        UINT    RESERVED0   : 2;
        UINT    CTERR       : 1;
        UINT    CTSUBS      : 1;
        UINT    CTRUN       : 1;
        UINT    RESERVED1   : 2;
        UINT    CTRTSD      : 2;
        UINT    RESERVED2   : 2;
        UINT    CTSEMA      : 3;
        UINT    CTRSTA      : 1;
        UINT    RESERVED3   : 16;
    };

    UINT        Value;
} V3D_REG_CT0CS, V3D_REG_CT1CS;

typedef enum _VC4_COMMAND_ID : BYTE
{
    VC4_CMD_HALT                        = 0,
    VC4_CMD_NOP                         = 1,
    
    // 2 - 3 Reserved
    
    VC4_CMD_FLUSH                       = 4,
    VC4_CMD_FLUSH_ALL_STATE             = 5,
    VC4_CMD_START_TILE_BINNING          = 6,
    VC4_CMD_INCREMENT_SEMAPHORE         = 7,
    VC4_CMD_WAIT_ON_SEMAPHORE           = 8,
    
    // 9 - 15 Reserved
    
    VC4_CMD_BRANCH                      = 16,
    VC4_CMD_BRANCH_TO_SUB_LIST          = 17,
    VC4_CMD_RETURN_FROM_SUB_LIST        = 18,
    
    // 19 - 23 Reserved
    
    VC4_CMD_STORE_MS_RESOLVED_TILE_COLOR_BUF                            = 24,
    VC4_CMD_STORE_MS_RESOLVED_TILE_COLOR_BUF_AND_SIGNAL_END_OF_FRAME    = 25,

    VC4_CMD_STORE_FULL_RESOLUTION_TILE_BUFFER           = 26,
    VC4_CMD_LOAD_FULL_RESOLUTION_TILE_BUFFER            = 27,

    VC4_CMD_STORE_TILE_BUF_GENERAL      = 28,
    VC4_CMD_LOAD_TILE_BUF_GENERAL       = 29,

    // 30 - 31 Reserved

    VC4_CMD_INDEXED_PRIMITIVE_LIST      = 32,
    VC4_CMD_VERTEX_ARRAY_PRIMITIVES     = 33,

    // 34 - 40 Reserved

    VC4_CMD_VG_COORDINATE_ARRY_PRIMITIVES   = 41,
    VC4_CMD_VG_INLINE_PRIMITIVES            = 42,

    // 43 - 47 Reserved

    VC4_CMD_COMPRESSED_PRIMITIVE_LIST   = 48,
    VC4_CMD_CLIPPED_PRIMITVE_WITH_COMPRESSED_PRIMITIVE_LIST = 49,

    // 50 - 55 Reserved

    VC4_CMD_PRIMITIVE_LIST_FORMAT       = 56,

    // 57 - 63 Reserved

    VC4_CMD_GL_SHADER_STATE             = 64,
    VC4_CMD_NV_SHADER_STATE             = 65,   // No Vertex Shading
    VC4_CMD_VG_SHADER_STATE             = 66,
    VC4_CMD_VG_INLINE_SHADER_RECORD     = 67,

    // 68 - 95 Reserved

    VC4_CMD_CONFIG_BITS                 = 96,
    VC4_CMD_FLAT_SHADE_FLAGS            = 97,
    VC4_CMD_POINT_SIZE                  = 98,
    VC4_CMD_LINE_WIDTH                  = 99,
    VC4_CMD_RHT_X_BOUNDARY              = 100,
    VC4_CMD_DEPTH_OFFSET                = 101,
    VC4_CMD_CLIP_WINDOW                 = 102,
    VC4_CMD_VIEWPORT_OFFSET             = 103,
    VC4_CMD_Z_MIN_AND_MAX_CLIPPING_PLANES   = 104,
    VC4_CMD_CLIPPER_XY_SCALING          = 105,

    // 107 - 111 Reserved

    VC4_CMD_TILE_BINNING_MODE_CONFIG    = 112,
    VC4_CMD_TILE_RENDERING_MODE_CONFIG  = 113,
    VC4_CMD_CLEAR_COLOR                 = 114,
    VC4_CMD_TILE_COORDINATES            = 115,

    // 116 - 255 Reserved
} VC4_COMMAND_ID;

//
// Primitive Mode used by code 32, 33
//

typedef enum _VC4PrimitiveMode
{
    VC4_POINTS = 0,
    VC4_LINES = 1,
    VC4_LINE_LOOP = 2,
    VC4_LINE_STRIP = 3,
    VC4_TRIANGLES = 4,
    VC4_TRIANGLE_STRIP = 5,
    VC4_TRIANGLE_FAN = 6
} VC4PrimitiveMode;

//
// Define of commands for Control List
//

// Code: 0
typedef struct _VC4Halt
{
    VC4_COMMAND_ID  CommandCode;
} VC4Halt;

const VC4Halt vc4Halt = { VC4_CMD_HALT };

// Code: 1
typedef struct _VC4Nop
{
    VC4_COMMAND_ID  CommandCode;
} VC4Nop;

const VC4Nop vc4Nop = { VC4_CMD_NOP };

// Code: 4,     Binning only
typedef struct _VC4Flush
{
    VC4_COMMAND_ID  CommandCode;
} VC4Flush;

const VC4Flush vc4Flush = { VC4_CMD_FLUSH };

// Code: 5,     Binning only
typedef struct _VC4FlushAllState
{
    VC4_COMMAND_ID  CommandCode;
} VC4FlushAllState;

const VC4FlushAllState vc4FlushAllState = { VC4_CMD_FLUSH_ALL_STATE };

// Code: 6,     Binning only
typedef struct _VC4StartTileBinng
{
    VC4_COMMAND_ID  CommandCode;
} VC4StartTileBinng;

const VC4StartTileBinng vc4StartTileBinng = { VC4_CMD_START_TILE_BINNING };

// Code: 16
typedef struct _VC4Branch
{
    VC4_COMMAND_ID  CommandCode;
    UINT            BranchAddress;
} VC4Branch;

static VC4Branch vc4Branch = { VC4_CMD_BRANCH, 0 };

// Code: 17
typedef struct _VC4BranchToSubList
{
    VC4_COMMAND_ID  CommandCode;        // Maximum of 2 levels of nesting
    UINT            BranchAddress;      // Absolute branch address
} VC4BranchToSubList;

static VC4BranchToSubList vc4BranchToSubList = { VC4_CMD_BRANCH_TO_SUB_LIST, 0 };

// Code: 24,    Rendering only
typedef struct _VC4StoreMSResolvedTileColorBuf
{
    VC4_COMMAND_ID  CommandCode;
} VC4StoreMSResolvedTileColorBuf;

static VC4StoreMSResolvedTileColorBuf vc4StoreMSResolvedTileColorBuf = { VC4_CMD_STORE_MS_RESOLVED_TILE_COLOR_BUF };

// Code: 25,    Rendering only
typedef struct _VC4StoreMSResolvedTileColorBufAndSignalEndOfFrame
{
    VC4_COMMAND_ID  CommandCode;
} VC4StoreMSResolvedTileColorBufAndSignalEndOfFrame;

static VC4StoreMSResolvedTileColorBufAndSignalEndOfFrame vc4StoreMSResolvedTileColorBufAndSignalEndOfFrame = { VC4_CMD_STORE_MS_RESOLVED_TILE_COLOR_BUF_AND_SIGNAL_END_OF_FRAME };

// Code: 28,    Rendering only
typedef struct _VC4StoreTileBufferGeneral
{
    VC4_COMMAND_ID  CommandCode;
    union
    {
        struct
        {
            USHORT  BufferToStore               : 3;    // 0,1,2,3,4,5 = None, Color, Z/stencil, Z-only, VG-Mask, Full Dump
            USHORT  Unused1                     : 1;
            USHORT  Fortmat                     : 2;    // 0,1,2 = raster format, T-format, LT-format
            USHORT  Mode                        : 2;    // 0,1,2 = Sample 0, Decimate x4, Decimate x16
                                                        // Applies to non-HDR Color store only. Decimate x16 only available in ms mode. 
            USHORT  PixelColorFormat            : 2;    // 0,1,2 = rgba8888, bgr565 dithered, bgr565 no dither
                                                        // Applies to non-HDR Color store only.
            USHORT  Unused2                     : 2;
            USHORT  DisableDoubleBufferSwap     : 1;    // Disable double-buffer swap in double buffer mode 
            USHORT  DisableColorBufferClear     : 1;
            USHORT  DisableZStencilClear        : 1;
            USHORT  DisableVGMaskBufferClear    : 1;
        };
        USHORT      UShort1;
    };
    union
    {
        struct
        {
            UINT    DisableColorBufferDump      : 1;    // Applies to full dump mode only
            UINT    DisableZStencilBufferDump   : 1;
            UINT    DisableVGMaskBufferDump     : 1;
            UINT    LastTileOfFrame             : 1;
            UINT    MemoryBaseAddress           : 28;   // Address of frame/tile dump buffer, 16 bytes aligned
        };
        UINT        UInt3;
    };
} VC4StoreTileBufferGeneral;

const VC4StoreTileBufferGeneral vc4StoreTileBufferGeneral = { VC4_CMD_STORE_TILE_BUF_GENERAL, 0 };

// Code: 32
typedef struct _VC4IndexedPrimitiveList
{
    VC4_COMMAND_ID  CommandCode;
    union
    {
        struct
        {
            BYTE    PrimitiveMode   : 4;    // 0,1,2,3,4,5,6 = points, lines, line_loop, line_strip, triangles, triangle_strip,  triangle_fan
            BYTE    IndexType       : 4;    // 0,1 = 8-bit, 16-bit 
        };
        BYTE    Byte1;
    };
    UINT        Length;                 // Number of indices
    UINT        AddressOfIndicesList;
    UINT        MaximumIndex;           // Primitives using a greater index will cause error
} VC4IndexedPrimitiveList;

const VC4IndexedPrimitiveList vc4IndexedPrimitiveList = { VC4_CMD_INDEXED_PRIMITIVE_LIST, 0 };

// Code: 56     
// TODO[indyz]: Verify this command is Rendering CL only
//              Verify if 3 for 16 bit x/y
typedef struct _VC4PrimitiveListFormat
{
    VC4_COMMAND_ID  CommandCode;
    union
    {
        struct
        {
            BYTE    PrimitiveType   : 4;    // 0,1,2,3 = Points, Lines, Triangles, RHT
            BYTE    DataType        : 4;    // 1,3 = 16-bit index, 32-bit x/y 
        };
        BYTE    Byte1;
    };
} VC4PrimitiveListFormat;

const VC4PrimitiveListFormat vc4PrimitiveListFormat = { VC4_CMD_PRIMITIVE_LIST_FORMAT, 0 };

// Code: 65
typedef struct _VC4NVShaderState            // No Vertex shading - NV
{
    VC4_COMMAND_ID  CommandCode;
    UINT            ShaderRecordAddress;    //  16-bytes aligned GPU address of VC4NVShahderStateRecord
} VC4NVShaderState;

const VC4NVShaderState vc4NVShaderState = { VC4_CMD_NV_SHADER_STATE, 0 };

typedef struct _VC4NVShaderStateRecord
{
    union
    {
        struct
        {
            BYTE    FragmentShaderIsSingleThreaded  : 1;
            BYTE    PointSizeIncluded               : 1;    // In shaded vertex data
            BYTE    EnableClipping                  : 1;
            BYTE    ClipCoordinatesHeaderIncluded   : 1;    // In shaded vertex data
        };

        BYTE        Byte0;
    };
    BYTE            ShadedVertexDataStride;
    BYTE            FragmentShaderNumberOfUniforms;
    BYTE            FragmaneShaderNumberOfVaryings;
    UINT            FragmentShaderCodeAddress;          // Pixel shader code GPU address
    UINT            FragmentShaderUniformsAddress;      // Pixel shader constant buffer GPU address
    UINT            ShadedVertexDataAddress;            // Vertex buffer GPU address
} VC4NVShaderStateRecord;

const VC4NVShaderStateRecord vc4NVShaderStateRecord = {};

// Code: 96
typedef struct _VC4ConfigBits
{
    VC4_COMMAND_ID  CommandCode;
    union
    {
        struct
        {
            USHORT  EnableForwardFacingPrimitive    : 1;
            USHORT  EnableReverseFacingPrimitive    : 1;
            USHORT  ClosewisePrimitives             : 1;
            USHORT  EnableDepthOffset               : 1;
            USHORT  AntialisedPointsAndLines        : 1;    // Not actually supported
            USHORT  CoverageReadType                : 1;    // (0 = 4*8-bit level, 1 = 16-bit mask)
            USHORT  RasteriserOversampleMode        : 2;    // (0,1,2,3 = none, 4x, 16x, Reserved) 
            USHORT  CoveragePipeSelect              : 1;
            USHORT  CoverageUpdateMode              : 2;    // (0-3 = nonzero, odd, or, zero)
            USHORT  CoverageReadMode                : 1;    // (0,1 = Clear on read, Leave on read)
            USHORT  DepthTestFunction               : 3;    // (0-7 = never, lt, eq, le, gt, ne, ge, always)
            USHORT  ZUpdatesEnable                  : 1;
        };

        USHORT      UShort1;
    };
    union
    {
        struct
        {
            BYTE    EarlyZEnable                    : 1;
            BYTE    EarlyZUpdatesEnable             : 1;
        };

        BYTE        Byte3;
    };
} VC4ConfigBits;

const VC4ConfigBits vc4ConfigBits = { VC4_CMD_CONFIG_BITS, 0 };

// Code: 102
typedef struct _VC4ClipWindow
{
    VC4_COMMAND_ID  CommandCode;
    USHORT          ClipWindowLeft;
    USHORT          ClipWindowBottom;
    USHORT          ClipWindowWidth;
    USHORT          ClipWindowHeight;
} VC4ClipWindow;

const VC4ClipWindow vc4ClipWindow = { VC4_CMD_CLIP_WINDOW, 0 };

// Code: 103
typedef struct _VC4ViewportOffset
{
    VC4_COMMAND_ID  CommandCode;
    SHORT           ViewportCenterX;
    SHORT           ViewportCenterY;
} VC4ViewportOffset;

const VC4ViewportOffset vc4ViewportOffset = { VC4_CMD_VIEWPORT_OFFSET, 0 };

// Code: 112,   Binning only
typedef struct _VC4TileBinningModeConfig
{
    VC4_COMMAND_ID  CommandCode;
    UINT            TileAllocationMemoryAddress;
    UINT            TileAllocationMemorySize;
    UINT            TileStateDataArrayBaseAddress;  // 16-byte aligned, size of 48 bytes * num tiles
    BYTE            WidthInTiles;
    BYTE            HeightInTiles;
    union
    {
        struct
        {
            BYTE    MultisampleMode                     : 1;    // 4x
            BYTE    TileBuffer64BitColorDepth           : 1;
            BYTE    AutoInitialiseTileStateDataArray    : 1;
            BYTE    TileAllocationInitialBlockSize      : 2;    // 32, 64, 128, 256 bytes
            BYTE    TileAllocationBlockSize             : 2;    // 32, 64, 128, 256 bytes
            BYTE    DoubleBufferInNoneMsMode            : 1;
        };

        BYTE        Byte15;
    };
} VC4TileBinningModeConfig;

const VC4TileBinningModeConfig vc4TileBinningModeConfig = { VC4_CMD_TILE_BINNING_MODE_CONFIG, 0 };

// Code 113,    Rendering only
typedef struct _VC4TileRenderingModeConfig
{
    VC4_COMMAND_ID  CommandCode;
    UINT            MemoryAddress;              // Render target address
    USHORT          WidthInPixels;
    USHORT          HeightInPixels;
    union
    {
        struct
        {
            USHORT  MultisampleMode                 : 1;    // 4x
            USHORT  TileBuffer64BitColorDepth       : 1;    // HDR mode
            USHORT  NonHDRFrameBufferColorFormat    : 2;    // 0,1,2=bgr565 dithered, rgba8888, bgr565
            USHORT  DecimateMode                    : 2;    // 0=1x, 1=4x, 2=16x
            USHORT  MemoryFormat                    : 2;    // 0=Linear, 1=T-format, 2=LT-format
            USHORT  EnableVGMaskBuffer              : 1;
            USHORT  SelectCoverageMode              : 1;
            USHORT  EarlyZUpdateDirection           : 1;
            USHORT  EarlyZEarlyCovDisable           : 1;
            USHORT  DoubleBufferInNonMsMode         : 1;
            USHORT  Unused                          : 3;
        };

        USHORT      UShort9;
    };
} VC4TileRenderingModeConfig;

const VC4TileRenderingModeConfig vc4TileRenderingModeConfig = { VC4_CMD_TILE_RENDERING_MODE_CONFIG, 0 };

// Code 114,    Rendering only
typedef struct _VC4ClearColors
{
    VC4_COMMAND_ID  CommandCode;
    union
    {
        struct
        {
            UINT    ClearColor8;
            UINT    ClearColor8Dup;
        };

        UINT64      ClearColor16;
    };
    union
    {
        struct
        {
            UINT    ClearZ      : 24;
            UINT    ClearVGMask : 8;
        };
        UINT        UInt9;
    };
    BYTE            ClearStencil;
} VC4ClearColors;

const VC4ClearColors vc4ClearColors = { VC4_CMD_CLEAR_COLOR, 0 };

// Code 115,    Rendering only
typedef struct _VC4TileCoordinates
{
    VC4_COMMAND_ID  CommandCode;
    BYTE            TileColumnNumber;
    BYTE            TileRowNumber;
} VC4TileCoordinates;

const VC4TileCoordinates vc4TileCoordinates = { VC4_CMD_TILE_COORDINATES, 0 };


//
// Constants
//

const UINT VC4_BINNING_TILE_PIXELS  = 64;

//
// VC4 bus address alias
//

const UINT VC4_BUS_ADDRESS_ALIAS_L1_L2_CACHED      = 0x00000000;
const UINT VC4_BUS_ADDRESS_ALIAS_L2_CACHE_COHERENT = 0x40000000;
const UINT VC4_BUS_ADDRESS_ALIAS_L2_CACHED         = 0x80000000;
const UINT VC4_BUS_ADDRESS_ALIAS_UNCACHED          = 0xC0000000;

#pragma pack(pop)

