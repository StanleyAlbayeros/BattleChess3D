#include "Pawn.h"


// Chaining constructors: https://stackoverflow.com/questions/7349183/constructor-chaining-in-c
// Format: SubclassConstructor(params) : SuperClassConstructor(superClassParams)
Pawn::Pawn(bool debug, Position pos) : Pieces(debug, pos, "Pawn", "P")
{
}

Pawn::~Pawn()
{
}
