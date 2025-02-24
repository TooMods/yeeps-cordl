#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IOneOf)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Models {
class IOneOf;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Models::IOneOf);
// Type: Unity.Services.Vivox.Mint.Models::IOneOf
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Models {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Models::IOneOf*
class CORDL_TYPE IOneOf {
public:
  // Declarations
  __declspec(property(get = get_Type))::System::Type* Type;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Method get_Type, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_Type();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_Value();

  // Ctor Parameters [CppParam { name: "", ty: "IOneOf", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IOneOf(IOneOf&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IOneOf", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOneOf(IOneOf const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Mint::Models
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Models::IOneOf);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Models::IOneOf*, "Unity.Services.Vivox.Mint.Models", "IOneOf");
