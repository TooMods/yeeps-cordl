#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PropertyMetadata)
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ThirdParty::Json::LitJson {
struct PropertyMetadata;
}
// Write type traits
MARK_VAL_T(::ThirdParty::Json::LitJson::PropertyMetadata);
// Type: ThirdParty.Json.LitJson::PropertyMetadata
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: true
// CS Name: ::ThirdParty.Json.LitJson::PropertyMetadata
struct CORDL_TYPE PropertyMetadata {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyMetadata();

  // Ctor Parameters [CppParam { name: "Info", ty: "::System::Reflection::MemberInfo*", modifiers: "", def_value: None }, CppParam { name: "IsField", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "Type", ty: "::System::Type*", modifiers: "", def_value: None }]
  constexpr PropertyMetadata(::System::Reflection::MemberInfo* Info, bool IsField, ::System::Type* Type) noexcept;

  /// @brief Field Info, offset: 0x0, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* Info;

  /// @brief Field IsField, offset: 0x8, size: 0x1, def value: None
  bool IsField;

  /// @brief Field Type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* Type;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::PropertyMetadata, 0x18>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::PropertyMetadata, Info) == 0x0, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::PropertyMetadata, IsField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::PropertyMetadata, Type) == 0x10, "Offset mismatch!");

} // namespace ThirdParty::Json::LitJson
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::PropertyMetadata, "ThirdParty.Json.LitJson", "PropertyMetadata");
