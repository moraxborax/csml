#include <iostream>
#include <string>
#include <cstdio>

std::string input_filename;
std::string output_filename;
std::FILE* input_file;

int main(int argc, char* argv[]) {
    // Print each argument with its index
    if (argc == 1) {
        std::cout << "\033[1;31mFatal Error: No Argument!\033[0m" << std::endl;
    }
    for (int i = 1; i < argc; i++) {
        std::string arg = argv[i];
        //std::cout << "Argument " << i << ": " << argv[i] << std::endl;
        if (arg == "--help") {
            std::cout << "Help message here" << std::endl;
        }
        if (argv[i-1] == "-i" || argv[i-1] == "--input") {
            input_file = std::fopen(input_filename.c_str(), "r");
            if (input_file == NULL) {
                std::cout << "\033[1;31mFatal Error: Input file not found!\033[0m" << std::endl;
                
            }
        }
    }
    
    // Check if specific argument exists
    if (argc > 1 && std::string(argv[1]) == "--help") {
        std::cout << "Help message here" << std::endl;
    }
    
    return 0;
}