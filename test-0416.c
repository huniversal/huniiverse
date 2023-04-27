#include <stdio.h>
// 1부터 n까지의 합 계산하는 프로그램
int main()
{
  int i=1, n, sum=0;  //변수 선언
  printf("정수를 입력하시오 : "); //입력 안내 메시지 출력
  scanf("%d", &n);  // 정수값 입력

    while (i<=n)
    {
      if(i%2==0)
      { 
        sum += i;
      }
      i++;
    }
    printf("1부터 %d까지의 짝수의 합은 %d입니다.", n, sum);
    return 0;  
}
//----------------------------------------------------//
#include <stdio.h>

int main(void)
{
    int i=0, sum=0;  //i와 sum은 전역변수

    while (i<5)
    {
      int n;  //n은 지역변수
      printf("값을 입력하시오 : ");
      scanf("%d", &n);
      sum = sum + n;  //sum += n;과 같다.
      i++;
    }
    printf("합계는 %d입니다.\n",sum);  
    return 0;  
}
//----------------------------------------------------//
#include <stdio.h>
//do..while 문은 입력을 처리하는 부분에서 많이 사용된다. 
int main(void)
{
  int i = 0;
  do
  {
    printf("1---새로 만들기\n");
    printf("2---파일 열기\n");
    printf("3---파일 닫기\n");
    printf("4--- 종료\n");
    printf("하나를 선택하시오.\n");
    scanf("%d", &i);
  } while (i<1 || i>3 ||);
  
    printf("선택된 메뉴=%d\n",i);
    return 0;  
}

//----------------------------------------------------//
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
  srand((unsigned)time(NULL));
  int answer = rand()%100;
  int guess;
  int tries = 0;

  do{
    printf("정답을 추측하여 보시오 : ");
    scanf("%d", &guess);
    tries ++;

    if(guess > answer){
        printf("HIGH\n");
      if (guess < answer){
        printf("LOW\n");x
      }  
    }
  } while (guess != answer);
  printf("축하합니다. 시도횟수=%d\n", tries);
  return 0;  
}
//----------------------------------------------------//
#include <stdio.h>

int main(void)
{
    for(int i=5; i>=1;i--){
        for(int j=0; j<i; j++){
         printf("*");   
        }printf("\n");
    }
    return 0;
}
//----------------------------------------------------//
#include <stdio.h>
//첫째줄에는 별1개, 둘째줄에는 2개~ 별 오른쪽 정렬

int main(void)
{
  int n;
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
  { 
    for(int j=1; j<=n-i;j++)
    {
      printf(" ");
    }
    for(int j=1; j<=i; j++)
    {
      printf("*");   
    }
    printf("\n");
  }
  return 0;
}
//----------------------------------------------------//
#include <stdio.h>

int main(void){
    int n;
    int i = 1;

    printf("출력하고 싶은 단 : ");
    scanf("%d", &n);

    while (i <= 9)
    {
      printf("%d * %d = %d\n", n,i,n*i);
      i++;
    }
    return 0;   
}
//----------------------------------------------------//
