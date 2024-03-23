#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/zzzz__ServicesInitializationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CircularDependencyException)
// Forward declare root types
namespace Unity::Services::Core::Internal {
class CircularDependencyException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::CircularDependencyException);
// Type: Unity.Services.Core.Internal::CircularDependencyException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::CircularDependencyException*
class CORDL_TYPE CircularDependencyException : public ::Unity::Services::Core::ServicesInitializationException {
public:
  // Declarations
  static inline ::Unity::Services::Core::Internal::CircularDependencyException* New_ctor();

  static inline ::Unity::Services::Core::Internal::CircularDependencyException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x266b09c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x266b0a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CircularDependencyException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CircularDependencyException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CircularDependencyException(CircularDependencyException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CircularDependencyException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CircularDependencyException(CircularDependencyException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::CircularDependencyException, 0x90>, "Size mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::CircularDependencyException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::CircularDependencyException*, "Unity.Services.Core.Internal", "CircularDependencyException");
