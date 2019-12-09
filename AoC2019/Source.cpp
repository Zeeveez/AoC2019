#include "Inputs.h"
#include "AoC_1.h"
#include "AoC_2.h"
#include "AoC_3.h"
#include "AoC_4.h"
#include "AoC_5.h"
#include "AoC_6.h"
#include "AoC_7.h"
#include "AoC_8.h"

int main() {
    std::cout << "1A:\t" << AoC_1::A(AoC_1_Input) << "\n";
    std::cout << "1B:\t" << AoC_1::B(AoC_1_Input) << "\n";
    std::cout << "2A:\t" << AoC_2::A(AoC_2_Input, AoC_2_A_Input_Noun, AoC_2_A_Input_Verb) << "\n";
    std::cout << "2A:\t" << AoC_2::B(AoC_2_Input, AoC_2_B_Input_Solution) << "\n";
    //std::cout << "3A:\t" << AoC_3::A(AoC_3_Input_A, AoC_3_Input_B) << "\n";
    //std::cout << "3B:\t" << AoC_3::B(AoC_3_Input_A, AoC_3_Input_B) << "\n";
    std::cout << "4A:\t" << AoC_4::A(AoC_4_Input_A, AoC_4_Input_B) << "\n";
    std::cout << "4B:\t" << AoC_4::B(AoC_4_Input_A, AoC_4_Input_B) << "\n";
    std::cout << "5A:\t" << AoC_5::AB(AoC_5_Input, AoC_5_A_Input) << "\n";
    std::cout << "5B:\t" << AoC_5::AB(AoC_5_Input, AoC_5_B_Input) << "\n";
    //std::cout << "6A:\t" << AoC_6::A(AoC_6_Input) << "\n";
    std::cout << "6B:\t" << AoC_6::B(AoC_6_Input) << "\n";
    std::cout << "7A:\t" << AoC_7::A(AoC_7_Input) << "\n";
    std::cout << "7B:\t" << AoC_7::B(AoC_7_Input) << "\n";
    std::cout << "8A:\t" << AoC_8::A(AoC_8_Input, AoC_8_Input_Width, AoC_8_Input_Height) << "\n";
    std::cout << "8B:\t" << AoC_8::B(AoC_8_Input, AoC_8_Input_Width, AoC_8_Input_Height) << "\n";
}