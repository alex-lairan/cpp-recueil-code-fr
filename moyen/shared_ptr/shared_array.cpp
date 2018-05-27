#include "shared_array.hpp"

// Ce constructeur créé le tableau partagé
shared_array::shared_array() : m_ary { std::make_shared<std::array<int, 5>>() } {
}

// Ce constructeur fait le lien entre son tableau et l'argument
shared_array::shared_array(const shared_array& sa) : m_ary { sa.m_ary } {
}

// Compte le nombre d'objets partageant sa mémoire
int shared_array::shared_count() const {
  return m_ary.use_count();
}

// Récupère le tableau
std::array<int, 5> shared_array::get_array() const {
  return *m_ary.get();
}

void shared_array::set_to_array(std::size_t position, int value) {
  m_ary.get()[position] = value;
}
