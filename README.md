# Manuel d'exemple d'utilisation de C++

## Raison d'être

Ce git est un recueil de code, pour tout développeur C++ francophone.

Le but est d'avoir un certain nombre d'exemples bateau mais exposant
une / plusieurs
façon de résoudre les problématiques posées.

L'initiative est de corriger les erreurs communes causées par les différents cours
de C++ qui sont mauvais.

## Les sources conseillés

### Pour apprendre

- [C++ Primer (5th Edition) [Anglais]](https://www.amazon.com/Primer-5th-Stanley-B-Lippman/dp/0321714113)
- [Débuter en C++ moderne [Français]](http://guillaume.belz.free.fr/doku.php?id=programmez_avec_le_langage_c)  
- [Coder efficacement - Bonnes pratiques et erreurs à éviter (en C++)
 [Français]](https://www.d-booker.fr/programmation-et-langage/157-coder-efficacement.html)

### Pour comprendre

- [DevDocs](http://devdocs.io/cpp/)
- [CPlusPlus](http://www.cplusplus.com/doc/tutorial/)
- [CPPReference [Français]](http://fr.cppreference.com/w/)
- [CPPReference [Anglais]](http://en.cppreference.com/w/)

## Organisation

Les exemples sont rangés par ordre de difficulté.

- facile
- moyen
- difficile

Chacun des dossiers contient les différents exemples, contenant chacun un CMakeLists.txt

## Éxécution

Pour exécuter le code, il vous faudra CMake sur votre machine.

Cet outil permet d'avoir une compatibilité avec la majorité des machines [Windows | Mac | GNU/Linux | UNIX]

De plus, la majorité des IDE C++ savent utiliser CMake pour ouvrir un projet.

Exemple en ligne de commande:

```shell
cd facile/liste_notes
mkdir build
cd build
cmake ..
make
./liste_notes
```

## Roadmap

Il n'y a pas vraiment de roadmap défini.

Les exercices viennent au fur et à mesure des erreurs des membres du forum Openclassroom.
