#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PropertyConfig)
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::Util {
class PropertyConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::PropertyConfig);
// Type: Amazon.Util::PropertyConfig
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::PropertyConfig*
class CORDL_TYPE PropertyConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Attribute, put = set_Attribute))::StringW Attribute;

  __declspec(property(get = get_Converter, put = set_Converter))::System::Type* Converter;

  __declspec(property(get = get_Ignore, put = set_Ignore)) bool Ignore;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_StoreAsEpoch, put = set_StoreAsEpoch)) bool StoreAsEpoch;

  __declspec(property(get = get_Version, put = set_Version)) bool Version;

  /// @brief Field <Attribute>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Attribute_k__BackingField, put = __cordl_internal_set__Attribute_k__BackingField))::StringW _Attribute_k__BackingField;

  /// @brief Field <Converter>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Converter_k__BackingField, put = __cordl_internal_set__Converter_k__BackingField))::System::Type* _Converter_k__BackingField;

  /// @brief Field <Ignore>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__Ignore_k__BackingField, put = __cordl_internal_set__Ignore_k__BackingField)) bool _Ignore_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field <StoreAsEpoch>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__StoreAsEpoch_k__BackingField, put = __cordl_internal_set__StoreAsEpoch_k__BackingField)) bool _StoreAsEpoch_k__BackingField;

  /// @brief Field <Version>k__BackingField, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__Version_k__BackingField, put = __cordl_internal_set__Version_k__BackingField)) bool _Version_k__BackingField;

  static inline ::Amazon::Util::PropertyConfig* New_ctor(::StringW propertyName);

  constexpr ::StringW const& __cordl_internal_get__Attribute_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Attribute_k__BackingField();

  constexpr ::System::Type*& __cordl_internal_get__Converter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__Converter_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__Ignore_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Ignore_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr bool const& __cordl_internal_get__StoreAsEpoch_k__BackingField() const;

  constexpr bool& __cordl_internal_get__StoreAsEpoch_k__BackingField();

  constexpr bool const& __cordl_internal_get__Version_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Version_k__BackingField();

  constexpr void __cordl_internal_set__Attribute_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Converter_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__Ignore_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__StoreAsEpoch_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Version_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x12080f0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW propertyName);

  /// @brief Method get_Attribute, addr 0x1208094, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Attribute();

  /// @brief Method get_Converter, addr 0x12080cc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Converter();

  /// @brief Method get_Ignore, addr 0x12080a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_Ignore();

  /// @brief Method get_Name, addr 0x1208084, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_StoreAsEpoch, addr 0x12080dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_StoreAsEpoch();

  /// @brief Method get_Version, addr 0x12080b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_Version();

  /// @brief Method set_Attribute, addr 0x120809c, size 0x8, virtual false, abstract: false, final false
  inline void set_Attribute(::StringW value);

  /// @brief Method set_Converter, addr 0x12080d4, size 0x8, virtual false, abstract: false, final false
  inline void set_Converter(::System::Type* value);

  /// @brief Method set_Ignore, addr 0x12080ac, size 0xc, virtual false, abstract: false, final false
  inline void set_Ignore(bool value);

  /// @brief Method set_Name, addr 0x120808c, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_StoreAsEpoch, addr 0x12080e4, size 0xc, virtual false, abstract: false, final false
  inline void set_StoreAsEpoch(bool value);

  /// @brief Method set_Version, addr 0x12080c0, size 0xc, virtual false, abstract: false, final false
  inline void set_Version(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyConfig(PropertyConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyConfig(PropertyConfig const&) = delete;

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <Attribute>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Attribute_k__BackingField;

  /// @brief Field <Ignore>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____Ignore_k__BackingField;

  /// @brief Field <Version>k__BackingField, offset: 0x21, size: 0x1, def value: None
  bool ____Version_k__BackingField;

  /// @brief Field <Converter>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ____Converter_k__BackingField;

  /// @brief Field <StoreAsEpoch>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____StoreAsEpoch_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::PropertyConfig, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::PropertyConfig, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::PropertyConfig, ____Attribute_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::PropertyConfig, ____Ignore_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::PropertyConfig, ____Version_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::PropertyConfig, ____Converter_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::PropertyConfig, ____StoreAsEpoch_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::PropertyConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::PropertyConfig*, "Amazon.Util", "PropertyConfig");
