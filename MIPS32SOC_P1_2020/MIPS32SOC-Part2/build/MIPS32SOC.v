

module Mux_2x1_NBits #(
    parameter Bits = 2
)
(
    input [0:0] sel,
    input [(Bits - 1):0] in_0,
    input [(Bits - 1):0] in_1,
    output reg [(Bits - 1):0] out
);
    always @ (*) begin
        case (sel)
            1'h0: out = in_0;
            1'h1: out = in_1;
            default:
                out = 'h0;
        endcase
    end
endmodule


module CompUnsigned #(
    parameter Bits = 1
)
(
    input [(Bits -1):0] a,
    input [(Bits -1):0] b,
    output \> ,
    output \= ,
    output \<
);
    assign \> = a > b;
    assign \= = a == b;
    assign \< = a < b;
endmodule

module PriorityEncoder3 (
    input in0,
    input in1,
    input in2,
    input in3,
    input in4,
    input in5,
    input in6,
    input in7,
    output reg [2:0] num,
    output any
);
    always @ (*) begin
        if (in7 == 1'b1)
            num = 3'h7;
        else if (in6 == 1'b1)
            num = 3'h6;
        else if (in5 == 1'b1)
            num = 3'h5;
        else if (in4 == 1'b1)
            num = 3'h4;
        else if (in3 == 1'b1)
            num = 3'h3;
        else if (in2 == 1'b1)
            num = 3'h2;
        else if (in1 == 1'b1)
            num = 3'h1;
        else 
            num = 3'h0;
    end

    assign any = in0 | in1 | in2 | in3 | in4 | in5 | in6 | in7;
endmodule


module Mux_8x1_NBits #(
    parameter Bits = 2
)
(
    input [2:0] sel,
    input [(Bits - 1):0] in_0,
    input [(Bits - 1):0] in_1,
    input [(Bits - 1):0] in_2,
    input [(Bits - 1):0] in_3,
    input [(Bits - 1):0] in_4,
    input [(Bits - 1):0] in_5,
    input [(Bits - 1):0] in_6,
    input [(Bits - 1):0] in_7,
    output reg [(Bits - 1):0] out
);
    always @ (*) begin
        case (sel)
            3'h0: out = in_0;
            3'h1: out = in_1;
            3'h2: out = in_2;
            3'h3: out = in_3;
            3'h4: out = in_4;
            3'h5: out = in_5;
            3'h6: out = in_6;
            3'h7: out = in_7;
            default:
                out = 'h0;
        endcase
    end
endmodule


module ControlUnit (
  input [5:0] Opcode,
  input Reset, // RESET input
  output aluSrc,
  output RegDst,
  output [2:0] aluOp,
  output memToReg,
  output memRead,
  output memWrite,
  output RegWrite,
  output branchNotEqual,
  output branchEqual,
  output Jump
);
  wire s0;
  wire s1;
  wire s2;
  wire [2:0] s3;
  wire [11:0] s4;
  wire s5;
  wire s6;
  wire s7;
  wire s8;
  wire s9;
  wire [11:0] s10;
  CompUnsigned #(
    .Bits(6)
  )
  CompUnsigned_i0 (
    .a( Opcode ),
    .b( 6'b0 ),
    .\= ( s0 )
  );
  // SW
  CompUnsigned #(
    .Bits(6)
  )
  CompUnsigned_i1 (
    .a( Opcode ),
    .b( 6'b101011 ),
    .\= ( s1 )
  );
  // LW
  CompUnsigned #(
    .Bits(6)
  )
  CompUnsigned_i2 (
    .a( Opcode ),
    .b( 6'b100011 ),
    .\= ( s2 )
  );
  // BEQ
  CompUnsigned #(
    .Bits(6)
  )
  CompUnsigned_i3 (
    .a( Opcode ),
    .b( 6'b100 ),
    .\= ( s5 )
  );
  // BNE
  CompUnsigned #(
    .Bits(6)
  )
  CompUnsigned_i4 (
    .a( Opcode ),
    .b( 6'b101 ),
    .\= ( s6 )
  );
  // J
  CompUnsigned #(
    .Bits(6)
  )
  CompUnsigned_i5 (
    .a( Opcode ),
    .b( 6'b10 ),
    .\= ( s7 )
  );
  // ADDI
  CompUnsigned #(
    .Bits(6)
  )
  CompUnsigned_i6 (
    .a( Opcode ),
    .b( 6'b0 ),
    .\= ( s8 )
  );
  // ANDI
  CompUnsigned #(
    .Bits(6)
  )
  CompUnsigned_i7 (
    .a( Opcode ),
    .b( 6'b0 ),
    .\= ( s9 )
  );
  PriorityEncoder3 PriorityEncoder3_i8 (
    .in0( s0 ),
    .in1( s1 ),
    .in2( s2 ),
    .in3( s5 ),
    .in4( s6 ),
    .in5( s7 ),
    .in6( s8 ),
    .in7( s9 ),
    .num( s3 )
  );
  Mux_8x1_NBits #(
    .Bits(12)
  )
  Mux_8x1_NBits_i9 (
    .sel( s3 ),
    .in_0( 12'b101111000 ),
    .in_1( 12'b10010001 ),
    .in_2( 12'b110010110 ),
    .in_3( 12'b1000011000 ),
    .in_4( 12'b100000011000 ),
    .in_5( 12'b10000000000 ),
    .in_6( 12'b0 ),
    .in_7( 12'b0 ),
    .out( s4 )
  );
  Mux_2x1_NBits #(
    .Bits(12)
  )
  Mux_2x1_NBits_i10 (
    .sel( Reset ),
    .in_0( s4 ),
    .in_1( 12'b0 ),
    .out( s10 )
  );
  assign memWrite = s10[0];
  assign memRead = s10[1];
  assign memToReg = s10[2];
  assign aluOp = s10[5:3];
  assign RegDst = s10[6];
  assign aluSrc = s10[7];
  assign RegWrite = s10[8];
  assign branchEqual = s10[9];
  assign Jump = s10[10];
  assign branchNotEqual = s10[11];
endmodule

module DIG_Register_BUS #(
    parameter Bits = 1
)
(
    input C,
    input en,
    input [(Bits - 1):0]D,
    output [(Bits - 1):0]Q
);

    reg [(Bits - 1):0] state = 'h0;

    assign Q = state;

    always @ (posedge C) begin
        if (en)
            state <= D;
   end
endmodule
module DIG_Add
#(
    parameter Bits = 1
)
(
    input [(Bits-1):0] a,
    input [(Bits-1):0] b,
    input c_i,
    output [(Bits - 1):0] s,
    output c_o
);
   wire [Bits:0] temp;

   assign temp = a + b + c_i;
   assign s = temp [(Bits-1):0];
   assign c_o = temp[Bits];
endmodule


module AsyncROM (
  input [7:0] addr,
  input en,
  output [31:0] read_data
);
  reg [31:0] memory[0:255] /*verilator public*/;

  assign read_data = en? memory[addr] : 32'hz;
  
  initial begin
`ifndef NO_INIT_MEM
    $readmemh("code.mif", memory, 0, 255);
`endif
  end
endmodule

module DIG_BitExtender #(
    parameter inputBits = 2,
    parameter outputBits = 4
)
(
    input [(inputBits-1):0] in,
    output [(outputBits - 1):0] out
);
    assign out = {{(outputBits - inputBits){in[inputBits - 1]}}, in};
endmodule




module ALUControl (
  input [2:0] aluOp,
  input [5:0] Func,
  output [2:0] aluFunc
);
  wire s0;
  wire s1;
  wire s2;
  wire s3;
  wire s4;
  wire [2:0] s5;
  wire s6;
  wire [2:0] s7;
  wire s8;
  // ADD
  CompUnsigned #(
    .Bits(6)
  )
  CompUnsigned_i0 (
    .a( Func ),
    .b( 6'b100000 ),
    .\= ( s0 )
  );
  // AND
  CompUnsigned #(
    .Bits(6)
  )
  CompUnsigned_i1 (
    .a( Func ),
    .b( 6'b100100 ),
    .\= ( s1 )
  );
  // OR
  CompUnsigned #(
    .Bits(6)
  )
  CompUnsigned_i2 (
    .a( Func ),
    .b( 6'b100101 ),
    .\= ( s2 )
  );
  // SUB
  CompUnsigned #(
    .Bits(6)
  )
  CompUnsigned_i3 (
    .a( Func ),
    .b( 6'b100010 ),
    .\= ( s3 )
  );
  // SLT
  CompUnsigned #(
    .Bits(6)
  )
  CompUnsigned_i4 (
    .a( Func ),
    .b( 6'b101010 ),
    .\= ( s4 )
  );
  CompUnsigned #(
    .Bits(3)
  )
  CompUnsigned_i5 (
    .a( aluOp ),
    .b( 3'b111 ),
    .\= ( s8 )
  );
  PriorityEncoder3 PriorityEncoder3_i6 (
    .in0( s1 ),
    .in1( s2 ),
    .in2( s0 ),
    .in3( s3 ),
    .in4( s4 ),
    .in5( 1'b0 ),
    .in6( 1'b0 ),
    .in7( 1'b0 ),
    .num( s5 ),
    .any( s6 )
  );
  Mux_2x1_NBits #(
    .Bits(3)
  )
  Mux_2x1_NBits_i7 (
    .sel( s6 ),
    .in_0( 3'b101 ),
    .in_1( s5 ),
    .out( s7 )
  );
  Mux_2x1_NBits #(
    .Bits(3)
  )
  Mux_2x1_NBits_i8 (
    .sel( s8 ),
    .in_0( aluOp ),
    .in_1( s7 ),
    .out( aluFunc )
  );
endmodule
module RegisterFile (
    input [4:0] read_addr1,
    input [4:0] read_addr2,
    input [4:0] write_addr,
    input [31:0] write_data,
    input write_en,
    input clk,
    output [31:0] read_data1,
    output [31:0] read_data2
);

    reg [31:0] memory[0:31] /*verilator public*/;
    
    assign read_data1 = memory[read_addr1];
    assign read_data2 = memory[read_addr2];
    
    always @(posedge clk)
    begin
        if (write_en)
            memory[write_addr] <= write_data;
    end

    initial begin
        memory[0] = 32'd0;
    end
endmodule


module DIG_Sub #(
    parameter Bits = 2
)
(
    input [(Bits-1):0] a,
    input [(Bits-1):0] b,
    input c_i,
    output [(Bits-1):0] s,
    output c_o
);
    wire [Bits:0] temp;

    assign temp = a - b - c_i;
    assign s = temp[(Bits-1):0];
    assign c_o = temp[Bits];
endmodule


module CompSigned #(
    parameter Bits = 1
)
(
    input [(Bits -1):0] a,
    input [(Bits -1):0] b,
    output \> ,
    output \= ,
    output \<
);
    assign \> = $signed(a) > $signed(b);
    assign \= = $signed(a) == $signed(b);
    assign \< = $signed(a) < $signed(b);
endmodule


module ALU (
  input [31:0] a,
  input [31:0] b,
  input [2:0] op,
  output [31:0] res,
  output isZero
);
  wire [31:0] s0;
  wire [31:0] s1;
  wire [31:0] s2;
  wire [31:0] s3;
  wire [31:0] s4;
  wire [31:0] res_temp;
  wire s5;
  DIG_Add #(
    .Bits(32)
  )
  DIG_Add_i0 (
    .a( a ),
    .b( b ),
    .c_i( 1'b0 ),
    .s( s0 )
  );
  DIG_Sub #(
    .Bits(32)
  )
  DIG_Sub_i1 (
    .a( a ),
    .b( b ),
    .c_i( 1'b0 ),
    .s( s1 )
  );
  assign s2 = (a & b);
  assign s3 = (a | b);
  // SLT
  CompSigned #(
    .Bits(32)
  )
  CompSigned_i2 (
    .a( a ),
    .b( b ),
    .\< ( s5 )
  );
  assign s4[0] = s5;
  assign s4[31:1] = 31'b0;
  Mux_8x1_NBits #(
    .Bits(32)
  )
  Mux_8x1_NBits_i3 (
    .sel( op ),
    .in_0( s2 ),
    .in_1( s3 ),
    .in_2( s0 ),
    .in_3( s1 ),
    .in_4( s4 ),
    .in_5( 32'b0 ),
    .in_6( 32'b0 ),
    .in_7( 32'b0 ),
    .out( res_temp )
  );
  CompUnsigned #(
    .Bits(32)
  )
  CompUnsigned_i4 (
    .a( res_temp ),
    .b( 32'b0 ),
    .\= ( isZero )
  );
  assign res = res_temp;
endmodule
module RAMDualPort (
  input [7:0] addr,
  input [31:0] write_data,
  input mem_write,
  input clk,
  input mem_read,
  output [31:0] read_data
);
  reg [31:0] memory[0:255] /*verilator public*/;

  assign read_data = mem_read? memory[addr] : 32'hz;

  always @ (posedge clk) begin
    if (mem_write)
      memory[addr] <= write_data;
  end

  initial begin
`ifndef NO_INIT_MEM
    $readmemh("data.mif", memory, 0, 255);
`endif
  end
endmodule


module MIPS32SOC(
  input rst,
  input clk,
  output invalid_opcode,
  output invalid_addr,
  output invalid_pc
);
  wire [31:0] s0;
  wire [31:0] s1;
  wire [7:0] s2;
  wire [31:0] s3;
  wire [31:0] \PC+4 ;
  wire [9:0] s4;
  wire [31:0] s5;
  wire RegWrite;
  wire [4:0] s6;
  wire [4:0] s7;
  wire [4:0] s8;
  wire [31:0] s9;
  wire [31:0] s10;
  wire [5:0] Func;
  wire [4:0] s11;
  wire [5:0] Opcode;
  wire [31:0] s12;
  wire [31:0] s13;
  wire [2:0] aluFunc;
  wire [31:0] s14;
  wire isZero;
  wire [15:0] s15;
  wire [31:0] s16;
  wire aluSrc;
  wire RegDst;
  wire [2:0] aluOp;
  wire memToReg;
  wire memRead;
  wire memWrite;
  wire branchNotEqual;
  wire branchEqual;
  wire Jump;
  wire [7:0] s17;
  wire [31:0] s18;
  wire bsh;
  wire [31:0] s19;
  wire [31:0] shift_jump;
  wire [31:0] s20;
  wire [31:0] shift_shift;
  wire [27:0] s21;
  assign invalid_opcode = 1'b0;
  Mux_2x1_NBits #(
    .Bits(32)
  )
  Mux_2x1_NBits_i0 (
    .sel( rst ),
    .in_0( s12 ),
    .in_1( 32'b0 ),
    .out( s0 )
  );
  ControlUnit ControlUnit_i1 (
    .Opcode( Opcode ),
    .Reset( rst ),
    .aluSrc( aluSrc ),
    .RegDst( RegDst ),
    .aluOp( aluOp ),
    .memToReg( memToReg ),
    .memRead( memRead ),
    .memWrite( memWrite ),
    .RegWrite( RegWrite ),
    .branchNotEqual( branchNotEqual ),
    .branchEqual( branchEqual ),
    .Jump( Jump )
  );
  reg [31:0] PC /*verilator public*/;

  assign s1 = PC;

  always @ (posedge clk) begin
    if (1'b1)
      PC <= s0;
  end

  DIG_Add #(
    .Bits(32)
  )
  DIG_Add_i3 (
    .a( s1 ),
    .b( 32'b100 ),
    .c_i( 1'b0 ),
    .s( \PC+4  )
  );
  assign s4 = s1[9:0];
  assign s2 = s4[9:2];
  // InstMem
  AsyncROM inst_mem (
    .addr( s2 ),
    .en( 1'b1 ),
    .read_data( s3 )
  );

  assign s21[1:0] = 2'b0;
  assign s21[27:2] = s3[25:0];
  assign Func = s3[5:0];
  assign s11 = s3[15:11];
  assign s8 = s3[20:16];
  assign s7 = s3[25:21];
  assign Opcode = s3[31:26];
  assign s15 = s3[15:0];
  DIG_BitExtender #(
    .inputBits(16),
    .outputBits(32)
  )
  DIG_BitExtender_i5 (
    .in( s15 ),
    .out( s16 )
  );
  Mux_2x1_NBits #(
    .Bits(5)
  )
  Mux_2x1_NBits_i6 (
    .sel( RegDst ),
    .in_0( s8 ),
    .in_1( s11 ),
    .out( s6 )
  );
  ALUControl ALUControl_i7 (
    .aluOp( aluOp ),
    .Func( Func ),
    .aluFunc( aluFunc )
  );
  assign shift_jump[27:0] = s21;
  assign shift_jump[31:28] = \PC+4 [31:28];
  assign shift_shift[1:0] = 2'b0;
  assign shift_shift[31:2] = s16[29:0];
  DIG_Add #(
    .Bits(32)
  )
  DIG_Add_i8 (
    .a( \PC+4  ),
    .b( shift_shift ),
    .c_i( 1'b0 ),
    .s( s20 )
  );
  // Reg File
  RegisterFile reg_file (
    .clk( clk ),
    .read_addr1( s7 ),
    .read_addr2( s8 ),
    .write_addr( s6 ),
    .write_en( RegWrite ),
    .write_data( s5 ),
    .read_data1( s9 ),
    .read_data2( s10 )
  );

  ALU ALU_i10 (
    .a( s9 ),
    .b( s13 ),
    .op( aluFunc ),
    .res( s14 ),
    .isZero( isZero )
  );
  Mux_2x1_NBits #(
    .Bits(32)
  )
  Mux_2x1_NBits_i11 (
    .sel( aluSrc ),
    .in_0( s10 ),
    .in_1( s16 ),
    .out( s13 )
  );
  // Data Mem
  RAMDualPort data_mem(
    .addr( s17 ),
    .mem_write( memWrite ),
    .write_data( s10 ),
    .clk( clk ),
    .mem_read( memRead ),
    .read_data( s18 )
  );

  Mux_2x1_NBits #(
    .Bits(32)
  )
  Mux_2x1_NBits_i13 (
    .sel( memToReg ),
    .in_0( s14 ),
    .in_1( s18 ),
    .out( s5 )
  );
  assign bsh = ((branchEqual & isZero) | (branchNotEqual & ~ isZero));
  Mux_2x1_NBits #(
    .Bits(32)
  )
  Mux_2x1_NBits_i14 (
    .sel( Jump ),
    .in_0( s19 ),
    .in_1( shift_jump ),
    .out( s12 )
  );
  Mux_2x1_NBits #(
    .Bits(32)
  )
  Mux_2x1_NBits_i15 (
    .sel( bsh ),
    .in_0( \PC+4  ),
    .in_1( s20 ),
    .out( s19 )
  );
  assign s17 = s14[9:2];
endmodule
