#include "Inputs.h"
#include "AoC_1.h"
#include "AoC_2.h"
#include "AoC_3.h"
#include "AoC_4.h"
#include "AoC_5.h"
#include "AoC_6.h"
#include "AoC_7.h"
#include "AoC_8.h"
#include "AoC_9.h"
#include "AoC_10.h"
#include "AoC_11.h"

int main() {
    std::cout << "01A:\t" << AoC_1::A(AoC_1_Input) << "\n";
    std::cout << "01B:\t" << AoC_1::B(AoC_1_Input) << "\n";
    std::cout << "02A:\t" << AoC_2::A(AoC_2_Input, AoC_2_A_Input_Noun, AoC_2_A_Input_Verb) << "\n";
    std::cout << "02A:\t" << AoC_2::B(AoC_2_Input, AoC_2_B_Input_Solution) << "\n";
    std::cout << "03A:\t" << AoC_3::A(AoC_3_Input_A, AoC_3_Input_B) << "\n";
    std::cout << "03B:\t" << AoC_3::B(AoC_3_Input_A, AoC_3_Input_B) << "\n";
    std::cout << "04A:\t" << AoC_4::A(AoC_4_Input_A, AoC_4_Input_B) << "\n";
    std::cout << "04B:\t" << AoC_4::B(AoC_4_Input_A, AoC_4_Input_B) << "\n";
    std::cout << "05A:\t" << AoC_5::AB(AoC_5_Input, AoC_5_Input_A) << "\n";
    std::cout << "05B:\t" << AoC_5::AB(AoC_5_Input, AoC_5_Input_B) << "\n";
    std::cout << "06A:\t" << AoC_6::A(AoC_6_Input) << "\n";
    std::cout << "06B:\t" << AoC_6::B(AoC_6_Input) << "\n";
    std::cout << "07A:\t" << AoC_7::A(AoC_7_Input) << "\n";
    std::cout << "07B:\t" << AoC_7::B(AoC_7_Input) << "\n";
    std::cout << "08A:\t" << AoC_8::A(AoC_8_Input, AoC_8_Input_Width, AoC_8_Input_Height) << "\n";
    std::cout << "08B:\t" << AoC_8::B(AoC_8_Input, AoC_8_Input_Width, AoC_8_Input_Height) << "\n";
    std::cout << "09A:\t" << AoC_9::AB(AoC_9_Input, AoC_9_Input_A) << "\n";
    std::cout << "09B:\t" << AoC_9::AB(AoC_9_Input, AoC_9_Input_B) << "\n";
    std::cout << "10A:\t" << AoC_10::A(AoC_10_Input) << "\n";
    std::cout << "10B:\t" << AoC_10::B(AoC_10_Input) << "\n";
    std::cout << "11A:\t" << AoC_11::A(AoC_11_Input) << "\n";
    std::cout << "11B:\t" << AoC_11::B(AoC_11_Input) << "\n";
}