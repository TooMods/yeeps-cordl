#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WriteRequestDocument)
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::Model {
class WriteRequest;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class WriteRequestDocument;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument);
// Type: Amazon.DynamoDBv2.DocumentModel::WriteRequestDocument
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::WriteRequestDocument*
class CORDL_TYPE WriteRequestDocument : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Document, put = set_Document))::Amazon::DynamoDBv2::DocumentModel::Document* Document;

  __declspec(property(get = get_WriteRequest, put = set_WriteRequest))::Amazon::DynamoDBv2::Model::WriteRequest* WriteRequest;

  /// @brief Field <Document>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Document_k__BackingField,
                      put = __cordl_internal_set__Document_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::Document* _Document_k__BackingField;

  /// @brief Field <WriteRequest>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__WriteRequest_k__BackingField,
                      put = __cordl_internal_set__WriteRequest_k__BackingField))::Amazon::DynamoDBv2::Model::WriteRequest* _WriteRequest_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument* New_ctor();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::Document*& __cordl_internal_get__Document_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Document*> const& __cordl_internal_get__Document_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::Model::WriteRequest*& __cordl_internal_get__WriteRequest_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::WriteRequest*> const& __cordl_internal_get__WriteRequest_k__BackingField() const;

  constexpr void __cordl_internal_set__Document_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Document* value);

  constexpr void __cordl_internal_set__WriteRequest_k__BackingField(::Amazon::DynamoDBv2::Model::WriteRequest* value);

  /// @brief Method .ctor, addr 0x164b5dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Document, addr 0x164ca10, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Document* get_Document();

  /// @brief Method get_WriteRequest, addr 0x164ca00, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::WriteRequest* get_WriteRequest();

  /// @brief Method set_Document, addr 0x164ca18, size 0x8, virtual false, abstract: false, final false
  inline void set_Document(::Amazon::DynamoDBv2::DocumentModel::Document* value);

  /// @brief Method set_WriteRequest, addr 0x164ca08, size 0x8, virtual false, abstract: false, final false
  inline void set_WriteRequest(::Amazon::DynamoDBv2::Model::WriteRequest* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WriteRequestDocument();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WriteRequestDocument", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WriteRequestDocument(WriteRequestDocument&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WriteRequestDocument", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WriteRequestDocument(WriteRequestDocument const&) = delete;

  /// @brief Field <WriteRequest>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::WriteRequest* ____WriteRequest_k__BackingField;

  /// @brief Field <Document>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Document* ____Document_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument, ____WriteRequest_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument, ____Document_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*, "Amazon.DynamoDBv2.DocumentModel", "WriteRequestDocument");
