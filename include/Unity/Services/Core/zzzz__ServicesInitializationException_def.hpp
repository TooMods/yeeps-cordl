#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ServicesInitializationException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Unity::Services::Core {
class ServicesInitializationException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::ServicesInitializationException);
// Type: Unity.Services.Core::ServicesInitializationException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core {
// Is value type: false
// CS Name: ::Unity.Services.Core::ServicesInitializationException*
class CORDL_TYPE ServicesInitializationException : public ::System::Exception {
public:
  // Declarations
  static inline ::Unity::Services::Core::ServicesInitializationException* New_ctor();

  static inline ::Unity::Services::Core::ServicesInitializationException* New_ctor(::StringW message);

  static inline ::Unity::Services::Core::ServicesInitializationException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x23ba504, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23ba55c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x23ba5c4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServicesInitializationException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServicesInitializationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServicesInitializationException(ServicesInitializationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServicesInitializationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServicesInitializationException(ServicesInitializationException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::ServicesInitializationException, 0x90>, "Size mismatch!");

} // namespace Unity::Services::Core
NEED_NO_BOX(::Unity::Services::Core::ServicesInitializationException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::ServicesInitializationException*, "Unity.Services.Core", "ServicesInitializationException");
