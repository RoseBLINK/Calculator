#include <iostream>
#include <string>


int plus(int num1, int num2)
{
    int result = num1 + num2;

    return result;
}

int minus(int num1, int num2)
{
    int result = num1 - num2;

    return result;
}

double division(int num1, int num2)
{
    double result = (double)num1 / num2;

    return result;
}

int multiply(int num1, int num2)
{
    int result = num1 * num2;

    return result;
}

void function()
{
    int num1, num2;
    std::string sign;
    std::string cont;

    std::cout<< "계산기 원하는 숫자를 입력하세요." << std::endl;
    std::cout<< "첫번째 정수: ";
    std::cin>> num1;
    std::cout<< "두번째 정수: ";
    std::cin>> num2;
    std::cout<< "원하는 부호를 선택 하세요." << std::endl;
    std::cin>> sign;

    if (sign == "+")
    {
        int result = plus(num1, num2);
        std::cout<< num1 << sign << num2 << "=" << result << std::endl;
    }
    else if (sign == "-")
    {
        int result = minus(num1, num2);
        std::cout<< num1 << sign << num2 << "=" << result << std::endl;
    }
    else if (sign == "/")
    {
        double result = division(num1, num2);
        std::cout<< num1 << sign << num2 << "=" << result << std::endl;
    }
    else if (sign == "*")
    {
        int result = multiply(num1, num2);
        std::cout<< num1 << sign << num2 << "=" << result << std::endl;
    }


    std::cout<< "continue? y: 계속 n: 아니요" << std::endl;
    std::cin>> cont;
    if (cont == "y")
    {
        function();
    }

    if (cont == "n")
    {
        exit(1);
    }
}

int main()
{
    function();
}
