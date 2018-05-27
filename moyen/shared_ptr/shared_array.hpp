#pragma once

#include <memory>
#include <array>

// template<typename T>
class shared_array {
  public:
    shared_array();
    shared_array(const shared_array& ch);

    int shared_count() const;
    std::array<int, 5> get_array() const;
    void set_to_array(std::size_t position, int value);

  private:
    std::shared_ptr<std::array<int, 5>> m_ary;
};
