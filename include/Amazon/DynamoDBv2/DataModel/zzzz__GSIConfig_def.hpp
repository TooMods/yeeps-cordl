#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GSIConfig)
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class GSIConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::GSIConfig);
// Type: Amazon.DynamoDBv2.DataModel::GSIConfig
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::GSIConfig*
class CORDL_TYPE GSIConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HashKeyPropertyName, put = set_HashKeyPropertyName))::StringW HashKeyPropertyName;

  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_RangeKeyPropertyName, put = set_RangeKeyPropertyName))::StringW RangeKeyPropertyName;

  /// @brief Field <HashKeyPropertyName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__HashKeyPropertyName_k__BackingField, put = __cordl_internal_set__HashKeyPropertyName_k__BackingField))::StringW _HashKeyPropertyName_k__BackingField;

  /// @brief Field <IndexName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__IndexName_k__BackingField, put = __cordl_internal_set__IndexName_k__BackingField))::StringW _IndexName_k__BackingField;

  /// @brief Field <RangeKeyPropertyName>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__RangeKeyPropertyName_k__BackingField,
                      put = __cordl_internal_set__RangeKeyPropertyName_k__BackingField))::StringW _RangeKeyPropertyName_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DataModel::GSIConfig* New_ctor(::StringW indexName);

  constexpr ::StringW const& __cordl_internal_get__HashKeyPropertyName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__HashKeyPropertyName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__IndexName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__IndexName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__RangeKeyPropertyName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RangeKeyPropertyName_k__BackingField();

  constexpr void __cordl_internal_set__HashKeyPropertyName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__IndexName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__RangeKeyPropertyName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x142cb84, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW indexName);

  /// @brief Method get_HashKeyPropertyName, addr 0x142cbbc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_HashKeyPropertyName();

  /// @brief Method get_IndexName, addr 0x142cbac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_RangeKeyPropertyName, addr 0x142cbcc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RangeKeyPropertyName();

  /// @brief Method set_HashKeyPropertyName, addr 0x142cbc4, size 0x8, virtual false, abstract: false, final false
  inline void set_HashKeyPropertyName(::StringW value);

  /// @brief Method set_IndexName, addr 0x142cbb4, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_RangeKeyPropertyName, addr 0x142cbd4, size 0x8, virtual false, abstract: false, final false
  inline void set_RangeKeyPropertyName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GSIConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GSIConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GSIConfig(GSIConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GSIConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GSIConfig(GSIConfig const&) = delete;

  /// @brief Field <IndexName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____IndexName_k__BackingField;

  /// @brief Field <HashKeyPropertyName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____HashKeyPropertyName_k__BackingField;

  /// @brief Field <RangeKeyPropertyName>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____RangeKeyPropertyName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::GSIConfig, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::GSIConfig, ____IndexName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::GSIConfig, ____HashKeyPropertyName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::GSIConfig, ____RangeKeyPropertyName_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::GSIConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::GSIConfig*, "Amazon.DynamoDBv2.DataModel", "GSIConfig");
