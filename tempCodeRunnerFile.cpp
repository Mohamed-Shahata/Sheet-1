#include <iostream>
using namespace std;

int main()
{
  long long A , B ,C , D , result;
  cin >> A >> B >> C >> D;

  // const long long num = 10;

  result = A % 100;
  result = (result * (B % 100)) % 100;
  result = (result * (C % 100)) % 100;
  result = (result * (D % 100)) % 100;

  if(result < 10){
    cout << "0" << result;
  }else{
    cout << result;
  }
  cout << result;
  return 0;
}