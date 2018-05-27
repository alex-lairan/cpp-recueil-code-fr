/*
 * nom: SharedPtr
 * énoncé: Avoir un tableau partagé entre plusieurs objets
 * but: Partage de mémoire entre plusieurs objets
 */
#include <iostream>
#include <array>
#include "shared_array.hpp"

template<typename T>
void display_array(const std::array<T, 5>& array) {
  std::cout << "Array[" << std::endl;

  // const auto& évite la copie, aisni que la modification de l'élement
  for(const auto& element : array) {
    std::cout << '\t' << element << ", " << std::endl;
  }

  std::cout << "]" << std::endl;
}

int main() {
  shared_array mainArray {}; // Création du 1er objet

  std::cout << mainArray.shared_count() << std::endl;

  shared_array secondArray { mainArray }; // Création du 2nd objet partageant la mémoire
  std::cout << mainArray.shared_count() << std::endl;
  std::cout << secondArray.shared_count() << std::endl;

  display_array(mainArray.get_array());
  display_array(secondArray.get_array());

  mainArray.set_to_array(0, 255);

  display_array(mainArray.get_array());
  display_array(secondArray.get_array());

  return 0;
}
