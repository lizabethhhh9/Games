#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

int nok(int x,int y) {
    while (y!=0) {
        int temp=y;
        y=x%y;
        x=temp;
    }
    return x;
}

int mnok(int x, int y) {
    return (x*y)/ nok(x,y);
}

int main() {
    std:: string name;
    int answer1;
    std::cout << "Welcome to the Brain Games!" << std::endl;
    std::cout << "May I have your name?";
    std::cin >> name;
    std::cout << "Hello," << name << "!" << std::endl;
    std::cout << "Find the smallest common multiple of given numbers" << std::endl;
    
    int n1, n2, n3;
    for (int i=0; i<3; i++) {
        n1=rand() %20 +1;
        n2=rand() %20 +1;
        n3=rand() %20 +1;
        
    std::cout << "Question:" << n1 << " " << n2 << " " << n3 << " " << std::endl;
    std::cin >> answer1;
    std::cout << "Your answer:" << answer1 << std::endl;
    int answer=mnok(n1, mnok(n2,n3));
    if (answer==answer1) {
        std::cout << "Correct!";
    } else {
        std:: cout << "it is wrong answer, correct answer was" << answer << std::endl;
        std::cout << "let's try again" << std::endl;
        }
    }
}