#include <stdio.h>
// 편의점에서 물건을 구입하고 만원을 냈을때 거스름돈의 액수와 
// 점원이 지급해야 할 거스름돈을 화폐와 동전수를 계산하는 프로그램을 작성하자

//물건값을 입력하시오 : 8600
//투입한 금액을 입력하시오 : 10000
//거스름돈은 다음과 같습니다. -> 천원권 1장, 오백원 동전 0개, 백원 동전 4개 
int main(void)
{ 
  int money, change;
  int price, c5000, c1000, c500, c100;

  printf("물건값을 입력하시오 : ");
  scanf("%d", &price);

  printf("투입한 금액을 입력하시오 : ");
  scanf("%d", &money);
  change = money - price;

  c1000 = change / 1000;
  change = change % 1000;

  c500 = change / 500;
  change = change % 500;

  c100 = change / 100;
  change = change % 100;
  
  printf("\n 천원권 : %d장\n ", c1000);
  printf("오백원 : %d개\n", c500);
  printf("백원 : %d개\n", c100);
  return 0;
}