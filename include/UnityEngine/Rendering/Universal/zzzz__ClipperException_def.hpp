#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ClipperException)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ClipperException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ClipperException);
// Type: UnityEngine.Rendering.Universal::ClipperException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ClipperException*
class CORDL_TYPE ClipperException : public ::System::Exception {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::ClipperException* New_ctor(::StringW description);

  /// @brief Method .ctor, addr 0x2f32930, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW description);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClipperException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClipperException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClipperException(ClipperException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClipperException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClipperException(ClipperException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ClipperException, 0x90>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ClipperException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ClipperException*, "UnityEngine.Rendering.Universal", "ClipperException");
