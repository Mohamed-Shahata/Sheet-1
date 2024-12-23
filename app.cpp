#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;
//===================== A. Say Hello With C++ =====================//

void sayHello(){
  string name;
  cin >> name;
  cout << "Hello, " << name;
}

//===================== B. Basic Data Types =====================//

void BasicDataTypes(){
  int num1;
  long long num2;
  char ch;
  float num3;
  double num4;
  cin >> num1 >> num2 >> ch >> num3 >> num4;
  cout << num1 << endl << num2 << endl << ch << endl << num3 << endl << num4;
}

//===================== C. Simple Calculator =====================//

void SimpleCalculator(){
  long long num1, num2;
  cin >> num1 >> num2;
  cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
  cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
  cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
}

//===================== D. Difference =====================//

void Difference(){
  long long A, B, C, D, X;
  cin >> A >> B >> C >> D;
  X = (A * B) - (C * D);
  cout << "Difference = " << X;
}

//===================== E. Area of a Circle =====================//

void AreaofACircle(){
  cout << fixed << setprecision(9);
  double bie = 3.141592653, area, R;
  cin >> R;
  area = bie * (R * R);
  cout << area;
}

//===================== F. Digits Summation =====================//

void DigitsSummation(){
  long long num1, num2;
  cin >> num1 >> num2;
  cout << (num1 % 10) + (num2 % 10);
}

//===================== G. Summation from 1 to N =====================//

void SummationFrom1ToN(){
  long long num, equation;
  cin >> num;
  equation = (num * (num + 1)) / 2;
  cout << equation;
}

//===================== H. Two numbers =====================//

void TwoNumbers(){
  float A, B;
  cin >> A >> B;
  cout << "floor " << A << " / " << B << " = " << floor(A / B) << endl;
  cout << "ceil " << A << " / " << B << " = " << ceil(A / B) << endl;
  cout << "round " << A << " / " << B << " = " << round(A / B);
}

//===================== I. Welcome for you with Conditions =====================//

void WelcomeForYouWithConditions(){
  int A, B;
  cin >> A >> B;
  if (A >= B){
    cout << "Yes";
  }else{
    cout << "No";
  }
}

//===================== J. Multiples =====================//

void Multiples(){
  long long A, B;
  cin >> A >> B;
  if ((A % B) == 0 || (B % A) == 0){
    cout << "Multiples";
  }else{
    cout << "No Multiples";
  }
}

//===================== K. Max and Min =====================//

void MaxAndMin(){
  long long A, B, C;
  cin >> A >> B >> C;
  if (A >= B && A >= C){
    if (B >= C){
      cout << C << " " << A;
    }else{
      cout << B << " " << A;
    }
  }else if (B >= A && B >= C){
    if (A >= C){
      cout << C << " " << B;
    }else{
      cout << A << " " << B;
    }
  }else{
    if (B >= A){
      cout << A << " " << C;
    }else{
      cout << B << " " << C;
    }
  }
}

//===================== L. The Brothers =====================//

void TheBrothers(){
  string F1, S1, F2, S2;
  cin >> F1 >> S1 >> F2 >> S2;
  if (S1 == S2){
    cout << "ARE Brothers";
  }else{
    cout << "NOT";
  }
}

//===================== M. Capital or Small or Digit =====================//

void CapitalOrSmallOrDigit(){
  char ch;
  cin >> ch;
  if (int(ch) >= 65 && int(ch) <= 90){
    cout << "ALPHA\n" << "IS CAPITAL";
  }else if (int(ch) >= 97 && int(ch) <= 122){
    cout << "ALPHA\n" << "IS SMALL";
  }else if (int(ch) >= 48 && int(ch) <= 57){
    cout << "IS DIGIT";
  }else{
    cout << "NOT";
  }
}

//===================== N. Char =====================//

void Char(){
  char ch;
  cin >> ch;
  if (int(ch) >= 65 && int(ch) <= 90){
    cout << char(int(ch) + 32);
  }else if (int(ch) >= 97 && int(ch) <= 122){
    cout << char(int(ch) - 32);
  }else{
    cout << "NOT";
  }
}

//===================== O. Calculator =====================//

void Calculator(){
  int num1, num2;
  char seperator;
  cin >> num1 >> seperator >> num2;
  if (seperator == '+'){
    cout << num1 + num2;
  }else if (seperator == '-'){
    cout << num1 - num2;
  }else if (seperator == '/'){
    cout << num1 / num2;
  }else if (seperator == '*'){
    cout << num1 * num2;
  }else{
    cout << "Not seperator";
  }
}

//===================== P. First digit ! =====================//

void FirstDigit(){
  int num, result;
  cin >> num;
  result = num / 1000;
  if (result % 2 == 0){
    cout << "EVEN";
  }else{
    cout << "ODD";
  }
}

//===================== Q. Coordinates of a Point =====================//

void CoordinatesOfAPoint(){
  float X, Y;
  cin >> X >> Y;
  if (X > 0 && Y > 0){
    cout << "Q1";
  }else if (X < 0 && Y > 0){
    cout << "Q2";
  }else if (X < 0 && Y < 0){
    cout << "Q3";
  }else if (X > 0 && Y < 0){
    cout << "Q4";
  }else if (Y == 0 && (X < 0 || X > 0)){
    cout << "Eixo X";
  }else if (X == 0 && (Y < 0 || Y > 0)){
    cout << "Eixo Y";
  }else if (X == 0 && Y == 0){
    cout << "Origem";
  }
}

//===================== R. Age in Days =====================//

void AgeInDays(){
  long long num;
  cin >> num;
  int years, months, days;
  years = num / 365;
  num -= (years * 365);
  months = num / 30;
  num -= (months * 30);
  days = num;
  cout << years << " years" << endl << months << " months" << endl << days << " days";
}

//===================== S. Interval =====================//

void Interval(){
  float num;
  cin >> num;
  if (num >= 0 && num <= 25){
    cout << "Interval [0,25]";
  }else if (num > 25 && num <= 50){
    cout << "Interval (25,50]";
  }else if (num > 50 && num <= 75){
    cout << "Interval (50,75]";
  }else if (num > 75 && num <= 100){
    cout << "Interval (75,100]";
  }else{
    cout << "Out of Intervals";
  }
}

//===================== T. Sort Numbers =====================//

void SortNumbers(){
  long long A, B, C;
  cin >> A >> B >> C;
  if (A >= B && A >= C){
    if (B >= C){
      cout << C << endl << B << endl << A << endl;
    }else{
      cout << B << endl << C << endl << A << endl;
    }
  }else if (B >= A && B >= C){
    if (A >= C){
      cout << C << endl << A << endl << B << endl;
    }else{
      cout << A << endl << C << endl << B << endl;
    }
  }else if (C >= A && C >= B){
    if (A >= B){
      cout << B << endl << A << endl << C << endl;
    }else{
      cout << A << endl << B << endl << C << endl;
    }
  }
  cout << endl << A << endl << B << endl << C;
}

//===================== U. Float or int =====================//

void FloatOrInt(){
  float num;
  cin >> num;
  int intPart = (int)num;
  float desmalPart = num - intPart;
  if (desmalPart == 0){
    cout << "int " << intPart;
  }else{
    cout << "float " << intPart << " " << fixed << setprecision(3) << desmalPart;
  }
}

//===================== V. Comparison =====================//

void Comparison(){
  double A, B;
  char separetor;
  cin >> A >> separetor >> B;
  if(separetor == '>'){
    if((A > B) == 1){
      cout << "Right";
    }else{
      cout << "Wrong";
    }
  }else if(separetor == '<'){
    if((A < B) == 1){
      cout << "Right";
    }else{
      cout << "Wrong";
    }
  }else if(separetor == '='){
    if((A == B) == 1){
      cout << "Right";
    }else{
      cout << "Wrong";
    }
  }
}

//===================== W. Mathematical Expression =====================//

void MathematicalExpression(){
  long long A , B , C;
  char separ1 , separ2;
  cin >> A >> separ1 >> B >> separ2 >> C;
  if(separ1 == '+'){
    if((A + B) == C){
      cout << "Yes";
    }else{
      cout << (A + B);
    }
  }else if(separ1 == '-'){
    if((A - B) == C){
      cout << "Yes";
    }else{
      cout << (A - B);
    }
  }else if(separ1 == '*'){
    if((A * B) == C){
      cout << "Yes";
    }else{
      cout << (A * B);
    }
  }
}

//===================== X. Two intervals =====================//

void TwoIntervals(){
  long long L1 , R1 , L2, R2 , first , secend;
  cin >> L1 >> R1 >> L2 >> R2;
  if(L1 >= L2){
    first = L1;
  }else{
    first = L2;
  }
  if(R1 >= R2){
    secend = R2;
  }else{
    secend = R1;
  }
  if(first <= secend){
    cout << first << " " << secend;
  }else{
    cout << -1;
  }
}
//===================== Y. The last 2 digits =====================//

void TheLast2digits(){
  long long A , B ,C , D , result;
  cin >> A >> B >> C >> D;

  result = A % 100;
  result = (result * (B % 100)) % 100;
  result = (result * (C % 100)) % 100;
  result = (result * (D % 100)) % 100;
  if(result < 10){
    cout << "0" << result;
  }else{
    cout << result;
  }
}

//===================== Z. Hard Compare =====================//

void HardCompare(){

  long long A , B ,C , D;
  cin >> A >> B >> C >> D;
  if(B * log(A) > D * log(C)){
    cout << "YES";
  }else{
    cout << "NO";
  }
}

int main(){

  // sayHello();
  //BasicDataTypes();
  // SimpleCalculator();
  //Difference();
  // AreaofACircle();
  //DigitsSummation();
  SummationFrom1ToN();




  return 0;
}