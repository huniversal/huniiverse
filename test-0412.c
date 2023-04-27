#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    /*int A, B = 0;
    int sum;

    printf("첫번째 숫자를 입력하시오 : ");
    scanf("%d", &A);
    printf("두번째 숫자를 입력하시오 : ");
    scanf("%d", &B);

    sum = A + B;
    printf("두수의 합 : %d", sum);
    return 0;*/
    /*float radius = 0;
    float area;

    printf("반지름을 입력하시오 : ");
    scanf("%f", &radius);
    area = radius * radius * 3.14;

    printf("원의 면적 : %f", area);

    return 0;*/
   /*double A, US = 0;  //환율, 달러
    int KR = 0; //원화 
    
    printf("환율을 입력하시오 : ");
    scanf("%lf", &A);
    printf("원화 금액을 입력하시오 : ");
    scanf("%d", &KR);

    US = KR / A;
    printf("원화 %d원은 %lf달러입니다.", KR, US);

  return 0;*/
  /*double A, B, C = 0;
  double sum, avr;
  printf("3개의 실수를 입력하시오 : ");
  scanf("%lf %lf %lf", &A, &B, &C);
  sum = A + B + C;
  avr = sum / 3;

  printf("합계 : %.2lf\n", sum);
  printf("평균 : %.2lf", avr);
  return 0;*/

  /*int x, y, result;
  printf("두개의 정수를 입력하시오 : ");
  scanf("%d %d", &x, &y);

  result = x + y;
  printf("%d + %d = %d\n", x, y, result);

  result = x - y;
  printf("%d - %d = %d\n", x, y, result);

  result = x * y;
  printf("%d * %d = %d\n", x, y, result);

  result = x / y;
  printf("%d / %d = %d\n", x, y, result);

  result = x % y;
  printf("%d %% %d = %d\n", x, y, result);

  return 0;*/
}
//---------------------------------------------//
#include <stdio.h>

int main(void)
{ 
  /*int th, c5, c1; //천원, 오백원, 백원
  int money, change, price;  //투입한 돈, 거스름돈, 물건값

  printf("물건값을 입력하시오 : ");
  scanf("%d", &price);

  printf("투입한 금액을 입력하시오 : ");
  scanf("%d", &money);
  printf("거스름돈은 다음과 같습니다.");

  change = money - price;
  
  th = change / 1000;
  change = change % 1000;

  c5 = change / 500;
  change = change % 500;

  c1 = change / 100;
  change = change % 100;

  printf("\n천원권 : %d장\n", th);
  printf("오백원 : %d개\n", c5);
  printf("백원 : %d개\n", c1);

  return 0;*/
  /*int year;
  int result;

  printf("연도를 입력하시오 : ");
  scanf("%d", &year);

  result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
  printf("result = %d", result);

  return 0;*/
  /*int number;
  printf("정수를 입력하시오 : ");
  scanf("%d", &number);

  if(number > 0)
  {
      printf("양수입니다.\n");
  }
  else  
  {
      printf("음수입니다.\n");
  }
  printf("입력된 값은 %d입니다.\n", number);
  return 0;
*/
  /*int A;
  printf("정수를 입력하시오 : ");
  scanf("%d", &A);

  if(A % 2 == 0)
  { 
    printf("입력된 정수는 짝수입니다.");
  }
  else
  {
    printf("입력된 정수는 홀수입니다.");
  }
  return 0;*/

  /*int A, B; //분자, 분모
  int na;  //나누기
  printf("분자와 분모를 입력하시오 : ");
  scanf("%d %d", &A, &B);

  if(B==0)
  {
      printf("나눗셈이 불가능");
  }
  else 
  { 
      na = A / B;
      printf("결과는 %d입니다.", na);
  }
  return 0;*/

  /*int year;
  printf("연도를 입력하시오 : ");
  scanf("%d", &year);

  if((year % 4==0 && year % 100!=0) || year % 400==0)
  { 
    printf("%d년은 윤년입니다.", year);
  }
  else
  {
      printf("%d년은 윤년이 아닙니다.", year);
  }
  return 0;*/

  /*int n;
  printf("숫자를 입력하시오 : ");
  scanf("%d", &n);

  if(n>100)
  { 
    printf("large");
  }
  else{
      printf("small");
  }
  return 0;*/
  /*int score;
  printf("성적을 입력하시오 : ");
  scanf("%d", &score);

  if(score>=90)
  { 
    printf("학점 A");
  }
  else if (score>= 80)
  {
    printf("학점 B");
  }*/

  /*int months, days;
  printf("달을 입력하시오 :");
  scanf("%d", &months);

  switch (months)
  {
  case 2:
    days = 28;
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    days = 30;
    break;  
  default:
    days = 31;
    break;
  }
  printf("%d월의 일수는 %d일입니다." ,months, days);
  return 0;*/
  /*char op; 
  int A, B, result;
  printf("수식을 입력하시오(예 : 2+5) >> ");
  scanf("%d %c %d", &A, &op, &B);

  switch (op)
  {
  case '+':
    result = A + B; 
    break;
  
  case '-':
    result = A - B; 
    break;
  
  case '*':
    result = A * B; 
    break;
  
  case '/':
    result = A / B; 
    break;

  case '%':
    result = A % B; 
    break;    

  default:
    printf("지원되지 않는 연산자입니다.\n");
    break;
  }
  printf("%d %c %d = %d\n", A, op, B, result);
  return 0;  */

  /*int n;
  int i = 1;

  printf("출력하고 싶은 단 : ");
  scanf("%d", &n);

  while (i <= 9)
  {
      printf("%d*%d=%d\n", n, i, n*i);
      i++;
  }
  return 0;*/
  /*int n;
  printf("================\n");
  printf("n n의 제곱");
  printf("================\n");

  n = 1;
  while (n<=10)
  { 
    printf("%d %d\n", n, n*n);
    n++;
  }
  return 0;*/
  
  /*int i, n, sum;
  printf("정수를 입력하시오 : ");
  scanf("%d", &n);
  i = 1;
  while (i<n)
  {
    sum += i;
    i++;
  }
  printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
  return 0; */

  /*int i=0, n, sum=0;
  while (i<5)
  {
    printf("값을 입력하시오 : ");
    scanf("%d", &n);
    sum += n;
    i++;
  }
  printf("합계는 %d입니다.\n", sum);
  return 0;*/

  /*int i, sum;
  sum = 0;

  for(i=1;i<=10;i++)
  {
      sum += i;
  }
  printf("1부터 10까지의 정수의 합 : %d\n", sum);
  return 0;*/

  int i, n; 
  printf("정수를 입력하세요 : ");
  scanf("%d", &n);
  printf("==========\n");
  printf(" i  i의 세제곱\n");
  printf("==========\n");

  for(i=1;i<=n;i++)
  {
      printf("%d %d\n", i, i*i*i);
  }
  return 0;
}
