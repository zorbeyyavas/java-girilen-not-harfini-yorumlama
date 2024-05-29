int main(){
char not;
printf("\n notunuzu giriniz");
scanf("%c",&not);

switch (not)
{
case 'a':
    printf("mukemmel");
    break;
case 'b':
    printf("notun başarili ");
    break;
case 'c':
    printf("notun iyi");
    break;
case 'd':
    printf("en azindan f degil");
    break;
case 'f':
    printf("basarisiz oldun");
    break;

default:
    printf("gecerli bir not giriniz");
    break;
}
}