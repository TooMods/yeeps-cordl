#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IDeserializable)
namespace Unity::Services::Vivox::Mint::Http {
class DeserializationSettings;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Http {
class IDeserializable;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::IDeserializable);
// Type: Unity.Services.Vivox.Mint.Http::IDeserializable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Http::IDeserializable*
class CORDL_TYPE IDeserializable {
public:
  // Declarations
  /// @brief Method GetAs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline T GetAs(::Unity::Services::Vivox::Mint::Http::DeserializationSettings* deserializationSettings);

  /// @brief Method GetAsString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetAsString();

  // Ctor Parameters [CppParam { name: "", ty: "IDeserializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDeserializable(IDeserializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDeserializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDeserializable(IDeserializable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Mint::Http
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::IDeserializable);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::IDeserializable*, "Unity.Services.Vivox.Mint.Http", "IDeserializable");
