#include "bn3_a_b.h"
short * bn3_a_b( short in[BN3_A_B_FILT] ) {
in[0] = (short)(((3*((int)in[0]))+-1120) >> 18);
in[0] = in[0] * ( in[0] > 0 );
in[1] = (short)(((2*((int)in[1]))+-5225) >> 18);
in[1] = in[1] * ( in[1] > 0 );
in[2] = (short)(((7*((int)in[2]))+-2025) >> 18);
in[2] = in[2] * ( in[2] > 0 );
in[3] = (short)(((12*((int)in[3]))+-8528) >> 18);
in[3] = in[3] * ( in[3] > 0 );
in[4] = (short)(((5*((int)in[4]))+-1837) >> 18);
in[4] = in[4] * ( in[4] > 0 );
in[5] = (short)(((3*((int)in[5]))+-127) >> 18);
in[5] = in[5] * ( in[5] > 0 );
in[6] = (short)(((9*((int)in[6]))+6926) >> 18);
in[6] = in[6] * ( in[6] > 0 );
in[7] = (short)(((7*((int)in[7]))+857) >> 18);
in[7] = in[7] * ( in[7] > 0 );
in[8] = (short)(((3*((int)in[8]))+-6179) >> 18);
in[8] = in[8] * ( in[8] > 0 );
in[9] = (short)(((2*((int)in[9]))+-5415) >> 18);
in[9] = in[9] * ( in[9] > 0 );
in[10] = (short)(((4*((int)in[10]))+7749) >> 18);
in[10] = in[10] * ( in[10] > 0 );
in[11] = (short)(((6*((int)in[11]))+-8387) >> 18);
in[11] = in[11] * ( in[11] > 0 );
in[12] = (short)(((3*((int)in[12]))+-5452) >> 18);
in[12] = in[12] * ( in[12] > 0 );
in[13] = (short)(((2*((int)in[13]))+28) >> 18);
in[13] = in[13] * ( in[13] > 0 );
in[14] = (short)(((5*((int)in[14]))+-7690) >> 18);
in[14] = in[14] * ( in[14] > 0 );
in[15] = (short)(((10*((int)in[15]))+-12409) >> 18);
in[15] = in[15] * ( in[15] > 0 );
in[16] = (short)(((4*((int)in[16]))+-2195) >> 18);
in[16] = in[16] * ( in[16] > 0 );
in[17] = (short)(((3*((int)in[17]))+1429) >> 18);
in[17] = in[17] * ( in[17] > 0 );
in[18] = (short)(((4*((int)in[18]))+-1681) >> 18);
in[18] = in[18] * ( in[18] > 0 );
in[19] = (short)(((2*((int)in[19]))+-1240) >> 18);
in[19] = in[19] * ( in[19] > 0 );
in[20] = (short)(((4*((int)in[20]))+-4013) >> 18);
in[20] = in[20] * ( in[20] > 0 );
in[21] = (short)(((4*((int)in[21]))+-1874) >> 18);
in[21] = in[21] * ( in[21] > 0 );
in[22] = (short)(((5*((int)in[22]))+3574) >> 18);
in[22] = in[22] * ( in[22] > 0 );
in[23] = (short)(((10*((int)in[23]))+-38026) >> 18);
in[23] = in[23] * ( in[23] > 0 );
in[24] = (short)(((6*((int)in[24]))+6452) >> 18);
in[24] = in[24] * ( in[24] > 0 );
in[25] = (short)(((7*((int)in[25]))+8257) >> 18);
in[25] = in[25] * ( in[25] > 0 );
in[26] = (short)(((4*((int)in[26]))+-2958) >> 18);
in[26] = in[26] * ( in[26] > 0 );
in[27] = (short)(((7*((int)in[27]))+-16670) >> 18);
in[27] = in[27] * ( in[27] > 0 );
in[28] = (short)(((5*((int)in[28]))+-2178) >> 18);
in[28] = in[28] * ( in[28] > 0 );
in[29] = (short)(((6*((int)in[29]))+5015) >> 18);
in[29] = in[29] * ( in[29] > 0 );
in[30] = (short)(((9*((int)in[30]))+11244) >> 18);
in[30] = in[30] * ( in[30] > 0 );
in[31] = (short)(((7*((int)in[31]))+-7334) >> 18);
in[31] = in[31] * ( in[31] > 0 );
in[32] = (short)(((3*((int)in[32]))+-95) >> 18);
in[32] = in[32] * ( in[32] > 0 );
in[33] = (short)(((4*((int)in[33]))+1637) >> 18);
in[33] = in[33] * ( in[33] > 0 );
in[34] = (short)(((3*((int)in[34]))+-1888) >> 18);
in[34] = in[34] * ( in[34] > 0 );
in[35] = (short)(((7*((int)in[35]))+-7430) >> 18);
in[35] = in[35] * ( in[35] > 0 );
in[36] = (short)(((6*((int)in[36]))+-7353) >> 18);
in[36] = in[36] * ( in[36] > 0 );
in[37] = (short)(((5*((int)in[37]))+-5640) >> 18);
in[37] = in[37] * ( in[37] > 0 );
in[38] = (short)(((7*((int)in[38]))+7694) >> 18);
in[38] = in[38] * ( in[38] > 0 );
in[39] = (short)(((6*((int)in[39]))+3713) >> 18);
in[39] = in[39] * ( in[39] > 0 );
in[40] = (short)(((3*((int)in[40]))+1693) >> 18);
in[40] = in[40] * ( in[40] > 0 );
in[41] = (short)(((5*((int)in[41]))+6380) >> 18);
in[41] = in[41] * ( in[41] > 0 );
in[42] = (short)(((11*((int)in[42]))+12674) >> 18);
in[42] = in[42] * ( in[42] > 0 );
in[43] = (short)(((3*((int)in[43]))+-3663) >> 18);
in[43] = in[43] * ( in[43] > 0 );
in[44] = (short)(((7*((int)in[44]))+-1626) >> 18);
in[44] = in[44] * ( in[44] > 0 );
in[45] = (short)(((3*((int)in[45]))+-3923) >> 18);
in[45] = in[45] * ( in[45] > 0 );
in[46] = (short)(((6*((int)in[46]))+7409) >> 18);
in[46] = in[46] * ( in[46] > 0 );
in[47] = (short)(((4*((int)in[47]))+-1883) >> 18);
in[47] = in[47] * ( in[47] > 0 );
in[48] = (short)(((6*((int)in[48]))+-11873) >> 18);
in[48] = in[48] * ( in[48] > 0 );
in[49] = (short)(((9*((int)in[49]))+10303) >> 18);
in[49] = in[49] * ( in[49] > 0 );
in[50] = (short)(((12*((int)in[50]))+-33499) >> 18);
in[50] = in[50] * ( in[50] > 0 );
in[51] = (short)(((10*((int)in[51]))+-3088) >> 18);
in[51] = in[51] * ( in[51] > 0 );
in[52] = (short)(((4*((int)in[52]))+28) >> 18);
in[52] = in[52] * ( in[52] > 0 );
in[53] = (short)(((4*((int)in[53]))+-868) >> 18);
in[53] = in[53] * ( in[53] > 0 );
in[54] = (short)(((4*((int)in[54]))+-84) >> 18);
in[54] = in[54] * ( in[54] > 0 );
in[55] = (short)(((9*((int)in[55]))+-1366) >> 18);
in[55] = in[55] * ( in[55] > 0 );
in[56] = (short)(((2*((int)in[56]))+-4569) >> 18);
in[56] = in[56] * ( in[56] > 0 );
in[57] = (short)(((8*((int)in[57]))+2103) >> 18);
in[57] = in[57] * ( in[57] > 0 );
in[58] = (short)(((5*((int)in[58]))+427) >> 18);
in[58] = in[58] * ( in[58] > 0 );
in[59] = (short)(((5*((int)in[59]))+-3852) >> 18);
in[59] = in[59] * ( in[59] > 0 );
in[60] = (short)(((2*((int)in[60]))+-5087) >> 18);
in[60] = in[60] * ( in[60] > 0 );
in[61] = (short)(((6*((int)in[61]))+-1738) >> 18);
in[61] = in[61] * ( in[61] > 0 );
in[62] = (short)(((4*((int)in[62]))+-5882) >> 18);
in[62] = in[62] * ( in[62] > 0 );
in[63] = (short)(((6*((int)in[63]))+-7503) >> 18);
in[63] = in[63] * ( in[63] > 0 );
return in;
}
