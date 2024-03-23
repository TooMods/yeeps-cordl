#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ToxModPlayerTracker)
// Forward declare root types
namespace GlobalNamespace {
class ToxModPlayerTracker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ToxModPlayerTracker);
// Type: ::ToxModPlayerTracker
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ToxModPlayerTracker*
class CORDL_TYPE ToxModPlayerTracker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field playerName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_playerName, put = __cordl_internal_set_playerName))::StringW playerName;

  /// @brief Field positionUpdateIntervalSeconds, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_positionUpdateIntervalSeconds, put = __cordl_internal_set_positionUpdateIntervalSeconds)) float_t positionUpdateIntervalSeconds;

  /// @brief Field secondsSinceLastUpdate, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_secondsSinceLastUpdate, put = __cordl_internal_set_secondsSinceLastUpdate)) float_t secondsSinceLastUpdate;

  static inline ::GlobalNamespace::ToxModPlayerTracker* New_ctor();

  /// @brief Method OnDestroy, addr 0x28decc8, size 0x58, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetName, addr 0x28dea2c, size 0x64, virtual false, abstract: false, final false
  inline void SetName(::StringW playerName);

  /// @brief Method Start, addr 0x28deb64, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x28dea90, size 0xd4, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::StringW const& __cordl_internal_get_playerName() const;

  constexpr ::StringW& __cordl_internal_get_playerName();

  constexpr float_t const& __cordl_internal_get_positionUpdateIntervalSeconds() const;

  constexpr float_t& __cordl_internal_get_positionUpdateIntervalSeconds();

  constexpr float_t const& __cordl_internal_get_secondsSinceLastUpdate() const;

  constexpr float_t& __cordl_internal_get_secondsSinceLastUpdate();

  constexpr void __cordl_internal_set_playerName(::StringW value);

  constexpr void __cordl_internal_set_positionUpdateIntervalSeconds(float_t value);

  constexpr void __cordl_internal_set_secondsSinceLastUpdate(float_t value);

  /// @brief Method .ctor, addr 0x28deeb8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToxModPlayerTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToxModPlayerTracker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToxModPlayerTracker(ToxModPlayerTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToxModPlayerTracker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToxModPlayerTracker(ToxModPlayerTracker const&) = delete;

  /// @brief Field playerName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___playerName;

  /// @brief Field positionUpdateIntervalSeconds, offset: 0x20, size: 0x4, def value: None
  float_t ___positionUpdateIntervalSeconds;

  /// @brief Field secondsSinceLastUpdate, offset: 0x24, size: 0x4, def value: None
  float_t ___secondsSinceLastUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ToxModPlayerTracker, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ToxModPlayerTracker, ___playerName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToxModPlayerTracker, ___positionUpdateIntervalSeconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToxModPlayerTracker, ___secondsSinceLastUpdate) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ToxModPlayerTracker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ToxModPlayerTracker*, "", "ToxModPlayerTracker");
