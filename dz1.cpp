#include <iostream>
#include <string>
#include <locale.h>

int one(){//Составить алгоритм, подсчитывающий количество слов в тексте.
    std::string str;
    std::cout << "Введите слова отделенные пробелами: ";

    getline(std::cin, str);

    int n = 0;
    for (int i = 0; i < str.size(); i++)
        if (str[i] == ' ' && str[i+1]!= ' ') n++;
    std::cout << "Количество слов: " << n + 1 << std::endl;

    return 0;
}

int two(){//Удалить из строки первые буквы слов. (Пример. Входная строка: Crystal Method. Результат: rystal ethod).
    std::string str;
    std::cout << "Введите слова отделенные пробелами: ";

    getline(std::cin, str);

    int n = 0;

    str.erase(0,1);

    for (int i = 0; i < str.size()-1; i++)
        if (str[i] == ' ' && str[i+1]!= ' '){
            str.erase(i+1,1);
        }
    std::cout << str << std::endl;

    return 0;

}

int three(){//В данной строке вставить после каждого символа 'a' символ 'b'.
    std::string str;
    std::cout << "Введите стороку: ";


    getline(std::cin, str);

    for (int i = 0; i < str.size(); i++)
        if (str[i] == 'a'){
            str[i] = 'b';
        }
    std::cout << str << std::endl;

    return 0;
}

int four(){//Дана строка. Если ее длина больше 10, то оставить в строке только первые 6 символов, иначе дополнить строку символами 'o' до длины 12.
    std::string str;
    std::cout << "Введите слова отделенные пробелами: ";
    char domChar = 'o';

    getline(std::cin, str);

    if(str.size()>10){
        str.erase(6,str.size()-6);
    }else
    {
        int dop = 12 - str.size();
        for (int i = 0; i < dop; i++)
        {
            str+= 'o';
        }
        
    }
    
    std::cout << str << std::endl;

    return 0;
}

int main(){
    setlocale(LC_ALL,"RUS");
    one();
    two();
    three();
    four();

}