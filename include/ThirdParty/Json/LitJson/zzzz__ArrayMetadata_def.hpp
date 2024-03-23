#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ArrayMetadata)
namespace System {
class Type;
}
// Forward declare root types
namespace ThirdParty::Json::LitJson {
struct ArrayMetadata;
}
// Write type traits
MARK_VAL_T(::ThirdParty::Json::LitJson::ArrayMetadata);
// Type: ThirdParty.Json.LitJson::ArrayMetadata
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 26, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: true
// CS Name: ::ThirdParty.Json.LitJson::ArrayMetadata
struct CORDL_TYPE ArrayMetadata {
public:
  // Declarations
  __declspec(property(get = get_ElementType, put = set_ElementType))::System::Type* ElementType;

  __declspec(property(get = get_IsArray, put = set_IsArray)) bool IsArray;

  __declspec(property(get = get_IsList, put = set_IsList)) bool IsList;

  /// @brief Method get_ElementType, addr 0x14a525c, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Type* get_ElementType();

  /// @brief Method get_IsArray, addr 0x14a530c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsArray();

  /// @brief Method get_IsList, addr 0x14a5320, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsList();

  /// @brief Method set_ElementType, addr 0x14a5304, size 0x8, virtual false, abstract: false, final false
  inline void set_ElementType(::System::Type* value);

  /// @brief Method set_IsArray, addr 0x14a5314, size 0xc, virtual false, abstract: false, final false
  inline void set_IsArray(bool value);

  /// @brief Method set_IsList, addr 0x14a5328, size 0xc, virtual false, abstract: false, final false
  inline void set_IsList(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayMetadata();

  // Ctor Parameters [CppParam { name: "element_type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "is_array", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "is_list", ty: "bool", modifiers: "", def_value: None }]
  constexpr ArrayMetadata(::System::Type* element_type, bool is_array, bool is_list) noexcept;

  /// @brief Field element_type, offset: 0x0, size: 0x8, def value: None
  ::System::Type* element_type;

  /// @brief Field is_array, offset: 0x8, size: 0x1, def value: None
  bool is_array;

  /// @brief Field is_list, offset: 0x9, size: 0x1, def value: None
  bool is_list;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::ArrayMetadata, 0x10>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::ArrayMetadata, element_type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::ArrayMetadata, is_array) == 0x8, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::ArrayMetadata, is_list) == 0x9, "Offset mismatch!");

} // namespace ThirdParty::Json::LitJson
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::ArrayMetadata, "ThirdParty.Json.LitJson", "ArrayMetadata");
