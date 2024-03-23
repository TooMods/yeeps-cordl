#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StorageConfig)
namespace Amazon::DynamoDBv2::DataModel {
class PropertyStorage;
}
namespace Amazon::DynamoDBv2::DataModel {
class __StorageConfig____c;
}
namespace Amazon::DynamoDBv2::DataModel {
class __StorageConfig____c__DisplayClass21_0;
}
namespace Amazon::DynamoDBv2::DataModel {
class __StorageConfig____c__DisplayClass22_0;
}
namespace Amazon::Util::Internal {
class ITypeInfo;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class StorageConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
class __StorageConfig____c;
}
namespace Amazon::DynamoDBv2::DataModel {
class __StorageConfig____c__DisplayClass21_0;
}
namespace Amazon::DynamoDBv2::DataModel {
class __StorageConfig____c__DisplayClass22_0;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::StorageConfig);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__StorageConfig____c);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__StorageConfig____c__DisplayClass21_0);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__StorageConfig____c__DisplayClass22_0);
// Type: ::<>c__DisplayClass21_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::StorageConfig::<>c__DisplayClass21_0*
class CORDL_TYPE __StorageConfig____c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field propertyName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_propertyName, put = __cordl_internal_set_propertyName))::StringW propertyName;

  static inline ::Amazon::DynamoDBv2::DataModel::__StorageConfig____c__DisplayClass21_0* New_ctor();

  /// @brief Method <FindPropertyByPropertyName>b__0, addr 0x142d9a8, size 0x28, virtual false, abstract: false, final false
  inline bool _FindPropertyByPropertyName_b__0(::Amazon::DynamoDBv2::DataModel::PropertyStorage* p);

  constexpr ::StringW const& __cordl_internal_get_propertyName() const;

  constexpr ::StringW& __cordl_internal_get_propertyName();

  constexpr void __cordl_internal_set_propertyName(::StringW value);

  /// @brief Method .ctor, addr 0x142cdd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StorageConfig____c__DisplayClass21_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__StorageConfig____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StorageConfig____c__DisplayClass21_0(__StorageConfig____c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StorageConfig____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StorageConfig____c__DisplayClass21_0(__StorageConfig____c__DisplayClass21_0 const&) = delete;

  /// @brief Field propertyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___propertyName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::__StorageConfig____c__DisplayClass21_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__StorageConfig____c__DisplayClass21_0, ___propertyName) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
// Type: ::<>c__DisplayClass22_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::StorageConfig::<>c__DisplayClass22_0*
class CORDL_TYPE __StorageConfig____c__DisplayClass22_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field attributeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeName, put = __cordl_internal_set_attributeName))::StringW attributeName;

  static inline ::Amazon::DynamoDBv2::DataModel::__StorageConfig____c__DisplayClass22_0* New_ctor();

  /// @brief Method <FindSinglePropertyByAttributeName>b__0, addr 0x142d9d0, size 0x28, virtual false, abstract: false, final false
  inline bool _FindSinglePropertyByAttributeName_b__0(::Amazon::DynamoDBv2::DataModel::PropertyStorage* p);

  constexpr ::StringW const& __cordl_internal_get_attributeName() const;

  constexpr ::StringW& __cordl_internal_get_attributeName();

  constexpr void __cordl_internal_set_attributeName(::StringW value);

  /// @brief Method .ctor, addr 0x142d09c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StorageConfig____c__DisplayClass22_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__StorageConfig____c__DisplayClass22_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StorageConfig____c__DisplayClass22_0(__StorageConfig____c__DisplayClass22_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StorageConfig____c__DisplayClass22_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StorageConfig____c__DisplayClass22_0(__StorageConfig____c__DisplayClass22_0 const&) = delete;

  /// @brief Field attributeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___attributeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::__StorageConfig____c__DisplayClass22_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__StorageConfig____c__DisplayClass22_0, ___attributeName) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::StorageConfig::<>c*
class CORDL_TYPE __StorageConfig____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::DynamoDBv2::DataModel::__StorageConfig____c* __9;

  /// @brief Field <>9__23_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__23_0, put = setStaticF___9__23_0))::System::Func_2<::Amazon::DynamoDBv2::DataModel::PropertyStorage*, bool>* __9__23_0;

  static inline ::Amazon::DynamoDBv2::DataModel::__StorageConfig____c* New_ctor();

  /// @brief Method <FindSingleProperty>b__23_0, addr 0x142da64, size 0x20, virtual false, abstract: false, final false
  inline bool _FindSingleProperty_b__23_0(::Amazon::DynamoDBv2::DataModel::PropertyStorage* ps);

  /// @brief Method .ctor, addr 0x142da5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::DataModel::__StorageConfig____c* getStaticF___9();

  static inline ::System::Func_2<::Amazon::DynamoDBv2::DataModel::PropertyStorage*, bool>* getStaticF___9__23_0();

  static inline void setStaticF___9(::Amazon::DynamoDBv2::DataModel::__StorageConfig____c* value);

  static inline void setStaticF___9__23_0(::System::Func_2<::Amazon::DynamoDBv2::DataModel::PropertyStorage*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StorageConfig____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__StorageConfig____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StorageConfig____c(__StorageConfig____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StorageConfig____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StorageConfig____c(__StorageConfig____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::__StorageConfig____c, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
// Type: Amazon.DynamoDBv2.DataModel::StorageConfig
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::StorageConfig*
class CORDL_TYPE StorageConfig : public ::System::Object {
public:
  // Declarations
  using __c = ::Amazon::DynamoDBv2::DataModel::__StorageConfig____c;

  using __c__DisplayClass21_0 = ::Amazon::DynamoDBv2::DataModel::__StorageConfig____c__DisplayClass21_0;

  using __c__DisplayClass22_0 = ::Amazon::DynamoDBv2::DataModel::__StorageConfig____c__DisplayClass22_0;

  __declspec(property(get = get_AllPropertyStorage))::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>* AllPropertyStorage;

  __declspec(property(get = get_Properties, put = set_Properties))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>* Properties;

  __declspec(
      property(get = get_PropertyToPropertyStorageMapping,
               put = set_PropertyToPropertyStorageMapping))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::PropertyStorage*>* PropertyToPropertyStorageMapping;

  __declspec(property(get = get_TargetTypeInfo, put = set_TargetTypeInfo))::Amazon::Util::Internal::ITypeInfo* TargetTypeInfo;

  __declspec(property(get = get_TargetTypeMembers, put = set_TargetTypeMembers))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Reflection::MemberInfo*>* TargetTypeMembers;

  /// @brief Field <Properties>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Properties_k__BackingField,
                      put = __cordl_internal_set__Properties_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>* _Properties_k__BackingField;

  /// @brief Field <PropertyToPropertyStorageMapping>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__PropertyToPropertyStorageMapping_k__BackingField, put = __cordl_internal_set__PropertyToPropertyStorageMapping_k__BackingField))::System::
      Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::PropertyStorage*>* _PropertyToPropertyStorageMapping_k__BackingField;

  /// @brief Field <TargetTypeInfo>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__TargetTypeInfo_k__BackingField,
                      put = __cordl_internal_set__TargetTypeInfo_k__BackingField))::Amazon::Util::Internal::ITypeInfo* _TargetTypeInfo_k__BackingField;

  /// @brief Field <TargetTypeMembers>k__BackingField, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__TargetTypeMembers_k__BackingField,
      put = __cordl_internal_set__TargetTypeMembers_k__BackingField))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Reflection::MemberInfo*>* _TargetTypeMembers_k__BackingField;

  /// @brief Method AddPropertyStorage, addr 0x142cc1c, size 0x68, virtual false, abstract: false, final false
  inline void AddPropertyStorage(::StringW propertyName, ::Amazon::DynamoDBv2::DataModel::PropertyStorage* propertyStorage);

  /// @brief Method FindPropertyByPropertyName, addr 0x142ccec, size 0xec, virtual false, abstract: false, final false
  inline bool FindPropertyByPropertyName(::StringW propertyName, ByRef<::Amazon::DynamoDBv2::DataModel::PropertyStorage*> propertyStorage);

  /// @brief Method FindSingleProperty, addr 0x142cde0, size 0x1d0, virtual false, abstract: false, final false
  inline bool FindSingleProperty(::System::Func_2<::Amazon::DynamoDBv2::DataModel::PropertyStorage*, bool>* match, ::StringW errorMessage,
                                 ByRef<::Amazon::DynamoDBv2::DataModel::PropertyStorage*> propertyStorage);

  /// @brief Method FindSinglePropertyByAttributeName, addr 0x142cfb0, size 0xec, virtual false, abstract: false, final false
  inline bool FindSinglePropertyByAttributeName(::StringW attributeName, ByRef<::Amazon::DynamoDBv2::DataModel::PropertyStorage*> propertyStorage);

  /// @brief Method GetMembersDictionary, addr 0x142d34c, size 0x350, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Reflection::MemberInfo*>* GetMembersDictionary(::Amazon::Util::Internal::ITypeInfo* typeInfo);

  /// @brief Method GetPropertyStorage, addr 0x1424e18, size 0xa0, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::PropertyStorage* GetPropertyStorage(::StringW propertyName);

  /// @brief Method IsValidMemberInfo, addr 0x142d0a4, size 0xe0, virtual false, abstract: false, final false
  static inline bool IsValidMemberInfo(::System::Reflection::MemberInfo* member);

  static inline ::Amazon::DynamoDBv2::DataModel::StorageConfig* New_ctor(::Amazon::Util::Internal::ITypeInfo* targetTypeInfo);

  /// @brief Method TryGetPropertyStorage, addr 0x142cc84, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetPropertyStorage(::StringW propertyName, ByRef<::Amazon::DynamoDBv2::DataModel::PropertyStorage*> storage);

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>*& __cordl_internal_get__Properties_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>*> const&
  __cordl_internal_get__Properties_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::PropertyStorage*>*& __cordl_internal_get__PropertyToPropertyStorageMapping_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::PropertyStorage*>*> const&
  __cordl_internal_get__PropertyToPropertyStorageMapping_k__BackingField() const;

  constexpr ::Amazon::Util::Internal::ITypeInfo*& __cordl_internal_get__TargetTypeInfo_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::ITypeInfo*> const& __cordl_internal_get__TargetTypeInfo_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Reflection::MemberInfo*>*& __cordl_internal_get__TargetTypeMembers_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Reflection::MemberInfo*>*> const&
  __cordl_internal_get__TargetTypeMembers_k__BackingField() const;

  constexpr void __cordl_internal_set__Properties_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>* value);

  constexpr void
  __cordl_internal_set__PropertyToPropertyStorageMapping_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::PropertyStorage*>* value);

  constexpr void __cordl_internal_set__TargetTypeInfo_k__BackingField(::Amazon::Util::Internal::ITypeInfo* value);

  constexpr void __cordl_internal_set__TargetTypeMembers_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Reflection::MemberInfo*>* value);

  /// @brief Method .ctor, addr 0x142d69c, size 0x30c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Util::Internal::ITypeInfo* targetTypeInfo);

  /// @brief Method get_AllPropertyStorage, addr 0x142589c, size 0x50, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>* get_AllPropertyStorage();

  /// @brief Method get_Properties, addr 0x142cbdc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>* get_Properties();

  /// @brief Method get_PropertyToPropertyStorageMapping, addr 0x142cc0c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::PropertyStorage*>* get_PropertyToPropertyStorageMapping();

  /// @brief Method get_TargetTypeInfo, addr 0x142cbec, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Util::Internal::ITypeInfo* get_TargetTypeInfo();

  /// @brief Method get_TargetTypeMembers, addr 0x142cbfc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Reflection::MemberInfo*>* get_TargetTypeMembers();

  /// @brief Method set_Properties, addr 0x142cbe4, size 0x8, virtual false, abstract: false, final false
  inline void set_Properties(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>* value);

  /// @brief Method set_PropertyToPropertyStorageMapping, addr 0x142cc14, size 0x8, virtual false, abstract: false, final false
  inline void set_PropertyToPropertyStorageMapping(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::PropertyStorage*>* value);

  /// @brief Method set_TargetTypeInfo, addr 0x142cbf4, size 0x8, virtual false, abstract: false, final false
  inline void set_TargetTypeInfo(::Amazon::Util::Internal::ITypeInfo* value);

  /// @brief Method set_TargetTypeMembers, addr 0x142cc04, size 0x8, virtual false, abstract: false, final false
  inline void set_TargetTypeMembers(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Reflection::MemberInfo*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StorageConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StorageConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StorageConfig(StorageConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StorageConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StorageConfig(StorageConfig const&) = delete;

  /// @brief Field <Properties>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>* ____Properties_k__BackingField;

  /// @brief Field <TargetTypeInfo>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Util::Internal::ITypeInfo* ____TargetTypeInfo_k__BackingField;

  /// @brief Field <TargetTypeMembers>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Reflection::MemberInfo*>* ____TargetTypeMembers_k__BackingField;

  /// @brief Field <PropertyToPropertyStorageMapping>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::PropertyStorage*>* ____PropertyToPropertyStorageMapping_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::StorageConfig, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::StorageConfig, ____Properties_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::StorageConfig, ____TargetTypeInfo_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::StorageConfig, ____TargetTypeMembers_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::StorageConfig, ____PropertyToPropertyStorageMapping_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::StorageConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::StorageConfig*, "Amazon.DynamoDBv2.DataModel", "StorageConfig");
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::__StorageConfig____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::__StorageConfig____c*, "Amazon.DynamoDBv2.DataModel", "StorageConfig/<>c");
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::__StorageConfig____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::__StorageConfig____c__DisplayClass21_0*, "Amazon.DynamoDBv2.DataModel", "StorageConfig/<>c__DisplayClass21_0");
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::__StorageConfig____c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::__StorageConfig____c__DisplayClass22_0*, "Amazon.DynamoDBv2.DataModel", "StorageConfig/<>c__DisplayClass22_0");
