// 141. Processamento de dados e casting em C

int main(){

    int x,y;
    double z;
    x = 5;
    y = 2 * x;
    z = 3 * x;
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%.1lf\n", z);



    double b1, b2, h, area;
    b1 = 6.0;
    b2 = 8.0;
    h = 5.0;
    area = (b1 + b2) / 2.0 * h;
    printf("%lf\n", area);


    int a, b, result;
    a = 5;
    b = 2;
    result = a / b;
    printf("%d\n", result);

    double a;
    int b;
    a = 5.5;
    b = a; // CASTING -> b = (int) a (linguagem C dispensa este formato.)
    printf("%d\n", b);




    return 0;
}