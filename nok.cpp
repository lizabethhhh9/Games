#include <iostream>
#include <ctime>
#include <cstdlib>

int nod(int x, int y) {
    while (x != y) {
        if (x > y) {
            x -= y;
        } else {
            y -= x;
        }
    }
    return x;
}

int nok(int x, int y) {
    return (x * y) / nod(x, y);
}

void welcome() {
    std::cout << "Welcome to the Brain Games!" << std::endl;
    std::cout << "May I have your name? " << std::endl;
}

int main() {
    srand(time(0)); //чтобы каждый раз формировать новые последовательности чисел 
    welcome();
    
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "Find the smallest common multiple of given numbers." << std::endl;
    int score = 0;
    for (int i = 0; i < 3; i++) {
        int num1 = rand() % 20 + 1;
        int num2 = rand() % 20 + 1;
        int num3 = rand() % 20 + 1;
        std::cout << "Question " << num1 << " " << num2 << " " << num3 << std::endl;
        int ans;
        std::cin >> ans;
        std::cout << "Your answer " << ans << std::endl;
        int correct_ans = nok(nok(num1, num2), num3);
        if (ans == correct_ans) {
            std::cout << "Correct!" << std::endl;
            score++;
        } else {
            std::cout << "'" << ans << "' is was wrong answer:(. Correct answer was '" << correct_ans << "'." << std::endl;
            break;
        }
    }

    if (score == 3) {
        std::cout << "Congratulations, " << name << "!" << std::endl;
    } else {
        std::cout << "Let's try again, " << name << std::endl;
    }
    return 0;
}