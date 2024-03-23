#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DatabaseFailureCode)
// Forward declare root types
namespace GlobalNamespace {
class DatabaseFailureCode;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DatabaseFailureCode);
// Type: ::DatabaseFailureCode
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DatabaseFailureCode*
class CORDL_TYPE DatabaseFailureCode : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DatabaseFailureCode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DatabaseFailureCode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DatabaseFailureCode(DatabaseFailureCode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DatabaseFailureCode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DatabaseFailureCode(DatabaseFailureCode const&) = delete;

  /// @brief Field FAILED_TO_INITIALIZE offset 0xffffffff size 0x8
  static constexpr ::ConstString FAILED_TO_INITIALIZE{ u"FAILED_TO_INITIALIZE" };

  /// @brief Field FAILED_TO_INVOKE offset 0xffffffff size 0x8
  static constexpr ::ConstString FAILED_TO_INVOKE{ u"FAILED_TO_INVOKE" };

  /// @brief Field FAILED_TO_REACH offset 0xffffffff size 0x8
  static constexpr ::ConstString FAILED_TO_REACH{ u"FAILED_TO_REACH" };

  /// @brief Field INCORRECT_CODE offset 0xffffffff size 0x8
  static constexpr ::ConstString INCORRECT_CODE{ u"INCORRECT_CODE" };

  /// @brief Field INSUFFICIENT_PERMISSIONS offset 0xffffffff size 0x8
  static constexpr ::ConstString INSUFFICIENT_PERMISSIONS{ u"INSUFFICIENT_PERMISSIONS" };

  /// @brief Field INVALID_FORMAT offset 0xffffffff size 0x8
  static constexpr ::ConstString INVALID_FORMAT{ u"INVALID_FORMAT" };

  /// @brief Field INVALID_INPUT offset 0xffffffff size 0x8
  static constexpr ::ConstString INVALID_INPUT{ u"INVALID_INPUT" };

  /// @brief Field NOT_IMPLEMENTED offset 0xffffffff size 0x8
  static constexpr ::ConstString NOT_IMPLEMENTED{ u"NOT_IMPLEMENTED" };

  /// @brief Field NOT_IN_CREATIVE_MODE offset 0xffffffff size 0x8
  static constexpr ::ConstString NOT_IN_CREATIVE_MODE{ u"NOT_IN_CREATIVE_MODE" };

  /// @brief Field NOT_IN_PLAY_MODE offset 0xffffffff size 0x8
  static constexpr ::ConstString NOT_IN_PLAY_MODE{ u"NOT_IN_PLAY_MODE" };

  /// @brief Field NO_ACCOUNT_LOADED offset 0xffffffff size 0x8
  static constexpr ::ConstString NO_ACCOUNT_LOADED{ u"NO_ACCOUNT_LOADED" };

  /// @brief Field NO_DATA_FOUND offset 0xffffffff size 0x8
  static constexpr ::ConstString NO_DATA_FOUND{ u"NO_DATA_FOUND" };

  /// @brief Field OUTDATED_CLIENT offset 0xffffffff size 0x8
  static constexpr ::ConstString OUTDATED_CLIENT{ u"OUTDATED_CLIENT" };

  /// @brief Field UNKNOWN offset 0xffffffff size 0x8
  static constexpr ::ConstString UNKNOWN{ u"unknown" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DatabaseFailureCode, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DatabaseFailureCode);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DatabaseFailureCode*, "", "DatabaseFailureCode");
