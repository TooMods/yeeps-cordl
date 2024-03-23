#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ObjectMetadata)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System {
class Type;
}
namespace ThirdParty::Json::LitJson {
struct PropertyMetadata;
}
// Forward declare root types
namespace ThirdParty::Json::LitJson {
struct ObjectMetadata;
}
// Write type traits
MARK_VAL_T(::ThirdParty::Json::LitJson::ObjectMetadata);
// Type: ThirdParty.Json.LitJson::ObjectMetadata
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: true
// CS Name: ::ThirdParty.Json.LitJson::ObjectMetadata
struct CORDL_TYPE ObjectMetadata {
public:
  // Declarations
  __declspec(property(get = get_ElementType, put = set_ElementType))::System::Type* ElementType;

  __declspec(property(get = get_IsDictionary, put = set_IsDictionary)) bool IsDictionary;

  __declspec(property(get = get_Properties, put = set_Properties))::System::Collections::Generic::IDictionary_2<::StringW, ::ThirdParty::Json::LitJson::PropertyMetadata>* Properties;

  /// @brief Method get_ElementType, addr 0x14a5334, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Type* get_ElementType();

  /// @brief Method get_IsDictionary, addr 0x14a53e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDictionary();

  /// @brief Method get_Properties, addr 0x14a53f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::ThirdParty::Json::LitJson::PropertyMetadata>* get_Properties();

  /// @brief Method set_ElementType, addr 0x14a53dc, size 0x8, virtual false, abstract: false, final false
  inline void set_ElementType(::System::Type* value);

  /// @brief Method set_IsDictionary, addr 0x14a53ec, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDictionary(bool value);

  /// @brief Method set_Properties, addr 0x14a5400, size 0x8, virtual false, abstract: false, final false
  inline void set_Properties(::System::Collections::Generic::IDictionary_2<::StringW, ::ThirdParty::Json::LitJson::PropertyMetadata>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectMetadata();

  // Ctor Parameters [CppParam { name: "element_type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "is_dictionary", ty: "bool", modifiers: "", def_value: None }, CppParam
  // { name: "properties", ty: "::System::Collections::Generic::IDictionary_2<::StringW,::ThirdParty::Json::LitJson::PropertyMetadata>*", modifiers: "", def_value: None }]
  constexpr ObjectMetadata(::System::Type* element_type, bool is_dictionary,
                           ::System::Collections::Generic::IDictionary_2<::StringW, ::ThirdParty::Json::LitJson::PropertyMetadata>* properties) noexcept;

  /// @brief Field element_type, offset: 0x0, size: 0x8, def value: None
  ::System::Type* element_type;

  /// @brief Field is_dictionary, offset: 0x8, size: 0x1, def value: None
  bool is_dictionary;

  /// @brief Field properties, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::ThirdParty::Json::LitJson::PropertyMetadata>* properties;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::ObjectMetadata, 0x18>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::ObjectMetadata, element_type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::ObjectMetadata, is_dictionary) == 0x8, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::ObjectMetadata, properties) == 0x10, "Offset mismatch!");

} // namespace ThirdParty::Json::LitJson
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::ObjectMetadata, "ThirdParty.Json.LitJson", "ObjectMetadata");
