/*
441. Arranging Coins

32-bit signed integer
The largest value it can represent is (2^31) - 1.
The smallest value it can represent is -(2^31) = -2,147,483,648.
*/

//M1, basic iteration

#include <iostream>
using namespace std;

int arrangeCoins(int n) {
        if (n==0) return false;
        int row; //row number
    
        for(row = 1; n >= row; ++row){
            n = n - row;
        }
        
        return (row-1);
        
    }
;
int main(){
        cout << "r " << arrangeCoins(0) << endl;
    }
;

//M2, Math
/*
total coins -> sum = (1+k)*k/2
the last row may incomplete -> sum <=n
(1+k)*k/2 <= n -> k^2+k <= 2n -> k^2+k+1/4-1/4 <= 2n -> (k+1/2)^2 <= 2n+1/4
-> k+1/2 <= aqrt(2n+1/4) =====> k <= aqrt(2n+1/4) - 1/2 ====> int
*/
#include <iostream>
#include <math.h>
using namespace std;

int arrangeCoins(int n) {
        long num = 2*n;
        int k = floor(sqrt(long(num+0.25))-0.5);
        return (int(k));
        
    }

int main(){
        cout << "r " << arrangeCoins(1804289383) << endl;
    }
;