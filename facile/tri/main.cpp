/*
 * nom: Tri de notes
 * énoncé: Trier une liste de note
 * but: Utiliser std::sort
 */
#include <algorithm> // std::sort
#include <iostream> // std::cout
#include <vector>  // std::vector

/*
 * Affiche les éléments d'un vector
 */
template<typename T>
void display_vector(const std::vector<T>& vector) {
  std::cout << "Vector[" << std::endl;

  // const auto& évite la copie, aisni que la modification de l'élement
  for(const auto& element : vector) {
    std::cout << '\t' << element << ", " << std::endl;
  }

  std::cout << "]" << std::endl;
}

int main() {
  // Initialise une liste de notes
  std::vector<double> marks { 3.5, 6.4, 7.1, 2.1, 12, 14.65, 14.36, 1 };

  std::cout << "Liste de notes avant le tri" << std::endl;
  display_vector<double>(marks);

  std::sort(std::begin(marks), std::end(marks)); // Tri des notes

  std::cout << "Liste de notes après le tri" << std::endl;
  display_vector<double>(marks);
}
