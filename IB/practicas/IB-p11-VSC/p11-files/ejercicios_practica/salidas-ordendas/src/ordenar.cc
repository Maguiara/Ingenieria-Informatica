#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>

std::vector<std::string> ReadWordsFromFile(const std::string& filename, std::set<char>& letters) {
    std::vector<std::string> words;
    std::ifstream file(filename);
    std::string word;
    
    while (file >> word) {
        words.push_back(word);
        letters.insert(std::tolower(word[0]));
    }
    
    file.close();
    return words;
}

void WriteWordsToFile(const std::vector<std::string>& words, char letter) {
    std::string filename = std::string(1, std::toupper(letter)) + ".txt";
    std::ofstream salida(filename);
    
    for (const std::string& word : words) {
        if (std::tolower(word[0]) == letter) {
            salida << word << std::endl;
        }
    }
    
    salida.close();
}

