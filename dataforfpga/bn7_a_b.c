#include "bn7_a_b.h"
short * bn7_a_b( short in[BN7_A_B_FILT] ) {
in[0] = (short)(((4*((int)in[0]))+9463) >> 8);
in[0] = in[0] * ( in[0] > 0 );
in[1] = (short)(((5*((int)in[1]))+-14710) >> 8);
in[1] = in[1] * ( in[1] > 0 );
in[2] = (short)(((7*((int)in[2]))+8549) >> 8);
in[2] = in[2] * ( in[2] > 0 );
in[3] = (short)(((8*((int)in[3]))+8252) >> 8);
in[3] = in[3] * ( in[3] > 0 );
in[4] = (short)(((8*((int)in[4]))+-8868) >> 8);
in[4] = in[4] * ( in[4] > 0 );
in[5] = (short)(((8*((int)in[5]))+-2096) >> 8);
in[5] = in[5] * ( in[5] > 0 );
in[6] = (short)(((4*((int)in[6]))+1004) >> 8);
in[6] = in[6] * ( in[6] > 0 );
in[7] = (short)(((8*((int)in[7]))+-12379) >> 8);
in[7] = in[7] * ( in[7] > 0 );
in[8] = (short)(((4*((int)in[8]))+-2102) >> 8);
in[8] = in[8] * ( in[8] > 0 );
in[9] = (short)(((5*((int)in[9]))+9090) >> 8);
in[9] = in[9] * ( in[9] > 0 );
in[10] = (short)(((5*((int)in[10]))+-12266) >> 8);
in[10] = in[10] * ( in[10] > 0 );
in[11] = (short)(((6*((int)in[11]))+-5730) >> 8);
in[11] = in[11] * ( in[11] > 0 );
in[12] = (short)(((5*((int)in[12]))+-3979) >> 8);
in[12] = in[12] * ( in[12] > 0 );
in[13] = (short)(((5*((int)in[13]))+1537) >> 8);
in[13] = in[13] * ( in[13] > 0 );
in[14] = (short)(((5*((int)in[14]))+-4573) >> 8);
in[14] = in[14] * ( in[14] > 0 );
in[15] = (short)(((6*((int)in[15]))+-1000) >> 8);
in[15] = in[15] * ( in[15] > 0 );
in[16] = (short)(((8*((int)in[16]))+1695) >> 8);
in[16] = in[16] * ( in[16] > 0 );
in[17] = (short)(((9*((int)in[17]))+9949) >> 8);
in[17] = in[17] * ( in[17] > 0 );
in[18] = (short)(((5*((int)in[18]))+8216) >> 8);
in[18] = in[18] * ( in[18] > 0 );
in[19] = (short)(((6*((int)in[19]))+-529) >> 8);
in[19] = in[19] * ( in[19] > 0 );
in[20] = (short)(((6*((int)in[20]))+-7980) >> 8);
in[20] = in[20] * ( in[20] > 0 );
in[21] = (short)(((6*((int)in[21]))+-177) >> 8);
in[21] = in[21] * ( in[21] > 0 );
in[22] = (short)(((6*((int)in[22]))+-2576) >> 8);
in[22] = in[22] * ( in[22] > 0 );
in[23] = (short)(((7*((int)in[23]))+210) >> 8);
in[23] = in[23] * ( in[23] > 0 );
in[24] = (short)(((8*((int)in[24]))+-1884) >> 8);
in[24] = in[24] * ( in[24] > 0 );
in[25] = (short)(((5*((int)in[25]))+-17218) >> 8);
in[25] = in[25] * ( in[25] > 0 );
in[26] = (short)(((8*((int)in[26]))+-10008) >> 8);
in[26] = in[26] * ( in[26] > 0 );
in[27] = (short)(((7*((int)in[27]))+-5491) >> 8);
in[27] = in[27] * ( in[27] > 0 );
in[28] = (short)(((8*((int)in[28]))+-5185) >> 8);
in[28] = in[28] * ( in[28] > 0 );
in[29] = (short)(((4*((int)in[29]))+1035) >> 8);
in[29] = in[29] * ( in[29] > 0 );
in[30] = (short)(((7*((int)in[30]))+-3968) >> 8);
in[30] = in[30] * ( in[30] > 0 );
in[31] = (short)(((4*((int)in[31]))+-3652) >> 8);
in[31] = in[31] * ( in[31] > 0 );
in[32] = (short)(((5*((int)in[32]))+-7218) >> 8);
in[32] = in[32] * ( in[32] > 0 );
in[33] = (short)(((6*((int)in[33]))+-2626) >> 8);
in[33] = in[33] * ( in[33] > 0 );
in[34] = (short)(((6*((int)in[34]))+-12050) >> 8);
in[34] = in[34] * ( in[34] > 0 );
in[35] = (short)(((4*((int)in[35]))+5801) >> 8);
in[35] = in[35] * ( in[35] > 0 );
in[36] = (short)(((7*((int)in[36]))+-4387) >> 8);
in[36] = in[36] * ( in[36] > 0 );
in[37] = (short)(((6*((int)in[37]))+-9268) >> 8);
in[37] = in[37] * ( in[37] > 0 );
in[38] = (short)(((4*((int)in[38]))+599) >> 8);
in[38] = in[38] * ( in[38] > 0 );
in[39] = (short)(((5*((int)in[39]))+-4197) >> 8);
in[39] = in[39] * ( in[39] > 0 );
in[40] = (short)(((9*((int)in[40]))+-5094) >> 8);
in[40] = in[40] * ( in[40] > 0 );
in[41] = (short)(((8*((int)in[41]))+2112) >> 8);
in[41] = in[41] * ( in[41] > 0 );
in[42] = (short)(((7*((int)in[42]))+1778) >> 8);
in[42] = in[42] * ( in[42] > 0 );
in[43] = (short)(((7*((int)in[43]))+-2748) >> 8);
in[43] = in[43] * ( in[43] > 0 );
in[44] = (short)(((6*((int)in[44]))+-3353) >> 8);
in[44] = in[44] * ( in[44] > 0 );
in[45] = (short)(((9*((int)in[45]))+-10211) >> 8);
in[45] = in[45] * ( in[45] > 0 );
in[46] = (short)(((6*((int)in[46]))+-5956) >> 8);
in[46] = in[46] * ( in[46] > 0 );
in[47] = (short)(((5*((int)in[47]))+-6431) >> 8);
in[47] = in[47] * ( in[47] > 0 );
in[48] = (short)(((8*((int)in[48]))+-2590) >> 8);
in[48] = in[48] * ( in[48] > 0 );
in[49] = (short)(((5*((int)in[49]))+-757) >> 8);
in[49] = in[49] * ( in[49] > 0 );
in[50] = (short)(((4*((int)in[50]))+-5196) >> 8);
in[50] = in[50] * ( in[50] > 0 );
in[51] = (short)(((4*((int)in[51]))+513) >> 8);
in[51] = in[51] * ( in[51] > 0 );
in[52] = (short)(((5*((int)in[52]))+5776) >> 8);
in[52] = in[52] * ( in[52] > 0 );
in[53] = (short)(((7*((int)in[53]))+5946) >> 8);
in[53] = in[53] * ( in[53] > 0 );
in[54] = (short)(((5*((int)in[54]))+-9036) >> 8);
in[54] = in[54] * ( in[54] > 0 );
in[55] = (short)(((6*((int)in[55]))+-4698) >> 8);
in[55] = in[55] * ( in[55] > 0 );
in[56] = (short)(((8*((int)in[56]))+19611) >> 8);
in[56] = in[56] * ( in[56] > 0 );
in[57] = (short)(((5*((int)in[57]))+-12167) >> 8);
in[57] = in[57] * ( in[57] > 0 );
in[58] = (short)(((5*((int)in[58]))+-4452) >> 8);
in[58] = in[58] * ( in[58] > 0 );
in[59] = (short)(((7*((int)in[59]))+-8586) >> 8);
in[59] = in[59] * ( in[59] > 0 );
in[60] = (short)(((5*((int)in[60]))+-143) >> 8);
in[60] = in[60] * ( in[60] > 0 );
in[61] = (short)(((5*((int)in[61]))+2768) >> 8);
in[61] = in[61] * ( in[61] > 0 );
in[62] = (short)(((6*((int)in[62]))+16230) >> 8);
in[62] = in[62] * ( in[62] > 0 );
in[63] = (short)(((7*((int)in[63]))+-22573) >> 8);
in[63] = in[63] * ( in[63] > 0 );
return in;
}
