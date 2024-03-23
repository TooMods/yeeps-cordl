#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChallengeData)
// Forward declare root types
namespace GlobalNamespace {
struct ChallengeData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ChallengeData);
// Type: ::ChallengeData
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ChallengeData
struct CORDL_TYPE ChallengeData {
public:
  // Declarations
  /// @brief Method GetDisplayMessage, addr 0x27582f4, size 0xa4, virtual false, abstract: false, final false
  inline ::StringW GetDisplayMessage();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ChallengeData();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "statKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "threshold", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ChallengeData(::StringW key, ::StringW message, ::StringW statKey, int32_t threshold) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field message, offset: 0x8, size: 0x8, def value: None
  ::StringW message;

  /// @brief Field statKey, offset: 0x10, size: 0x8, def value: None
  ::StringW statKey;

  /// @brief Field threshold, offset: 0x18, size: 0x4, def value: None
  int32_t threshold;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field thresholdInsertChar offset 0xffffffff size 0x2
  static constexpr char16_t thresholdInsertChar{ u'%' };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ChallengeData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeData, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeData, message) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeData, statKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeData, threshold) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ChallengeData, "", "ChallengeData");
