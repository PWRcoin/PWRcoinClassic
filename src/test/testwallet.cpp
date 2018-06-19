#define __STDC_FORMAT_MACROS
#include <inttypes.h>
#include <string.h>
#include <stdio.h>

/*
* g++ -o testwallet -I . testwallet.cpp  -std=c++11
*/

uint64_t GetBalanceXXL()
{
    uint64_t nTotal = 0;
    uint64_t nCredit = 100000000; // 1 PWR
    uint64_t nCoins[10] = { 100000000 , 100000000 , 10000000000 ,9000000000012345678, 9000000000012345678, 9000000000012345678, 9000000000012345678, 9000000000012345678 ,9000000000012345678, 9000000000012345678 };
    int x = 0;

    for (int x = 0; x < 10; x++) 
    { 
       nCredit = nCoins[x];  
       if(nCredit > 0)
            nCredit = nCredit / 100000000;

        uint64_t nBalance = nTotal + nCredit;
        if (nBalance > nTotal)
        {
           nTotal = nBalance;
        }
    }
    return nTotal;
}

uint64_t GetBalance()
{
    uint64_t nTotal = 0;
    uint64_t nCredit = 100000000; // 1 PWR
    uint64_t nCoins[10] = { 100000000 , 100000000 , 10000000000 , 9000000000012345678, 9000000000012345678, 9000000000012345678, 9000000000012345678, 9000000000012345678,9000000000012345678 , 9000000000012345678 };
    int x = 0;

    for (int x = 0; x < 10; x++)
    {
        nCredit = nCoins[x];
        printf("credit is %" PRIu64 " \n",nCredit);
        uint64_t nBalance = nTotal + nCredit;
        printf("nBalance is %" PRIu64 " nTotal is %" PRIu64 "\n",nBalance, nTotal);

        if (nBalance > nTotal)
        {
           nTotal = nBalance;
        }
    }
    return nTotal;
}


int main(int argc, char *argv[])
{
    printf("balance is %" PRIu64 " PWR , balanceXXL is %" PRIu64 "\n", GetBalance(), GetBalanceXXL());
}
