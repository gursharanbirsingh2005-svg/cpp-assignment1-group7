// CPP Assignment #1 - Group 7                    // Title and assignment info as a comment
// Group Members: Gursharanbir Singh, Arshpreet Singh, Arjun Singh             // List of group members
// This program prints assignment info, group info,// Brief description of what the program does
// and a short explanation of a chosen security    // Continuation of description
// topic (Backups).                                // Topic name

#include <iostream> // Required for input/output (std::cout, std::endl) and  gives access to cout and cin
int main() { // Main function where program execution begins
    
    std::cout << "Assignment Number: 1" << std::endl; // Prints the assignment number and moves to new line
    std::cout << "Group Number: 7" << std::endl;      // Prints the group number and moves to new line

    std::cout << "Group Members:" << std::endl;       // Prints the header "Group Members"
    std::cout << "- Gursharanbir Singh" << std::endl;             // Prints the first group member’s name
    std::cout << "- Arshpreet Singh" << std::endl;             // Prints the second group member’s name
    std::cout << "- Arjun Singh" << std::endl << std::endl;// Prints the third member’s name, then adds an extra blank line

    std::cout << "Security Topic: Backups" << std::endl; // Prints the title of the chosen security topic

    std::cout << "Explanation: Backups are duplicate copies of important data, " // Begins printing the explanation text
              << "stored separately to prevent loss from hardware failure, "     // Continues explanation
              << "accidental deletion, or cyberattacks. Common types include "   // Continues explanation 
              << "full backups (everything), differential backups (changes since "
              << "the last full backup), and incremental backups (changes since " 
              << "the last backup of any type). Backups are essential for "       
              << "business continuity and security." << std::endl;                // Ends explanation and moves to new line

    return 0; // End of program, returns 0 to indicate successful execution
}
