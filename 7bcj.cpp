#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

string a[30] = {"22 Kevin", "23 Alex", "24 Tommy", "25 Rafa", "26 Simon", "27 Leonard", "28 Jason", "29 Bruce", "30 Bobby", "31 Andy", "32 Alfie", "33 Leo", "34 Lisa", "35 Cynthia", "36 Katherine", "37 Amanda", "38 Lucky", "39 Amy", "40 Yoko", "41 Kiki", "42 Rita"};
int b = 21;

int main()
{
    srand(time(0));
    cout << R"(                                                   
  _/_/_/_/_/  _/_/_/    _/    _/  _/          _/   
         _/  _/    _/  _/    _/  _/          _/    
      _/    _/_/_/    _/_/_/_/  _/    _/    _/     
   _/      _/    _/  _/    _/    _/  _/  _/        
_/        _/_/_/    _/    _/      _/  _/           
                                                   
)" << endl;
    cout << "欢迎使用7B抽奖程序！" << endl;
    cout << "抽几个人？" << endl;
    int c;
    cin >> c;
    while(c-- && b)
    {
        int d = rand() % b;
        cout << a[d] << endl;
        a[d] = a[--b];
    }
    system("pause");
    return 0;
}