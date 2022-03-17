#include <cstdio>

int main(){
  int billet5 = 0, billet10 = 0, billet20 = 0, billet50 = 0, billet100 = 0, billet200 = 0, billet500 = 0, input = -1;
  do{
    printf("banknote: ");
    scanf("%d", &input);
    while(getchar() != '\n');
    switch(input)
    {
      case 5:
        billet5++;
        break;
      case 10:
        billet10++;
        break;
      case 20:
        billet20++;
        break;
      case 50:
        billet50++;
        break;
      case 100:
        billet100++;
        break;
      case 200:
        billet200++;
        break;
      case 500:
        billet500++;
        break;
      case -1:
        return printf("exit\n");
        break;
      default:
        printf("invalid banknote value\n");
    }
    printf("%d banknote(s) of 5 euros\n%d banknote(s) of 10 euros\n%d banknote(s) of 20 euros\n%d banknote(s) of 50 euros\n%d banknote(s) of 100 euros\n%d banknote(s) of 200 euros\n%d banknote(s) of 500 euros\n", billet5, billet10, billet20, billet50, billet100, billet200, billet500);
  }while(input != -1);
  return 0;
}