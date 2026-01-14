#include <cstdlib> // For system()
#include <iostream>

void showPopup(const char* message) {
    // Construct the command string
    // zenity --info  --text="Your message here"
    std::string command = "zenity --info --timeout=5 --ok-label=\"Don't click here\" --title=\"WARNING\" --text=\"" + std::string(message) + "\"";
    
    // Execute the command
    system(command.c_str());
}

int main() {
    std::cout << "Program starting..." << std::endl;

    // Do some work...
    
    // Show popup in the middle
    showPopup("Fail !! Something went wrong.");

    std::cout << "Program finishing..." << std::endl;
    return 0;
}