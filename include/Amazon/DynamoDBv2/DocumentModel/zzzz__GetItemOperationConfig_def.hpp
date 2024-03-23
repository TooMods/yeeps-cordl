#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetItemOperationConfig)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class GetItemOperationConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig);
// Type: Amazon.DynamoDBv2.DocumentModel::GetItemOperationConfig
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::GetItemOperationConfig*
class CORDL_TYPE GetItemOperationConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributesToGet, put = set_AttributesToGet))::System::Collections::Generic::List_1<::StringW>* AttributesToGet;

  __declspec(property(get = get_ConsistentRead, put = set_ConsistentRead)) bool ConsistentRead;

  /// @brief Field <AttributesToGet>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__AttributesToGet_k__BackingField,
                      put = __cordl_internal_set__AttributesToGet_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _AttributesToGet_k__BackingField;

  /// @brief Field <ConsistentRead>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__ConsistentRead_k__BackingField, put = __cordl_internal_set__ConsistentRead_k__BackingField)) bool _ConsistentRead_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__AttributesToGet_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__AttributesToGet_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__ConsistentRead_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ConsistentRead_k__BackingField();

  constexpr void __cordl_internal_set__AttributesToGet_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__ConsistentRead_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x141d8a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AttributesToGet, addr 0x141f3f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_AttributesToGet();

  /// @brief Method get_ConsistentRead, addr 0x141f408, size 0x8, virtual false, abstract: false, final false
  inline bool get_ConsistentRead();

  /// @brief Method set_AttributesToGet, addr 0x141f400, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributesToGet(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_ConsistentRead, addr 0x141f410, size 0xc, virtual false, abstract: false, final false
  inline void set_ConsistentRead(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetItemOperationConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetItemOperationConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetItemOperationConfig(GetItemOperationConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetItemOperationConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetItemOperationConfig(GetItemOperationConfig const&) = delete;

  /// @brief Field <AttributesToGet>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____AttributesToGet_k__BackingField;

  /// @brief Field <ConsistentRead>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____ConsistentRead_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig, ____AttributesToGet_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig, ____ConsistentRead_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig*, "Amazon.DynamoDBv2.DocumentModel", "GetItemOperationConfig");
