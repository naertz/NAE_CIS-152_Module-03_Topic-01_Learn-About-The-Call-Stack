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

void daisy_chain_method1();
void daisy_chain_method2();
void daisy_chain_method3();
void daisy_chain_method4();

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
                                                // push(daisy_chain_method1)
                                                // push(daisy_chain_method2)
                                                // push(daisy_chain_method3)
                                                // push(daisy_chain_method4)
                                                // pop(daisy_chain_method4)
                                                // pop(daisy_chain_method3)
                                                // pop(daisy_chain_method2)
                                                // pop(daisy_chain_method1)
                                                // pop(scenario3)
    std::cout << std::endl;

    scenario4();                                // push(scenario4)
                                                // push(daisy_chain_method3)
                                                // push(daisy_chain_method4)
                                                // pop(daisy_chain_method4)
                                                // pop(daisy_chain_method3)
                                                // push(daisy_chain_method2)
                                                // push(daisy_chain_method3)
                                                // push(daisy_chain_method4)
                                                // pop(daisy_chain_method4)
                                                // pop(daisy_chain_method3)
                                                // pop(daisy_chain_method2)
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
    std::cout << "In scenario1" << std::endl;
    method1();
    method2();
    method3();
    method4();
    std::cout << "Exiting scenario1" << std::endl;
}

void scenario2() {
    std::cout << "In scenario2" << std::endl;
    method3();
    method2();
    method4();
    method1();
    std::cout << "Exiting scenario2" << std::endl;
}

void daisy_chain_method1() {
    std::cout << "In daisy_chain_method1" << std::endl;
    daisy_chain_method2();
    std::cout << "Exiting daisy_chain_method1" << std::endl;
}

void daisy_chain_method2() {
    std::cout << "In daisy_chain_method2" << std::endl;
    daisy_chain_method3();
    std::cout << "Exiting daisy_chain_method2" << std::endl;
}

void daisy_chain_method3() {
    std::cout << "In daisy_chain_method3" << std::endl;
    daisy_chain_method4();
    std::cout << "Exiting daisy_chain_method3" << std::endl;
}

void daisy_chain_method4() {
    std::cout << "In daisy_chain_method4" << std::endl;
    std::cout << "Exiting daisy_chain_method4" << std::endl;
}

void scenario3() {
    std::cout << "In scenario3" << std::endl;
    daisy_chain_method1();
    std::cout << "Exiting scenario3" << std::endl;
}

void scenario4() {
    std::cout << "In scenario4" << std::endl;
    daisy_chain_method3();
    daisy_chain_method2();
    std::cout << "Exiting scenario4" << std::endl;
}
