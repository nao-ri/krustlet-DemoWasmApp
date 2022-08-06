/*
 * C言語のサンプルプログラム - Webkaru
 * - フィボナッチ数の計算 -
 */
#include <stdio.h>
#include <unistd.h>

int main(void)
{
  /* 変数の宣言 */
  int n;
  double f0, f1, f2;

  f0 = 0;
  f1 = 1;

  /* フィボナッチ数(n=0)の出力 */
  printf("%lf\n", f0);

  /* フィボナッチ数の計算 */
  while (1)
  {
    n++;
    // フィボナッチ数の出力(n>0)
    if (n == 100000000)
    {
	printf("calculation now\n");
      printf("%lf\n", f1);
      fflush(stdout);
      n = 0;
    }

    // フィボナッチ数の計算
    f2 = f1 + f0;
    // 変数の代入
    f0 = f1;
    f1 = f2;
  }

  return 0;
}
