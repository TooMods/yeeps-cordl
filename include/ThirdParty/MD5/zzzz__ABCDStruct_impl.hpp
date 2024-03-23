#pragma once
#include "ThirdParty/MD5/zzzz__ABCDStruct_def.hpp"
// Ctor Parameters [CppParam { name: "A", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "B", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "C",
// ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "D", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ThirdParty::MD5::ABCDStruct::ABCDStruct(uint32_t A, uint32_t B, uint32_t C, uint32_t D) noexcept {
  this->A = A;
  this->B = B;
  this->C = C;
  this->D = D;
}
// Ctor Parameters []
constexpr ::ThirdParty::MD5::ABCDStruct::ABCDStruct() {}
