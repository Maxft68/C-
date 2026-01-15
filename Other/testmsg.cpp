#include <cstdlib> // For system()
#include <iostream>

void showPopup(const char* message) {
    // Construct the command string
    // Utilisation d'une boucle shell pour alimenter la barre de progression pendant 20 secondes
    // Retrait de --auto-close pour laisser le temps de cliquer sur le bouton à la fin
    std::string command = "(for i in $(seq 0 10 100); do echo $i; sleep 1; done) | zenity --progress --time-remaining --ok-label=\"Don't click here\" --title=\"WARNING\" --text=\"" + std::string(message) + "\"";
    
    // Execute the command
    system(command.c_str());
}

int main() {
    std::cout << "Program starting..." << std::endl;

    showPopup("Something went wrong.");

    std::cout << "Program finishing..." << std::endl;
    return 0;
}