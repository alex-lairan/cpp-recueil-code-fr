/*
 * nom: Dénombrement
 * énoncé: Lire un fichier et compter le nombre de lignes
 * but: Lecture de fichier
 */
#include <iostream> // std::cout
#include <fstream> // std::ifstream
#include <string> // std::string

int main() {
  const std::string filename { "test" }; // Changer le nom du fichier ici
  std::ifstream file { filename }; // Fichier
  unsigned int count { 0 }; // Nombre de lignes
  std::string line;

  // std::getline permet de récupérer une ligne du fichier
  while(std::getline(file, line)) {
      ++count;
  }

  std::cout << "Dans le fichier " << filename
            << " il y à " << count << " lignes"
            << std::endl;
  return 0;
}
