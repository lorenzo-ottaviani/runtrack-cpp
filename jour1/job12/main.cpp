/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 06/11/2025 15h34
* But du programme :
*    Affiche le double d'un tableau d'entiers et la somme du double d'un autre.
* Entrée : ∅
* Sortie : Le double d'un tableau d'entiers et la somme d'un double tableau d'entiers.
*/

#include <iostream>

int double_array(int* table, int table_size) {
    int* p;
    int sum = 0;

    for (int i = 0; i < table_size; i++) {
        p = &table[i];
        *p = table[i] * 2;
        sum += table[i];
    }

    return sum;
}

void print_array(int* table, int table_size) {
    int* p;

    for (int i = 0; i < table_size; i++) {
        p = &table[i];
        *p = table[i] * 2;
        std::cout << table[i] << " ";
    }

    std::cout << "\n\n";
}

int main() {
    int table_size = 5;

    int table[table_size] = {8, 22, 7, 4, 15};

    int table_bis[table_size] = {1, 2, 3, 4, 5};

    std::cout << "Voici un premier tableau d'entiers : \n";
    for (int i = 0; i < table_size; i++) {
        std::cout << table[i] << " ";
    }
    std::cout << "\n\n";

    std::cout << "Voici un second tableau d'entiers : \n";
    for (int j = 0; j < table_size; j++) {
        std::cout << table_bis[j] << " ";
    }
    std::cout << "\n\n";

    int double_sum = double_array(table, table_size);

    std::cout << "Le second tableau d'entiers doublé est : \n";
    print_array(table, table_size);

    std::cout << "La somme de ses membres est : " << double_sum << "." << std::endl;

    return 0;
}
