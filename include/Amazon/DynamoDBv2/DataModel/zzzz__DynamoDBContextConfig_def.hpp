#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DynamoDBContextConfig)
namespace Amazon::DynamoDBv2 {
class DynamoDBEntryConversion;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBContextConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig);
// Type: Amazon.DynamoDBv2.DataModel::DynamoDBContextConfig
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::DynamoDBContextConfig*
class CORDL_TYPE DynamoDBContextConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ConsistentRead, put = set_ConsistentRead))::System::Nullable_1<bool> ConsistentRead;

  __declspec(property(get = get_Conversion, put = set_Conversion))::Amazon::DynamoDBv2::DynamoDBEntryConversion* Conversion;

  __declspec(property(get = get_IgnoreNullValues, put = set_IgnoreNullValues))::System::Nullable_1<bool> IgnoreNullValues;

  __declspec(property(get = get_IsEmptyStringValueEnabled, put = set_IsEmptyStringValueEnabled))::System::Nullable_1<bool> IsEmptyStringValueEnabled;

  __declspec(property(get = get_SkipVersionCheck, put = set_SkipVersionCheck))::System::Nullable_1<bool> SkipVersionCheck;

  __declspec(property(get = get_TableNamePrefix, put = set_TableNamePrefix))::StringW TableNamePrefix;

  /// @brief Field <ConsistentRead>k__BackingField, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get__ConsistentRead_k__BackingField,
                      put = __cordl_internal_set__ConsistentRead_k__BackingField))::System::Nullable_1<bool> _ConsistentRead_k__BackingField;

  /// @brief Field <Conversion>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Conversion_k__BackingField,
                      put = __cordl_internal_set__Conversion_k__BackingField))::Amazon::DynamoDBv2::DynamoDBEntryConversion* _Conversion_k__BackingField;

  /// @brief Field <IgnoreNullValues>k__BackingField, offset 0x20, size 0x2
  __declspec(property(get = __cordl_internal_get__IgnoreNullValues_k__BackingField,
                      put = __cordl_internal_set__IgnoreNullValues_k__BackingField))::System::Nullable_1<bool> _IgnoreNullValues_k__BackingField;

  /// @brief Field <IsEmptyStringValueEnabled>k__BackingField, offset 0x22, size 0x2
  __declspec(property(get = __cordl_internal_get__IsEmptyStringValueEnabled_k__BackingField,
                      put = __cordl_internal_set__IsEmptyStringValueEnabled_k__BackingField))::System::Nullable_1<bool> _IsEmptyStringValueEnabled_k__BackingField;

  /// @brief Field <SkipVersionCheck>k__BackingField, offset 0x12, size 0x2
  __declspec(property(get = __cordl_internal_get__SkipVersionCheck_k__BackingField,
                      put = __cordl_internal_set__SkipVersionCheck_k__BackingField))::System::Nullable_1<bool> _SkipVersionCheck_k__BackingField;

  /// @brief Field <TableNamePrefix>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__TableNamePrefix_k__BackingField, put = __cordl_internal_set__TableNamePrefix_k__BackingField))::StringW _TableNamePrefix_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* New_ctor();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__ConsistentRead_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__ConsistentRead_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& __cordl_internal_get__Conversion_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const& __cordl_internal_get__Conversion_k__BackingField() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__IgnoreNullValues_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__IgnoreNullValues_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__IsEmptyStringValueEnabled_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__IsEmptyStringValueEnabled_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__SkipVersionCheck_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__SkipVersionCheck_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__TableNamePrefix_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__TableNamePrefix_k__BackingField();

  constexpr void __cordl_internal_set__ConsistentRead_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__Conversion_k__BackingField(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  constexpr void __cordl_internal_set__IgnoreNullValues_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__IsEmptyStringValueEnabled_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__SkipVersionCheck_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__TableNamePrefix_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x14227b4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConsistentRead, addr 0x142288c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_ConsistentRead();

  /// @brief Method get_Conversion, addr 0x14228dc, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* get_Conversion();

  /// @brief Method get_IgnoreNullValues, addr 0x14228bc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_IgnoreNullValues();

  /// @brief Method get_IsEmptyStringValueEnabled, addr 0x14228cc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_IsEmptyStringValueEnabled();

  /// @brief Method get_SkipVersionCheck, addr 0x142289c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_SkipVersionCheck();

  /// @brief Method get_TableNamePrefix, addr 0x14228ac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableNamePrefix();

  /// @brief Method set_ConsistentRead, addr 0x1422894, size 0x8, virtual false, abstract: false, final false
  inline void set_ConsistentRead(::System::Nullable_1<bool> value);

  /// @brief Method set_Conversion, addr 0x14228e4, size 0x8, virtual false, abstract: false, final false
  inline void set_Conversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  /// @brief Method set_IgnoreNullValues, addr 0x14228c4, size 0x8, virtual false, abstract: false, final false
  inline void set_IgnoreNullValues(::System::Nullable_1<bool> value);

  /// @brief Method set_IsEmptyStringValueEnabled, addr 0x14228d4, size 0x8, virtual false, abstract: false, final false
  inline void set_IsEmptyStringValueEnabled(::System::Nullable_1<bool> value);

  /// @brief Method set_SkipVersionCheck, addr 0x14228a4, size 0x8, virtual false, abstract: false, final false
  inline void set_SkipVersionCheck(::System::Nullable_1<bool> value);

  /// @brief Method set_TableNamePrefix, addr 0x14228b4, size 0x8, virtual false, abstract: false, final false
  inline void set_TableNamePrefix(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBContextConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBContextConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBContextConfig(DynamoDBContextConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBContextConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBContextConfig(DynamoDBContextConfig const&) = delete;

  /// @brief Field <ConsistentRead>k__BackingField, offset: 0x10, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____ConsistentRead_k__BackingField;

  /// @brief Field <SkipVersionCheck>k__BackingField, offset: 0x12, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____SkipVersionCheck_k__BackingField;

  /// @brief Field <TableNamePrefix>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____TableNamePrefix_k__BackingField;

  /// @brief Field <IgnoreNullValues>k__BackingField, offset: 0x20, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____IgnoreNullValues_k__BackingField;

  /// @brief Field <IsEmptyStringValueEnabled>k__BackingField, offset: 0x22, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____IsEmptyStringValueEnabled_k__BackingField;

  /// @brief Field <Conversion>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DynamoDBEntryConversion* ____Conversion_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig, ____ConsistentRead_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig, ____SkipVersionCheck_k__BackingField) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig, ____TableNamePrefix_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig, ____IgnoreNullValues_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig, ____IsEmptyStringValueEnabled_k__BackingField) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig, ____Conversion_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*, "Amazon.DynamoDBv2.DataModel", "DynamoDBContextConfig");
