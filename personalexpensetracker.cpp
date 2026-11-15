#include <iostream>
#include <vector>
#include <tuple>
#include <string>

int main (){

    std::vector <std::tuple<std::string, double>> tracker;
    std::cout << "==== EXPENSE TRACKER ====\n";

    std::cout << "1. Add Expense\n";
    std::cout << "2. View Expenses\n";
    std::cout << "3. Total Spending\n";
    std::cout << "4. Average Expense\n";

    int option;
    std::cout << "Choose an option: ";
    std::cin >> option;

    switch(option){
        case 1: {

            std::cout << "==== ADD EXPENSE ====\n";
            std::string expense;
            std::cout << "Enter expense name: ";
            std::cin >> expense;

            double amount;
            std::cout << "Enter amount: ";
            std::cin >> amount;

            tracker.push_back(std::make_tuple(expense, amount));

            std::cout << "Added: " << expense << " $" << amount << '\n';
            break;
        }
        case 2: {
            
            std::cout << "==== YOUR EXPENSE ====";

            std::string expense;
            std::cout << "Enter expense name: ";
            std::cin >> expense;

            for (int i = 0; i < tracker.size(); i++) {
                if (std::get<0>(tracker[i]) == expense){
                    std::cout << std::get<0>(tracker[i]) << "$";
                    std::cout << std::get<1>(tracker[i]) << '\n';
                }
            }
            break;
        }
        case 3: {
            std::cout << "==== TOTAL SPENDING ====";

            double totalSpending = 0.0;

            for (int i = 0; i < tracker.size(); i++){
                totalSpending += std::get<1>(tracker[i]);
            }

            std::cout << "Total spending: " << totalSpending << "\n";
            break;
        }
        case 4:{
            std::cout << "==== AVERAGE EXPENSE ====";
            
            if (tracker.empty()) {
                std::cout << "No expenses recorded.\n";
                break;
            }
            double totalSpending = 0.0;

            for (int i = 0; i < tracker.size(); i++){
                totalSpending += std::get<1>(tracker[i]);
            }

            double averageSpending = totalSpending / tracker.size();

            std::cout << "Average Spending: " << averageSpending << '\n';
            break;
        }
    }



    return 0;
}