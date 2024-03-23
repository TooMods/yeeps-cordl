#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SimplePropertyStorage)
namespace Amazon::DynamoDBv2::DataModel {
class IPropertyConverter;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class SimplePropertyStorage;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage);
// Type: Amazon.DynamoDBv2.DataModel::SimplePropertyStorage
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::SimplePropertyStorage*
class CORDL_TYPE SimplePropertyStorage : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributeName, put = set_AttributeName))::StringW AttributeName;

  __declspec(property(get = get_Converter, put = set_Converter))::Amazon::DynamoDBv2::DataModel::IPropertyConverter* Converter;

  __declspec(property(get = get_ConverterType, put = set_ConverterType))::System::Type* ConverterType;

  __declspec(property(get = get_Member, put = set_Member))::System::Reflection::MemberInfo* Member;

  __declspec(property(get = get_MemberType, put = set_MemberType))::System::Type* MemberType;

  __declspec(property(get = get_PropertyName, put = set_PropertyName))::StringW PropertyName;

  /// @brief Field <AttributeName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__AttributeName_k__BackingField, put = __cordl_internal_set__AttributeName_k__BackingField))::StringW _AttributeName_k__BackingField;

  /// @brief Field <ConverterType>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ConverterType_k__BackingField, put = __cordl_internal_set__ConverterType_k__BackingField))::System::Type* _ConverterType_k__BackingField;

  /// @brief Field <Converter>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Converter_k__BackingField,
                      put = __cordl_internal_set__Converter_k__BackingField))::Amazon::DynamoDBv2::DataModel::IPropertyConverter* _Converter_k__BackingField;

  /// @brief Field <MemberType>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__MemberType_k__BackingField, put = __cordl_internal_set__MemberType_k__BackingField))::System::Type* _MemberType_k__BackingField;

  /// @brief Field <Member>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Member_k__BackingField, put = __cordl_internal_set__Member_k__BackingField))::System::Reflection::MemberInfo* _Member_k__BackingField;

  /// @brief Field <PropertyName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__PropertyName_k__BackingField, put = __cordl_internal_set__PropertyName_k__BackingField))::StringW _PropertyName_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage* New_ctor(::System::Reflection::MemberInfo* member);

  static inline ::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage* New_ctor(::System::Type* memberType);

  /// @brief Method ToString, addr 0x142b8b0, size 0xa4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__AttributeName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AttributeName_k__BackingField();

  constexpr ::System::Type*& __cordl_internal_get__ConverterType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__ConverterType_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*& __cordl_internal_get__Converter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::IPropertyConverter*> const& __cordl_internal_get__Converter_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__MemberType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__MemberType_k__BackingField() const;

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get__Member_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MemberInfo*> const& __cordl_internal_get__Member_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__PropertyName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__PropertyName_k__BackingField();

  constexpr void __cordl_internal_set__AttributeName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ConverterType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__Converter_k__BackingField(::Amazon::DynamoDBv2::DataModel::IPropertyConverter* value);

  constexpr void __cordl_internal_set__MemberType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__Member_k__BackingField(::System::Reflection::MemberInfo* value);

  constexpr void __cordl_internal_set__PropertyName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x142b688, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MemberInfo* member);

  /// @brief Method .ctor, addr 0x1427e84, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* memberType);

  /// @brief Method get_AttributeName, addr 0x142b638, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AttributeName();

  /// @brief Method get_Converter, addr 0x142b678, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::IPropertyConverter* get_Converter();

  /// @brief Method get_ConverterType, addr 0x142b668, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ConverterType();

  /// @brief Method get_Member, addr 0x142b648, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MemberInfo* get_Member();

  /// @brief Method get_MemberType, addr 0x142b658, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_MemberType();

  /// @brief Method get_PropertyName, addr 0x142b628, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PropertyName();

  /// @brief Method set_AttributeName, addr 0x142b640, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeName(::StringW value);

  /// @brief Method set_Converter, addr 0x142b680, size 0x8, virtual false, abstract: false, final false
  inline void set_Converter(::Amazon::DynamoDBv2::DataModel::IPropertyConverter* value);

  /// @brief Method set_ConverterType, addr 0x142b670, size 0x8, virtual false, abstract: false, final false
  inline void set_ConverterType(::System::Type* value);

  /// @brief Method set_Member, addr 0x142b650, size 0x8, virtual false, abstract: false, final false
  inline void set_Member(::System::Reflection::MemberInfo* value);

  /// @brief Method set_MemberType, addr 0x142b660, size 0x8, virtual false, abstract: false, final false
  inline void set_MemberType(::System::Type* value);

  /// @brief Method set_PropertyName, addr 0x142b630, size 0x8, virtual false, abstract: false, final false
  inline void set_PropertyName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimplePropertyStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimplePropertyStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimplePropertyStorage(SimplePropertyStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimplePropertyStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimplePropertyStorage(SimplePropertyStorage const&) = delete;

  /// @brief Field <PropertyName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____PropertyName_k__BackingField;

  /// @brief Field <AttributeName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____AttributeName_k__BackingField;

  /// @brief Field <Member>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ____Member_k__BackingField;

  /// @brief Field <MemberType>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ____MemberType_k__BackingField;

  /// @brief Field <ConverterType>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Type* ____ConverterType_k__BackingField;

  /// @brief Field <Converter>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::IPropertyConverter* ____Converter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage, ____PropertyName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage, ____AttributeName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage, ____Member_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage, ____MemberType_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage, ____ConverterType_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage, ____Converter_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage*, "Amazon.DynamoDBv2.DataModel", "SimplePropertyStorage");
