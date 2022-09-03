#include<iostream>
#include<vector>

int main()
{
    std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
    std::vector<int> odd_numbers, even_numbers;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even_numbers.push_back(numbers[i]);
        }
        else if (numbers[i] % 2 == 1)
        {
            odd_numbers.push_back(numbers[i]);
        }
    }

    std::cout << "Odd numbers: ";
    for (int i = 0; i < odd_numbers.size(); i++)
    {
        std::cout << odd_numbers[i] << " ";
    }

    std::cout << "\nEven numbers: ";
    for (int i = 0; i < even_numbers.size(); i++)
    {
        std::cout << even_numbers[i] << " ";
    }

    return 0;
}