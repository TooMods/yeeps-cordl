#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DocumentExtensions)
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class DocumentExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::DocumentExtensions);
// Type: Amazon.DynamoDBv2.DocumentModel::DocumentExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::DocumentExtensions*
class CORDL_TYPE DocumentExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method SerializeEnumerable, addr 0x164d180, size 0x3dc, virtual false, abstract: false, final false
  static inline ::StringW SerializeEnumerable(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* documents, bool prettyPrint);

  /// @brief Method ToJson, addr 0x164d178, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW ToJson(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* documents);

  /// @brief Method ToJsonPretty, addr 0x164d55c, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW ToJsonPretty(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* documents);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DocumentExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DocumentExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DocumentExtensions(DocumentExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DocumentExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DocumentExtensions(DocumentExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::DocumentExtensions, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::DocumentExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::DocumentExtensions*, "Amazon.DynamoDBv2.DocumentModel", "DocumentExtensions");
