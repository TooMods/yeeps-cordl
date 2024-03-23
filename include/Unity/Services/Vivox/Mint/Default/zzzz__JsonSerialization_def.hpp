#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerialization)
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Default {
class JsonSerialization;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Default::JsonSerialization);
// Type: Unity.Services.Vivox.Mint.Default::JsonSerialization
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Default {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Default::JsonSerialization*
class CORDL_TYPE JsonSerialization : public ::System::Object {
public:
  // Declarations
  /// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Serialize(T obj);

  /// @brief Method SerializeToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW SerializeToString(T obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerialization();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSerialization", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSerialization(JsonSerialization&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerialization", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSerialization(JsonSerialization const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Default::JsonSerialization, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox::Mint::Default
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Default::JsonSerialization);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Default::JsonSerialization*, "Unity.Services.Vivox.Mint.Default", "JsonSerialization");
