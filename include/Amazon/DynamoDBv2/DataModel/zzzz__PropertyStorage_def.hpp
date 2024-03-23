#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DataModel/zzzz__SimplePropertyStorage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PropertyStorage)
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBContext;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBGlobalSecondaryIndexHashKeyAttribute;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBGlobalSecondaryIndexRangeKeyAttribute;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBLocalSecondaryIndexRangeKeyAttribute;
}
namespace Amazon::DynamoDBv2::DataModel {
class __PropertyStorage__GSI;
}
namespace Amazon::DynamoDBv2::DataModel {
class __PropertyStorage__Index;
}
namespace Amazon::DynamoDBv2::DataModel {
class __PropertyStorage__LSI;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class PropertyStorage;
}
namespace Amazon::DynamoDBv2::DataModel {
class __PropertyStorage__GSI;
}
namespace Amazon::DynamoDBv2::DataModel {
class __PropertyStorage__Index;
}
namespace Amazon::DynamoDBv2::DataModel {
class __PropertyStorage__LSI;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::PropertyStorage);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__PropertyStorage__LSI);
// Type: ::Index
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::PropertyStorage::Index*
class CORDL_TYPE __PropertyStorage__Index : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributeName, put = set_AttributeName))::StringW AttributeName;

  __declspec(property(get = get_IndexNames, put = set_IndexNames))::System::Collections::Generic::List_1<::StringW>* IndexNames;

  /// @brief Field <AttributeName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__AttributeName_k__BackingField, put = __cordl_internal_set__AttributeName_k__BackingField))::StringW _AttributeName_k__BackingField;

  /// @brief Field <IndexNames>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__IndexNames_k__BackingField,
                      put = __cordl_internal_set__IndexNames_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _IndexNames_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index* New_ctor(::StringW attributeName, ::ArrayW<::StringW, ::Array<::StringW>*> indexNames);

  constexpr ::StringW const& __cordl_internal_get__AttributeName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AttributeName_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__IndexNames_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__IndexNames_k__BackingField() const;

  constexpr void __cordl_internal_set__AttributeName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__IndexNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x142ca9c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW attributeName, ::ArrayW<::StringW, ::Array<::StringW>*> indexNames);

  /// @brief Method get_AttributeName, addr 0x142ca8c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AttributeName();

  /// @brief Method get_IndexNames, addr 0x142ca7c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_IndexNames();

  /// @brief Method set_AttributeName, addr 0x142ca94, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeName(::StringW value);

  /// @brief Method set_IndexNames, addr 0x142ca84, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexNames(::System::Collections::Generic::List_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PropertyStorage__Index();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PropertyStorage__Index", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PropertyStorage__Index(__PropertyStorage__Index&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PropertyStorage__Index", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PropertyStorage__Index(__PropertyStorage__Index const&) = delete;

  /// @brief Field <IndexNames>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____IndexNames_k__BackingField;

  /// @brief Field <AttributeName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____AttributeName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index, ____IndexNames_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index, ____AttributeName_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
// Type: ::LSI
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::PropertyStorage::LSI*
class CORDL_TYPE __PropertyStorage__LSI : public ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__LSI* New_ctor(::StringW attributeName, ::ArrayW<::StringW, ::Array<::StringW>*> indexNames);

  /// @brief Method .ctor, addr 0x142bc88, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW attributeName, ::ArrayW<::StringW, ::Array<::StringW>*> indexNames);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PropertyStorage__LSI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PropertyStorage__LSI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PropertyStorage__LSI(__PropertyStorage__LSI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PropertyStorage__LSI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PropertyStorage__LSI(__PropertyStorage__LSI const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__LSI, 0x20>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
// Type: ::GSI
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::PropertyStorage::GSI*
class CORDL_TYPE __PropertyStorage__GSI : public ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index {
public:
  // Declarations
  __declspec(property(get = get_IsHashKey, put = set_IsHashKey)) bool IsHashKey;

  /// @brief Field <IsHashKey>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsHashKey_k__BackingField, put = __cordl_internal_set__IsHashKey_k__BackingField)) bool _IsHashKey_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI* New_ctor(bool isHashKey, ::StringW attributeName, ::ArrayW<::StringW, ::Array<::StringW>*> indexNames);

  constexpr bool const& __cordl_internal_get__IsHashKey_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsHashKey_k__BackingField();

  constexpr void __cordl_internal_set__IsHashKey_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x142baac, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool isHashKey, ::StringW attributeName, ::ArrayW<::StringW, ::Array<::StringW>*> indexNames);

  /// @brief Method get_IsHashKey, addr 0x142cb30, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsHashKey();

  /// @brief Method set_IsHashKey, addr 0x142cb38, size 0xc, virtual false, abstract: false, final false
  inline void set_IsHashKey(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PropertyStorage__GSI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PropertyStorage__GSI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PropertyStorage__GSI(__PropertyStorage__GSI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PropertyStorage__GSI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PropertyStorage__GSI(__PropertyStorage__GSI const&) = delete;

  /// @brief Field <IsHashKey>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsHashKey_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI, ____IsHashKey_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
// Type: Amazon.DynamoDBv2.DataModel::PropertyStorage
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::PropertyStorage*
class CORDL_TYPE PropertyStorage : public ::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage {
public:
  // Declarations
  using GSI = ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI;

  using Index = ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index;

  using LSI = ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__LSI;

  __declspec(property(get = get_IndexNames, put = set_IndexNames))::System::Collections::Generic::List_1<::StringW>* IndexNames;

  __declspec(property(get = get_Indexes, put = set_Indexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>* Indexes;

  __declspec(property(get = get_IsGSIHashKey, put = set_IsGSIHashKey)) bool IsGSIHashKey;

  __declspec(property(get = get_IsGSIKey)) bool IsGSIKey;

  __declspec(property(get = get_IsGSIRangeKey, put = set_IsGSIRangeKey)) bool IsGSIRangeKey;

  __declspec(property(get = get_IsHashKey, put = set_IsHashKey)) bool IsHashKey;

  __declspec(property(get = get_IsIgnored, put = set_IsIgnored)) bool IsIgnored;

  __declspec(property(get = get_IsKey)) bool IsKey;

  __declspec(property(get = get_IsLSIRangeKey, put = set_IsLSIRangeKey)) bool IsLSIRangeKey;

  __declspec(property(get = get_IsRangeKey, put = set_IsRangeKey)) bool IsRangeKey;

  __declspec(property(get = get_IsVersion, put = set_IsVersion)) bool IsVersion;

  __declspec(property(get = get_StoreAsEpoch, put = set_StoreAsEpoch)) bool StoreAsEpoch;

  /// @brief Field <IndexNames>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__IndexNames_k__BackingField,
                      put = __cordl_internal_set__IndexNames_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _IndexNames_k__BackingField;

  /// @brief Field <Indexes>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__Indexes_k__BackingField,
                      put = __cordl_internal_set__Indexes_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>* _Indexes_k__BackingField;

  /// @brief Field <IsGSIHashKey>k__BackingField, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__IsGSIHashKey_k__BackingField, put = __cordl_internal_set__IsGSIHashKey_k__BackingField)) bool _IsGSIHashKey_k__BackingField;

  /// @brief Field <IsGSIRangeKey>k__BackingField, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get__IsGSIRangeKey_k__BackingField, put = __cordl_internal_set__IsGSIRangeKey_k__BackingField)) bool _IsGSIRangeKey_k__BackingField;

  /// @brief Field <IsHashKey>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__IsHashKey_k__BackingField, put = __cordl_internal_set__IsHashKey_k__BackingField)) bool _IsHashKey_k__BackingField;

  /// @brief Field <IsIgnored>k__BackingField, offset 0x46, size 0x1
  __declspec(property(get = __cordl_internal_get__IsIgnored_k__BackingField, put = __cordl_internal_set__IsIgnored_k__BackingField)) bool _IsIgnored_k__BackingField;

  /// @brief Field <IsLSIRangeKey>k__BackingField, offset 0x43, size 0x1
  __declspec(property(get = __cordl_internal_get__IsLSIRangeKey_k__BackingField, put = __cordl_internal_set__IsLSIRangeKey_k__BackingField)) bool _IsLSIRangeKey_k__BackingField;

  /// @brief Field <IsRangeKey>k__BackingField, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__IsRangeKey_k__BackingField, put = __cordl_internal_set__IsRangeKey_k__BackingField)) bool _IsRangeKey_k__BackingField;

  /// @brief Field <IsVersion>k__BackingField, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get__IsVersion_k__BackingField, put = __cordl_internal_set__IsVersion_k__BackingField)) bool _IsVersion_k__BackingField;

  /// @brief Field <StoreAsEpoch>k__BackingField, offset 0x47, size 0x1
  __declspec(property(get = __cordl_internal_get__StoreAsEpoch_k__BackingField, put = __cordl_internal_set__StoreAsEpoch_k__BackingField)) bool _StoreAsEpoch_k__BackingField;

  /// @brief Method AddGsiIndex, addr 0x142bc8c, size 0x8c, virtual false, abstract: false, final false
  inline void AddGsiIndex(bool isHashKey, ::StringW attributeName, ::ArrayW<::StringW, ::Array<::StringW>*> indexNames);

  /// @brief Method AddIndex, addr 0x142ba24, size 0x88, virtual false, abstract: false, final false
  inline void AddIndex(::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute* gsiHashKey);

  /// @brief Method AddIndex, addr 0x142bb84, size 0x84, virtual false, abstract: false, final false
  inline void AddIndex(::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute* gsiRangeKey);

  /// @brief Method AddIndex, addr 0x142badc, size 0xa8, virtual false, abstract: false, final false
  inline void AddIndex(::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index* index);

  /// @brief Method AddIndex, addr 0x142bc08, size 0x80, virtual false, abstract: false, final false
  inline void AddIndex(::Amazon::DynamoDBv2::DataModel::DynamoDBLocalSecondaryIndexRangeKeyAttribute* lsiRangeKey);

  /// @brief Method AddLsiIndex, addr 0x142bd18, size 0x78, virtual false, abstract: false, final false
  inline void AddLsiIndex(::StringW attributeName, ::ArrayW<::StringW, ::Array<::StringW>*> indexNames);

  static inline ::Amazon::DynamoDBv2::DataModel::PropertyStorage* New_ctor(::System::Reflection::MemberInfo* member);

  /// @brief Method Validate, addr 0x142bda0, size 0x3b4, virtual false, abstract: false, final false
  inline void Validate(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__IndexNames_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__IndexNames_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>*& __cordl_internal_get__Indexes_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>*> const&
  __cordl_internal_get__Indexes_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__IsGSIHashKey_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsGSIHashKey_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsGSIRangeKey_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsGSIRangeKey_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsHashKey_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsHashKey_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsIgnored_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsIgnored_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsLSIRangeKey_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsLSIRangeKey_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsRangeKey_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsRangeKey_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsVersion_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsVersion_k__BackingField();

  constexpr bool const& __cordl_internal_get__StoreAsEpoch_k__BackingField() const;

  constexpr bool& __cordl_internal_get__StoreAsEpoch_k__BackingField();

  constexpr void __cordl_internal_set__IndexNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__Indexes_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>* value);

  constexpr void __cordl_internal_set__IsGSIHashKey_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsGSIRangeKey_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsHashKey_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsIgnored_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsLSIRangeKey_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsRangeKey_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsVersion_k__BackingField(bool value);

  constexpr void __cordl_internal_set__StoreAsEpoch_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x142c9ac, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MemberInfo* member);

  /// @brief Method get_IndexNames, addr 0x142ba14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_IndexNames();

  /// @brief Method get_Indexes, addr 0x142bd90, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>* get_Indexes();

  /// @brief Method get_IsGSIHashKey, addr 0x142b9c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsGSIHashKey();

  /// @brief Method get_IsGSIKey, addr 0x142a498, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsGSIKey();

  /// @brief Method get_IsGSIRangeKey, addr 0x142b9d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsGSIRangeKey();

  /// @brief Method get_IsHashKey, addr 0x142b954, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsHashKey();

  /// @brief Method get_IsIgnored, addr 0x142b9ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsIgnored();

  /// @brief Method get_IsKey, addr 0x142b97c, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsKey();

  /// @brief Method get_IsLSIRangeKey, addr 0x142b9b0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsLSIRangeKey();

  /// @brief Method get_IsRangeKey, addr 0x142b968, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsRangeKey();

  /// @brief Method get_IsVersion, addr 0x142b99c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsVersion();

  /// @brief Method get_StoreAsEpoch, addr 0x142ba00, size 0x8, virtual false, abstract: false, final false
  inline bool get_StoreAsEpoch();

  /// @brief Method set_IndexNames, addr 0x142ba1c, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexNames(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_Indexes, addr 0x142bd98, size 0x8, virtual false, abstract: false, final false
  inline void set_Indexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>* value);

  /// @brief Method set_IsGSIHashKey, addr 0x142b9cc, size 0xc, virtual false, abstract: false, final false
  inline void set_IsGSIHashKey(bool value);

  /// @brief Method set_IsGSIRangeKey, addr 0x142b9e0, size 0xc, virtual false, abstract: false, final false
  inline void set_IsGSIRangeKey(bool value);

  /// @brief Method set_IsHashKey, addr 0x142b95c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsHashKey(bool value);

  /// @brief Method set_IsIgnored, addr 0x142b9f4, size 0xc, virtual false, abstract: false, final false
  inline void set_IsIgnored(bool value);

  /// @brief Method set_IsLSIRangeKey, addr 0x142b9b8, size 0xc, virtual false, abstract: false, final false
  inline void set_IsLSIRangeKey(bool value);

  /// @brief Method set_IsRangeKey, addr 0x142b970, size 0xc, virtual false, abstract: false, final false
  inline void set_IsRangeKey(bool value);

  /// @brief Method set_IsVersion, addr 0x142b9a4, size 0xc, virtual false, abstract: false, final false
  inline void set_IsVersion(bool value);

  /// @brief Method set_StoreAsEpoch, addr 0x142ba08, size 0xc, virtual false, abstract: false, final false
  inline void set_StoreAsEpoch(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyStorage(PropertyStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyStorage(PropertyStorage const&) = delete;

  /// @brief Field <IsHashKey>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____IsHashKey_k__BackingField;

  /// @brief Field <IsRangeKey>k__BackingField, offset: 0x41, size: 0x1, def value: None
  bool ____IsRangeKey_k__BackingField;

  /// @brief Field <IsVersion>k__BackingField, offset: 0x42, size: 0x1, def value: None
  bool ____IsVersion_k__BackingField;

  /// @brief Field <IsLSIRangeKey>k__BackingField, offset: 0x43, size: 0x1, def value: None
  bool ____IsLSIRangeKey_k__BackingField;

  /// @brief Field <IsGSIHashKey>k__BackingField, offset: 0x44, size: 0x1, def value: None
  bool ____IsGSIHashKey_k__BackingField;

  /// @brief Field <IsGSIRangeKey>k__BackingField, offset: 0x45, size: 0x1, def value: None
  bool ____IsGSIRangeKey_k__BackingField;

  /// @brief Field <IsIgnored>k__BackingField, offset: 0x46, size: 0x1, def value: None
  bool ____IsIgnored_k__BackingField;

  /// @brief Field <StoreAsEpoch>k__BackingField, offset: 0x47, size: 0x1, def value: None
  bool ____StoreAsEpoch_k__BackingField;

  /// @brief Field <IndexNames>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____IndexNames_k__BackingField;

  /// @brief Field <Indexes>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>* ____Indexes_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::PropertyStorage, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::PropertyStorage, ____IsHashKey_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::PropertyStorage, ____IsRangeKey_k__BackingField) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::PropertyStorage, ____IsVersion_k__BackingField) == 0x42, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::PropertyStorage, ____IsLSIRangeKey_k__BackingField) == 0x43, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::PropertyStorage, ____IsGSIHashKey_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::PropertyStorage, ____IsGSIRangeKey_k__BackingField) == 0x45, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::PropertyStorage, ____IsIgnored_k__BackingField) == 0x46, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::PropertyStorage, ____StoreAsEpoch_k__BackingField) == 0x47, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::PropertyStorage, ____IndexNames_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::PropertyStorage, ____Indexes_k__BackingField) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::PropertyStorage);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::PropertyStorage*, "Amazon.DynamoDBv2.DataModel", "PropertyStorage");
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI*, "Amazon.DynamoDBv2.DataModel", "PropertyStorage/GSI");
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*, "Amazon.DynamoDBv2.DataModel", "PropertyStorage/Index");
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::__PropertyStorage__LSI);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::__PropertyStorage__LSI*, "Amazon.DynamoDBv2.DataModel", "PropertyStorage/LSI");
