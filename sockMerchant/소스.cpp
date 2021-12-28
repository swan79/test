
#include <stdio.h>
#include <vector>
#include <set>
#include <string>
using namespace std;

// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {

    int result = 0;
    set<int> finded;

    for (auto it : ar)
    {
        auto exist = finded.find(it);
        if (exist == finded.end())
        {
            int socks = count(ar.begin(), ar.end(), it);
            result += socks / 2;
            finded.insert(it);
        }
    }


    return result;
}
//sdfsfs
/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path) {

    int valleyCnt = 0;
    int curLevel = 0;
    bool EnterValley = false;
    bool LeveaValley = false;

    for (auto it : path)
    {
        if (it == 'D')
        {
            curLevel--;
        }
        else// if(it == 'U')
        {
            curLevel++;
        }

        if (EnterValley == false && curLevel < 0)
        {
            EnterValley = true;
        }
        else if (EnterValley == true && curLevel >= 0)
        {
            LeveaValley = true;
        }

        if (EnterValley && LeveaValley)
        {
            valleyCnt++;
            EnterValley = LeveaValley = false;
        }
    }
    return valleyCnt;
}


bool isJumpping(int a, int b)
{
    return a == 0 && b == 1;
}
// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) {

    int jumpCnt = 0;
    int Index = 0;
    int skipIndx = 0;

    while (Index <= c.size() - 2)
    {
        if (isJumpping(c[Index], c[Index + 1]))
        {
            jumpCnt++;
            Index += 2;

            jumpCnt += skipIndx / 2;
            if (skipIndx % 2)
                jumpCnt++;

            skipIndx = 0;
        }
        else
        {
            Index++;
            skipIndx++;
        }
    }

    jumpCnt += skipIndx / 2;
    if (skipIndx % 2)
        jumpCnt++;

    return jumpCnt;
}

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    char firstS = 'a';
    long Scount = 0;
    for (long i = 0; i < s.size(); i++)
        if (s[i] == firstS)Scount++;
    long nsCount = n / s.size();
    //nsCount -= nsCount % 1;
    Scount *= nsCount;
    long least = n % s.size();
    for (long i = 0; i < least; i++)
        if (s[i] == firstS)Scount++;
    return Scount;
}

int main()
{
	printf("abd\n");
	return 0;
}