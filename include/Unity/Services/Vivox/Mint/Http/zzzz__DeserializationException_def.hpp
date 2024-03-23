#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DeserializationException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Http {
class DeserializationException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::DeserializationException);
// Type: Unity.Services.Vivox.Mint.Http::DeserializationException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Http::DeserializationException*
class CORDL_TYPE DeserializationException : public ::System::Exception {
public:
  // Declarations
  static inline ::Unity::Services::Vivox::Mint::Http::DeserializationException* New_ctor();

  static inline ::Unity::Services::Vivox::Mint::Http::DeserializationException* New_ctor(::StringW message);

  static inline ::Unity::Services::Vivox::Mint::Http::DeserializationException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x1701a7c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1701ad4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x1701b3c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeserializationException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeserializationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeserializationException(DeserializationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeserializationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeserializationException(DeserializationException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::DeserializationException, 0x90>, "Size mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::DeserializationException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::DeserializationException*, "Unity.Services.Vivox.Mint.Http", "DeserializationException");
