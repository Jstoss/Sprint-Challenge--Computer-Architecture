#ifndef _CPU_H_
#define _CPU_H_

// Holds all information about the CPU
struct cpu {
  // TODO
  // PC
  unsigned char PC;
  unsigned char FL;
  // registers (array)
  unsigned char registers[8];
  // ram (array)
  unsigned char ram[256];
};

// ALU operations
enum alu_op {
	ALU_MUL,
  ALU_ADD,
  ALU_DIV,
  ALU_MOD
	// Add more here
};

#define SP 7 //r7
#define SS 0xF4 //Stack Start

// Instructions

// These use binary literals. If these aren't available with your compiler, hex
// literals should be used.

#define LDI  0b10000010
#define HLT  0b00000001
#define PRN  0b01000111
#define MUL  0b10100010
#define PUSH 0b01000101
#define POP  0b01000110
#define CALL 0b01010000
#define RET  0b00010001
#define ADD  0b10100000
#define ST   0b10000100
#define AND  0b10101000
#define DEC  0b01100110
#define DIV  0b10100011
#define INC  0b01100101
#define MOD  0b10100100
#define NOP  0b00000000
#define NOT  0b01101001
#define OR   0b10101010
#define PRA  0b01001000
#define SHL  0b10101100
#define CMP  0b10100111
#define JMP  0b01010100
#define JEQ  0b01010101
// TODO: more instructions here. These can be used in cpu_run().

// Function declarations

extern void cpu_load(struct cpu *cpu, char *path);
extern void cpu_init(struct cpu *cpu);
extern void cpu_run(struct cpu *cpu);

#endif