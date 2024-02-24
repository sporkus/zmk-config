/*                              Vault 35 KEY MATRIX / LAYOUT MAPPING
    0   1   2   3   4   5   6   7   8   9   10 || LT4 LT3 LT2 LT1 LT0  RT0 RT1 RT2 RT3 RT4 RT5
      10  11  12  13  14  15  16  17  18  19   ||  LM4 LM3 LM2 LM1 LM0  RM0 RM1 RM2 RM3 RM4 
  │     20  21  22  23  24  25  26  27  28  29 ||   LB4 LB3 LB2 LB1 LB0  RB0 RB1 RB2 RB3 RB4 
 .                      (Bottom row is excluded to keep things simple)
*/

#pragma once

#define LT0  4  // left-top row
#define LT1  3
#define LT2  2
#define LT3  1
#define LT4  0

#define RT0  5  // right-top row
#define RT1  6
#define RT2  7
#define RT3  8
#define RT4  9
#define RT5 10  

#define LM0 15  // left-middle row
#define LM1 14
#define LM2 13
#define LM3 12
#define LM4 11

#define RM0 15  // right-middle row
#define RM1 17
#define RM2 18
#define RM3 19
#define RM4 19

#define LB0 25  // left-bottom row
#define LB1 24
#define LB2 23
#define LB3 22
#define LB4 21

#define RB0 26  // right-bottom row
#define RB1 27
#define RB2 28
#define RB3 29
#define RB4 30
