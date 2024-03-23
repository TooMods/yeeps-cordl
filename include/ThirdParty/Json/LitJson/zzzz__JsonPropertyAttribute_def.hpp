#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(JsonPropertyAttribute)
// Forward declare root types
namespace ThirdParty::Json::LitJson {
class JsonPropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::Json::LitJson::JsonPropertyAttribute);
// Type: ThirdParty.Json.LitJson::JsonPropertyAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: false
// CS Name: ::ThirdParty.Json.LitJson::JsonPropertyAttribute*
class CORDL_TYPE JsonPropertyAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Required, put = set_Required)) bool Required;

  /// @brief Field <Required>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__Required_k__BackingField, put = __cordl_internal_set__Required_k__BackingField)) bool _Required_k__BackingField;

  static inline ::ThirdParty::Json::LitJson::JsonPropertyAttribute* New_ctor();

  constexpr bool const& __cordl_internal_get__Required_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Required_k__BackingField();

  constexpr void __cordl_internal_set__Required_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x14afe54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Required, addr 0x14afe40, size 0x8, virtual false, abstract: false, final false
  inline bool get_Required();

  /// @brief Method set_Required, addr 0x14afe48, size 0xc, virtual false, abstract: false, final false
  inline void set_Required(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonPropertyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonPropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonPropertyAttribute(JsonPropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonPropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonPropertyAttribute(JsonPropertyAttribute const&) = delete;

  /// @brief Field <Required>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Required_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::JsonPropertyAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonPropertyAttribute, ____Required_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace ThirdParty::Json::LitJson
NEED_NO_BOX(::ThirdParty::Json::LitJson::JsonPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::JsonPropertyAttribute*, "ThirdParty.Json.LitJson", "JsonPropertyAttribute");
