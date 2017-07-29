/*
 * nom: Liste des notes
 * énoncé: Récupérer une liste de note depuis l'entrée standard (std::cin),
 *   et en faire une moyenne avec les outils dont dispose C++.
 * but: Utiliser std::accumulate
 */
#include <iostream> // std::cout std::cin
#include <numeric> // std::accumulate
#include <vector> // std::vector

int main() {
    std::vector<double> marks {}; // Tableau de notes (Type Double)

    std::cout << "Entrez vos notes" << std::endl;

    while(true) {
      std::cout << "Note n°" << marks.size() + 1 << " (-1 pour quiter): ";

      double mark; // Variable déclaré juste quand nécéssaire
      std::cin >> mark; // Récupère une saisie

      if(mark > -1.01 && mark < 0.09) { break; } // Si la note est -1

      // Ici, nous voulons une note entre 0 et 20
      if(!(mark >= 0 && mark <= 20)) {
        std::cout << "La note doit être comprise entre 0 et 20." << std::endl;
        continue; // On retourne au début de la boucle, car nous ne voulons pas cette note.
      }
      marks.push_back(mark); // Ajoute la note à la liste des notes
    }

    // On vérifie s'il y a des notes
    if(marks.size() == 0) {
      std::cout << "Vous n'avez pas entré de notes" << std::endl;
    } else {
      std::cout << "Vous avez entré " << marks.size() << " notes." << std::endl;

      /*
       * std::accumulate fait la somme des éléments du tableau, en prenant
       *  - début du tableau
       *  - fin du tableau
       *  - variable initiale
       */
      double sum = std::accumulate(std::begin(marks), std::end(marks), 0); // Fait la somme
      double average = sum / marks.size(); // Fait la moyenne

      std::cout << "La moyenne des notes est de " << average << std::endl;
    }
}
