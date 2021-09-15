// =================================================================================================
// Name             : Call Stack Demonstration
// Author           : Noah Allan Ertz
// Created          : 09/15/2021
// Course           : CIS 152 - Data Structures
// Version          : 1.0
// OS               : Windows 10
// IDE              : Qt 5.12.5
// Copyright        : This is my own original work based on specifications issued by our instructor.
// Description      : Demonstrates a call stack using functions.
//                    Output: Stack call messages in LIFO order
// Academic Honesty : I attest that this is my original work. I have not used unauthorized source
//                    code, either modified or unmodified. I have not given other fellow students
//                    access to my program.
// =================================================================================================

#include <iostream>

void method1();
void method2();
void method3();
void method4();

void scenario1();
void scenario2();

void sequential_call_method1();
void sequential_call_method2();
void sequential_call_method3();
void sequential_call_method4();

void scenario3();
void scenario4();

int main() {
    std::cout << "In main method" << std::endl; // push(main)
    std::cout << std::endl;

    method1();                                  // push(method1)
                                                // pop(method1)
    std::cout << std::endl;

    method2();                                  // push(method2)
                                                // pop(method2)
    std::cout << std::endl;

    method3();                                  // push(method3)
                                                // pop(method3)
    std::cout << std::endl;

    method4();                                  // push(method4)
                                                // pop(method4)
    std::cout << std::endl;

    scenario1();                                // push(scenario1)
                                                // push(method1)
                                                // pop(method1)
                                                // push(method2)
                                                // pop(method2)
                                                // push(method3)
                                                // pop(method3)
                                                // push(method4)
                                                // pop(method4)
                                                // pop(scenario1)
    std::cout << std::endl;

    scenario2();                                // push(scenario2)
                                                // push(method3)
                                                // pop(method3)
                                                // push(method2)
                                                // pop(method2)
                                                // push(method4)
                                                // pop(method4)
                                                // push(method1)
                                                // pop(method1)
                                                // pop(scenario2)
    std::cout << std::endl;

    scenario3();                                // push(scenario3)
                                                // push(sequential_call_method1)
                                                // push(sequential_call_method2)
                                                // push(sequential_call_method3)
                                                // push(sequential_call_method4)
                                                // pop(sequential_call_method4)
                                                // pop(sequential_call_method3)
                                                // pop(sequential_call_method2)
                                                // pop(sequential_call_method1)
                                                // pop(scenario3)
    std::cout << std::endl;

    scenario4();                                // push(scenario4)
                                                // push(sequential_call_method3)
                                                // push(sequential_call_method4)
                                                // pop(sequential_call_method4)
                                                // pop(sequential_call_method3)
                                                // push(sequential_call_method2)
                                                // push(sequential_call_method3)
                                                // push(sequential_call_method4)
                                                // pop(sequential_call_method4)
                                                // pop(sequential_call_method3)
                                                // pop(sequential_call_method2)
                                                // pop(scenario4)
    std::cout << std::endl;

    std::cout << "Exiting main" << std::endl;   // pop(main)
    return 0;
}

void method1() {
    std::cout << "In method1" << std::endl << "Exiting method1" << std::endl;
}

void method2() {
    std::cout << "In method2" << std::endl << "Exiting method2" << std::endl;
}

void method3() {
    std::cout << "In method3" << std::endl << "Exiting method3" << std::endl;
}

void method4() {
    std::cout << "In method4" << std::endl << "Exiting method4" << std::endl;
}

void scenario1() {
    std::cout << "Entering scenario1" << std::endl;
    std::cout << "Calling method1" << std::endl;
    method1();
    std::cout << "Finished call of method1" << std::endl;
    std::cout << "Calling method2" << std::endl;
    method2();
    std::cout << "Finished call of method2" << std::endl;
    std::cout << "Calling method3" << std::endl;
    method3();
    std::cout << "Finished call of method3" << std::endl;
    std::cout << "Calling method4" << std::endl;
    method4();
    std::cout << "Finished call of method4" << std::endl;
    std::cout << "Exiting scenario1" << std::endl;
}

void scenario2() {
    std::cout << "Entering scenario2" << std::endl;
    std::cout << "Calling method3" << std::endl;
    method3();
    std::cout << "Finished call of method3" << std::endl;
    std::cout << "Calling method2" << std::endl;
    method2();
    std::cout << "Finished call of method2" << std::endl;
    std::cout << "Calling method4" << std::endl;
    method4();
    std::cout << "Finished call of method4" << std::endl;
    std::cout << "Calling method1" << std::endl;
    method1();
    std::cout << "Finished call of method1" << std::endl;
    std::cout << "Exiting scenario2" << std::endl;
}

void sequential_call_method1() {
    std::cout << "Entering sequential_call_method1" << std::endl;
    std::cout << "Calling sequential_call_method2" << std::endl;
    sequential_call_method2();
    std::cout << "Finished call of sequential_call_method2" << std::endl;
    std::cout << "Exiting sequential_call_method1" << std::endl;
}

void sequential_call_method2() {
    std::cout << "Entering sequential_call_method2" << std::endl;
    std::cout << "Calling sequential_call_method3" << std::endl;
    sequential_call_method3();
    std::cout << "Finished call of sequential_call_method3" << std::endl;
    std::cout << "Exiting sequential_call_method2" << std::endl;
}

void sequential_call_method3() {
    std::cout << "Entering sequential_call_method3" << std::endl;
    std::cout << "Calling sequential_call_method4" << std::endl;
    sequential_call_method4();
    std::cout << "Finished call of sequential_call_method4" << std::endl;
    std::cout << "Exiting sequential_call_method3" << std::endl;
}

void sequential_call_method4() {
    std::cout << "Entering sequential_call_method4" << std::endl;
    std::cout << "Exiting sequential_call_method4" << std::endl;
}

void scenario3() {
    std::cout << "Entering scenario3" << std::endl;
    std::cout << "Calling sequential_call_method1" << std::endl;
    sequential_call_method1();
    std::cout << "Finished call of sequential_call_method1" << std::endl;
    std::cout << "Exiting scenario3" << std::endl;
}

void scenario4() {
    std::cout << "Entering scenario4" << std::endl;
    std::cout << "Calling sequential_call_method3" << std::endl;
    sequential_call_method3();
    std::cout << "Finished call of sequential_call_method3" << std::endl;
    std::cout << "Calling sequential_call_method2" << std::endl;
    sequential_call_method2();
    std::cout << "Finished call of sequential_method2" << std::endl;
    std::cout << "Exiting scenario4" << std::endl;
}
