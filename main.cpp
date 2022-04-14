#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

void q0(string input);
void q1(string input, double num, int index);
void q2(string input, double num, int d, int index);
void q3(string input, double num, int d, int index);
void q4(string input, double num, int index);
void q5(string input, double num, int index);
void q6(string input, double num, int p, int index, bool minus);
void q7(string input, double num, int p, int index, bool minus);
void q8(string input, double num, int index);
void q9(string input, double num, int index);
void q10(string input, double num, int index);
void q11(string input, double num, int index);
void q12(string input, double num, int index);
void q13();

int main()
{
    string input;

    while (true)
    {
        cout << "Enter a decimal (q to exit): ";
        cin >> input;

        if(!input.empty())
        {
            q0(input);
        }
        else
            q13();
    }

    return 0;
}

void q0(string input)
{
    switch (input[0])
    {
    case '.':
        q1(input, 0, 1);
        break;
    case 'e':
    case 'E':
    case 'f':
    case 'F':
    case 'd':
    case 'D':
    case '-':
    case '_':
        q13();
        break;
    case '0':
        q12(input, 0, 1);
        break;
    case '1':
        q9(input, 1, 1);
        break;
    case '2':
        q9(input, 2, 1);
        break;
    case '3':
        q9(input, 3, 1);
        break;
    case '4':
        q9(input, 4, 1);
        break;
    case '5':
        q9(input, 5, 1);
        break;
    case '6':
        q4(input, 6, 1);
        break;
    case '7':
        q9(input, 7, 1);
        break;
    case '8':
        q9(input, 8, 1);
        break;
    case '9':
        q9(input, 9, 1);
        break;
    case 'q':
    case 'Q':
        exit(0);
    default:
        q13();
        break;
    }
}

void q1(string input, double num, int index)
{
    switch(input[index])
    {
    case '.':
    case 'e':
    case 'E':
    case 'f':
    case 'F':
    case 'd':
    case 'D':
    case '-':
    case '_':
        q13();
        break;
    case '0':
        q2(input, num, 1, index + 1);
        break;
    case '1':
        q2(input, num + 0.1, 1, index + 1);
        break;
    case '2':
        q2(input, num + 0.2, 1, index + 1);
        break;
    case '3':
        q2(input, num + 0.3, 1, index + 1);
        break;
    case '4':
        q2(input, num + 0.4, 1, index + 1);
        break;
    case '5':
        q2(input, num + 0.5, 1, index + 1);
        break;
    case '6':
        q2(input, num + 0.6, 1, index + 1);
        break;
    case '7':
        q2(input, num + 0.7, 1, index + 1);
        break;
    case '8':
        q2(input, num + 0.8, 1, index + 1);
        break;
    case '9':
        q2(input, num + 0.9, 1, index + 1);
        break;
    default:
        q13();
        break;
    }
}

void q2(string input, double num, int d, int index)
{
    if(input.length() == index)
        cout << num << "\n";
    else
    {
        switch (input[index])
        {
        case '.':
        case '-':
            q13();
            break;
        case 'e':
        case 'E':
            q4(input, num, index + 1);
            break;
        case 'f':
        case 'F':
            q8(input, num, index + 1);
            break;
        case '_':
            q3(input, num, d, index + 1);
            break;
        case '0':
            q2(input, num, d + 1, index + 1);
            break;
        case '1':
            num += pow(0.1, d + 1);
            q2(input, num, d + 1, index + 1);
            break;
        case '2':
            num += 2 * pow(0.1, d + 1);
            q2(input, num, d + 1, index + 1);
            break;
        case '3':
            num += 3 * pow(0.1, d + 1);
            q2(input, num, d + 1, index + 1);
            break;
        case '4':
            num += 4 * pow(0.1, d + 1);
            q2(input, num, d + 1, index + 1);
            break;
        case '5':
            num += 5 * pow(0.1, d + 1);
            q2(input, num, d + 1, index + 1);
            break;
        case '6':
            num += 6 * pow(0.1, d + 1);
            q2(input, num, d + 1, index + 1);
            break;
        case '7':
            num += 7 * pow(0.1, d + 1);
            q2(input, num, d + 1, index + 1);
            break;
        case '8':
            num += 8 * pow(0.1, d + 1);
            q2(input, num, d + 1, index + 1);
            break;
        case '9':
            num += 9 * pow(0.1, d + 1);
            q2(input, num, d + 1, index + 1);
            break;
        default:
            q13();
            break;
        }
    }
}

void q3(string input, double num, int d, int index)
{
    switch (input[index])
    {
    case '.':
    case 'e':
    case 'E':
    case 'f':
    case 'F':
    case '-':
        q13();
        break;
    case '_':
        q3(input, num, d, index + 1);
        break;
    case '0':
        q2(input, num, d + 1, index + 1);
        break;
    case '1':
        num += pow(0.1, d + 1);
        q2(input, num, d + 1, index + 1);
        break;
    case '2':
        num += 2 * pow(0.1, d + 1);
        q2(input, num, d + 1, index + 1);
        break;
    case '3':
        num += 3 * pow(0.1, d + 1);
        q2(input, num, d + 1, index + 1);
        break;
    case '4':
        num += 4 * pow(0.1, d + 1);
        q2(input, num, d + 1, index + 1);
        break;
    case '5':
        num += 5 * pow(0.1, d + 1);
        q2(input, num, d + 1, index + 1);
        break;
    case '6':
        num += 6 * pow(0.1, d + 1);
        q2(input, num, d + 1, index + 1);
        break;
    case '7':
        num += 7 * pow(0.1, d + 1);
        q2(input, num, d + 1, index + 1);
        break;
    case '8':
        num += 8 * pow(0.1, d + 1);
        q2(input, num, d + 1, index + 1);
        break;
    case '9':
        num += 9 * pow(0.1, d + 1);
        q2(input, num, d + 1, index + 1);
        break;
    default:
        q13();
        break;
    }
}

void q4(string input, double num, int index)
{
    switch (input[index])
    {
    case '.':
    case 'e':
    case 'E':
    case 'f':
    case 'F':
    case 'd':
    case 'D':
    case '_':
        q13();
        break;
    case '-':
        q5(input, num, index + 1);
        break;
    case '0':
        q6(input, num, 0, index + 1, false);
        break;
    case '1':
        q6(input, num, 1, index + 1, false);
        break;
    case '2':
        q6(input, num, 2, index + 1, false);
        break;
    case '3':
        q6(input, num, 3, index + 1, false);
        break;
    case '4':
        q6(input, num, 4, index + 1, false);
        break;
    case '5':
        q6(input, num, 5, index + 1, false);
        break;
    case '6':
        q6(input, num, 6, index + 1, false);
        break;
    case '7':
        q6(input, num, 7, index + 1, false);
        break;
    case '8':
        q6(input, num, 8, index + 1, false);
        break;
    case '9':
        q6(input, num, 9, index + 1, false);
        break;
    default:
        q13();
        break;
    }
}

void q5(string input, double num, int index)
{
    switch (input[index])
    {
    case '.':
    case 'e':
    case 'E':
    case 'f':
    case 'F':
    case 'd':
    case 'D':
    case '-':
    case '_':
        q13();
        break;
    case '0':
        q6(input, num, 0, index + 1, true);
        break;
    case '1':
        q6(input, num, 1, index + 1, true);
        break;
    case '2':
        q6(input, num, 2, index + 1, true);
        break;
    case '3':
        q6(input, num, 3, index + 1, true);
        break;
    case '4':
        q6(input, num, 4, index + 1, true);
        break;
    case '5':
        q6(input, num, 5, index + 1, true);
        break;
    case '6':
        q6(input, num, 6, index + 1, true);
        break;
    case '7':
        q6(input, num, 7, index + 1, true);
        break;
    case '8':
        q6(input, num, 8, index + 1, true);
        break;
    case '9':
        q6(input, num, 9, index + 1, true);
        break;
    default:
        q13();
        break;
    }
}

void q6(string input, double num, int p, int index, bool minus)
{
    if(input.length() == index)
    {
        if(minus)
            num *= pow(0.1, p);
        else
            num *= pow(10, p);
        cout << num << "\n";
    }
    else
    {
        switch (input[index])
        {
        case '.':
        case 'e':
        case 'E':
        case '-':
            q13();
            break;
        case 'f':
        case 'F':
        case 'd':
        case 'D':
            if(minus)
                num *= pow(0.1, p);
            else
                num *= pow(10, p);
            q8(input, num, index + 1);
            break;
        case '_':
            q7(input, num, p, index, minus);
            break;
        case '0':
            q6(input, num, 0, index + 1, minus);
            break;
        case '1':
            p *= 10;
            p += 1;
            q6(input, num, p, index + 1, minus);
            break;
        case '2':
            p *= 10;
            p += 2;
            q6(input, num, p, index + 1, minus);
            break;
        case '3':
            p *= 10;
            p += 3;
            q6(input, num, p, index + 1, minus);
            break;
        case '4':
            p *= 10;
            p += 4;
            q6(input, num, p, index + 1, minus);
            break;
        case '5':
            p *= 10;
            p += 5;
            q6(input, num, p, index + 1, minus);
            break;
        case '6':
            p *= 10;
            p += 6;
            q6(input, num, p, index + 1, minus);
            break;
        case '7':
            p *= 10;
            p += 7;
            q6(input, num, p, index + 1, minus);
            break;
        case '8':
            p *= 10;
            p += 8;
            q6(input, num, p, index + 1, minus);
            break;
        case '9':
            p *= 10;
            p += 9;
            q6(input, num, p, index + 1, minus);
            break;
        default:
            q13();
            break;
        }
    }
}

void q7(string input, double num, int p, int index, bool minus)
{
    switch (input[index])
    {
    case '.':
    case 'e':
    case 'E':
    case 'f':
    case 'F':
    case 'd':
    case 'D':
    case '-':
        q13();
        break;
    case '_':
        q6(input, num, p, index + 1, minus);
        break;
    case '0':
        q6(input, num, 0, index + 1, minus);
        break;
    case '1':
        p *= 10;
        p += 1;
        q6(input, num, p, index + 1, minus);
        break;
    case '2':
        p *= 10;
        p += 2;
        q6(input, num, p, index + 1, minus);
        break;
    case '3':
        p *= 10;
        p += 3;
        q6(input, num, p, index + 1, minus);
        break;
    case '4':
        p *= 10;
        p += 4;
        q6(input, num, p, index + 1, minus);
        break;
    case '5':
        p *= 10;
        p += 5;
        q6(input, num, p, index + 1, minus);
        break;
    case '6':
        p *= 10;
        p += 6;
        q6(input, num, p, index + 1, minus);
        break;
    case '7':
        p *= 10;
        p += 7;
        q6(input, num, p, index + 1, minus);
        break;
    case '8':
        p *= 10;
        p += 8;
        q6(input, num, p, index + 1, minus);
        break;
    case '9':
        p *= 10;
        p += 9;
        q6(input, num, p, index + 1, minus);
        break;
    default:
        q13();
        break;
    }
}

void q8(string input, double num, int index)
{
    if(input.length() == index)
        cout << num << "\n";
    else
        q13();
}

void q9(string input, double num, int index)
{
    switch (input[index])
    {
    case '.':
        q11(input, num, index + 1);
        break;
    case '-':
        q13();
        break;
    case 'e':
    case 'E':
        q4(input, num, index + 1);
        break;
    case 'f':
    case 'F':
    case 'd':
    case 'D':
        q8(input, num, index + 1);
        break;
    case '_':
        q10(input, num, index + 1);
        break;
    case '0':
        num *= 10;
        q9(input, num, index + 1);
        break;
    case '1':
        num *= 10;
        num += 1;
        q9(input, num, index + 1);
        break;
    case '2':
        num *= 10;
        num += 2;
        q9(input, num, index + 1);
        break;
    case '3':
        num *= 10;
        num += 3;
        q9(input, num, index + 1);
        break;
    case '4':
        num *= 10;
        num += 4;
        q9(input, num, index + 1);
        break;
    case '5':
        num *= 10;
        num += 5;
        q9(input, num, index + 1);
        break;
    case '6':
        num *= 10;
        num += 6;
        q9(input, num, index + 1);
        break;
    case '7':
        num *= 10;
        num += 7;
        q9(input, num, index + 1);
        break;
    case '8':
        num *= 10;
        num += 8;
        q9(input, num, index + 1);
        break;
    case '9':
        num *= 10;
        num += 9;
        q9(input, num, index + 1);
        break;
    default:
        q13();
        break;
    }
}

void q10(string input, double num, int index)
{
    switch (input[index])
    {
    case '.':
    case 'e':
    case 'E':
    case 'f':
    case 'F':
    case 'd':
    case 'D':
    case '-':
        q13();
        break;
    case '_':
        q10(input, num, index + 1);
        break;
    case '0':
        num *= 10;
        q9(input, num, index + 1);
        break;
    case '1':
        num *= 10;
        num += 1;
        q9(input, num, index + 1);
        break;
    case '2':
        num *= 10;
        num += 2;
        q9(input, num, index + 1);
        break;
    case '3':
        num *= 10;
        num += 3;
        q9(input, num, index + 1);
        break;
    case '4':
        num *= 10;
        num += 4;
        q9(input, num, index + 1);
        break;
    case '5':
        num *= 10;
        num += 5;
        q9(input, num, index + 1);
        break;
    case '6':
        num *= 10;
        num += 6;
        q9(input, num, index + 1);
        break;
    case '7':
        num *= 10;
        num += 7;
        q9(input, num, index + 1);
        break;
    case '8':
        num *= 10;
        num += 8;
        q9(input, num, index + 1);
        break;
    case '9':
        num *= 10;
        num += 9;
        q9(input, num, index + 1);
        break;
    default:
        q13();
        break;
    }
}

void q11(string input, double num, int index)
{
    if(input.length() == index)
        cout << num << "\n";
    else
    {
        switch (input[index])
        {
        case '.':
        case '-':
        case '_':
            q13();
            break;
        case 'e':
        case 'E':
            q4(input, num, index + 1);
            break;
        case 'f':
        case 'F':
        case 'd':
        case 'D':
            q8(input, num, index + 1);
            break;
        case '0':
            q2(input, num, 1, index + 1);
            break;
        case '1':
            q2(input, num + 0.1, 1, index + 1);
            break;
        case '2':
            q2(input, num + 0.2, 1, index + 1);
            break;
        case '3':
            q2(input, num + 0.3, 1, index + 1);
            break;
        case '4':
            q2(input, num + 0.4, 1, index + 1);
            break;
        case '5':
            q2(input, num + 0.5, 1, index + 1);
            break;
        case '6':
            q2(input, num + 0.6, 1, index + 1);
            break;
        case '7':
            q2(input, num + 0.7, 1, index + 1);
            break;
        case '8':
            q2(input, num + 0.8, 1, index + 1);
            break;
        case '9':
            q2(input, num + 0.9, 1, index + 1);
            break;
        default:
            q13();
            break;
        }
    }
}

void q12(string input, double num, int index)
{
    switch (input[index])
    {
    case '.':
        q11(input, num, index + 1);
        break;
    case 'e':
    case 'E':
    case 'f':
    case 'F':
    case 'd':
    case 'D':
    case '-':
    case '_':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    default:
        q13();
        break;
    }
}

void q13()
{
    cout << "Input is not a decimal. \n";
}
