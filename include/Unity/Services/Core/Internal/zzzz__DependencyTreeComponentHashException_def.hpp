#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/Internal/zzzz__HashException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DependencyTreeComponentHashException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class DependencyTreeComponentHashException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::DependencyTreeComponentHashException);
// Type: Unity.Services.Core.Internal::DependencyTreeComponentHashException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::DependencyTreeComponentHashException*
class CORDL_TYPE DependencyTreeComponentHashException : public ::Unity::Services::Core::Internal::HashException {
public:
  // Declarations
  static inline ::Unity::Services::Core::Internal::DependencyTreeComponentHashException* New_ctor(int32_t hash);

  static inline ::Unity::Services::Core::Internal::DependencyTreeComponentHashException* New_ctor(int32_t hash, ::StringW message);

  static inline ::Unity::Services::Core::Internal::DependencyTreeComponentHashException* New_ctor(int32_t hash, ::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x266ed74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(int32_t hash);

  /// @brief Method .ctor, addr 0x266ec04, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(int32_t hash, ::StringW message);

  /// @brief Method .ctor, addr 0x266ed78, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(int32_t hash, ::StringW message, ::System::Exception* inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DependencyTreeComponentHashException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DependencyTreeComponentHashException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DependencyTreeComponentHashException(DependencyTreeComponentHashException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DependencyTreeComponentHashException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DependencyTreeComponentHashException(DependencyTreeComponentHashException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::DependencyTreeComponentHashException, 0x90>, "Size mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::DependencyTreeComponentHashException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::DependencyTreeComponentHashException*, "Unity.Services.Core.Internal", "DependencyTreeComponentHashException");
