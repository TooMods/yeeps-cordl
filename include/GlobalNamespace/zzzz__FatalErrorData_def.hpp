#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FatalErrorData)
// Forward declare root types
namespace GlobalNamespace {
struct FatalErrorData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FatalErrorData);
// Type: ::FatalErrorData
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::FatalErrorData
struct CORDL_TYPE FatalErrorData {
public:
  // Declarations
  /// @brief Method ToString, addr 0x29c8d28, size 0x164, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x29c8c9c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW shortMessage, ::StringW verboseMessage, ::StringW recoverySuggestion, bool isError);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FatalErrorData();

  // Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "shortMessage", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "verboseMessage", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "recoverySuggestion", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr FatalErrorData(bool isError, ::StringW shortMessage, ::StringW verboseMessage, ::StringW recoverySuggestion) noexcept;

  /// @brief Field isError, offset: 0x0, size: 0x1, def value: None
  bool isError;

  /// @brief Field shortMessage, offset: 0x8, size: 0x8, def value: None
  ::StringW shortMessage;

  /// @brief Field verboseMessage, offset: 0x10, size: 0x8, def value: None
  ::StringW verboseMessage;

  /// @brief Field recoverySuggestion, offset: 0x18, size: 0x8, def value: None
  ::StringW recoverySuggestion;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FatalErrorData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorData, isError) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorData, shortMessage) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorData, verboseMessage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorData, recoverySuggestion) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FatalErrorData, "", "FatalErrorData");
