#include <bits/stdc++.h>
using namespace std;

//多倍長つかえるようにしたい
//cpp_intだとTLE

// 多倍長テンプレ
/* ---------------------- ここから ---------------------- */
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
// 任意長整数型
// using Bint = mp::cpp_int;
// 仮数部が1024ビットの浮動小数点数型(TLEしたら小さくする)
// using Real = mp::number<mp::cpp_dec_float<1024>>;
/* ---------------------- ここまで ---------------------- */
cpp_int N;

cpp_int findSumOfDigits(cpp_int n)
{
    cpp_int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    cin >> N;
    cpp_int res = findSumOfDigits(N);
    if (res % 9 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
