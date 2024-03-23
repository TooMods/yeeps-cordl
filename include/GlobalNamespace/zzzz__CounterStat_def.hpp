#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameStat_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CounterStat)
// Forward declare root types
namespace GlobalNamespace {
class CounterStat;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CounterStat);
// Type: ::CounterStat
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CounterStat*
class CORDL_TYPE CounterStat : public ::GlobalNamespace::GameStat {
public:
  // Declarations
  /// @brief Method Add, addr 0x29d1f70, size 0xc, virtual false, abstract: false, final false
  inline void Add(int32_t amount);

  /// @brief Method GetSerializedPayload, addr 0x29d1f7c, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetSerializedPayload();

  /// @brief Method Increment, addr 0x29d1f64, size 0xc, virtual false, abstract: false, final false
  inline void Increment();

  static inline ::GlobalNamespace::CounterStat* New_ctor();

  /// @brief Method SetSerializedPayload, addr 0x29d1f9c, size 0xd0, virtual true, abstract: false, final false
  inline void SetSerializedPayload(::StringW serializedPayload);

  /// @brief Method .ctor, addr 0x29d206c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CounterStat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CounterStat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CounterStat(CounterStat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CounterStat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CounterStat(CounterStat const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CounterStat, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CounterStat);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CounterStat*, "", "CounterStat");
