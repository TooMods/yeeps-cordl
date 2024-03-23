#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameStat_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaximizeStat)
// Forward declare root types
namespace GlobalNamespace {
class MaximizeStat;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaximizeStat);
// Type: ::MaximizeStat
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MaximizeStat*
class CORDL_TYPE MaximizeStat : public ::GlobalNamespace::GameStat {
public:
  // Declarations
  /// @brief Method GetSerializedPayload, addr 0x29d2088, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetSerializedPayload();

  /// @brief Method Maximize, addr 0x29d2074, size 0x14, virtual false, abstract: false, final false
  inline void Maximize(int32_t newValue);

  static inline ::GlobalNamespace::MaximizeStat* New_ctor();

  /// @brief Method SetSerializedPayload, addr 0x29d20a8, size 0xd0, virtual true, abstract: false, final false
  inline void SetSerializedPayload(::StringW serializedPayload);

  /// @brief Method .ctor, addr 0x29d2178, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaximizeStat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaximizeStat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaximizeStat(MaximizeStat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaximizeStat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaximizeStat(MaximizeStat const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaximizeStat, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaximizeStat);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaximizeStat*, "", "MaximizeStat");
