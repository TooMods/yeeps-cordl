#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SampleRotator)
// Forward declare root types
namespace DitzelGames::FastIK {
class SampleRotator;
}
// Write type traits
MARK_REF_PTR_T(::DitzelGames::FastIK::SampleRotator);
// Type: DitzelGames.FastIK::SampleRotator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace DitzelGames::FastIK {
// Is value type: false
// CS Name: ::DitzelGames.FastIK::SampleRotator*
class CORDL_TYPE SampleRotator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::DitzelGames::FastIK::SampleRotator* New_ctor();

  /// @brief Method Update, addr 0x10876b0, size 0x48, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method .ctor, addr 0x10876f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SampleRotator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SampleRotator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SampleRotator(SampleRotator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SampleRotator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SampleRotator(SampleRotator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DitzelGames::FastIK::SampleRotator, 0x18>, "Size mismatch!");

} // namespace DitzelGames::FastIK
NEED_NO_BOX(::DitzelGames::FastIK::SampleRotator);
DEFINE_IL2CPP_ARG_TYPE(::DitzelGames::FastIK::SampleRotator*, "DitzelGames.FastIK", "SampleRotator");
