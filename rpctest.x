struct operands {
int x;
int y;
};
program SIM_PROG {
version SIMP_VERSION {
 int ADD( operands ) = 1;
 int SUB( operands ) = 2;
 } = 1;
} = 0x23456789;
