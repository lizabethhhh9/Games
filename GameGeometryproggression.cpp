#include <iostream>
#include <vector>
int main() {
    std:: string name;
    int answer1;
    std::cout << "Welcome to the Brain Games!" << std::endl;
    std::cout << "May I have your name?";
    std::cin >> name;
    std::cout << "Hello," << name << "!" << std::endl;
    
    std::cout << "what number is missing in the progression?" << std::endl;
    
    for (int i=0; i!=3; i++) {
        std::vector<int> numbers;
        int l=rand()%10 +5;
        int step=rand()%5 +1;
        int x=rand()%5 +1;
        for (int i=0; i!=l; i++) {
            numbers.push_back(x);
            x=x*step;
            std::cout << x << " ";
        }
        int s=rand()%l;
        
        
        std::cout << "question: ";
        for (int i=0; i!=numbers.size(); i++) {
            if (i!=s) {
                std::cout << numbers[i] << " ";
            } else {
                std::cout << ".." << " ";
            }
        }
        int answer;
        std::cin >> answer;
        std::cout << "your answer: " << answer << std::endl;
        if (answer==numbers[s]) {
            std::cout << "correct!"<< std::endl;
        } else {
            std::cout << "it was wrong answer, correct answer was " << numbers[s]<< std::endl;
            std::cout << "let's try again!" << std::endl;
        }
    }
    std::cout << "congratulations " << name;
}