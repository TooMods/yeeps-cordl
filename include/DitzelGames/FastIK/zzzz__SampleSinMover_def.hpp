#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(SampleSinMover)
// Forward declare root types
namespace DitzelGames::FastIK {
class SampleSinMover;
}
// Write type traits
MARK_REF_PTR_T(::DitzelGames::FastIK::SampleSinMover);
// Type: DitzelGames.FastIK::SampleSinMover
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace DitzelGames::FastIK {
// Is value type: false
// CS Name: ::DitzelGames.FastIK::SampleSinMover*
class CORDL_TYPE SampleSinMover : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field Dir, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_Dir, put = __cordl_internal_set_Dir))::UnityEngine::Vector3 Dir;

  /// @brief Field Start, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get_Start, put = __cordl_internal_set_Start))::UnityEngine::Vector3 Start;

  /// @brief Method Awake, addr 0x1087700, size 0x30, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::DitzelGames::FastIK::SampleSinMover* New_ctor();

  /// @brief Method Update, addr 0x1087730, size 0x6c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Dir() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_Dir();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Start() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_Start();

  constexpr void __cordl_internal_set_Dir(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_Start(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x108779c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SampleSinMover();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SampleSinMover", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SampleSinMover(SampleSinMover&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SampleSinMover", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SampleSinMover(SampleSinMover const&) = delete;

  /// @brief Field Dir, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___Dir;

  /// @brief Field Start, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___Start;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DitzelGames::FastIK::SampleSinMover, 0x30>, "Size mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::SampleSinMover, ___Dir) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DitzelGames::FastIK::SampleSinMover, ___Start) == 0x24, "Offset mismatch!");

} // namespace DitzelGames::FastIK
NEED_NO_BOX(::DitzelGames::FastIK::SampleSinMover);
DEFINE_IL2CPP_ARG_TYPE(::DitzelGames::FastIK::SampleSinMover*, "DitzelGames.FastIK", "SampleSinMover");
