#pragma once

#include "HPGe.hh"

namespace HPGe {

class Hexagonal : public HPGe {
  public:
    Hexagonal(const _spec &spec, const std::string &name);

  private:
    static G4VSolid *HexShape(const std::string &name, const G4double &base_radius, const G4double &half_length);
};

} //namespace HPGe
