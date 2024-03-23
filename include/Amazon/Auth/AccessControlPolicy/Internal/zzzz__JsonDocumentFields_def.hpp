#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JsonDocumentFields)
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::Internal {
class JsonDocumentFields;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::Internal::JsonDocumentFields);
// Type: Amazon.Auth.AccessControlPolicy.Internal::JsonDocumentFields
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::Internal {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.Internal::JsonDocumentFields*
class CORDL_TYPE JsonDocumentFields : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonDocumentFields();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonDocumentFields", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonDocumentFields(JsonDocumentFields&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonDocumentFields", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonDocumentFields(JsonDocumentFields const&) = delete;

  /// @brief Field ACTION offset 0xffffffff size 0x8
  static constexpr ::ConstString ACTION{ u"Action" };

  /// @brief Field CONDITION offset 0xffffffff size 0x8
  static constexpr ::ConstString CONDITION{ u"Condition" };

  /// @brief Field EFFECT_VALUE_ALLOW offset 0xffffffff size 0x8
  static constexpr ::ConstString EFFECT_VALUE_ALLOW{ u"Allow" };

  /// @brief Field POLICY_ID offset 0xffffffff size 0x8
  static constexpr ::ConstString POLICY_ID{ u"Id" };

  /// @brief Field PRINCIPAL offset 0xffffffff size 0x8
  static constexpr ::ConstString PRINCIPAL{ u"Principal" };

  /// @brief Field RESOURCE offset 0xffffffff size 0x8
  static constexpr ::ConstString RESOURCE{ u"Resource" };

  /// @brief Field STATEMENT offset 0xffffffff size 0x8
  static constexpr ::ConstString STATEMENT{ u"Statement" };

  /// @brief Field STATEMENT_EFFECT offset 0xffffffff size 0x8
  static constexpr ::ConstString STATEMENT_EFFECT{ u"Effect" };

  /// @brief Field STATEMENT_ID offset 0xffffffff size 0x8
  static constexpr ::ConstString STATEMENT_ID{ u"Sid" };

  /// @brief Field VERSION offset 0xffffffff size 0x8
  static constexpr ::ConstString _cordl_VERSION{ u"Version" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::Internal::JsonDocumentFields, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::Internal
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::Internal::JsonDocumentFields);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::Internal::JsonDocumentFields*, "Amazon.Auth.AccessControlPolicy.Internal", "JsonDocumentFields");
