#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DynamoDBContextConfig)
namespace Amazon::Util {
class TableAlias;
}
namespace Amazon::Util {
class TypeMapping;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::Util {
class DynamoDBContextConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::DynamoDBContextConfig);
// Type: Amazon.Util::DynamoDBContextConfig
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::DynamoDBContextConfig*
class CORDL_TYPE DynamoDBContextConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_TableAliases, put = set_TableAliases))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* TableAliases;

  __declspec(property(get = get_TableNamePrefix, put = set_TableNamePrefix))::StringW TableNamePrefix;

  __declspec(property(get = get_TypeMappings, put = set_TypeMappings))::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>* TypeMappings;

  /// @brief Field <TableAliases>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__TableAliases_k__BackingField,
                      put = __cordl_internal_set__TableAliases_k__BackingField))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _TableAliases_k__BackingField;

  /// @brief Field <TableNamePrefix>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__TableNamePrefix_k__BackingField, put = __cordl_internal_set__TableNamePrefix_k__BackingField))::StringW _TableNamePrefix_k__BackingField;

  /// @brief Field <TypeMappings>k__BackingField, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get__TypeMappings_k__BackingField,
               put = __cordl_internal_set__TypeMappings_k__BackingField))::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>* _TypeMappings_k__BackingField;

  /// @brief Method AddAlias, addr 0x1207c74, size 0x5c, virtual false, abstract: false, final false
  inline void AddAlias(::Amazon::Util::TableAlias* tableAlias);

  /// @brief Method AddMapping, addr 0x1207cd0, size 0x60, virtual false, abstract: false, final false
  inline void AddMapping(::Amazon::Util::TypeMapping* typeMapping);

  static inline ::Amazon::Util::DynamoDBContextConfig* New_ctor();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__TableAliases_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__TableAliases_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__TableNamePrefix_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__TableNamePrefix_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>*& __cordl_internal_get__TypeMappings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>*> const&
  __cordl_internal_get__TypeMappings_k__BackingField() const;

  constexpr void __cordl_internal_set__TableAliases_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__TableNamePrefix_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__TypeMappings_k__BackingField(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>* value);

  /// @brief Method .ctor, addr 0x1207d30, size 0x178, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TableAliases, addr 0x1207c54, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_TableAliases();

  /// @brief Method get_TableNamePrefix, addr 0x1207c44, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableNamePrefix();

  /// @brief Method get_TypeMappings, addr 0x1207c64, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>* get_TypeMappings();

  /// @brief Method set_TableAliases, addr 0x1207c5c, size 0x8, virtual false, abstract: false, final false
  inline void set_TableAliases(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_TableNamePrefix, addr 0x1207c4c, size 0x8, virtual false, abstract: false, final false
  inline void set_TableNamePrefix(::StringW value);

  /// @brief Method set_TypeMappings, addr 0x1207c6c, size 0x8, virtual false, abstract: false, final false
  inline void set_TypeMappings(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>* value);

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

  /// @brief Field <TableNamePrefix>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____TableNamePrefix_k__BackingField;

  /// @brief Field <TableAliases>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____TableAliases_k__BackingField;

  /// @brief Field <TypeMappings>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>* ____TypeMappings_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::DynamoDBContextConfig, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::DynamoDBContextConfig, ____TableNamePrefix_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::DynamoDBContextConfig, ____TableAliases_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::DynamoDBContextConfig, ____TypeMappings_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::DynamoDBContextConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::DynamoDBContextConfig*, "Amazon.Util", "DynamoDBContextConfig");
