void CalculatePi()
{
    // 输入指定精度
    double precision;
    printf("请输入精度：");
    scanf("%lf", &precision);
    
    // 如果输入精度<0则重新输入
    while(precision <= 0)
    {
        printf("精度必须大于0！\n请重新输入精度：");
        scanf("%lf", &precision);
    }

    // 根据公式 pi/4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 - ···
    double pi = 0;
    int denominator = 1; // 每一项的分母
    int flag = 1; // 每一项的符号
    double term = flag / denominator; // 每一项

    // 循环直到当前项 < 精度
    while(fabs(term) > precision)
    {
        pi += term; // 加上当前项

        denominator += 2; // 分母依次加2 
        flag = -flag; // 符号+-依次变换
        term = 1.0 * flag / denominator; // 下一项
    }

    pi *= 4; // pi 的近似值
    printf("近似值为：%lf\n", pi);
}

// double CalculatePi(double precision)
// {
//     // 根据公式 pi/4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 - ···
//     double pi = 0;
//     int denominator = 1; // 每一项的分母
//     int flag = 1; // 每一项的符号
//     double term = flag / denominator; // 每一项

//     // 循环直到当前项 < 精度
//     while(fabs(term) > precision)
//     {
//         pi += term; // 加上当前项

//         denominator += 2; // 分母依次加2 
//         flag = -flag; // 符号+-依次变换
//         term = 1.0 * flag / denominator; // 下一项
//     }

//     pi *= 4; // pi 的近似值
//     return pi;
// }