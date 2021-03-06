/*
 * @Github: https://github.com/Certseeds/CS205_C_CPP
 * @Organization: SUSTech
 * @Author: nanoseeds
 * @Date: 2020-03-19 16:32:59
 * @LastEditors: nanoseeds
 * @LastEditTime: 2020-03-19 18:23:23
 */
#include <iostream>
#include <unistd.h>

using std::cin;
using std::cout;
using std::endl;

int32_t sub_main_05_03();

int32_t while_fibonacci();

int32_t do_while_fibonacci();

int32_t for_fibonacci();

const char input_str[] = "Enter a positive number: ";
const char output_str[] = "Fibonacci Series: ";
const char illegal_str[] = "Please input positive";
#ifndef _UNIT_TESTING_LAB_05_
#define _UNIT_TESTING_LAB_05_

int main() {
    // Path is
    // 相对路径: /cmake-build-debug/lab05/src
    int32_t will_return = sub_main_05_03();
    cin.get();
    cin.get();
    return will_return;
}

#endif // !_UNIT_TESTING_LAB_05_

int32_t sub_main_05_03() {
    while_fibonacci();
    do_while_fibonacci();
    for_fibonacci();
    return 0;
}

int32_t while_fibonacci() {
    int32_t range = 0;
    cout << input_str;
    cin >> range;
    while ((getchar()) != '\n');
    if (range <= 0) {
        cout << illegal_str << endl;
        return -1;
    }
    cout << output_str;
    int32_t zero = 0;
    int32_t one = 1;
    while (zero <= range) {
        cout << zero << " ";
        int32_t test = zero;
        zero = one;
        one += test;
    }
    cout << endl;
    return 0;
}

int32_t do_while_fibonacci() {
    int32_t range = 0;
    cout << input_str;
    cin >> range;
    while ((getchar()) != '\n');
    if (range <= 0) {
        cout << illegal_str << endl;
        return -1;
    }
    cout << output_str;
    int32_t zero = 0;
    int32_t one = 1;
    do {
        cout << zero << " ";
        int32_t test = zero;
        zero = one;
        one += test;
    } while (zero <= range);
    cout << endl;
    return 0;
}

int32_t for_fibonacci() {
    int32_t range = 0;
    cout << input_str;
    cin >> range;
    while ((getchar()) != '\n');
    if (range <= 0) {
        cout << illegal_str << endl;
        return -1;
    }
    cout << output_str;
    int32_t zero = 0;
    int32_t one = 1;
    for (; zero <= range;) {
        cout << zero << " ";
        int32_t test = zero;
        zero = one;
        one += test;
    }
    cout << endl;
    return 0;
}